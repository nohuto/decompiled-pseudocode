/*
 * XREFs of ObfDereferenceDeviceMap @ 0x1406719E0
 * Callers:
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x140608F0C (ObDereferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x140671560 (ObQueryDeviceMapInformation.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A2CC4 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406A2DDC (SeGetTokenDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1406B3600 (SepDeReferenceLogonSession.c)
 *     ObpSetDeviceMap @ 0x1406C699C (ObpSetDeviceMap.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71F8 (SepDeleteLogonSessionTrack.c)
 *     PspDeleteServerSiloGlobals @ 0x140887198 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall ObfDereferenceDeviceMap(PVOID P)
{
  signed __int32 v1; // ebx
  bool v3; // zf
  signed __int32 v4; // eax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v7; // rsi
  void *v8; // rcx

  v1 = *((_DWORD *)P + 6);
  if ( v1 != 1 )
  {
    do
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)P + 6, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_3;
    }
    while ( v4 != 1 );
  }
  ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)P + 8));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (ULONG_PTR)ServerSiloGlobals + 120;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
  if ( v1 != 1 )
  {
    ExReleasePushLockEx(v7, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_3:
    if ( v1 <= 0 )
      __fastfail(0xEu);
    return;
  }
  *(_QWORD *)(*(_QWORD *)P + 304LL) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v8 = (void *)*((_QWORD *)P + 8);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x6D44624Fu);
  ZwClose(*((HANDLE *)P + 2));
  ObfDereferenceObject(*(PVOID *)P);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
