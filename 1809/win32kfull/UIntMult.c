/*
 * XREFs of UIntMult @ 0x1C01C736C
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01553AC (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026FC58 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntMult(UINT uMultiplicand, UINT uMultiplier, UINT *puResult)
{
  unsigned __int64 v3; // r9
  UINT v4; // ecx

  v3 = uMultiplier * (unsigned __int64)uMultiplicand;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = v3;
  *puResult = v4;
  return v3 > 0xFFFFFFFF ? 0x80070216 : 0;
}
