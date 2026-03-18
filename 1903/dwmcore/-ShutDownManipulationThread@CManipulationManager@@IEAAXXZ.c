/*
 * XREFs of ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x18022D234
 * Callers:
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180237A00 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@KAXXZ @ 0x18022D188 (-ClearWaitHandles@CManipulationManager@@KAXXZ.c)
 */

void __fastcall CManipulationManager::ShutDownManipulationThread(CManipulationManager *this)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 88LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 152LL))(v2, *((_QWORD *)this + 7));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 144LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4),
    1LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 216LL))(*((_QWORD *)this + 3));
  *((_BYTE *)this + 176) = 1;
  if ( *((_QWORD *)this + 21) )
  {
    SetEvent(CManipulationManager::s_rghWaitEvents);
    WaitForSingleObject(*((HANDLE *)this + 21), 0xFFFFFFFF);
    CManipulationManager::ClearWaitHandles();
    CloseHandle(*((HANDLE *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    _InterlockedExchange(&CManipulationManager::s_bManipThreadInitialized, 0);
  }
}
