/*
 * XREFs of EditionWakeThreadForInput @ 0x1C0019AA0
 * Callers:
 *     <none>
 * Callees:
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 */

__int64 __fastcall EditionWakeThreadForInput(__int64 a1, unsigned int a2)
{
  return WakeSomeone(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 16LL) + 424LL), 0LL, a2, 0LL);
}
