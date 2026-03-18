/*
 * XREFs of ?ADAPTER_RENDER_DdiSetContextSchedulingProperties@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1C0037AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1C01CE4A8 (-DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERT.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetContextSchedulingProperties(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *a2)
{
  return ADAPTER_RENDER::DdiSetContextSchedulingProperties(a1, a2);
}
