/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C01258C4
 * Callers:
 *     GreMakeBitmapStock @ 0x1C0124370 (GreMakeBitmapStock.c)
 *     GreGetDIBColorTable @ 0x1C0125780 (GreGetDIBColorTable.c)
 *     GreSetDIBColorTable @ 0x1C02AFFB0 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B2E30 (NtGdiGetColorSpaceforBitmap.c)
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
