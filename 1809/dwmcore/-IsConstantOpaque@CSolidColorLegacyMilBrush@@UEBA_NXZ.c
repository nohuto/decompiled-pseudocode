/*
 * XREFs of ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x180070190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorLegacyMilBrush::IsConstantOpaque(CSolidColorLegacyMilBrush *this)
{
  return !*((_QWORD *)this + 8) && *((double *)this + 7) == 1.0 && *((float *)this + 25) == 1.0;
}
