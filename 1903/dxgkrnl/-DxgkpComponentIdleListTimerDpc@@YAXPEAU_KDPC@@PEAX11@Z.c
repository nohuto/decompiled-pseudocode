/*
 * XREFs of ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C003B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0033FAC (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpComponentIdleListTimerDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  DXGADAPTER::ProcessComponentIdleList(DeferredContext);
}
