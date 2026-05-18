/*
 * XREFs of sub_18012D1C4 @ 0x18012D1C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_18012D1C4(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::wios::setstate(*(_QWORD *)(a2 + 144) + *(int *)(**(_QWORD **)(a2 + 144) + 4LL), 4LL, a3);
  return &loc_18006E8BF;
}
