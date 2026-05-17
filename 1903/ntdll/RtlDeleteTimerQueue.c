/*
 * XREFs of RtlDeleteTimerQueue @ 0x18010FAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDeleteTimerQueue(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlDeleteTimerQueueEx(a1, 0LL, a3);
}
