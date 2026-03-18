/*
 * XREFs of MiProcessWsInSwapRanges @ 0x1400F4750
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x1400F468C (MiProcessWsInSwapSupport.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleaseOutSwapReservations @ 0x1400F47D4 (MiReleaseOutSwapReservations.c)
 *     MmPrefetchVirtualMemory @ 0x1406A58F8 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // esi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  result = MmPrefetchVirtualMemory(-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( v6 )
    result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (a3 & 1) == 0 )
    return MiReleaseOutSwapReservations(a1, a2);
  return result;
}
