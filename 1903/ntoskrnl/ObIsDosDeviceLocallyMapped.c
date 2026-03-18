/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x140785110
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  __int64 v2; // rsi
  _DWORD *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *v6; // rdi

  v2 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v2 > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 30), 0LL);
  *a2 = v6[v2 + 3] != 0;
  ExReleasePushLockEx((ULONG_PTR)(v6 + 30), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
