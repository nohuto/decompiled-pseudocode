/*
 * XREFs of ?GetVisualTreeNoRef@CDesktopRenderTarget@@UEAAPEAVCVisualTree@@XZ @ 0x1800DB390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CDesktopRenderTarget::GetVisualTreeNoRef(CDesktopRenderTarget *this)
{
  return (struct CVisualTree *)*((_QWORD *)this - 6);
}
