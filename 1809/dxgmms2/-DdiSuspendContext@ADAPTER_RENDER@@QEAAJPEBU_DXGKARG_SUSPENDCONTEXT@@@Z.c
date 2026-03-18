/*
 * XREFs of ?DdiSuspendContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUSPENDCONTEXT@@@Z @ 0x1C0024C50
 * Callers:
 *     VidSchiSuspendResumeHwContext @ 0x1C00CA8E0 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSuspendContext(ADAPTER_RENDER *this, const struct _DXGKARG_SUSPENDCONTEXT *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SUSPENDCONTEXT *))DxgCoreInterface[42])(
           this,
           a2);
}
