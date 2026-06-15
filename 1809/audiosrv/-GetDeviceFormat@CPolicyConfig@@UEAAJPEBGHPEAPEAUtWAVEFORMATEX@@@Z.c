/*
 * XREFs of ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180048220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180048258 (-GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSetting.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        struct tWAVEFORMATEX **a4)
{
  int DeviceFormatCommon; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  DeviceFormatCommon = CPolicyConfig::GetDeviceFormatCommon(this, a2, a3, a4, 0LL, 0LL, 0LL);
  v5 = DeviceFormatCommon;
  if ( DeviceFormatCommon >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA1E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)DeviceFormatCommon,
    v7);
  return v5;
}
