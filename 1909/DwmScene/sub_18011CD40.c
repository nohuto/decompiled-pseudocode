/*
 * XREFs of sub_18011CD40 @ 0x18011CD40
 * Callers:
 *     sub_18011CCA4 @ 0x18011CCA4 (sub_18011CCA4.c)
 *     sub_18011CD40 @ 0x18011CD40 (sub_18011CD40.c)
 * Callees:
 *     sub_18011CB7C @ 0x18011CB7C (sub_18011CB7C.c)
 *     sub_18011CD40 @ 0x18011CD40 (sub_18011CD40.c)
 */

_QWORD *__fastcall sub_18011CD40(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9

  v8 = (_QWORD *)*a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_18011CB7C(a1, a2 + 32);
    v9[1] = a3;
    *((_BYTE *)v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *((_BYTE *)v8 + 25) )
      v8 = v9;
    LOBYTE(v10) = a4;
    try
    {
      *v9 = sub_18011CD40(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      v9[2] = sub_18011CD40(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      sub_18006E068((__int64)a1, v8);
      throw;
    }
  }
  return v8;
}
