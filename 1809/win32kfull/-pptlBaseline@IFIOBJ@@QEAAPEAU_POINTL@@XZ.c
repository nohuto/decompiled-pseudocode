/*
 * XREFs of ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C008639C
 * Callers:
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C0024A80 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0085324 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00860C8 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C0144220 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _POINTL *__fastcall IFIOBJ::pptlBaseline(IFIOBJ *this)
{
  _QWORD *v1; // rdx
  __int64 v2; // rcx

  v1 = (_QWORD *)((char *)this + 8);
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  *v1 = v2;
  if ( !v2 )
    *(_DWORD *)v1 = 1;
  return (struct _POINTL *)v1;
}
