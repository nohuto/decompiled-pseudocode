/*
 * XREFs of ?CallbackThunk@?$KWorkItemBase@VMINIPORT_HOOK_DRIVER@@V?$KCoalescingWorkItem@VMINIPORT_HOOK_DRIVER@@@@@@CAXPEAX@Z @ 0x1C00D13B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk(
        __int64 a1)
{
  _InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 40))(*(_QWORD *)(a1 + 32));
}
