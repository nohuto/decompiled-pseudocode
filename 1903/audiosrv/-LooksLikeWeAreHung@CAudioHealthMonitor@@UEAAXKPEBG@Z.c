/*
 * XREFs of ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800BDA20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioHealthMonitor::LooksLikeWeAreHung(
        CAudioHealthMonitor *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ecx
  void *v8; // r8
  LPCGUID v9; // r8
  TraceLoggingHProvider v10; // r9
  void *v11; // r8
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  HANDLE CurrentProcess; // rax
  WINBOOL v17[2]; // [rsp+38h] [rbp-89h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-81h] BYREF
  int v19; // [rsp+48h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+4Ch] [rbp-75h] BYREF
  DWORD CurrentProcessId; // [rsp+50h] [rbp-71h] BYREF
  int v22; // [rsp+54h] [rbp-6Dh]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-69h] BYREF
  char v24; // [rsp+60h] [rbp-61h]
  __int64 v25; // [rsp+68h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-29h] BYREF
  WINBOOL *v28; // [rsp+A8h] [rbp-19h]
  __int64 v29; // [rsp+B0h] [rbp-11h]
  char *v30; // [rsp+B8h] [rbp-9h]
  __int64 v31; // [rsp+C0h] [rbp-1h]
  char *v32; // [rsp+C8h] [rbp+7h]
  __int64 v33; // [rsp+D0h] [rbp+Fh]

  v25 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v24 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_DWORD *)this + 2);
  v7 = v6 + 1;
  if ( v6 + 1 >= v6 )
  {
    *((_DWORD *)this + 2) = v7;
    if ( v7 >= *((_DWORD *)this + 3) && *((_DWORD *)this + 4) == 16 && !*((_DWORD *)this + 16) )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B8588;
        qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v8);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
      }
      if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000001uLL) )
      {
        TlgCreateWsz(&pDesc, a3);
        v17[0] = 0;
        v28 = v17;
        v29 = 4LL;
        v30 = (char *)this + 8;
        v31 = 4LL;
        v32 = (char *)this + 12;
        v33 = 4LL;
        TlgWrite(v10, &unk_180177654, v9, (LPCGUID)v10, 6u, &pData);
      }
      *((_DWORD *)this + 16) = 1;
      CurrentProcessId = GetCurrentProcessId();
      v22 = (*(__int64 (__fastcall **)(CAudioHealthMonitor *))(*(_QWORD *)this + 16LL))(this);
      v19 = ReportCoreHang(&CurrentProcessId, (unsigned int)(v22 != 0) + 1, a2, 33LL);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, v17, &Context) && v17[0] )
      {
        Context = &qword_1801B8588;
        qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v11);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
      }
      v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v12 > 4u && TlgKeywordOn(v12, 1uLL) )
      {
        pDesc.Ptr = (ULONGLONG)&v19;
        *(_QWORD *)&pDesc.Size = 4LL;
        TlgWrite(v13, &unk_180177630, v14, v15, 3u, &pData);
      }
      if ( v19 >= 0 )
        Sleep(0xEA60u);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0);
    }
  }
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
}
