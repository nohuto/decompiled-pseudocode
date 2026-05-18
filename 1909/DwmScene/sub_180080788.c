/*
 * XREFs of sub_180080788 @ 0x180080788
 * Callers:
 *     sub_1800806EC @ 0x1800806EC (sub_1800806EC.c)
 *     sub_180080788 @ 0x180080788 (sub_180080788.c)
 * Callees:
 *     sub_18006F17C @ 0x18006F17C (sub_18006F17C.c)
 *     sub_180080788 @ 0x180080788 (sub_180080788.c)
 */

__int64 __fastcall sub_180080788(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_18006F17C((__int64)a1, a2 + 32);
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v8 + 25) )
      v8 = v9;
    LOBYTE(v10) = a4;
    try
    {
      *(_QWORD *)v9 = sub_180080788(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      *(_QWORD *)(v9 + 16) = sub_180080788(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      sub_18007E398((__int64)a1, (__int64 *)v8);
      throw;
    }
  }
  return v8;
}
