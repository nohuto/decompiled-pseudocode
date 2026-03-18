/*
 * XREFs of itrp_JMPR @ 0x1C02CA2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JMPR(__int64 a1)
{
  unsigned __int64 v1; // rcx

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || !((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  qword_1C0327168 -= 4LL;
  v1 = *(_DWORD *)qword_1C0327168 - 1 + a1;
  if ( !--dword_1C03271E8 )
  {
    dword_1C03271D0 = 4359;
    return qword_1C03271D8;
  }
  if ( v1 < qword_1C03271E0 )
  {
    dword_1C03271D0 = 4363;
    return qword_1C03271D8;
  }
  if ( v1 > qword_1C03271D8 )
    return qword_1C03271D8;
  return v1;
}
