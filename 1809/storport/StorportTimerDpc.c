/*
 * XREFs of StorportTimerDpc @ 0x1C0003250
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0005000 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0006268 (RaidAdapterAcquireStartIoLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorportTimerDpc(
        struct _KDPC *Dpc,
        __int64 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, __int64); // rbx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *DeferredContext;
  v5 = DeferredContext[18];
  v6 = (void (__fastcall *)(__int64, __int64))_InterlockedExchange64(DeferredContext + 17, 0LL);
  if ( v6 )
  {
    RaidAdapterAcquireStartIoLock(v4, v7, SystemArgument1, SystemArgument2);
    v6(*(_QWORD *)(v4 + 552) + 16LL, v5);
    RaidAdapterReleaseStartIoLock(v4, v7);
  }
}
