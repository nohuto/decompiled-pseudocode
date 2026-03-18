/*
 * XREFs of ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C00CFD6C
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C003FCE0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     cjCopyFontDataW @ 0x1C00CD24C (cjCopyFontDataW.c)
 *     vIFIMetricsToLogFontW @ 0x1C0277258 (vIFIMetricsToLogFontW.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IFIOBJ::lfOutPrecision(IFIOBJ *this)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)this + 48LL);
  if ( (v1 & 1) != 0 )
    return 8;
  if ( (v1 & 2) != 0 )
    return 6;
  if ( (v1 & 4) != 0 )
    return 3;
  return v1 & 8;
}
