/*
 * XREFs of ?IsValid@CVisualCapture@@UEBA_NXZ @ 0x180020510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisualCapture::IsValid(CVisualCapture *this)
{
  return *((_BYTE *)this + 385) == 0;
}
