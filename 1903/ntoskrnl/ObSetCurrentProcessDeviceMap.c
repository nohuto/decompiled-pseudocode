/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x1406C42EC
 * Callers:
 *     ObpReferenceDeviceMap @ 0x1405D0BD0 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x1405D11F0 (ObfDereferenceDeviceMap.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     SeGetTokenDeviceMap @ 0x1406C43F8 (SeGetTokenDeviceMap.c)
 */

__int64 ObSetCurrentProcessDeviceMap()
{
  void *v0; // r14
  unsigned __int64 *CurrentServerSiloGlobals; // rbx
  _KPROCESS *Process; // r15
  PACCESS_TOKEN v3; // rax
  void *v4; // rsi
  int TokenDeviceMap; // edi
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0LL;
  CurrentServerSiloGlobals = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = PsReferencePrimaryToken(Process);
  v4 = v3;
  if ( !v3 )
    return 3221225596LL;
  TokenDeviceMap = 0;
  if ( *((_QWORD *)v3 + 3) == 999LL )
  {
    CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
    v6 = *CurrentServerSiloGlobals;
  }
  else
  {
    TokenDeviceMap = SeGetTokenDeviceMap(v3, &v9);
    if ( TokenDeviceMap < 0 )
      goto LABEL_14;
    v6 = v9;
  }
  if ( v6 )
  {
    if ( !CurrentServerSiloGlobals )
      CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
    v0 = (void *)Process[1].ActiveProcessors.Bitmap[7];
    Process[1].ActiveProcessors.Bitmap[7] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
    ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_9;
  }
LABEL_14:
  TokenDeviceMap = -1073741767;
LABEL_9:
  ObfDereferenceObject(v4);
  if ( v0 )
    ObfDereferenceDeviceMap(v0);
  return (unsigned int)TokenDeviceMap;
}
