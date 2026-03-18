/*
 * XREFs of _ResetDblClk @ 0x1C01147E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ResetDblClk()
{
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 160LL) = 0;
  return 1LL;
}
