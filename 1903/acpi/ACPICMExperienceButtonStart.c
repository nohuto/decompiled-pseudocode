/*
 * XREFs of ACPICMExperienceButtonStart @ 0x1C00ADC80
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1C00A310C (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMExperienceButtonStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, 0);
}
