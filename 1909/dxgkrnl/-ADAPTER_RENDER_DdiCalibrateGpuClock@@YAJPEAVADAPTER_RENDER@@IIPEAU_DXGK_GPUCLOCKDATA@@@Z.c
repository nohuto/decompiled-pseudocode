/*
 * XREFs of ?ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C003DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0037558 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCalibrateGpuClock(
        struct ADAPTER_RENDER *a1,
        __int64 a2,
        const GUID *a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  return ADAPTER_RENDER::DdiCalibrateGpuClock(a1, a2, a3, a4);
}
