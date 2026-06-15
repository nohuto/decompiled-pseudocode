/*
 * XREFs of ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800AF010
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioHealthMonitor::LooksLikeWeAreHung(
        CAudioHealthMonitor *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // eax
  void *v8; // r8
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  TraceLoggingHProvider v11; // r10
  void *v12; // r8
  const struct _TlgProvider_t *v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  HANDLE CurrentProcess; // rax
  WINBOOL v18[2]; // [rsp+38h] [rbp-89h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-81h] BYREF
  int v20; // [rsp+48h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+4Ch] [rbp-75h] BYREF
  DWORD CurrentProcessId; // [rsp+50h] [rbp-71h] BYREF
  int v23; // [rsp+54h] [rbp-6Dh]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-69h] BYREF
  char v25; // [rsp+60h] [rbp-61h]
  __int64 v26; // [rsp+68h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-29h] BYREF
  WINBOOL *v29; // [rsp+A8h] [rbp-19h]
  __int64 v30; // [rsp+B0h] [rbp-11h]
  char *v31; // [rsp+B8h] [rbp-9h]
  __int64 v32; // [rsp+C0h] [rbp-1h]
  char *v33; // [rsp+C8h] [rbp+7h]
  __int64 v34; // [rsp+D0h] [rbp+Fh]

  v26 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v25 = 0;
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
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v8);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000001uLL) )
      {
        TlgCreateWsz(&pDesc, a3);
        v18[0] = 0;
        v29 = v18;
        v30 = 4LL;
        v31 = (char *)this + 8;
        v32 = 4LL;
        v33 = (char *)this + 12;
        v34 = 4LL;
        TlgWrite(v11, &unk_1801722FC, v9, v10, 6u, &pData);
      }
      *((_DWORD *)this + 16) = 1;
      CurrentProcessId = GetCurrentProcessId();
      v23 = (*(__int64 (__fastcall **)(CAudioHealthMonitor *))(*(_QWORD *)this + 16LL))(this);
      v20 = ReportCoreHang(&CurrentProcessId, (unsigned int)(v23 != 0) + 1, a2, 33LL);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, v18, &Context) && v18[0] )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v12);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v13 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v13 > 4u && TlgKeywordOn(v13, 1uLL) )
      {
        pDesc.Ptr = (ULONGLONG)&v20;
        *(_QWORD *)&pDesc.Size = 4LL;
        TlgWrite(v14, &unk_1801722D8, v15, v16, 3u, &pData);
      }
      if ( v20 >= 0 )
        Sleep(0xEA60u);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0);
    }
  }
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
}
