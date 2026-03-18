/*
 * XREFs of ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x1801A8390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopRenderTarget::ForceNewDisplayState(CDesktopRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 208) )
  {
    result = 1;
    *((_BYTE *)this + 208) = 0;
  }
  return result;
}
