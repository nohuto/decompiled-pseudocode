/*
 * XREFs of ?GetCurrentHardwareProtection@CDrawingContext@@UEBA_NXZ @ 0x1800DA070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::GetCurrentHardwareProtection(CDrawingContext *this)
{
  return *((_BYTE *)this + 400);
}
