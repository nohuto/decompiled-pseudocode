/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00163A4
 * Callers:
 *     GreSetBitmapOwnerEx @ 0x1C0015FC0 (GreSetBitmapOwnerEx.c)
 *     GreMakeBitmapNonStock @ 0x1C00501C0 (GreMakeBitmapNonStock.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
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
