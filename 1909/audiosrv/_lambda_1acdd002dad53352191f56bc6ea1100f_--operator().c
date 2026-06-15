/*
 * XREFs of _lambda_1acdd002dad53352191f56bc6ea1100f_::operator() @ 0x1800F538C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Do_call @ 0x1800F1060 (std--_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D4F8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D4FF8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_1acdd002dad53352191f56bc6ea1100f_::operator()(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rcx
  const WCHAR *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  char v10; // al
  int v11; // eax
  void *v12; // r8
  LPCGUID v13; // r8
  TraceLoggingHProvider v14; // r9
  __int64 v15; // rcx
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-21h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-11h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+68h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+A8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v20 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(*(_QWORD **)a1, (__int64 *)&v20);
  v3 = v20;
  if ( v2 >= 0 && v20 )
  {
    v17 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v20, &v17) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 392LL))(v17, **(_QWORD **)(a1 + 8)) )
    {
      v4 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 128LL))(v17);
      v19 = 0LL;
      v5 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, const WCHAR *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                           + 24LL))(
             g_DeviceGraphStore,
             v4,
             &v19);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA04,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v5);
LABEL_10:
        v8 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        goto LABEL_28;
      }
      (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v19 + 112LL))(v19, lpCriticalSection);
      v18 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 200LL))(v17, &v18);
      v6 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA0C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v18);
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        goto LABEL_10;
      }
      if ( v18 )
      {
        v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
               g_DeviceGraphManager,
               v17);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA10,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v9);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 288LL))(v17);
      if ( v18 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 216LL))(v17);
        v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                g_DeviceGraphManager,
                v17,
                v18,
                v10 == 0,
                0LL);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA1A,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v11);
      }
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v12);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, v4);
        TlgCreateWsz(&v26, **(LPCWSTR **)(a1 + 8));
        TlgWrite(v14, &unk_18017811A, v13, (LPCGUID)v14, 4u, &pData);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v18);
      if ( lpCriticalSection[0] )
        LeaveCriticalSection(lpCriticalSection[0]);
      v15 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    v6 = 0;
LABEL_28:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v17);
    v3 = v20;
    goto LABEL_30;
  }
  v6 = 0;
LABEL_30:
  if ( v3 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 16LL))(v3, *v3);
  }
  return v6;
}
