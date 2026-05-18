/*
 * XREFs of sub_1800B1B9C @ 0x1800B1B9C
 * Callers:
 *     sub_1800AE978 @ 0x1800AE978 (sub_1800AE978.c)
 * Callees:
 *     sub_1800B18D0 @ 0x1800B18D0 (sub_1800B18D0.c)
 *     sub_1800B1C10 @ 0x1800B1C10 (sub_1800B1C10.c)
 *     sub_1800B1E70 @ 0x1800B1E70 (sub_1800B1E70.c)
 *     sub_1800B2074 @ 0x1800B2074 (sub_1800B2074.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 */

_OWORD *__fastcall sub_1800B1B9C(__int64 a1)
{
  char v2; // bp
  char v3; // si
  _OWORD *result; // rax
  char v5; // di

  v2 = sub_1800B214C();
  v3 = sub_1800B1E70(a1);
  result = (_OWORD *)sub_1800B1C10(a1);
  v5 = (char)result;
  if ( v3 || (_BYTE)result )
    result = (_OWORD *)sub_1800B2074(a1);
  if ( v2 || v3 || v5 )
    return sub_1800B18D0(a1);
  return result;
}
