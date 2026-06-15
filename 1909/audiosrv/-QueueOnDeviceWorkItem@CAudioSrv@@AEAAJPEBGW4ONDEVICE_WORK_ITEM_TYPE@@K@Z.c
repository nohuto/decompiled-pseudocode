/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800C0034
 * Callers:
 *     ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x1800BF2D0 (-OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x1800BF2F0 (-OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x1800BF310 (-OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180028EC0 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x1800BE75C (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, WCHAR *a2, int a3, int a4)
{
  __int64 v7; // r14
  int v8; // esi
  void *v9; // r8
  __int64 v10; // r10
  LPCGUID v11; // r8
  TraceLoggingHProvider v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  ATL::CAtlException *v17; // rbx
  LPVOID Context; // [rsp+30h] [rbp-D8h] BYREF
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-CCh] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-C0h] BYREF
  char v23; // [rsp+50h] [rbp-B8h]
  __int64 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  ATL::CAtlException *v26; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-78h] BYREF
  int *v29; // [rsp+A0h] [rbp-68h]
  __int64 v30; // [rsp+A8h] [rbp-60h]
  int *v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]

  v25 = -2LL;
  v7 = a1;
  v24 = a1;
  v8 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    v21 = a3;
    v29 = &v21;
    v30 = v10;
    v19 = a4;
    v31 = &v19;
    v32 = v10;
    TlgWrite(v12, &unk_180176745, v11, (LPCGUID)v12, 5u, &pData);
  }
  if ( a3 == 1 )
  {
    v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    Context = v13;
    if ( v13 )
    {
      COnDeviceWorkItem::COnDeviceWorkItem(v13, a2, 1);
      *v14 = &COnDeviceStateChangedWorkItem::`vftable';
      *((_DWORD *)v14 + 8) = a4;
    }
    else
    {
      v14 = 0LL;
    }
  }
  else
  {
    v15 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    Context = v15;
    if ( v15 )
      v14 = COnDeviceWorkItem::COnDeviceWorkItem(v15, a2, a3);
    else
      v14 = 0LL;
  }
  Context = v14;
  if ( !v14 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v14[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v14)(v14, 1LL);
LABEL_22:
    v8 = -2147024882;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(v7 + 200) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v14)(v14, 1LL);
    return (unsigned int)v8;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 112);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = 0;
  try
  {
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
      (__int64 *)(v7 + 152),
      (__int64)&Context);
  }
  catch ( ATL::CAtlException *v26 )
  {
    v17 = v26;
    if ( *(_DWORD *)v26 == -1073741571 )
      _o__resetstkoflw();
    v19 = *(_DWORD *)v17;
    v8 = v19;
    v7 = v24;
  }
  if ( v23 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v23 = 0;
  }
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *(_QWORD *)(v7 + 200));
LABEL_23:
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1663, v8);
  return (unsigned int)v8;
}
