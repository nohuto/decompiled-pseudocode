/*
 * XREFs of ?GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180048258
 * Callers:
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180048220 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetDeviceFormatAndSpatialSettings@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x1800D2970 (-GetDeviceFormatAndSpatialSettings@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatial.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800D4030 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180012E8C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x1800312B0 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180034EA0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x18010B4E4 (-GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAud.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::GetDeviceFormatCommon(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct tWAVEFORMATEX **a4,
        struct SpatialAudioSettings **a5,
        unsigned int *a6,
        struct SpatialAudioEncoderDescriptor **a7)
{
  int v9; // esi
  bool v10; // bl
  int DeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee; // eax
  unsigned int v12; // esi
  struct SpatialAudioSettings *v13; // rdi
  __int64 v15; // rdx
  int MMDeviceIdFromInterfaceId; // eax
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // rax
  struct SpatialAudioEncoderDescriptor *v20; // rbx
  struct SpatialAudioSettings *v21; // rax
  struct SpatialAudioSettings *v22; // r13
  unsigned __int64 v23; // rsi
  struct SpatialAudioEncoderDescriptor *v24; // rax
  int SpatialAudioSettings; // eax
  __int64 v26; // r9
  __int64 v27; // rdx
  struct SpatialAudioEncoderDescriptor *v28; // rax
  int v29; // [rsp+28h] [rbp-71h]
  int v30; // [rsp+28h] [rbp-71h]
  unsigned int v31; // [rsp+38h] [rbp-61h] BYREF
  CEndpointCharacteristics *v32; // [rsp+40h] [rbp-59h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-51h] BYREF
  __m256i v34; // [rsp+50h] [rbp-49h]
  __int64 v35; // [rsp+70h] [rbp-29h]
  __m256i v36; // [rsp+78h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]

  v35 = -2LL;
  v31 = a3;
  if ( !a4 )
  {
    v15 = 2671LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL,
      v29);
    return 2147500035LL;
  }
  *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
  {
    *a6 = 0;
    if ( !a5 )
    {
      v15 = 2682LL;
      goto LABEL_14;
    }
  }
  if ( a7 )
  {
    *a7 = 0LL;
    if ( !a5 )
    {
      v15 = 2688LL;
      goto LABEL_14;
    }
    if ( !a6 )
    {
      v15 = 2689LL;
      goto LABEL_14;
    }
  }
  v9 = 0;
  v32 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                              + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL) < 0 )
  {
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    MMDeviceIdFromInterfaceId = mmdDevGetMMDeviceIdFromInterfaceId(a2, &pv);
    v12 = MMDeviceIdFromInterfaceId;
    if ( MMDeviceIdFromInterfaceId >= 0 )
    {
      v32 = 0LL;
      MMDeviceIdFromInterfaceId = (*(__int64 (__fastcall **)(PVOID, LPVOID, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                           + 24LL))(
                                    g_pEndpointCharacteristicsCache,
                                    pv,
                                    0LL,
                                    0LL);
      v12 = MMDeviceIdFromInterfaceId;
      if ( MMDeviceIdFromInterfaceId >= 0 )
      {
        *(GUID *)v36.m256i_i8 = GUID_00000000_0000_0000_0000_000000000000;
        MMDeviceIdFromInterfaceId = mmdDevGetInterfaceClassGuid(a2, &v36);
        v12 = MMDeviceIdFromInterfaceId;
        if ( MMDeviceIdFromInterfaceId >= 0 )
        {
          v19 = v36.m256i_i64[0] - DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
          if ( v36.m256i_i64[0] == (_QWORD)DEVINTERFACE_AUDIO_KEYWORDDETECTOR )
            v19 = v36.m256i_i64[1] - *((_QWORD *)&DEVINTERFACE_AUDIO_KEYWORDDETECTOR + 1);
          v9 = v19 == 0 ? 3 : 0;
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_7;
        }
        v17 = 2704LL;
      }
      else
      {
        v17 = 2701LL;
      }
    }
    else
    {
      v17 = 2700LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)MMDeviceIdFromInterfaceId,
      (int)&v32);
    v18 = pv;
    if ( !pv )
      goto LABEL_10;
LABEL_54:
    CoTaskMemFree(v18);
    goto LABEL_10;
  }
LABEL_7:
  v10 = (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(v32) != 0;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(v32, (GUID *)&v36, v9, 1);
  v34.m256i_i64[0] = (__int64)v32;
  v34.m256i_i32[2] = v9;
  *(_OWORD *)((char *)&v34.m256i_u64[1] + 4) = *(_OWORD *)v36.m256i_i8;
  v36 = v34;
  DeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
                                                                    v32,
                                                                    v31 != 0,
                                                                    v10,
                                                                    v9,
                                                                    v36.m256i_i64,
                                                                    a4);
  v12 = DeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee;
  v13 = 0LL;
  if ( DeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)DeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee,
      v30);
    goto LABEL_10;
  }
  if ( !a5 )
    goto LABEL_9;
  v20 = 0LL;
  pv = 0LL;
  v21 = (struct SpatialAudioSettings *)CoTaskMemAlloc(0x48uLL);
  v22 = v21;
  if ( !v21 )
  {
    v27 = 2724LL;
    goto LABEL_49;
  }
  v13 = v21;
  v36.m256i_i64[0] = (__int64)v21;
  v23 = 0LL;
  if ( !a7 )
    goto LABEL_38;
  v23 = 6672LL;
  v24 = (struct SpatialAudioEncoderDescriptor *)CoTaskMemAlloc(0x1A10uLL);
  if ( !v24 )
  {
    v27 = 2731LL;
LABEL_49:
    v12 = -2147024882;
    v26 = 2147942414LL;
    goto LABEL_50;
  }
  v20 = v24;
  pv = v24;
LABEL_38:
  v31 = 0;
  SpatialAudioSettings = CEndpointCharacteristics::GetSpatialAudioSettings(v32, v22, v20, v23, &v31);
  v12 = SpatialAudioSettings;
  if ( SpatialAudioSettings < 0 )
  {
    v26 = (unsigned int)SpatialAudioSettings;
    v27 = 2738LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v26,
      v30);
    if ( v20 )
      CoTaskMemFree(v20);
    if ( !v13 )
      goto LABEL_10;
    v18 = v13;
    goto LABEL_54;
  }
  *a5 = v22;
  if ( a7 )
  {
    v28 = v20;
    v20 = 0LL;
    *a7 = v28;
  }
  if ( a6 )
    *a6 = v31;
  if ( v20 )
    CoTaskMemFree(v20);
LABEL_9:
  v12 = 0;
LABEL_10:
  if ( v32 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v32 + 16LL))(v32);
  return v12;
}
