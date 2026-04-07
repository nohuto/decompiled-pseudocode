/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x18003B3D0
 * Callers:
 *     ?Start@CTimer@@QEAAJK@Z @ 0x180008DDC (-Start@CTimer@@QEAAJK@Z.c)
 *     ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003B370 (-s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  if ( *((_QWORD *)this + 8) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    (***((void (__fastcall ****)(_QWORD))this + 8))(*((_QWORD *)this + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
