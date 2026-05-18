/*
 * XREFs of sub_180065D28 @ 0x180065D28
 * Callers:
 *     sub_180065C8C @ 0x180065C8C (sub_180065C8C.c)
 *     sub_180065D28 @ 0x180065D28 (sub_180065D28.c)
 * Callees:
 *     sub_180065BB8 @ 0x180065BB8 (sub_180065BB8.c)
 *     sub_180065D28 @ 0x180065D28 (sub_180065D28.c)
 */

__int64 __fastcall sub_180065D28(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_180065BB8((__int64)a1, a2 + 32);
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v8 + 25) )
      v8 = v9;
    LOBYTE(v10) = a4;
    try
    {
      *(_QWORD *)v9 = sub_180065D28(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      *(_QWORD *)(v9 + 16) = sub_180065D28(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      sub_1800697E8(a1, v8);
      throw;
    }
  }
  return v8;
}
