/*
 * XREFs of ??0?$CMergedRectBase@$01@@QEAA@XZ @ 0x180183158
 * Callers:
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180183D9C (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

char *__fastcall CMergedRectBase<2>::CMergedRectBase<2>(char *a1)
{
  char *result; // rax

  `vector constructor iterator'(
    a1,
    16LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  memset_0(a1, 0, 0x2CuLL);
  result = a1;
  *((_DWORD *)a1 + 9) = 1;
  return result;
}
