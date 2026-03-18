/*
 * XREFs of fsSelectionFlags @ 0x1C0226690
 * Callers:
 *     vBmfdFill_IFIMETRICS @ 0x1C02268EC (vBmfdFill_IFIMETRICS.c)
 *     cFacesRes @ 0x1C0227894 (cFacesRes.c)
 *     vDefFace @ 0x1C0227EC4 (vDefFace.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0229378 (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall fsSelectionFlags(_BYTE *a1)
{
  __int16 v1; // ax
  __int16 v2; // r8
  __int16 v3; // dx
  bool v4; // zf
  __int16 v5; // cx
  unsigned __int16 v6; // cx
  __int16 result; // ax

  v1 = (unsigned __int8)a1[83];
  v2 = (a1[80] != 0) | 2;
  if ( !a1[81] )
    v2 = a1[80] != 0;
  v3 = v2 | 0x10;
  v4 = a1[82] == 0;
  v5 = (unsigned __int8)a1[84];
  if ( v4 )
    v3 = v2;
  v6 = v1 | (v5 << 8);
  result = v3 | 0x20;
  if ( v6 <= 0x190u )
    return v3;
  return result;
}
