/*
 * XREFs of ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C00241F8
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1C00C9BF0 (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiQueryDependentEngineGroup(
        ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYDEPENDENTENGINEGROUP *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_QUERYDEPENDENTENGINEGROUP *))DxgCoreInterface[35])(
           this,
           a2);
}
