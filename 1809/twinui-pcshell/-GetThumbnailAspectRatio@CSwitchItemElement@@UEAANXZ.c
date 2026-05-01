/*
 * XREFs of ?GetThumbnailAspectRatio@CSwitchItemElement@@UEAANXZ @ 0x1802F7040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall CSwitchItemElement::GetThumbnailAspectRatio(CSwitchItemElement *this)
{
  return fmin(
           (double)*((int *)this + 16) / (double)*((int *)this + 17) * *((double *)this + 6),
           (double)*((int *)this + 14) / (double)*((int *)this + 15));
}
