/*
 * XREFs of s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800B48C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x1800B3F38 (-AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z.c)
 *     ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800B4190 (-FindSupportedHidCollection@@YAJPEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800B42C4 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x1800B42EC (-GetHidCollectionsInContainer@@YAJU_GUID@@PEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@@.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B46A4 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall s_ccCreateHandsfreeHidFileFromAudioId(
        RPC_BINDING_HANDLE BindingHandle,
        unsigned __int16 *a2,
        _DWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r15
  __int64 v8; // r8
  void *v9; // r8
  int ContainerId; // ebx
  int LastError; // eax
  HANDLE CurrentProcess; // rax
  __int64 *v13; // rdx
  __int64 v14; // rax
  void *v15; // rdi
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE hSourceHandle; // [rsp+60h] [rbp-A0h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h]
  __int128 v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+98h] [rbp-68h]
  struct _TP_TIMER *pv[8]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v26[7]; // [rsp+E0h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+170h] [rbp+70h] BYREF
  unsigned int Pid; // [rsp+178h] [rbp+78h] BYREF

  v24 = 10;
  v22 = 0LL;
  PreparsedData = 0LL;
  Context[0] = 0LL;
  v6 = -1LL;
  hSourceHandle = (HANDLE)-1LL;
  TargetHandle = (HANDLE)-1LL;
  v21 = 0LL;
  v7 = 0;
  v23 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context[0] + 1),
    v8,
    (struct _TP_TIMER *)L"s_ccCreateHandsfreeHidFileFromAudioId");
  *a3 = 0;
  ContainerId = AudioDeviceInterfaceGetContainerId(a2, (struct _GUID *)Context);
  if ( ContainerId >= 0 )
  {
    ContainerId = GetHidCollectionsInContainer((__int64)Context, (__int64)&v21);
    if ( ContainerId >= 0 )
    {
      ContainerId = FindSupportedHidCollection(&v21, (__int64 *)&hSourceHandle, v26, &PreparsedData);
      if ( ContainerId >= 0 )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( LastError )
        {
          if ( LastError <= 0 )
          {
            ContainerId = LastError;
            goto LABEL_16;
          }
LABEL_13:
          ContainerId = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_16;
        }
        if ( RpcImpersonateClient(BindingHandle) )
          goto LABEL_16;
        v7 = 1;
        v6 = (__int64)OpenProcess(0x40u, 0, Pid);
        if ( !v6
          || (CurrentProcess = GetCurrentProcess(),
              !DuplicateHandle(CurrentProcess, hSourceHandle, (HANDLE)v6, &TargetHandle, 0xC0000000, 0, 0)) )
        {
          LastError = GetLastError();
          ContainerId = LastError;
          if ( LastError <= 0 )
            goto LABEL_16;
          goto LABEL_13;
        }
        ContainerId = 0;
        *a3 = (_DWORD)TargetHandle;
        TargetHandle = 0LL;
      }
    }
  }
LABEL_16:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v6);
  if ( v7 )
    RpcRevertToSelf();
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hSourceHandle);
  while ( v22 )
  {
    v13 = (__int64 *)v21;
    if ( !(_QWORD)v21 )
      ATL::AtlThrowImpl(-2147467259);
    v14 = *(_QWORD *)v21;
    v15 = *(void **)(v21 + 16);
    *(_QWORD *)&v21 = v14;
    if ( v14 )
      *(_QWORD *)(v14 + 8) = 0LL;
    else
      v21 = 0uLL;
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode((__int64)&v21, v13);
    CoTaskMemFree(v15);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)&v21);
  return (unsigned int)ContainerId;
}
