/*
 * XREFs of ?QueryMitigatedRanges@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C01E7680
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryMitigatedRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C01E374C (-DdiQueryMitigatedRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryMitigatedRanges(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYMITIGATEDRANGES *a2,
        const GUID *a3)
{
  return ADAPTER_RENDER::DdiQueryMitigatedRanges(this[1], a2, a3);
}
