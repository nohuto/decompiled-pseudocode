/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800C0828
 * Callers:
 *     ?OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800BF750 (-OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180026270 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x1800BEC18 (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, WCHAR *a2, __int64 a3, int a4, int a5)
{
  __int64 v7; // rsi
  int v8; // edi
  void *v9; // r8
  __int64 v10; // r10
  int v11; // r14d
  LPCGUID v12; // r8
  TraceLoggingHProvider v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  ATL::CAtlException *v17; // rbx
  int v18; // [rsp+30h] [rbp-E8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-E0h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-D8h] BYREF
  int v21; // [rsp+44h] [rbp-D4h] BYREF
  int v22; // [rsp+48h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-C8h] BYREF
  char v24; // [rsp+58h] [rbp-C0h]
  __int64 v25; // [rsp+60h] [rbp-B8h]
  __int64 v26; // [rsp+68h] [rbp-B0h]
  ATL::CAtlException *v27; // [rsp+70h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-78h] BYREF
  int *v30; // [rsp+B0h] [rbp-68h]
  __int64 v31; // [rsp+B8h] [rbp-60h]
  int *v32; // [rsp+C0h] [rbp-58h]
  __int64 v33; // [rsp+C8h] [rbp-50h]
  int *v34; // [rsp+D0h] [rbp-48h]
  __int64 v35; // [rsp+D8h] [rbp-40h]

  v26 = -2LL;
  v7 = a1;
  v25 = a1;
  v8 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  if ( **((_DWORD **)Context + 1) <= 4u )
  {
    v11 = a5;
  }
  else
  {
    TlgCreateWsz(&pDesc, a2);
    v21 = 5;
    v30 = &v21;
    v31 = v10;
    v22 = a4;
    v32 = &v22;
    v33 = v10;
    v11 = a5;
    v18 = a5;
    v34 = &v18;
    v35 = v10;
    TlgWrite(v13, &unk_180177709, v12, (LPCGUID)v13, 6u, &pData);
  }
  v14 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  Context = v14;
  if ( v14 )
    v15 = COnDeviceWorkItem::COnDeviceWorkItem(v14, a2, 5);
  else
    v15 = 0LL;
  Context = v15;
  if ( !v15 )
    goto LABEL_19;
  if ( !*(_DWORD *)(v15[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v15)(v15, 1LL);
LABEL_19:
    v8 = -2147024882;
    goto LABEL_20;
  }
  *((_DWORD *)v15 + 5) = v11;
  *((_DWORD *)v15 + 6) = a4;
  if ( !*(_QWORD *)(v7 + 200) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v15)(v15, 1LL);
    return (unsigned int)v8;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 112);
  v24 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = 0;
  try
  {
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
      (__int64 *)(v7 + 152),
      (__int64)&Context);
  }
  catch ( ATL::CAtlException *v27 )
  {
    v17 = v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      _o__resetstkoflw();
    v18 = *(_DWORD *)v17;
    v8 = v18;
    v7 = v25;
  }
  if ( v24 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v24 = 0;
  }
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *(_QWORD *)(v7 + 200));
LABEL_20:
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1766, v8);
  return (unsigned int)v8;
}
