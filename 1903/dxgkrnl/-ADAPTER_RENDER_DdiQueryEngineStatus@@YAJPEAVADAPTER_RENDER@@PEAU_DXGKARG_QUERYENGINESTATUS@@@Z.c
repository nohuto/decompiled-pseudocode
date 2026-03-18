/*
 * XREFs of ?ADAPTER_RENDER_DdiQueryEngineStatus@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C003DE80
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C0038C3C (-DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiQueryEngineStatus(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_QUERYENGINESTATUS *a2,
        const GUID *a3)
{
  return ADAPTER_RENDER::DdiQueryEngineStatus(a1, a2, a3);
}
