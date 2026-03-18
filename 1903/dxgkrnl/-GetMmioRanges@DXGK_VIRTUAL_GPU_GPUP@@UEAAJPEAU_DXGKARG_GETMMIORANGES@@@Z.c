/*
 * XREFs of ?GetMmioRanges@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1C0216B10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetMmioRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1C0211A68 (-DdiGetMmioRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetMmioRanges(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETMMIORANGES *a2,
        const GUID *a3)
{
  return ADAPTER_RENDER::DdiGetMmioRanges(this[1], a2, a3);
}
