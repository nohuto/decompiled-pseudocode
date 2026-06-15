/*
 * XREFs of ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800015C0
 * Callers:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1801182FC (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180002AB4 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000AD88 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18000CEA8 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::RefreshDeviceFormat(
        LPCWSTR *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  const GUID *v4; // r9
  LPCGUID v5; // r8
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // esi
  bool v7; // r8
  int DeviceFormat; // ebx
  void *v9; // rdx
  int v10; // eax
  void *v11; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int cData; // [rsp+28h] [rbp-49h]
  LPVOID pv; // [rsp+38h] [rbp-39h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // [rsp+40h] [rbp-31h] BYREF
  LPVOID *p_pv; // [rsp+48h] [rbp-29h]
  struct tWAVEFORMATEX *v19; // [rsp+50h] [rbp-21h] BYREF
  char v20; // [rsp+58h] [rbp-19h]
  __int64 v21; // [rsp+60h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v24; // [rsp+98h] [rbp+27h]
  const GUID *v25; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v21 = -2LL;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, this[3]);
    v17 = a2;
    v24 = &v17;
    v25 = v4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179D91, v5, v4, (UINT32)v4, &pData);
  }
  v6 = eKeywordDetectorConnector;
  if ( a2 != eKeywordDetectorConnector )
    v6 = eHostProcessConnector;
  pv = 0LL;
  v7 = (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine((CEndpointCharacteristics *)this) != 0;
  p_pv = &pv;
  v19 = 0LL;
  v20 = 1;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat((CEndpointCharacteristics *)this, 0, v7, v6, &v19);
  if ( v20 )
  {
    v9 = *p_pv;
    *p_pv = v19;
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( DeviceFormat < 0 )
  {
    v13 = (unsigned int)DeviceFormat;
    v14 = 8736LL;
  }
  else
  {
    v10 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
            (CEndpointCharacteristics *)this,
            v6,
            (const struct tWAVEFORMATEX *)pv,
            0LL);
    DeviceFormat = v10;
    if ( v10 >= 0 )
    {
      DeviceFormat = 0;
      goto LABEL_11;
    }
    v13 = (unsigned int)v10;
    v14 = 8738LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v13,
    cData);
LABEL_11:
  v11 = pv;
  pv = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  return (unsigned int)DeviceFormat;
}
