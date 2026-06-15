/*
 * XREFs of _lambda_20e2f10f5a8b71244438683d67afebd1_::operator() @ 0x180066FC0
 * Callers:
 *     wil::details::lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___::_lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___ @ 0x180066F50 (wil--details--lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___--_lambda_call__lambda_20e2.c)
 * Callees:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800031EC (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005060 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011AA6C (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall lambda_20e2f10f5a8b71244438683d67afebd1_::operator()(__int64 a1)
{
  int v2; // eax
  int updated; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CEndpointCharacteristics::SetSpatialAudioSettings(
         *(LPCWSTR **)a1,
         **(const struct SpatialAudioSettings ***)(a1 + 8),
         **(const struct tWAVEFORMATEX ***)(a1 + 16));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21AD,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2);
  updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
              *(LPCWSTR **)a1,
              0,
              eHostProcessConnector,
              **(const struct tWAVEFORMATEX ***)(a1 + 16));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21AE,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
  if ( **(_DWORD **)(a1 + 24) )
  {
    v4 = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
           *(CEndpointCharacteristics **)a1,
           **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21B3,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v4);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)a1, 0);
}
