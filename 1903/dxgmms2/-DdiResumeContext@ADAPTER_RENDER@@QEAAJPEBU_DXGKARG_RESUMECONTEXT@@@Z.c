/*
 * XREFs of ?DdiResumeContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RESUMECONTEXT@@@Z @ 0x1C0024240
 * Callers:
 *     VidSchiSuspendResumeHwContext @ 0x1C00CD6E0 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiResumeContext(ADAPTER_RENDER *this, const struct _DXGKARG_RESUMECONTEXT *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_RESUMECONTEXT *))DxgCoreInterface[43])(
           this,
           a2);
}
