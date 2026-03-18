/*
 * XREFs of ?SetSDRBoost@CVisualCapture@@UEAAXM@Z @ 0x1800DBA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisualCapture::SetSDRBoost(CVisualCapture *this, float a2)
{
  *((float *)this + 90) = a2;
}
