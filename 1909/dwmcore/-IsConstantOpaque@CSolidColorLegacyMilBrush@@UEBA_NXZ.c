/*
 * XREFs of ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x1800CA4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorLegacyMilBrush::IsConstantOpaque(CSolidColorLegacyMilBrush *this)
{
  return !*((_QWORD *)this + 8) && *((float *)this + 14) == 1.0 && *((float *)this + 25) == 1.0;
}
