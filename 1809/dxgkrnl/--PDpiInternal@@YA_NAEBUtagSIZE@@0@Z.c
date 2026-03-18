/*
 * XREFs of ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C0018EE0
 * Callers:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00027A8 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0018E14 (-CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0040C48 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiInternal::operator>=(_DWORD *a1, _DWORD *a2)
{
  return *a1 >= *a2 && a1[1] >= a2[1];
}
