/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001CE84
 * Callers:
 *     GreSetBitmapOwner @ 0x1C001DC00 (GreSetBitmapOwner.c)
 *     GreSetBitmapOwnerEx @ 0x1C003DB54 (GreSetBitmapOwnerEx.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     GreMakeBitmapNonStock @ 0x1C00CB510 (GreMakeBitmapNonStock.c)
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
