/*
 * XREFs of sub_180128D67 @ 0x180128D67
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_180128D67(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::ios::setstate(*(_QWORD *)(a2 + 96) + *(int *)(**(_QWORD **)(a2 + 96) + 4LL), 4LL, a3);
  return &loc_18002D5E7;
}
