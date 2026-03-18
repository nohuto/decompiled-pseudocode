/*
 * XREFs of ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C008AC68
 * Callers:
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0040BA0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0085350 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00EBFDC (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall DC::bUseMetaPtoD(DC *this)
{
  int IsZero; // eax
  __int64 v2; // r8
  unsigned int v3; // edx

  IsZero = EFLOAT::bIsZero((DC *)((char *)this + 460));
  v3 = 0;
  if ( !IsZero )
    return (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v2 + 464)) == 0;
  return v3;
}
