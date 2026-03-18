/*
 * XREFs of ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C0098AD0
 * Callers:
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00291D0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00860C8 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0086444 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C009A850 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall DC::bUseMetaPtoD(DC *this)
{
  int IsZero; // eax
  __int64 v2; // r8
  unsigned int v3; // edx

  IsZero = EFLOAT::bIsZero((DC *)((char *)this + 452));
  v3 = 0;
  if ( !IsZero )
    return (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v2 + 456)) == 0;
  return v3;
}
