/*
 * XREFs of sub_1800D33D4 @ 0x1800D33D4
 * Callers:
 *     sub_1800D3338 @ 0x1800D3338 (sub_1800D3338.c)
 *     sub_1800D33D4 @ 0x1800D33D4 (sub_1800D33D4.c)
 * Callees:
 *     sub_1800D3200 @ 0x1800D3200 (sub_1800D3200.c)
 *     sub_1800D33D4 @ 0x1800D33D4 (sub_1800D33D4.c)
 */

_QWORD *__fastcall sub_1800D33D4(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9

  v8 = (_QWORD *)*a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_1800D3200(a1, a2 + 32);
    v9[1] = a3;
    *((_BYTE *)v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *((_BYTE *)v8 + 25) )
      v8 = v9;
    LOBYTE(v10) = a4;
    try
    {
      *v9 = sub_1800D33D4(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      v9[2] = sub_1800D33D4(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      sub_18007E338((__int64)a1, v8);
      throw;
    }
  }
  return v8;
}
