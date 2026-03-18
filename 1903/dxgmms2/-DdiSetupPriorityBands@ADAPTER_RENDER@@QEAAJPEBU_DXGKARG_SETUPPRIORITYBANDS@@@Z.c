/*
 * XREFs of ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C00242F4
 * Callers:
 *     VidSchiInitializeNode @ 0x1C0086430 (VidSchiInitializeNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetupPriorityBands(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETUPPRIORITYBANDS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETUPPRIORITYBANDS *))DxgCoreInterface[21])(
           this,
           a2);
}
