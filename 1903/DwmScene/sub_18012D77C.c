/*
 * XREFs of sub_18012D77C @ 0x18012D77C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_18012D77C(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::wios::setstate(*(_QWORD *)(a2 + 112) + *(int *)(**(_QWORD **)(a2 + 112) + 4LL), 4LL, a3);
  return &loc_180072785;
}
