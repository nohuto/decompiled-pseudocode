/*
 * XREFs of UEmScaleY @ 0x1C02B8B04
 * Callers:
 *     SEmScaleY @ 0x1C02B8354 (SEmScaleY.c)
 *     SubstituteVertMetrics @ 0x1C02B8AA0 (SubstituteVertMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UEmScaleY(_WORD *a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // ax

  if ( a1[14] == 3 )
    v2 = a1[18];
  else
    v2 = a1[16];
  return ((unsigned __int16)a1[46] + a2 * 2 * (unsigned int)v2) / (2 * (unsigned int)(unsigned __int16)a1[46]);
}
