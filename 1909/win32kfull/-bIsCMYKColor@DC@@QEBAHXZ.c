/*
 * XREFs of ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C01288CC
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00BCB48 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiGetPixel @ 0x1C0128580 (NtGdiGetPixel.c)
 *     NtGdiSetPixel @ 0x1C0147670 (NtGdiSetPixel.c)
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bIsCMYKColor(DC *this)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *((_DWORD *)this + 30);
  v2 = 1;
  if ( (v1 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)this + 122) + 248LL) || (v1 & 0x10000000) == 0 )
    return 0;
  return v2;
}
