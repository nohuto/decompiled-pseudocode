/*
 * XREFs of ?ADAPTER_RENDER_DdiQueryDependentEngineGroup@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C003DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C00388BC (-DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiQueryDependentEngineGroup(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_QUERYDEPENDENTENGINEGROUP *a2,
        const GUID *a3)
{
  return ADAPTER_RENDER::DdiQueryDependentEngineGroup(a1, a2, a3);
}
