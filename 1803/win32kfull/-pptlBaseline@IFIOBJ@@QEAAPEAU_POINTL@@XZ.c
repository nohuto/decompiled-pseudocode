/*
 * XREFs of ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C00CFD4C
 * Callers:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0087520 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C00CF5DC (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00EBFDC (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C0119570 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
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
