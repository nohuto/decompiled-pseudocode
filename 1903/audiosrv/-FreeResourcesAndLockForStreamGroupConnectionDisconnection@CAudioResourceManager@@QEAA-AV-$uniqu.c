/*
 * XREFs of ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x18000453C
 * Callers:
 *     ?LockEndpointForUse@CPolicyConfig@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1800044E0 (-LockEndpointForUse@CPolicyConfig@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800423A0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  const struct _TlgProvider_t *v8; // rbx
  const WCHAR *v9; // rax
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  __int64 v12; // rbx
  int v14; // eax
  char v15; // al
  _QWORD *v16; // rbx
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  int v20; // eax
  __int64 v21; // rdi
  int cData; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *Context; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h]
  WINBOOL fPending[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h]
  _QWORD v31[4]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v34; // [rsp+D8h] [rbp-30h]
  __int64 p_pData; // [rsp+E0h] [rbp-28h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F4h] [rbp-14h]
  __int64 *v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v31[1] = -2LL;
  v31[2] = a2;
  fPending[0] = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3);
  fPending[0] = 1;
  v29 = 0LL;
  v30 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 96LL))(a3, &v29);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v5,
      cData);
  v6 = (_QWORD *)*((_QWORD *)&v29 + 1);
  v7 = (_QWORD *)v29;
  v31[0] = (__int64)(*((_QWORD *)&v29 + 1) - v29) >> 3;
  v28 = 0LL;
  LOBYTE(v23) = 0;
  while ( v7 != v6 )
  {
    *(_OWORD *)Context_8 = 0LL;
    v26 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)a3 + 104LL))(a3, *v7, Context_8);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB75,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14,
        cData);
    v28 += ((char *)Context_8[1] - (char *)Context_8[0]) >> 3;
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 88LL))(*v7);
    v17 = Context_8[1];
    v16 = Context_8[0];
    if ( v15 )
    {
      LOBYTE(v23) = 1;
      if ( Context_8[0] == Context_8[1] )
        goto LABEL_18;
      do
      {
        v18 = *v16;
        pData.Ptr = (ULONGLONG)off_18015DE38;
        p_pData = (__int64)&pData;
        (*(void (__fastcall **)(__int64, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v18 + 360LL))(v18, &pData);
        ++v16;
      }
      while ( v16 != v17 );
    }
    else
    {
      while ( v16 != v17 )
      {
        v20 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                      + 40LL))(
                g_DeviceGraphManager,
                *v16,
                *v7);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB7E,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v20,
            cData);
        ++v16;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v7);
    }
    v16 = Context_8[0];
LABEL_18:
    if ( v16 )
    {
      v19 = Context_8[1];
      if ( v16 != Context_8[1] )
      {
        do
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v16++);
        while ( v16 != v19 );
        v16 = Context_8[0];
      }
      std::_Deallocate<16,0>(v16, (v26 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    ++v7;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
         0,
         &fPending[1],
         (LPVOID *)&Context)
    && fPending[1] )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v8 = (const struct _TlgProvider_t *)Context[1];
  if ( *(_DWORD *)v8 > 4u )
  {
    v9 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
    TlgCreateWsz(&pDesc, v9);
    v34 = v31;
    p_pData = 8LL;
    v36 = &v28;
    v37 = 8;
    v38 = 0;
    v39 = &v23;
    v40 = 1;
    v41 = 0;
    TlgWrite(v8, &unk_180178A16, v10, v11, 6u, &pData);
  }
  v12 = v29;
  if ( (_QWORD)v29 )
  {
    v21 = *((_QWORD *)&v29 + 1);
    if ( (_QWORD)v29 != *((_QWORD *)&v29 + 1) )
    {
      do
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v12);
        v12 += 8LL;
      }
      while ( v12 != v21 );
      v12 = v29;
    }
    std::_Deallocate<16,0>(v12, (v30 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return a2;
}
