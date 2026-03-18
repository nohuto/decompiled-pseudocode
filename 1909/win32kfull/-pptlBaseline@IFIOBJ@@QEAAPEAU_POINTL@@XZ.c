/*
 * XREFs of ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C0098990
 * Callers:
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C00928B8 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00986BC (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C009DFA0 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C01450E8 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _POINTL *__fastcall IFIOBJ::pptlBaseline(IFIOBJ *this)
{
  struct _POINTL *result; // rax
  __int64 v2; // r8

  result = (struct _POINTL *)((char *)this + 8);
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  *((_QWORD *)this + 1) = v2;
  if ( !(_DWORD)v2 && !*((_DWORD *)this + 3) )
    result->x = 1;
  return result;
}
