/*
 * XREFs of UIntMult @ 0x1C01A9228
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0131160 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C025C294 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntMult(UINT uMultiplicand, UINT uMultiplier, UINT *puResult)
{
  unsigned __int64 v3; // r9

  v3 = uMultiplier * (unsigned __int64)uMultiplicand;
  if ( v3 > 0xFFFFFFFF )
  {
    *puResult = -1;
    return -2147024362;
  }
  else
  {
    *puResult = v3;
    return 0;
  }
}
