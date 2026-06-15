/*
 * XREFs of ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800D4030
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800D3494 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800D3C20 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x1800D3FF0 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 *     ?SetDeviceSpatialSettings@CPolicyConfig@@UEAAJPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D5050 (-SetDeviceSpatialSettings@CPolicyConfig@@UEAAJPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x1800312B0 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180048258 (-GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSetting.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_f2d43d9fce42a4bdda65a41e87b82fa0_::operator() @ 0x1800CECC8 (_lambda_f2d43d9fce42a4bdda65a41e87b82fa0_--operator().c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPolicyConfig::SetDeviceFormatCommon(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3,
        const struct SpatialAudioSettings *a4)
{
  char v7; // r14
  int wFormatTag; // eax
  BOOL inited; // eax
  void *v10; // r8
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  TraceLoggingHProvider v13; // r10
  void *v14; // r8
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  TraceLoggingHProvider v17; // r10
  BOOL v18; // eax
  void *v19; // r8
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  TraceLoggingHProvider v22; // r10
  void *v23; // r8
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  TraceLoggingHProvider v26; // r10
  int v27; // eax
  int DeviceFormatCommon; // ebx
  struct _RTL_CRITICAL_SECTION *v29; // r15
  CPolicyConfig *v30; // rcx
  struct tWAVEFORMATEX *v31; // r12
  void *v32; // rcx
  struct tWAVEFORMATEX *v33; // r13
  _QWORD *Ptr; // r12
  void *v35; // rcx
  __int64 v36; // r13
  int v37; // eax
  struct IPolicyConfig *v38; // rdx
  char v40; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v42[2]; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+54h] [rbp-ACh] BYREF
  CEndpointCharacteristics *v44; // [rsp+58h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v45; // [rsp+60h] [rbp-A0h] BYREF
  int HasHardwareAudioEngine; // [rsp+68h] [rbp-98h] BYREF
  LPVOID pv[2]; // [rsp+70h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *v48[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v49; // [rsp+90h] [rbp-70h]
  char v50; // [rsp+A0h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v52; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+E0h] [rbp-20h] BYREF
  WORD *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  DWORD *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+110h] [rbp+10h] BYREF
  void *p_nChannels; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  DWORD *p_nSamplesPerSec; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  DWORD *p_nAvgBytesPerSec; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  struct tWAVEFORMATEX **v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  pv[1] = (LPVOID)-2LL;
  v7 = 1;
  Context = 0LL;
  if ( a3 )
  {
    wFormatTag = a3->wFormatTag;
    *(GUID *)v48 = GUID_00000000_0000_0010_8000_00aa00389b71;
    LODWORD(v48[0]) = wFormatTag;
    inited = InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( a4 )
    {
      if ( inited && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v10);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        v40 = *(_BYTE *)a4;
        v54.Ptr = (ULONGLONG)&v40;
        *(_QWORD *)&v54.Size = 1LL;
        v55 = (WORD *)((char *)a4 + 12);
        v56 = 16LL;
        v42[0] = *((_WORD *)a4 + 34);
        v57 = (DWORD *)v42;
        v58 = 2LL;
        TlgCreateWsz(&v59, L"WFEX");
        p_nChannels = &a3->nChannels;
        v61 = 2LL;
        p_nSamplesPerSec = &a3->nSamplesPerSec;
        v63 = 4LL;
        p_nAvgBytesPerSec = &a3->nAvgBytesPerSec;
        v65 = 4LL;
        v66 = v48;
        v67 = 16LL;
        TlgWrite(v13, &unk_1801730CE, v11, v12, 0xBu, &pData);
      }
    }
    else
    {
      if ( inited && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v14);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        TlgCreateWsz(&v54, L"WFEX");
        v55 = &a3->nChannels;
        v56 = 2LL;
        v57 = &a3->nSamplesPerSec;
        v58 = 4LL;
        v59.Ptr = (ULONGLONG)&a3->nAvgBytesPerSec;
        *(_QWORD *)&v59.Size = 4LL;
        p_nChannels = v48;
        v61 = 16LL;
        TlgWrite(v17, &unk_180172FEF, v15, v16, 8u, &pData);
      }
    }
  }
  else
  {
    v18 = InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( a4 )
    {
      if ( v18 && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v19);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        v40 = *(_BYTE *)a4;
        v54.Ptr = (ULONGLONG)&v40;
        *(_QWORD *)&v54.Size = 1LL;
        v55 = (WORD *)((char *)a4 + 12);
        v56 = 16LL;
        v42[0] = *((_WORD *)a4 + 34);
        v57 = (DWORD *)v42;
        v58 = 2LL;
        TlgWrite(v22, &unk_18017306B, v20, v21, 6u, &pData);
      }
    }
    else
    {
      if ( v18 && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v23);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, a2);
        TlgWrite(v26, &unk_180172FAE, v24, v25, 3u, &pData);
      }
    }
  }
  v44 = 0LL;
  v27 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v44);
  DeviceFormatCommon = v27;
  if ( v27 >= 0 )
  {
    v29 = (struct _RTL_CRITICAL_SECTION *)((char *)v44 + 8544);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v44 + 8544));
    Context = v29;
    v45 = 0LL;
    pv[0] = 0LL;
    pData.Ptr = (ULONGLONG)pv;
    *(_QWORD *)&pData.Size = 0LL;
    LOBYTE(v52) = 1;
    v48[0] = (struct tWAVEFORMATEX *)&v45;
    v48[1] = 0LL;
    LOBYTE(v49) = 1;
    DeviceFormatCommon = CPolicyConfig::GetDeviceFormatCommon(
                           v30,
                           a2,
                           0,
                           &v48[1],
                           (struct SpatialAudioSettings **)&pData.Size,
                           0LL,
                           0LL);
    if ( (_BYTE)v49 )
    {
      v31 = v48[0];
      v32 = *(void **)v48[0];
      v33 = v48[1];
      if ( v48[1] != *(struct tWAVEFORMATEX **)v48[0] )
      {
        if ( v32 )
          CoTaskMemFree(v32);
        *(_QWORD *)&v31->wFormatTag = v33;
      }
    }
    if ( (_BYTE)v52 )
    {
      Ptr = (_QWORD *)pData.Ptr;
      v35 = *(void **)pData.Ptr;
      v36 = *(_QWORD *)&pData.Size;
      if ( *(_QWORD *)&pData.Size != *(_QWORD *)pData.Ptr )
      {
        if ( v35 )
          CoTaskMemFree(v35);
        *Ptr = v36;
      }
    }
    if ( DeviceFormatCommon >= 0 )
    {
      HasHardwareAudioEngine = CEndpointCharacteristics::HasHardwareAudioEngine(v44);
      pData.Ptr = (ULONGLONG)&v44;
      *(_QWORD *)&pData.Size = pv;
      *(_QWORD *)&v52 = &v45;
      *((_QWORD *)&v52 + 1) = &HasHardwareAudioEngine;
      *(EVENT_DATA_DESCRIPTOR *)v48 = pData;
      v49 = v52;
      v50 = 1;
      v37 = CPolicyConfig::SetDeviceFormatInternal(v44, HasHardwareAudioEngine, eHostProcessConnector, v45, a3, a4);
      DeviceFormatCommon = v37;
      if ( v37 >= 0 )
      {
        v50 = 0;
        DeviceFormatCommon = 0;
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          2926LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v37);
      }
      if ( v7 )
      {
        v50 = 0;
        lambda_f2d43d9fce42a4bdda65a41e87b82fa0_::operator()((CEndpointCharacteristics ***)v48, v38);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        2906LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)DeviceFormatCommon);
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( v45 )
      CoTaskMemFree(v45);
    if ( v29 )
      LeaveCriticalSection(v29);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      2899LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v27);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
  return (unsigned int)DeviceFormatCommon;
}
