/*
 * XREFs of SEmScaleY @ 0x1C02B8354
 * Callers:
 *     SubstituteHorMetrics @ 0x1C02B8A0C (SubstituteHorMetrics.c)
 *     SubstituteVertMetrics @ 0x1C02B8AA0 (SubstituteVertMetrics.c)
 * Callees:
 *     UEmScaleY @ 0x1C02B8B04 (UEmScaleY.c)
 */

__int16 __fastcall SEmScaleY(__int64 a1, __int64 a2)
{
  if ( (a2 & 0x8000u) == 0LL )
    return UEmScaleY(a1, a2);
  LOWORD(a2) = -(__int16)a2;
  return -(__int16)UEmScaleY(a1, a2);
}
