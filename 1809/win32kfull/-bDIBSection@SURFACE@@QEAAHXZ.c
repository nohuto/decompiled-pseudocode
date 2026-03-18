/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C009B96C
 * Callers:
 *     GreMakeBitmapStock @ 0x1C00995F0 (GreMakeBitmapStock.c)
 *     GreGetDIBColorTable @ 0x1C009B840 (GreGetDIBColorTable.c)
 *     GreSetDIBColorTable @ 0x1C029B5C0 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C029CA00 (NtGdiGetColorSpaceforBitmap.c)
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
