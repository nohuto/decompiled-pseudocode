/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800B1FC0
 * Callers:
 *     ?OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800B0EE0 (-OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x18001F1EC (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x1800B01F8 (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, const WCHAR *a2, __int64 a3, int a4, int a5)
{
  __int64 v7; // rsi
  int v8; // edi
  void *v9; // r8
  __int64 v10; // r11
  int v11; // r14d
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  TraceLoggingHProvider v14; // r10
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  ATL::CAtlException *v18; // rbx
  int v19; // [rsp+30h] [rbp-E8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-E0h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-D8h] BYREF
  int v22; // [rsp+44h] [rbp-D4h] BYREF
  int v23; // [rsp+48h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-C8h] BYREF
  char v25; // [rsp+58h] [rbp-C0h]
  __int64 v26; // [rsp+60h] [rbp-B8h]
  __int64 v27; // [rsp+68h] [rbp-B0h]
  ATL::CAtlException *v28; // [rsp+70h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-78h] BYREF
  int *v31; // [rsp+B0h] [rbp-68h]
  __int64 v32; // [rsp+B8h] [rbp-60h]
  int *v33; // [rsp+C0h] [rbp-58h]
  __int64 v34; // [rsp+C8h] [rbp-50h]
  int *v35; // [rsp+D0h] [rbp-48h]
  __int64 v36; // [rsp+D8h] [rbp-40h]

  v27 = -2LL;
  v7 = a1;
  v26 = a1;
  v8 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  if ( **((_DWORD **)Context + 1) <= 4u )
  {
    v11 = a5;
  }
  else
  {
    TlgCreateWsz(&pDesc, a2);
    v22 = 5;
    v31 = &v22;
    v32 = v10;
    v23 = a4;
    v33 = &v23;
    v34 = v10;
    v11 = a5;
    v19 = a5;
    v35 = &v19;
    v36 = v10;
    TlgWrite(v14, &unk_1801723B1, v12, v13, 6u, &pData);
  }
  v15 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  Context = v15;
  if ( v15 )
    v16 = COnDeviceWorkItem::COnDeviceWorkItem(v15, (__int64)a2, 5);
  else
    v16 = 0LL;
  Context = v16;
  if ( !v16 )
    goto LABEL_19;
  if ( !*(_DWORD *)(v16[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v16)(v16, 1LL);
LABEL_19:
    v8 = -2147024882;
    goto LABEL_20;
  }
  *((_DWORD *)v16 + 5) = v11;
  *((_DWORD *)v16 + 6) = a4;
  if ( !*(_QWORD *)(v7 + 200) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v16)(v16, 1LL);
    return (unsigned int)v8;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 112);
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = 0;
  try
  {
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
      (__int64 *)(v7 + 152),
      (__int64)&Context);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v18 = v28;
    if ( *(_DWORD *)v28 == -1073741571 )
      _o__resetstkoflw();
    v19 = *(_DWORD *)v18;
    v8 = v19;
    v7 = v26;
  }
  if ( v25 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v25 = 0;
  }
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *(_QWORD *)(v7 + 200));
LABEL_20:
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1873, v8);
  return (unsigned int)v8;
}
