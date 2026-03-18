/*
 * XREFs of ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C004E9F8
 * Callers:
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C0047B8C (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     cjCopyFontDataW @ 0x1C004DFF0 (cjCopyFontDataW.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C006892C (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00E7294 (vIFIMetricsToEnumLogFontExDvW.c)
 * Callees:
 *     <none>
 */

char __fastcall IsVariableFont(struct _IFIMETRICS *a1)
{
  __int64 dpwszStyleName; // rdx
  char result; // al
  int v3; // ecx

  if ( (a1->flInfo & 0x4000001) == 0 )
    return 0;
  if ( a1->cjIfiExtra <= 0xC )
    return 0;
  dpwszStyleName = (unsigned int)a1[1].dpwszStyleName;
  result = 0;
  if ( !(_DWORD)dpwszStyleName )
    return 0;
  if ( *(ULONG *)((char *)&a1->cjIfiExtra + dpwszStyleName) )
  {
    v3 = *(ULONG *)((char *)&a1->cjThis + dpwszStyleName);
    if ( v3 == 134248052 || v3 == 134248035 )
      return 1;
  }
  return result;
}
