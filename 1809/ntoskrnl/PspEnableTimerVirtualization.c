/*
 * XREFs of PspEnableTimerVirtualization @ 0x1406D5330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableTimerVirtualization(__int64 a1)
{
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 0x12u);
  return 0LL;
}
