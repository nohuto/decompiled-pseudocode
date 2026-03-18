/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C00241D4
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0079440 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CA094 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_PATCH *))DxgCoreInterface[30])(this, a2);
}
