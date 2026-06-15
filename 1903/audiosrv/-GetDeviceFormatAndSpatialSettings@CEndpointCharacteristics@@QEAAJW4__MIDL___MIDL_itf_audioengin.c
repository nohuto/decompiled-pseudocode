/*
 * XREFs of ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000AE28
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180002AB4 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005CA8 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800378D0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18004E0B0 (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011A544 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18012DFB0 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 * Callees:
 *     ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x180004B4C (-GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAud.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000B00C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180017BB0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
        CEndpointCharacteristics *this,
        unsigned int a2,
        __int64 a3,
        struct tWAVEFORMATEX **a4,
        struct SpatialAudioSettings **a5,
        unsigned int *a6,
        struct SpatialAudioEncoderDescriptor **a7)
{
  struct SpatialAudioSettings **v10; // r14
  unsigned int *v11; // r15
  struct SpatialAudioEncoderDescriptor **v12; // r12
  void (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // r9
  __int64 v14; // rcx
  unsigned int DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9; // ebx
  struct SpatialAudioEncoderDescriptor *v17; // rbx
  struct SpatialAudioSettings *v18; // rsi
  unsigned __int64 v19; // r13
  struct SpatialAudioEncoderDescriptor *v20; // rdi
  int SpatialAudioSettings; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  struct SpatialAudioEncoderDescriptor *v24; // rax
  _QWORD v25[2]; // [rsp+30h] [rbp-50h] BYREF
  __m256i v26; // [rsp+40h] [rbp-40h] BYREF
  __m256i v27; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v30; // [rsp+D8h] [rbp+58h] BYREF

  v25[1] = -2LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v10 = a5;
    if ( a5 )
      *a5 = 0LL;
    v11 = a6;
    if ( a6 )
    {
      *a6 = 0;
      if ( !v10 )
      {
        v22 = 8408LL;
        goto LABEL_25;
      }
    }
    v12 = a7;
    if ( a7 )
    {
      *a7 = 0LL;
      if ( !v10 )
      {
        v22 = 8414LL;
        goto LABEL_25;
      }
      if ( !v11 )
      {
        v22 = 8415LL;
        goto LABEL_25;
      }
    }
    v30 = 0;
    v13 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)this + 2);
    v14 = 0LL;
    v25[0] = 0LL;
    if ( v13 )
    {
      (**v13)(v13, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, v25);
      v14 = v25[0];
    }
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 88LL))(v14, &v30);
      v14 = v25[0];
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(this, &v26, a2, 1LL);
    v27.m256i_i64[0] = (__int64)this;
    v27.m256i_i32[2] = a2;
    *(_OWORD *)((char *)&v27.m256i_u64[1] + 4) = *(_OWORD *)v26.m256i_i8;
    v26 = v27;
    DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9 = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
                                                                      this,
                                                                      (__int64)&v26,
                                                                      (__int64)a4);
    if ( (DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9 & 0x80000000) != 0 )
    {
      v22 = 8420LL;
      goto LABEL_27;
    }
    if ( !v10 )
      return 0LL;
    v17 = 0LL;
    v25[0] = 0LL;
    v18 = (struct SpatialAudioSettings *)CoTaskMemAlloc(0x48uLL);
    v26.m256i_i64[0] = (__int64)v18;
    if ( v18 )
    {
      v19 = 0LL;
      v20 = 0LL;
      if ( !v12 )
      {
LABEL_17:
        v30 = 0;
        SpatialAudioSettings = CEndpointCharacteristics::GetSpatialAudioSettings(this, v18, v17, v19, &v30);
        DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9 = SpatialAudioSettings;
        if ( SpatialAudioSettings >= 0 )
        {
          *v10 = v18;
          if ( v12 )
          {
            *v12 = v20;
            v20 = 0LL;
          }
          if ( v11 )
            *v11 = v30;
          if ( v20 )
            CoTaskMemFree(v20);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20FC,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)SpatialAudioSettings);
LABEL_41:
        if ( v20 )
          CoTaskMemFree(v20);
        if ( v18 )
          CoTaskMemFree(v18);
        return DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9;
      }
      v19 = 6672LL;
      v24 = (struct SpatialAudioEncoderDescriptor *)CoTaskMemAlloc(0x1A10uLL);
      v17 = v24;
      v25[0] = v24;
      if ( v24 )
      {
        v20 = v24;
        goto LABEL_17;
      }
      v23 = 8437LL;
    }
    else
    {
      v23 = 8430LL;
    }
    DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    v20 = 0LL;
    goto LABEL_41;
  }
  v22 = 8397LL;
LABEL_25:
  DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9 = -2147467261;
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9);
  return DeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9;
}
