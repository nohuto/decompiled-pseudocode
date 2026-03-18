/*
 * XREFs of EditionWakeThreadForInput @ 0x1C00D3F20
 * Callers:
 *     <none>
 * Callees:
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 */

__int64 __fastcall EditionWakeThreadForInput(__int64 a1, unsigned int a2)
{
  return WakeSomeone(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 16LL) + 432LL), 0LL, a2, 0LL);
}
