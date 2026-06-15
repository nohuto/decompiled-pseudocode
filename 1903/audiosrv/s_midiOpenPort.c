/*
 * XREFs of s_midiOpenPort @ 0x1800EC6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800EC438 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x180137874 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 */

__int64 __fastcall s_midiOpenPort(RPC_BINDING_HANDLE BindingHandle, unsigned __int16 *a2, HANDLE *a3)
{
  unsigned __int16 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r8
  void *v9; // r8
  signed int v10; // ebx
  int KsMidiDeviceInfo; // eax
  unsigned int v12; // edx
  int v13; // eax
  char *v14; // r14
  HRESULT v15; // eax
  RPC_STATUS v16; // eax
  signed int LastError; // eax
  HANDLE CurrentProcess; // rax
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v21; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE FilterHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-A8h] BYREF
  void *ConnectionHandle; // [rsp+60h] [rbp-A0h] BYREF
  $58C2C1BF6568EE28BD9B872E6BA03976 Connect; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+BCh] [rbp-44h]
  int v28; // [rsp+C4h] [rbp-3Ch]
  GUID v29; // [rsp+C8h] [rbp-38h]
  GUID v30; // [rsp+D8h] [rbp-28h]
  GUID v31; // [rsp+E8h] [rbp-18h]
  struct _TP_TIMER *pv[8]; // [rsp+100h] [rbp+0h] BYREF
  WINBOOL fPending; // [rsp+180h] [rbp+80h] BYREF
  unsigned int Pid; // [rsp+188h] [rbp+88h] BYREF

  v6 = 0LL;
  Context = 0LL;
  v7 = -1LL;
  v21 = 0LL;
  FilterHandle = (HANDLE)-1LL;
  TargetHandle = (HANDLE)-1LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v8,
    (struct _TP_TIMER *)L"s_midiOpenPort");
  if ( a3 )
  {
    KsMidiDeviceInfo = GetKsMidiDeviceInfo(a2, &v21, (unsigned int *)&fPending);
    v6 = v21;
    v10 = KsMidiDeviceInfo;
    if ( KsMidiDeviceInfo >= 0 )
    {
      v13 = FilterInstantiate2(v21, v12, &FilterHandle);
      v14 = (char *)FilterHandle;
      v10 = v13;
      if ( v13 >= 0 )
      {
        Connect.PinToHandle = 0LL;
        *(&Connect.Interface.Alignment + 2) = 0LL;
        *(&Connect.Medium.Alignment + 2) = 0LL;
        *(&Connect.PinId + 1) = 0;
        Connect.Interface.Set = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
        v27 = 0LL;
        v28 = 0;
        Connect.Medium.Set = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
        Connect.PinId = fPending;
        Connect.Priority.PriorityClass = 0x40000000;
        Connect.Priority.PrioritySubClass = 0x40000000;
        v29 = GUID_e725d360_62cc_11cf_a5d6_28db04c10000;
        v26 = 64;
        v30 = GUID_1d262760_e957_11cf_a5d6_28db04c10000;
        v31 = GUID_0f6417d6_c318_11d0_a43f_00a0c9223196;
        v15 = KsCreatePin2(FilterHandle, &Connect, 0xC0000000, &ConnectionHandle);
        v10 = v15;
        if ( v15 > 0 )
          v10 = (unsigned __int16)v15 | 0x80070000;
        if ( v10 >= 0 )
        {
          v16 = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
          if ( v16 )
          {
            if ( v16 > 0 )
              v10 = (unsigned __int16)v16 | 0x80070000;
            else
              v10 = v16;
          }
          else if ( !RpcImpersonateClient(BindingHandle) )
          {
            v7 = (__int64)OpenProcess(0x40u, 0, Pid);
            if ( v7
              && (CurrentProcess = GetCurrentProcess(),
                  DuplicateHandle(CurrentProcess, ConnectionHandle, (HANDLE)v7, &TargetHandle, 0xC0000000, 0, 1u)) )
            {
              *a3 = TargetHandle;
            }
            else
            {
              LastError = GetLastError();
              v10 = LastError;
              if ( LastError > 0 )
                v10 = (unsigned __int16)LastError | 0x80070000;
            }
            RpcRevertToSelf();
          }
        }
      }
      if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v14);
      if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle((HANDLE)v7);
    }
  }
  else
  {
    v10 = -2147467261;
  }
  CoTaskMemFree(v6);
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("s_midiOpenPort", 216, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v10;
}
