/*
 * XREFs of ?QueueEventInvocationWorkItem@?$EventInvocationContext@$00@details@wil@@UEAAX$$QEAV?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@@Z @ 0x1801B47A0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801B1708 (--4-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBase@d.c)
 */

void __fastcall wil::details::EventInvocationContext<1>::QueueEventInvocationWorkItem(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)(a1 + 88);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 88));
  wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
    *(void (__fastcall *****)(_QWORD, __int64))(a1 + 104),
    a2);
  *(_QWORD *)(a1 + 104) = **(_QWORD **)(a1 + 104) + 8LL;
  if ( !*(_BYTE *)(a1 + 64) )
  {
    SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 80));
    *(_BYTE *)(a1 + 64) = 1;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
