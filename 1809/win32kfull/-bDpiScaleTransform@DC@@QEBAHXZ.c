/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011EE18
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C011EC64 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     _lambda_1cf76e2996e024a73989971e750c3c23_::operator() @ 0x1C011ED6C (_lambda_1cf76e2996e024a73989971e750c3c23_--operator().c)
 *     _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C011ED98 (_lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_--operator().c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C013F0F8 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C02575F4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     GreScaleRgn @ 0x1C0282620 (GreScaleRgn.c)
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
