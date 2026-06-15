/*
 * XREFs of ?CancelExpirationTaskAndPausePostingOfNewTasks@CAudioSession@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180064668
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800150AC (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18002D194 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?CancelStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x1800BEB4C (-CancelStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 */

struct _RTL_CRITICAL_SECTION **__fastcall CAudioSession::CancelExpirationTaskAndPausePostingOfNewTasks(
        CAudioSession *this,
        struct _RTL_CRITICAL_SECTION **a2)
{
  CAudioSession::CancelInactiveTimer(this);
  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 656), a2);
  CAudioSession::CancelStateCheckExpirationWork(this);
  return a2;
}
