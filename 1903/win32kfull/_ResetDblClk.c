/*
 * XREFs of _ResetDblClk @ 0x1C0141F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ResetDblClk()
{
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 168LL) = 0;
  return 1LL;
}
