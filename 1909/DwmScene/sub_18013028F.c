/*
 * XREFs of sub_18013028F @ 0x18013028F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_18013028F(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::ios::setstate(*(_QWORD *)(a2 + 40) + *(int *)(**(_QWORD **)(a2 + 40) + 4LL), 4LL, a3);
  return &loc_1800B7B68;
}
