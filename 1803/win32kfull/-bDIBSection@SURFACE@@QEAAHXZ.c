/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00AB5CC
 * Callers:
 *     GreGetDIBColorTable @ 0x1C00ACDC0 (GreGetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x1C00ACF2C (GreMakeBitmapStock.c)
 *     GreSetDIBColorTable @ 0x1C0287920 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C0288DB0 (NtGdiGetColorSpaceforBitmap.c)
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
