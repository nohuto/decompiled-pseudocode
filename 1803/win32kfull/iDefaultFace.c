/*
 * XREFs of iDefaultFace @ 0x1C0229344
 * Callers:
 *     bVtfdLoadFont @ 0x1C0228FC0 (bVtfdLoadFont.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0229378 (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iDefaultFace(__int64 a1)
{
  char v1; // r8

  v1 = *(_BYTE *)(a1 + 80);
  if ( *(unsigned __int16 *)(a1 + 83) > 0x190u )
    return v1 != 0 ? 3 : 1;
  else
    return v1 != 0 ? 2 : 0;
}
