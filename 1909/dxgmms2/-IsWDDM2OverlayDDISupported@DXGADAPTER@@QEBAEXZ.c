/*
 * XREFs of ?IsWDDM2OverlayDDISupported@DXGADAPTER@@QEBAEXZ @ 0x1C002A198
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CD30 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsWDDM2OverlayDDISupported(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 2468) )
    return *((_QWORD *)this + 108) != 0LL;
  return result;
}
