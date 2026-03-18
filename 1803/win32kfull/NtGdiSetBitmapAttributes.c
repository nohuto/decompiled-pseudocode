/*
 * XREFs of NtGdiSetBitmapAttributes @ 0x1C00AD050
 * Callers:
 *     <none>
 * Callees:
 *     GreMakeBitmapStock @ 0x1C00ACF2C (GreMakeBitmapStock.c)
 */

__int64 __fastcall NtGdiSetBitmapAttributes(__int64 a1, __int64 a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapStock(a1, a2);
  else
    return 0LL;
}
