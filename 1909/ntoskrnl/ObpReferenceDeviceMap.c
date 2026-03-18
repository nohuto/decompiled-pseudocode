/*
 * XREFs of ObpReferenceDeviceMap @ 0x1405D10D0
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x1405D1260 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405DE460 (PsReferenceImpersonationTokenEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C344C (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406C3558 (SeGetTokenDeviceMap.c)
 */

__int64 __fastcall ObpReferenceDeviceMap(char a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rbx
  void *v4; // r15
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rdi
  __int64 *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *v8; // rax
  ULONG_PTR v9; // rdi
  __int64 v11; // rax
  bool v12; // bp
  _QWORD v13[9]; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+88h] [rbp+10h] BYREF
  char v15; // [rsp+90h] [rbp+18h] BYREF
  char v16; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v12 = ProcessServerSilo != PsGetCurrentServerSilo();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( !v12 )
      goto LABEL_3;
  }
  else if ( !v12 )
  {
    v11 = PsReferenceImpersonationTokenEx(
            (_DWORD)CurrentThread,
            1,
            (unsigned int)&v15,
            (unsigned int)&v14,
            (__int64)&v16,
            0LL);
    v4 = (void *)v11;
    if ( !v11 )
      goto LABEL_3;
    if ( *(_QWORD *)(v11 + 24) != 999LL )
    {
      if ( (int)SeGetTokenDeviceMap(v11, v13) >= 0 )
      {
        v3 = v13[0];
        if ( v13[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13[0] + 24LL));
          goto LABEL_9;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_9;
      goto LABEL_4;
    }
    v12 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  v9 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  if ( v12 )
    v3 = *CurrentServerSiloGlobals;
  else
    v3 = *(_QWORD *)(Process + 1072);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  ExReleasePushLockEx(v9, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_9:
  if ( v4 )
    ObfDereferenceObject(v4);
  return v3;
}
