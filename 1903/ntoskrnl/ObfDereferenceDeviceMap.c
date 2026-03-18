/*
 * XREFs of ObfDereferenceDeviceMap @ 0x1405D11F0
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x1405D0D60 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x140671E58 (ObDereferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C42EC (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406C43F8 (SeGetTokenDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1406D75FC (SepDeReferenceLogonSession.c)
 *     ObpSetDeviceMap @ 0x1406EA410 (ObpSetDeviceMap.c)
 *     SepDeleteLogonSessionTrack @ 0x140729F9C (SepDeleteLogonSessionTrack.c)
 *     PspDeleteServerSiloGlobals @ 0x1408C551C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
