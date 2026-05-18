/*
 * XREFs of sub_18011CC30 @ 0x18011CC30
 * Callers:
 *     sub_18011CB94 @ 0x18011CB94 (sub_18011CB94.c)
 *     sub_18011CC30 @ 0x18011CC30 (sub_18011CC30.c)
 * Callees:
 *     sub_18011CA6C @ 0x18011CA6C (sub_18011CA6C.c)
 *     sub_18011CC30 @ 0x18011CC30 (sub_18011CC30.c)
 */

_QWORD *__fastcall sub_18011CC30(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9

  v8 = (_QWORD *)*a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_18011CA6C(a1, a2 + 32);
    v9[1] = a3;
    *((_BYTE *)v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *((_BYTE *)v8 + 25) )
      v8 = v9;
    LOBYTE(v10) = a4;
    try
    {
      *v9 = sub_18011CC30(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      v9[2] = sub_18011CC30(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      sub_18006DF58((__int64)a1, v8);
      throw;
    }
  }
  return v8;
}
