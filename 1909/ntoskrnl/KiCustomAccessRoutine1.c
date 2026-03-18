/*
 * XREFs of KiCustomAccessRoutine1 @ 0x1401CE770
 * Callers:
 *     IopTimerDispatch @ 0x140293B70 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x1401CE750 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
