/*
 * XREFs of sub_180080678 @ 0x180080678
 * Callers:
 *     sub_1800805DC @ 0x1800805DC (sub_1800805DC.c)
 *     sub_180080678 @ 0x180080678 (sub_180080678.c)
 * Callees:
 *     sub_18006F06C @ 0x18006F06C (sub_18006F06C.c)
 *     sub_180080678 @ 0x180080678 (sub_180080678.c)
 */

__int64 __fastcall sub_180080678(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_18006F06C((__int64)a1, a2 + 32);
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v8 + 25) )
      v8 = v9;
    LOBYTE(v10) = a4;
    try
    {
      *(_QWORD *)v9 = sub_180080678(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      *(_QWORD *)(v9 + 16) = sub_180080678(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      sub_18007E288((__int64)a1, (__int64 *)v8);
      throw;
    }
  }
  return v8;
}
