/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00F89A8
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C005F070 (GreSetDIBitsToDeviceInternal.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C00F87F4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     _lambda_1cf76e2996e024a73989971e750c3c23_::operator() @ 0x1C00F88FC (_lambda_1cf76e2996e024a73989971e750c3c23_--operator().c)
 *     _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C00F8928 (_lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_--operator().c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C01478B4 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0270F14 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     GreScaleRgn @ 0x1C02992D4 (GreScaleRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaleTransform(DC *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 130);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 2) != 0 )
    return 0LL;
  return result;
}
