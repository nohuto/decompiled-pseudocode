/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140037070
 * Callers:
 *     _ATL::CComObject_CAudioDeviceGraph_::CComObject_CAudioDeviceGraph__::_1_::dtor$0 @ 0x14001AF2D (_ATL--CComObject_CAudioDeviceGraph_--CComObject_CAudioDeviceGraph__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14002624C (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x1400262A0 (--1-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x1400262AC (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     atexit @ 0x140016148 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x140025E90 (TraceLoggingRegisterEx.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14002B3EC (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x1400374B0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 */

void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  TLG_PENABLECALLBACK v2; // rdx
  PVOID v3; // r8
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r9
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context[2]; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-30h] BYREF

  Context[1] = (LPVOID)-2LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
  }
  CAudioDeviceGraph::Cleanup(this);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = &qword_140086EE8;
    qword_140086EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140086F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    qword_140086EF0 = (__int64)qword_140086F00;
    byte_140086EF8 = 1;
    TraceLoggingRegisterEx(qword_140086F00, v2, v3);
    dword_140086EFC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_140086EE8 + 8))(&qword_140086EE8);
    InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140086EE8);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v4 > 4u && TlgKeywordOn(v4, 1uLL) )
    TlgWrite(v5, &unk_14006FAD8, (LPCGUID)this + 22, v6, 2u, &pData);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
  }
  v7 = *((_QWORD *)this + 50);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (void *)*((_QWORD *)this + 49);
  if ( v8 )
    CoTaskMemFree(v8);
  v9 = *((_QWORD *)this + 48);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 46);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 43);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = (void *)*((_QWORD *)this + 40);
  if ( v12 )
  {
    free(v12);
    *((_QWORD *)this + 40) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 41);
  if ( v13 )
  {
    free(v13);
    *((_QWORD *)this + 41) = 0LL;
  }
  *((_DWORD *)this + 84) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64 *)this + 21);
  v14 = *((_QWORD *)this + 19);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *((_QWORD *)this + 18);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
