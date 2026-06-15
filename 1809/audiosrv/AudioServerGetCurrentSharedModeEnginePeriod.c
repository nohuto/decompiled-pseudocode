/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180002678 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180006370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     MIDL_user_allocate @ 0x180014480 (MIDL_user_allocate.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D0E70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800D1464 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D1BF0 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___ @ 0x1800D8828 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800D8828.c)
 */

// Hidden C++ exception states: #wind=34
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  __int64 v7; // r8
  void *v8; // r8
  int MixFormat; // r12d
  int v10; // ebx
  int (*v11)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v12; // xmm6
  __int64 v13; // rbx
  int v14; // edi
  const struct tWAVEFORMATEX *v15; // rax
  struct _GUID *v16; // rdx
  LPVOID v17; // rbx
  struct _GUID v18; // xmm6
  struct IAudioMediaType *v19; // rdi
  struct IAudioMediaType *v20; // rsi
  LPVOID v21; // r14
  const struct tWAVEFORMATEX *v22; // rax
  __int64 v23; // r15
  double v24; // xmm6_8
  struct _GUID v25; // xmm7
  struct tWAVEFORMATEX *v26; // rsi
  struct _GUID v27; // xmm8
  struct IAudioMediaType *v28; // rbx
  struct IAudioMediaType *v29; // rdi
  const struct tWAVEFORMATEX *v30; // rax
  void *v31; // r14
  __int64 v32; // rbx
  void *v33; // rax
  __int64 *v34; // rdi
  __int64 *i; // rbx
  CEndpointCharacteristics *v37; // [rsp+78h] [rbp-90h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-88h] BYREF
  WINBOOL fPending[2]; // [rsp+88h] [rbp-80h] BYREF
  struct IAudioMediaType *v40; // [rsp+90h] [rbp-78h] BYREF
  struct IAudioMediaType *v41; // [rsp+98h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  LPVOID v44; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v47; // [rsp+D8h] [rbp-30h]
  struct _GUID v48; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v49; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v50; // [rsp+108h] [rbp+0h] BYREF
  _QWORD *v51; // [rsp+110h] [rbp+8h]
  __int64 v52; // [rsp+118h] [rbp+10h]
  _BYTE v53[16]; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v54; // [rsp+130h] [rbp+28h]
  struct _TP_TIMER *v55[7]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v56; // [rsp+170h] [rbp+68h]
  __int128 v57; // [rsp+180h] [rbp+78h] BYREF

  v52 = -2LL;
  v51 = a4;
  v56 = *a3;
  v57 = v56;
  EtwEventActivityIdControl(4LL, &v57);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v55,
    *((struct _TP_TIMER **)Context + 1),
    v7,
    (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod");
  *(_QWORD *)fPending = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v37 = 0LL;
  v50 = 0LL;
  MixFormat = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( MixFormat < 0 )
    goto LABEL_88;
  MixFormat = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                a2,
                0LL,
                0LL,
                &v37);
  if ( MixFormat < 0 )
    goto LABEL_88;
  MixFormat = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v37 + 2) + 40LL))(*((_QWORD *)v37 + 2), &v44);
  if ( MixFormat < 0 )
    goto LABEL_88;
  MixFormat = DeriveAudioProcessingModeConfiguration(
                *((_DWORD *)a3 + 4),
                *((_DWORD *)a3 + 6),
                *((_DWORD *)a3 + 24),
                v37,
                *((_DWORD *)v37 + 39) == 1,
                0,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                0,
                0,
                (struct _GUID *)pv,
                &v49,
                &v48,
                0LL);
  if ( MixFormat < 0 )
    goto LABEL_88;
  MixFormat = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                       + 24LL))(
                g_DeviceGraphStore,
                v44,
                &v50);
  if ( MixFormat < 0 )
    goto LABEL_88;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v50 + 80LL))(v50, &v42);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x34u,
      (__int64)&WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
      (__int64)(*((_QWORD *)&v42 + 1) - v42) >> 3);
  }
  v12 = *(struct _GUID *)pv;
  if ( v10 >= 0 )
  {
    v54 = &v45;
    v47 = &v45;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___(
      (__int64)v53,
      v42,
      *((__int64 *)&v42 + 1),
      (__int64)pv);
  }
  v13 = v45;
  Context = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  pv[0] = 0LL;
  if ( v45 )
  {
    v14 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 48LL))(v45) + 16);
    v15 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
    MixFormat = CAudioMediaType::Create(v15, v14 + 18, (struct IAudioMediaType **)&Context, 0.0, 0);
    if ( MixFormat < 0 )
    {
      if ( Context )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
      goto LABEL_87;
    }
    v17 = Context;
    MixFormat = DeriveDevicePipeFormatFromConnectorFormat(
                  v37,
                  v16,
                  *((_DWORD *)a3 + 5),
                  (struct IAudioMediaType *)Context,
                  &v40);
    if ( MixFormat < 0 )
    {
      if ( v40 )
        ((void (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->Release)(v40);
      if ( v17 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_87;
    }
    v18 = v49;
    v19 = v40;
    MixFormat = DeriveMixFormatFromDevicePipeFormat(v37, &v49, *((_DWORD *)a3 + 5), (struct IUnknown *)v40, &v41, 0LL);
    if ( MixFormat < 0 )
    {
      if ( v41 )
        ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
      if ( v19 )
        ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
      if ( v17 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_87;
    }
    v49 = v18;
    v20 = v41;
    MixFormat = DeriveStreamFormatFromMixFormat(
                  v37,
                  &v49,
                  *((_DWORD *)a3 + 5),
                  (struct IUnknown *)v41,
                  (struct IAudioMediaType **)pv);
    if ( MixFormat < 0 )
    {
      if ( pv[0] )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 16LL))(pv[0]);
      if ( v20 )
        ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
      if ( v19 )
        ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
      if ( v17 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_87;
    }
    v21 = pv[0];
    v22 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 40LL))(pv[0]);
    MixFormat = CloneWaveFormat(v22, (struct tWAVEFORMATEX **)fPending);
    if ( MixFormat < 0 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v20 )
        ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
      if ( v19 )
        ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
      if ( v17 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_87;
    }
    v23 = v45;
    v24 = (double)*(int *)((*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 40LL))(v17) + 4);
    *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23) * v24 / 10000000.0 + 0.5);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v20 )
      ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
    if ( v19 )
      ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_84;
  }
  v25 = v48;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v37,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                &v48,
                v11,
                (struct tWAVEFORMATEX **)pv);
  if ( MixFormat < 0 )
  {
    CoTaskMemFree(0LL);
    CoTaskMemFree(pv[0]);
    goto LABEL_87;
  }
  v26 = (struct tWAVEFORMATEX *)pv[0];
  MixFormat = CAudioMediaType::Create(
                (const struct tWAVEFORMATEX *)pv[0],
                (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18,
                &v41,
                0.0,
                0);
  if ( MixFormat < 0 )
  {
    if ( v41 )
      ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
LABEL_72:
    CoTaskMemFree(0LL);
    CoTaskMemFree(v26);
    goto LABEL_87;
  }
  v27 = v49;
  v48 = v49;
  v28 = v41;
  MixFormat = DeriveStreamFormatFromMixFormat(v37, &v48, *((_DWORD *)a3 + 5), (struct IUnknown *)v41, &v40);
  if ( MixFormat < 0 )
  {
    if ( v40 )
      ((void (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->Release)(v40);
    if ( v28 )
      ((void (__fastcall *)(struct IAudioMediaType *))v28->lpVtbl->Release)(v28);
    goto LABEL_72;
  }
  v29 = v40;
  v30 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->GetAudioFormat)(v40);
  MixFormat = CloneWaveFormat(v30, (struct tWAVEFORMATEX **)fPending);
  if ( MixFormat < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    if ( v28 )
      ((void (__fastcall *)(struct IAudioMediaType *))v28->lpVtbl->Release)(v28);
    goto LABEL_72;
  }
  v48 = v12;
  v49 = v27;
  *(struct _GUID *)pv = v25;
  MixFormat = DeriveConnectorFormatFromStreamFormat(
                v37,
                *((_DWORD *)a3 + 5),
                v26,
                (struct _GUID *)pv,
                &v49,
                &v48,
                *((_DWORD *)a3 + 9),
                (struct tWAVEFORMATEX **)&Context);
  if ( MixFormat < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    if ( v28 )
      ((void (__fastcall *)(struct IAudioMediaType *))v28->lpVtbl->Release)(v28);
    CoTaskMemFree(Context);
    CoTaskMemFree(v26);
    goto LABEL_87;
  }
  v48 = v12;
  v31 = Context;
  MixFormat = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                (__int64)v37,
                *((_DWORD *)a3 + 5),
                (unsigned __int16 *)Context,
                &v48,
                0,
                a5,
                0LL,
                0LL,
                0LL);
  if ( MixFormat < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    if ( v28 )
      ((void (__fastcall *)(struct IAudioMediaType *))v28->lpVtbl->Release)(v28);
    CoTaskMemFree(v31);
    CoTaskMemFree(v26);
LABEL_87:
    if ( MixFormat >= 0 )
      goto LABEL_89;
    goto LABEL_88;
  }
  ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
  if ( v28 )
    ((void (__fastcall *)(struct IAudioMediaType *))v28->lpVtbl->Release)(v28);
  CoTaskMemFree(v31);
  CoTaskMemFree(v26);
LABEL_84:
  v32 = *(_QWORD *)fPending;
  v33 = MIDL_user_allocate(*(unsigned __int16 *)(*(_QWORD *)fPending + 16LL) + 18LL);
  *v51 = v33;
  if ( v33 )
  {
    memcpy_0(v33, *(const void **)fPending, *(unsigned __int16 *)(v32 + 16) + 18LL);
    goto LABEL_87;
  }
  MixFormat = -2147024882;
LABEL_88:
  AudSrvTraceLoggingErrorHelper("AudioServerGetCurrentSharedModeEnginePeriod", 4401, MixFormat);
LABEL_89:
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  if ( v37 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v37 + 16LL))(v37);
  CoTaskMemFree(v44);
  v44 = 0LL;
  if ( (_QWORD)v42 )
  {
    v34 = (__int64 *)*((_QWORD *)&v42 + 1);
    for ( i = (__int64 *)v42; i != v34; ++i )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(i);
    std::_Deallocate<16,0>((void *)v42, (const struct std::nothrow_t *)((v43 - v42) & 0xFFFFFFFFFFFFFFF8uLL));
    v42 = 0uLL;
    v43 = 0LL;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v45);
  CoTaskMemFree(*(LPVOID *)fPending);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v55);
  EtwEventActivityIdControl(4LL, &v57);
  return (unsigned int)MixFormat;
}
