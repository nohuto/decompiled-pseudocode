/*
 * XREFs of ?GetDeviceFormatAndSpatialSettings@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x1800D2970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180048258 (-GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSetting.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormatAndSpatialSettings(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct tWAVEFORMATEX **a4,
        struct SpatialAudioSettings **a5,
        unsigned int *a6,
        struct SpatialAudioEncoderDescriptor **a7)
{
  int DeviceFormatCommon; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  DeviceFormatCommon = CPolicyConfig::GetDeviceFormatCommon(this, a2, a3, a4, a5, a6, a7);
  v8 = DeviceFormatCommon;
  if ( DeviceFormatCommon >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    2620LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)DeviceFormatCommon);
  return v8;
}
