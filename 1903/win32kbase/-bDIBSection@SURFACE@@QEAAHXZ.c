/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C002CF00
 * Callers:
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C002CE88 (GreSetBitmapOwnerEx.c)
 *     GreMakeBitmapNonStock @ 0x1C00833B0 (GreMakeBitmapNonStock.c)
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
