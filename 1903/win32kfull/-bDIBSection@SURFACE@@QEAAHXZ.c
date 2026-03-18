/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C007F0C4
 * Callers:
 *     GreMakeBitmapStock @ 0x1C007E9C0 (GreMakeBitmapStock.c)
 *     GreGetDIBColorTable @ 0x1C007EF80 (GreGetDIBColorTable.c)
 *     GreSetDIBColorTable @ 0x1C02B0460 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B32E0 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 24) )
      return 1LL;
  }
  return result;
}
