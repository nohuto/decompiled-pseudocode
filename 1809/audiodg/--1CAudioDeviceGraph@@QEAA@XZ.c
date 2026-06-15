/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140012D18
 * Callers:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x1400018E8 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CAudioDeviceGraph_::CComObject_CAudioDeviceGraph__::_1_::dtor$0 @ 0x14001FB88 (_ATL--CComObject_CAudioDeviceGraph_--CComObject_CAudioDeviceGraph__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14002DF98 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x14002DFEC (--1-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EEC0 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140012BE0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 */

void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  const GUID *v4; // r9
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
  }
  CAudioDeviceGraph::Cleanup(this);
  v3 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         v2,
         lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    TlgWrite((TraceLoggingHProvider)v3, &unk_140071FAE, (LPCGUID)this + 22, v4, 2u, &pData);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
  }
  v5 = (void *)*((_QWORD *)this + 49);
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = *((_QWORD *)this + 48);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 46);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 43);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (void *)*((_QWORD *)this + 40);
  if ( v9 )
  {
    free(v9);
    *((_QWORD *)this + 40) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 41);
  if ( v10 )
  {
    free(v10);
    *((_QWORD *)this + 41) = 0LL;
  }
  *((_DWORD *)this + 84) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 168);
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
