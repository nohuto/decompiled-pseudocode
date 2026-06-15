/*
 * XREFs of _lambda_3af8306e4cb261445d9be7b235e038d7_::operator() @ 0x180065650
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Do_call @ 0x1800E6090 (std--_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800254A0 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6B8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6BF8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_3af8306e4cb261445d9be7b235e038d7_::operator()(__int64 a1)
{
  const WCHAR *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  char v7; // al
  int v8; // eax
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  TraceLoggingHProvider v11; // r10
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp-11h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+58h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+98h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v18 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(*(_QWORD *)a1, &v18) < 0 || !v18 )
  {
    v4 = 0;
    goto LABEL_26;
  }
  v15 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v18, &v15) >= 0
    && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 392LL))(v15, **(_QWORD **)(a1 + 8)) )
  {
    v2 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 128LL))(v15);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v17);
    v3 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, const WCHAR *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                         + 24LL))(
           g_DeviceGraphStore,
           v2,
           &v17);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        2524LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v3);
LABEL_10:
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v17);
      goto LABEL_23;
    }
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v17 + 112LL))(v17, lpCriticalSection);
    v16 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 200LL))(v15, &v16);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        2532LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
      if ( lpCriticalSection[0] )
      {
        LeaveCriticalSection(lpCriticalSection[0]);
        lpCriticalSection[0] = 0LL;
      }
      goto LABEL_10;
    }
    if ( v16 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
             g_DeviceGraphManager,
             v15);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9E8,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v6);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 288LL))(v15);
    if ( v16 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 216LL))(v15);
      v8 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
             g_DeviceGraphManager,
             v15,
             v16,
             v7 == 0,
             0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9F2,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v8);
    }
    if ( *(_DWORD *)AudioSrvTelemetryProvider::Provider() > 4u )
    {
      TlgCreateWsz(&pDesc, v2);
      TlgCreateWsz(&v22, **(LPCWSTR **)(a1 + 8));
      TlgWrite(v11, &unk_180174162, v9, v10, 4u, &pData);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
    if ( lpCriticalSection[0] )
    {
      LeaveCriticalSection(lpCriticalSection[0]);
      lpCriticalSection[0] = 0LL;
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v17);
  }
  v4 = 0;
LABEL_23:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_26:
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  }
  return v4;
}
