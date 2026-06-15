/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800B1C78
 * Callers:
 *     ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x1800B0F10 (-OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x1800B0F30 (-OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x1800B0F50 (-OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z.c)
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

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, const WCHAR *a2, int a3, int a4)
{
  __int64 v7; // r14
  int v8; // esi
  void *v9; // r8
  __int64 v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  TraceLoggingHProvider v13; // r10
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  ATL::CAtlException *v18; // rbx
  int v19; // [rsp+30h] [rbp-D8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-C0h] BYREF
  char v24; // [rsp+50h] [rbp-B8h]
  __int64 v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  ATL::CAtlException *v27; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-78h] BYREF
  int *v30; // [rsp+A0h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-60h]
  int *v32; // [rsp+B0h] [rbp-58h]
  __int64 v33; // [rsp+B8h] [rbp-50h]

  v26 = -2LL;
  v7 = a1;
  v25 = a1;
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
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    v22 = a3;
    v30 = &v22;
    v31 = v10;
    v19 = a4;
    v32 = &v19;
    v33 = v10;
    TlgWrite(v13, &unk_18017240D, v11, v12, 5u, &pData);
  }
  if ( a3 == 1 )
  {
    v14 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    Context = v14;
    if ( v14 )
    {
      COnDeviceWorkItem::COnDeviceWorkItem(v14, (__int64)a2, 1);
      *v15 = &COnDeviceStateChangedWorkItem::`vftable';
      *((_DWORD *)v15 + 8) = a4;
    }
    else
    {
      v15 = 0LL;
    }
  }
  else
  {
    v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    Context = v16;
    if ( v16 )
      v15 = COnDeviceWorkItem::COnDeviceWorkItem(v16, (__int64)a2, a3);
    else
      v15 = 0LL;
  }
  Context = v15;
  if ( !v15 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v15[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v15)(v15, 1LL);
LABEL_22:
    v8 = -2147024882;
    goto LABEL_23;
  }
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
    v18 = v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      _o__resetstkoflw();
    v19 = *(_DWORD *)v18;
    v8 = v19;
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
LABEL_23:
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1770, v8);
  return (unsigned int)v8;
}
