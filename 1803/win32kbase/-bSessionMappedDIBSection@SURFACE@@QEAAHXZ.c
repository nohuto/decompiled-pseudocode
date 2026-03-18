/*
 * XREFs of ?bSessionMappedDIBSection@SURFACE@@QEAAHXZ @ 0x1C001CEA4
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bSessionMappedDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_DWORD *)this + 54) )
      return 1LL;
  }
  return result;
}
