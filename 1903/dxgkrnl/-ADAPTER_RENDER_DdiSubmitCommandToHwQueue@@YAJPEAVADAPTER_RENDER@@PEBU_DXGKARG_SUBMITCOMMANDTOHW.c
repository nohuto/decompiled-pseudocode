/*
 * XREFs of ?ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C003DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C003A7A8 (-DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommandToHwQueue(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *a2,
        const GUID *a3)
{
  return ADAPTER_RENDER::DdiSubmitCommandToHwQueue(a1, a2, a3);
}
