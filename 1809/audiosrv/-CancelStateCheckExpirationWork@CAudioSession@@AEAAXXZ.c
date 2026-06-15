/*
 * XREFs of ?CancelStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x1800BEB4C
 * Callers:
 *     ?CancelExpirationTaskAndPausePostingOfNewTasks@CAudioSession@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180064668 (-CancelExpirationTaskAndPausePostingOfNewTasks@CAudioSession@@QEAA-AV-$unique_any_t@V-$unique_st.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800BF7B4 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::CancelStateCheckExpirationWork(CAudioSession *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 76);
  if ( v1 )
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(
      ThreadPool,
      v1,
      0LL);
}
