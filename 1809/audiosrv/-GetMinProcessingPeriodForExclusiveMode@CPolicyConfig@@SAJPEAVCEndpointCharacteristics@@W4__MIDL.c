/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180002428
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x1800021B0 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x1800024DC (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180002580 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800025DC (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  struct _GUID v5; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  int ConnectorFormatForProcessingMode; // ebx
  struct _GUID v9; // [rsp+40h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+18h] BYREF

  pv = 0LL;
  CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a1, eHostProcessConnector, &v9, 0LL, 0LL);
  *a3 = 0LL;
  v5 = v9;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                       a1,
                                       eHostProcessConnector,
                                       &v9,
                                       (struct tWAVEFORMATEX **)&pv);
  if ( ConnectorFormatForProcessingMode >= 0 )
  {
    v9 = v5;
    ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
                                         a1,
                                         v6,
                                         (struct tWAVEFORMATEX *)pv,
                                         &v9,
                                         a3);
  }
  CoTaskMemFree(pv);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
