/*
 * XREFs of ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800150AC
 * Callers:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180014FB0 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180043110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?CancelExpirationTaskAndPausePostingOfNewTasks@CAudioSession@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180064668 (-CancelExpirationTaskAndPausePostingOfNewTasks@CAudioSession@@QEAA-AV-$unique_any_t@V-$unique_st.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::CancelInactiveTimer(CAudioSession *this)
{
  __int64 v2; // rdx

  if ( *((_QWORD *)this + 75) )
  {
    v2 = *((_QWORD *)this + 75);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 85LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this);
      v2 = *((_QWORD *)this + 75);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      v2,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 75),
      1LL);
  }
}
