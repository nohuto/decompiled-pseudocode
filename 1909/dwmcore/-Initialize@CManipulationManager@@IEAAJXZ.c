/*
 * XREFs of ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800E0A20
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800E0B64 (-SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@KAXXZ @ 0x18022BA78 (-ClearWaitHandles@CManipulationManager@@KAXXZ.c)
 */

__int64 __fastcall CManipulationManager::Initialize(CManipulationManager *this)
{
  unsigned int v2; // ebx
  HANDLE *v3; // rdi
  HANDLE EventW; // rax
  struct IMessageSession *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  struct IMessageSession *v8; // rax
  signed int v10; // eax
  unsigned int v11; // r9d
  signed int LastError; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
    return v2;
  v3 = &CManipulationManager::s_rghWaitEvents;
  do
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *v3 = EventW;
    if ( !EventW )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      v13 = 133;
      goto LABEL_20;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  SetLastError(0);
  CManipulationManager::s_hManipThreadInitializedWaitEvent = CreateEventW(0LL, 0, 0, 0LL);
  if ( !CManipulationManager::s_hManipThreadInitializedWaitEvent )
  {
    v10 = GetLastError();
    v2 = v10;
    if ( v10 > 0 )
      v2 = (unsigned __int16)v10 | 0x80070000;
    v13 = 140;
LABEL_20:
    if ( (v2 & 0x80000000) == 0 )
      v2 = -2003304445;
    v11 = v2;
    goto LABEL_23;
  }
  v5 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 88LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
  v6 = CManipulationManager::SetupMessageCallThreadInfo(
         this,
         v5,
         (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadEndpointProc,
         (CManipulationManager *)((char *)this + 56));
  v2 = v6;
  if ( v6 < 0 )
  {
    v13 = 149;
  }
  else
  {
    v8 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL)
                                                                     + 88LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
    v6 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           v8,
           (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadTelemetryEndpointProc,
           (CManipulationManager *)((char *)this + 80));
    v2 = v6;
    if ( v6 < 0 )
    {
      v13 = 154;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(CManipulationManager *))(*(_QWORD *)this + 104LL))(this);
      v2 = v6;
      if ( v6 >= 0 )
        return v2;
      v13 = 159;
    }
  }
  v11 = v6;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v11, v13, 0LL);
  if ( (v2 & 0x80000000) != 0 )
  {
    CManipulationManager::ClearWaitHandles();
    _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
  }
  return v2;
}
