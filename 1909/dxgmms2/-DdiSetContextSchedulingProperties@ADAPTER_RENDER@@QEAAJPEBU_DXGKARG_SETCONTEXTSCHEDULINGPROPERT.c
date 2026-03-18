/*
 * XREFs of ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1C0024264
 * Callers:
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00CD440 (VidSchiUpdateDdiHwContextPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetContextSchedulingProperties(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *))DxgCoreInterface[41])(
           this,
           a2);
}
