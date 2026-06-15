/*
 * XREFs of ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800D3494
 * Callers:
 *     _lambda_4abc9a51db5e7647e7b9ed9ebf7217f1_::operator() @ 0x1800E0098 (_lambda_4abc9a51db5e7647e7b9ed9ebf7217f1_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800D4030 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800EC284 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AVSyncLoc.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18010C808 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPolicyConfig::RefreshConnectorFormats(LPCWSTR pwsz)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  void *v6; // r8
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  TraceLoggingHProvider v9; // r10
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  __int64 v12; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // edx
  CPolicyConfig *v14; // rcx
  CEndpointCharacteristics *v16; // [rsp+38h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  int v18; // [rsp+48h] [rbp-9h] BYREF
  WINBOOL fPending; // [rsp+4Ch] [rbp-5h] BYREF
  __int64 v20; // [rsp+50h] [rbp-1h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+7h] BYREF
  __int64 v22[2]; // [rsp+60h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+1Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v22[1] = -2LL;
  v22[0] = 0LL;
  v16 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PVOID, LPCWSTR, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                              + 24LL))(
         g_pEndpointCharacteristicsCache,
         pwsz,
         0LL,
         0LL,
         &v16);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 3927LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_20;
  }
  v5 = *((_QWORD *)v16 + 2);
  v22[0] = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 48LL))(v5, &v18);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 3933LL;
    goto LABEL_5;
  }
  if ( v18 == 4 )
  {
    v3 = 0;
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1801B3518;
      qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v6);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
    }
    if ( **((_DWORD **)Context + 1) > 4u )
    {
      TlgCreateWsz(&pDesc, pwsz);
      TlgWrite(v9, &unk_180172F3C, v7, v8, 3u, &pData);
    }
    v20 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, LPCWSTR, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                    + 24LL))(
            g_DeviceGraphStore,
            pwsz,
            &v20);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v11 = (struct _RTL_CRITICAL_SECTION *)((char *)v16 + 8544);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v16 + 8544));
      Context = v11;
      CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(v12, &lpCriticalSection, v20);
      CEndpointCharacteristics::RefreshDefaultConnectorFormats(v16, v13);
      CPolicyConfig::SetDeviceFormatCommon(v14, pwsz, 0LL, 0LL);
      (*(void (__fastcall **)(struct IPolicyConfig *, LPCWSTR))(*(_QWORD *)g_PolicyConfig + 40LL))(g_PolicyConfig, pwsz);
      v3 = 0;
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      if ( v11 )
        LeaveCriticalSection(v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        3944LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v10);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  }
LABEL_20:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v22);
  return v3;
}
