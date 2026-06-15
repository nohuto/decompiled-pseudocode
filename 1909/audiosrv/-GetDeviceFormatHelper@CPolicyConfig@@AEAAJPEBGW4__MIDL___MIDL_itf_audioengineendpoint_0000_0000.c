/*
 * XREFs of ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18004F0D0
 * Callers:
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18004F090 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetDeviceFormatAndSpatialSettings@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x1800DF080 (-GetDeviceFormatAndSpatialSettings@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatial.c)
 *     ?GetDeviceFormatForConnector@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800DF0F0 (-GetDeviceFormatForConnector@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000E10C (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetDeviceFormatHelper(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tWAVEFORMATEX **a5,
        struct SpatialAudioSettings **a6,
        unsigned int *a7,
        struct SpatialAudioEncoderDescriptor **a8)
{
  int DeviceFormatAndSpatialSettings; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CEndpointCharacteristics *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  DeviceFormatAndSpatialSettings = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                     g_pEndpointCharacteristicsCache,
                                     a2,
                                     0LL,
                                     0LL,
                                     &v15);
  v11 = DeviceFormatAndSpatialSettings;
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v13 = 2041LL;
  }
  else
  {
    DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                       v15,
                                       a3,
                                       a4,
                                       a5,
                                       a6,
                                       a7,
                                       a8);
    v11 = DeviceFormatAndSpatialSettings;
    if ( DeviceFormatAndSpatialSettings >= 0 )
    {
      v11 = 0;
      goto LABEL_4;
    }
    v13 = 2043LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)DeviceFormatAndSpatialSettings);
LABEL_4:
  if ( v15 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v15 + 16LL))(v15);
  return v11;
}
