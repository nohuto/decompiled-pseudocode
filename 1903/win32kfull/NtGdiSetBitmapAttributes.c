/*
 * XREFs of NtGdiSetBitmapAttributes @ 0x1C007E9A0
 * Callers:
 *     <none>
 * Callees:
 *     GreMakeBitmapStock @ 0x1C007E9C0 (GreMakeBitmapStock.c)
 */

__int64 __fastcall NtGdiSetBitmapAttributes(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapStock();
  else
    return 0LL;
}
