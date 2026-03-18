/*
 * XREFs of ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800625D0
 * Callers:
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180062380 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x180062778 (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?CreateManipulationThread@CManipulationManager@@AEAAJXZ @ 0x180062840 (-CreateManipulationThread@CManipulationManager@@AEAAJXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800842DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008A598 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x1801EA37C (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
 */

__int64 __fastcall CManipulationManager::Initialize(CManipulationManager *this)
{
  signed int v2; // ebx
  int ManipulationThread; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  HANDLE *v6; // rdi
  HANDLE EventW; // rax
  struct IMessageSession *v8; // rax
  struct IMessageSession *v9; // rax
  signed int LastError; // eax
  int v12; // r9d
  signed int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v15[66]; // [rsp+30h] [rbp-B8h] BYREF
  int v16; // [rsp+B4h] [rbp-34h]

  v2 = 0;
  if ( !_InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
  {
    memset_0(v15, 0, 0x90uLL);
    StringCchCopyW(v15, 0x40uLL, L"Capture");
    v16 = 1;
    ManipulationThread = CMmcssTask::Set((CManipulationManager *)((char *)this + 40), (const struct DWM_MMTASK *)v15, 0);
    v2 = ManipulationThread;
    if ( ManipulationThread >= 0 )
    {
      v5 = 0;
      v6 = &CManipulationManager::s_rghWaitEvents;
      while ( 1 )
      {
        SetLastError(0);
        EventW = CreateEventW(0LL, 0, 0, 0LL);
        *v6 = EventW;
        if ( !EventW )
          break;
        ++v5;
        ++v6;
        if ( v5 >= 4 )
        {
          SetLastError(0);
          CManipulationManager::s_hManipThreadInitializedWaitEvent = CreateEventW(0LL, 0, 0, 0LL);
          if ( CManipulationManager::s_hManipThreadInitializedWaitEvent )
          {
            v8 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                           + 536LL)
                                                                             + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 536LL));
            ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                                   this,
                                   v8,
                                   (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadEndpointProc,
                                   (CManipulationManager *)((char *)this + 352));
            v2 = ManipulationThread;
            if ( ManipulationThread < 0 )
            {
              v14 = 139;
            }
            else
            {
              v9 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                             + 536LL)
                                                                               + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 536LL));
              ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                                     this,
                                     v9,
                                     (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadTelemetryEndpointProc,
                                     (CManipulationManager *)((char *)this + 376));
              v2 = ManipulationThread;
              if ( ManipulationThread < 0 )
              {
                v14 = 144;
              }
              else
              {
                ManipulationThread = CManipulationManager::CreateManipulationThread(this);
                v2 = ManipulationThread;
                if ( ManipulationThread >= 0 )
                  return (unsigned int)v2;
                v14 = 149;
              }
            }
            goto LABEL_24;
          }
          LastError = GetLastError();
          v2 = LastError;
          if ( LastError > 0 )
            v2 = (unsigned __int16)LastError | 0x80070000;
          v14 = 130;
LABEL_15:
          if ( v2 >= 0 )
            v2 = -2003304445;
          v12 = v2;
          goto LABEL_25;
        }
      }
      v13 = GetLastError();
      v2 = v13;
      if ( v13 > 0 )
        v2 = (unsigned __int16)v13 | 0x80070000;
      v14 = 123;
      goto LABEL_15;
    }
    v14 = 112;
LABEL_24:
    v12 = ManipulationThread;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v12, v14);
    if ( v2 < 0 )
    {
      CManipulationManager::ClearWaitHandles();
      _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
    }
  }
  return (unsigned int)v2;
}
