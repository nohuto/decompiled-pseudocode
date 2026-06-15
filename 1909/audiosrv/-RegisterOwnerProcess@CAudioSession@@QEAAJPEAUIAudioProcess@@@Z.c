/*
 * XREFs of ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800D0A28
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180024AE0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18003FDD0 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180059474 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::RegisterOwnerProcess(CAudioSession *this, struct IAudioProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v4; // eax
  unsigned int v5; // esi
  const char *v6; // r9
  __int64 result; // rax
  __int64 *v8; // rdx
  __int64 v9; // rax
  void *v10; // r8
  const struct _TlgProvider_t *v11; // rsi
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  __int64 v14; // [rsp+30h] [rbp-A8h] BYREF
  struct IAudioProcess *v15; // [rsp+38h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-98h] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp-78h]
  __int128 v20; // [rsp+68h] [rbp-70h]
  char v21; // [rsp+78h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-38h] BYREF
  __int64 *v24; // [rsp+B0h] [rbp-28h]
  int v25; // [rsp+B8h] [rbp-20h]
  int v26; // [rsp+BCh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v18 = -2LL;
  v15 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  try
  {
    v19 = v3;
    v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *, CAudioSession *))(*(_QWORD *)v15 + 24LL))(v15, this);
    v5 = v4;
    if ( v4 >= 0 )
    {
      Context[0] = &v15;
      Context[1] = this;
      v20 = *(_OWORD *)Context;
      v21 = 1;
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
        &v14,
        (__int64)v15);
      v8 = (__int64 *)*((_QWORD *)this + 98);
      if ( *((__int64 **)this + 99) == v8 )
      {
        std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
          (__int64 **)this + 97,
          v8,
          &v14);
      }
      else
      {
        v9 = v14;
        v14 = 0LL;
        *v8 = v9;
        *((_QWORD *)this + 98) += 8LL;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
      v21 = 0;
      if ( *((_BYTE *)this + 800) )
        *((_BYTE *)this + 800) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v15 + 96LL))(v15) != 0;
      Context[0] = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context)
        && fPending )
      {
        Context[0] = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v10);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
      if ( *(_DWORD *)v11 > 4u )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 91));
        LODWORD(v14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v15 + 40LL))(v15);
        v24 = &v14;
        v25 = 4;
        v26 = 0;
        TlgWrite(v11, &unk_180176C70, v12, v13, 4u, &pData);
      }
      if ( v3 )
        LeaveCriticalSection(v3);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v4);
      if ( v3 )
        LeaveCriticalSection(v3);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7C1,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
