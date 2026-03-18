/*
 * XREFs of ?ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ @ 0x1800DF708
 * Callers:
 *     ?s_ThreadMain@CGlobalManipulationManager@@CAKPEAX@Z @ 0x1800DF6F0 (-s_ThreadMain@CGlobalManipulationManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ @ 0x1800D78A0 (-UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800E0234 (-SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     IsRegisterManipulationThreadPresent @ 0x1800E90C4 (IsRegisterManipulationThreadPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 */

__int64 __fastcall CGlobalManipulationManager::ManipulationThreadMain(CGlobalManipulationManager *this)
{
  struct IMessageSession **v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  struct IMessageSession *v16; // rcx
  signed int LastError; // eax
  __int64 v18; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_THREAD_STARTUP);
  v2 = (struct IMessageSession **)((char *)this + 24);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreateEx(1LL, (char *)this + 24);
  if ( v4 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v4, retaddr, v5);
  EnterCriticalSection(&stru_1803404C8);
  byte_1803404C4 = 0;
  LeaveCriticalSection(&stru_1803404C8);
  EnterCriticalSection(&stru_180340488);
  byte_180340484 = 0;
  LeaveCriticalSection(&stru_180340488);
  if ( (unsigned __int8)IsRegisterManipulationThreadPresent() )
  {
    if ( !(unsigned int)RegisterManipulationThread(CGlobalManipulationManager::ManipulationThreadCallback, this) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr, v18);
    }
    CGlobalManipulationManager::UpdateMMCSSTask(this);
    v6 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           *v2,
           (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
           (CGlobalManipulationManager *)((char *)this + 32));
    if ( v6 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v6, retaddr, v7);
    v8 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v2 + 248LL))(
           *v2,
           qword_18033CCA0,
           lambda_3a52e5ab84f05e70b0707a801853e716_::_lambda_invoker_cdecl_,
           this);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr, v9);
    v10 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(CGlobalManipulationManager *), CGlobalManipulationManager *))(*(_QWORD *)*v2 + 248LL))(
            *v2,
            CManipulationManager::s_rghWaitEvents,
            lambda_35cedf73a04efee64cd2b082b9370e6e_::_lambda_invoker_cdecl_,
            this);
    if ( v10 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v10, retaddr, v11);
    v12 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(CGlobalManipulationManager *), CGlobalManipulationManager *))(*(_QWORD *)*v2 + 248LL))(
            *v2,
            hEvent,
            lambda_53e4d08f85004fbfe19bb4d1e8c4a6f0_::_lambda_invoker_cdecl_,
            this);
    if ( v12 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v12, retaddr, v13);
    v14 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(__int64), CGlobalManipulationManager *))(*(_QWORD *)*v2 + 248LL))(
            *v2,
            qword_18033CCA8,
            lambda_21d74d5478775f948634749288fbae48_::_lambda_invoker_cdecl_,
            this);
    if ( v14 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v14, retaddr, v15);
    SetEvent(CManipulationManager::s_hManipThreadInitializedWaitEvent);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v2 + 208LL))(*v2);
    v16 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  CManipulationManager::s_dwManipulationThreadId = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_THREAD_CLEANUP);
  return 0LL;
}
