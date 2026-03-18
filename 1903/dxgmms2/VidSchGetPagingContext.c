/*
 * XREFs of VidSchGetPagingContext @ 0x1C0032E2C
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B08C4 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetPagingContext(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * a2);
}
