/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180008334
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180008530 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180008224 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180008434 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180008490 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  struct _GUID v5; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  int ConnectorFormatForProcessingMode; // ebx
  void *v8; // rcx
  int MinProcessingPeriodForExclusiveMode; // eax
  void *v10; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  struct _GUID v14; // [rsp+40h] [rbp-40h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15[2]; // [rsp+50h] [rbp-30h]
  struct tWAVEFORMATEX *v16; // [rsp+58h] [rbp-28h] BYREF
  char v17; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  LPVOID pv; // [rsp+A0h] [rbp+20h] BYREF

  pv = 0LL;
  CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(this, eHostProcessConnector, &v14, 0LL, 0LL);
  *a3 = 0LL;
  *(_QWORD *)v15 = &pv;
  v16 = 0LL;
  v17 = 1;
  v5 = v14;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                       this,
                                       eHostProcessConnector,
                                       &v14,
                                       &v16);
  if ( v17 )
  {
    v6 = v15[0];
    v8 = **(void ***)v15;
    **(_QWORD **)v15 = v16;
    if ( v8 )
      CoTaskMemFree(v8);
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    v12 = (unsigned int)ConnectorFormatForProcessingMode;
    v13 = 8231LL;
  }
  else
  {
    v14 = v5;
    MinProcessingPeriodForExclusiveMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
                                            this,
                                            v6,
                                            (struct tWAVEFORMATEX *)pv,
                                            &v14,
                                            a3);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode >= 0 )
    {
      ConnectorFormatForProcessingMode = 0;
      goto LABEL_7;
    }
    v12 = (unsigned int)MinProcessingPeriodForExclusiveMode;
    v13 = 8234LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v12);
LABEL_7:
  v10 = pv;
  pv = 0LL;
  if ( v10 )
    CoTaskMemFree(v10);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
