/*
 * XREFs of sub_1800A6828 @ 0x1800A6828
 * Callers:
 *     sub_1800A66F4 @ 0x1800A66F4 (sub_1800A66F4.c)
 *     sub_1800A6828 @ 0x1800A6828 (sub_1800A6828.c)
 * Callees:
 *     sub_1800A654C @ 0x1800A654C (sub_1800A654C.c)
 *     sub_1800A6828 @ 0x1800A6828 (sub_1800A6828.c)
 */

_QWORD *__fastcall sub_1800A6828(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9

  v8 = (_QWORD *)*a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_1800A654C(a1, (_QWORD *)(a2 + 32));
    v9[1] = a3;
    *((_BYTE *)v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *((_BYTE *)v8 + 25) )
      v8 = v9;
    LOBYTE(v10) = a4;
    try
    {
      *v9 = sub_1800A6828(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      v9[2] = sub_1800A6828(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      sub_1800A9F20(a1, v8);
      throw;
    }
  }
  return v8;
}
