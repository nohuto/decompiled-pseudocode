/*
 * XREFs of ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0012DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00128F8 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommand(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiSubmitCommand(a1, a2, a3);
}
