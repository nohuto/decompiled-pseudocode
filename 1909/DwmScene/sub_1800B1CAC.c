/*
 * XREFs of sub_1800B1CAC @ 0x1800B1CAC
 * Callers:
 *     sub_1800AEA88 @ 0x1800AEA88 (sub_1800AEA88.c)
 * Callees:
 *     sub_1800B19E0 @ 0x1800B19E0 (sub_1800B19E0.c)
 *     sub_1800B1D20 @ 0x1800B1D20 (sub_1800B1D20.c)
 *     sub_1800B1F80 @ 0x1800B1F80 (sub_1800B1F80.c)
 *     sub_1800B2184 @ 0x1800B2184 (sub_1800B2184.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 */

_OWORD *__fastcall sub_1800B1CAC(__int64 a1)
{
  char v2; // bp
  char v3; // si
  _OWORD *result; // rax
  char v5; // di

  v2 = sub_1800B225C();
  v3 = sub_1800B1F80(a1);
  result = (_OWORD *)sub_1800B1D20(a1);
  v5 = (char)result;
  if ( v3 || (_BYTE)result )
    result = (_OWORD *)sub_1800B2184(a1);
  if ( v2 || v3 || v5 )
    return sub_1800B19E0(a1);
  return result;
}
