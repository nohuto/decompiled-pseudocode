/*
 * XREFs of ?IsValid@CVisualCapture@@UEBA_NXZ @ 0x1801FDB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisualCapture::IsValid(CVisualCapture *this)
{
  return *((_BYTE *)this + 377) == 0;
}
