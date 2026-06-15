/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800DF320
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18003CFE0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006B84 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180008414 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1801182FC (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDeviceDefaults(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  struct tWAVEFORMATEX *v11; // rdi
  int ConnectorFormatForProcessingMode; // ebx
  __int64 v13; // rax
  int MixFormat; // eax
  LPVOID v16; // [rsp+30h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-40h] BYREF
  struct _GUID v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v19; // [rsp+50h] [rbp-28h]
  __int64 v20; // [rsp+58h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-18h]

  v20 = -2LL;
  v19 = a6;
  *(_QWORD *)&v18.Data1 = a7;
  v21 = 0LL;
  v11 = 0LL;
  pv = 0LL;
  v16 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  ConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                       *((_QWORD *)this + 2),
                                       &v16);
  if ( ConnectorFormatForProcessingMode >= 0 )
  {
    if ( !*(_QWORD *)&v18.Data1 && !v19
      || (ConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(CPolicyConfig *, LPVOID, _QWORD, __int64 *, _QWORD))(*(_QWORD *)g_PolicyConfig + 56LL))(
                                               g_PolicyConfig,
                                               v16,
                                               0LL,
                                               v19,
                                               *(_QWORD *)&v18.Data1),
          ConnectorFormatForProcessingMode >= 0) )
    {
      if ( !a4
        || (v18 = *a3,
            ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                                 this,
                                                 a2,
                                                 &v18,
                                                 (struct tWAVEFORMATEX **)&pv),
            v11 = (struct tWAVEFORMATEX *)pv,
            ConnectorFormatForProcessingMode >= 0) )
      {
        if ( !a5 )
          goto LABEL_19;
        v13 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v13 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( v13
          || !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(this, (unsigned int)a2) )
        {
          v18 = *a3;
          MixFormat = CEndpointCharacteristics::GetMixFormat(this, a2, &v18, a5);
        }
        else
        {
          v18 = *a3;
          MixFormat = CEndpointCharacteristics::GetDevicePipeFormat(this, a2, &v18, a5);
        }
        ConnectorFormatForProcessingMode = MixFormat;
        if ( MixFormat >= 0 )
        {
LABEL_19:
          if ( a4 )
            *a4 = v11;
          v11 = 0LL;
        }
      }
      if ( v11 )
        CoTaskMemFree(v11);
    }
  }
  if ( v16 )
  {
    CoTaskMemFree(v16);
    v16 = 0LL;
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x37u,
        (__int64)&WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
        ConnectorFormatForProcessingMode);
    }
    AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 5815, ConnectorFormatForProcessingMode);
  }
  return (unsigned int)ConnectorFormatForProcessingMode;
}
