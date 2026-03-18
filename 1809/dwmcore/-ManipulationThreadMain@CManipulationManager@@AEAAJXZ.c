/*
 * XREFs of ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180062418
 * Callers:
 *     ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x180062400 (-s_ThreadMain@CManipulationManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x180062778 (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18008A55C (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     IsRegisterManipulationThreadPresent @ 0x1800ED908 (IsRegisterManipulationThreadPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadMain(CManipulationManager *this)
{
  struct IMessageSession **v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  CManipulationManager *v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct IMessageSession *v11; // rcx
  signed int LastError; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_THREAD_STARTUP);
  v2 = (struct IMessageSession **)((char *)this + 320);
  v3 = *((_QWORD *)this + 40);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreateEx(1LL, (char *)this + 320);
  if ( v4 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
  EnterCriticalSection(&stru_1803089A8);
  byte_1803089A4 = 0;
  LeaveCriticalSection(&stru_1803089A8);
  EnterCriticalSection(&stru_1803089E8);
  byte_1803089E4 = 0;
  LeaveCriticalSection(&stru_1803089E8);
  if ( (unsigned __int8)IsRegisterManipulationThreadPresent() )
  {
    if ( !(unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback, this) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
    }
    CManipulationManager::UpdateMMCSSTask(v5);
    v6 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           *v2,
           (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
           (CManipulationManager *)((char *)this + 328));
    if ( v6 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
    v7 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
           *v2,
           qword_1803083A0,
           lambda_d2b5a6ed0b58bba383995fb75711c660_::_lambda_invoker_cdecl_,
           this);
    if ( v7 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v7, retaddr);
    v8 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(CManipulationManager *), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
           *v2,
           CManipulationManager::s_rghWaitEvents,
           lambda_1e2b6ca0fa40af4229692291bbc0b04e_::_lambda_invoker_cdecl_,
           this);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    v9 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
           *v2,
           qword_180308398,
           lambda_a60e272d4d630cae458065bba4b68c95_::_lambda_invoker_cdecl_,
           this);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    v10 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
            *v2,
            hEvent,
            lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_::_lambda_invoker_cdecl_,
            this);
    if ( v10 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
    SetEvent(CManipulationManager::s_hManipThreadInitializedWaitEvent);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v2 + 224LL))(*v2);
    v11 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  CManipulationManager::s_dwManipulationThreadId = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_THREAD_CLEANUP);
  return 0LL;
}
