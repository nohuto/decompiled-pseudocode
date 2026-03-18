/*
 * XREFs of ?SetSDRBoost@CVisualCapture@@UEAAXM@Z @ 0x1800DADC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisualCapture::SetSDRBoost(CVisualCapture *this, float a2)
{
  *((float *)this + 90) = a2;
}
