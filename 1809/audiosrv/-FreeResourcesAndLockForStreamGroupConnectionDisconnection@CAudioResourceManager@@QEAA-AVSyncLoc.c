/*
 * XREFs of ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800EC284
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180003514 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800D3494 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180003E00 (-_Tidy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamGro.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8A48 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  __int64 *v6; // r14
  __int64 *v7; // rbx
  int v8; // eax
  char v9; // al
  __int128 v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  void *v13; // r8
  const struct _TlgProvider_t *v14; // rbx
  const WCHAR *v15; // rax
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int128 v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  __int64 v29; // [rsp+98h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v32; // [rsp+D8h] [rbp-30h]
  __int64 p_pData; // [rsp+E0h] [rbp-28h]
  __int64 *v34; // [rsp+E8h] [rbp-20h]
  int v35; // [rsp+F0h] [rbp-18h]
  int v36; // [rsp+F4h] [rbp-14h]
  __int64 *v37; // [rsp+F8h] [rbp-10h]
  int v38; // [rsp+100h] [rbp-8h]
  int v39; // [rsp+104h] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v28 = -2LL;
  v29 = a2;
  fPending[0] = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3);
  fPending[0] = 1;
  v26 = 0LL;
  v27 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 96LL))(a3, &v26);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB88,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = (__int64 *)*((_QWORD *)&v26 + 1);
  v7 = (__int64 *)v26;
  v25 = (__int64)(*((_QWORD *)&v26 + 1) - v26) >> 3;
  v22 = 0LL;
  LOBYTE(v19) = 0;
  while ( v7 != v6 )
  {
    v23 = 0LL;
    v24 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 104LL))(a3, *v7, &v23);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB91,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v8);
    v22 += (__int64)(*((_QWORD *)&v23 + 1) - v23) >> 3;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 88LL))(*v7);
    v10 = v23;
    if ( v9 )
    {
      LOBYTE(v19) = 1;
      while ( (_QWORD)v10 != *((_QWORD *)&v10 + 1) )
      {
        v12 = *(_QWORD *)v10;
        pData.Ptr = (ULONGLONG)off_180158460;
        p_pData = (__int64)&pData;
        (*(void (__fastcall **)(__int64, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v12 + 360LL))(v12, &pData);
        *(_QWORD *)&v10 = v10 + 8;
      }
    }
    else
    {
      while ( (_QWORD)v10 != *((_QWORD *)&v10 + 1) )
      {
        v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                       + 40LL))(
                g_DeviceGraphManager,
                *(_QWORD *)v10,
                *v7);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB9A,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v11);
        *(_QWORD *)&v10 = v10 + 8;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v7);
    }
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Tidy((__int64)&v23);
    ++v7;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending[1], &Context)
    && fPending[1] )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v13);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v14 > 4u )
  {
    v15 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
    TlgCreateWsz(&pDesc, v15);
    v32 = &v25;
    p_pData = 8LL;
    v34 = &v22;
    v35 = 8;
    v36 = 0;
    v37 = &v19;
    v38 = 1;
    v39 = 0;
    TlgWrite(v14, &unk_180173911, v16, v17, 6u, &pData);
  }
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v26);
  return a2;
}
