/*
 * XREFs of _lambda_f2d43d9fce42a4bdda65a41e87b82fa0_::operator() @ 0x1800CECC8
 * Callers:
 *     wil::details::lambda_call__lambda_f2d43d9fce42a4bdda65a41e87b82fa0___::_lambda_call__lambda_f2d43d9fce42a4bdda65a41e87b82fa0___ @ 0x1800CE904 (wil--details--lambda_call__lambda_f2d43d9fce42a4bdda65a41e87b82fa0___--_lambda_call__lambda_f2d4.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800D4030 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D4714 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x18010CFC8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSetti.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18010DC04 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

__int64 __fastcall lambda_f2d43d9fce42a4bdda65a41e87b82fa0_::operator()(
        CEndpointCharacteristics ***a1,
        struct IPolicyConfig *a2)
{
  int v3; // eax
  int updated; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CEndpointCharacteristics::SetSpatialAudioSettings(**a1, a2, *a1[1], (const struct tWAVEFORMATEX *)*a1[2]);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB60,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v3);
  updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
              **a1,
              0,
              eHostProcessConnector,
              (const struct tWAVEFORMATEX *)*a1[2]);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB61,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)updated);
  if ( *(_DWORD *)a1[3] )
  {
    v5 = CPolicyConfig::SetDeviceFormatHwAudioEngine(**a1, (const struct tWAVEFORMATEX *)*a1[2]);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB66,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v5);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(**a1, 0LL);
}
