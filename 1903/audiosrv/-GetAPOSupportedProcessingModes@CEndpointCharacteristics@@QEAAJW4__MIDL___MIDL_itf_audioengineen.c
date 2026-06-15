/*
 * XREFs of ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180006C44
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006718 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006B84 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18000AD20 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOSupportedProcessingModes(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // r8

  v4 = a2;
  v6 = CEndpointCharacteristics::AreEnhancementsEnabled(this);
  v7 = 0LL;
  if ( v6 || (_DWORD)v4 == 3 )
    v7 = 1LL;
  return SystemEffectDescriptor::GetSupportedProcessingModes((char *)this + 96 * v4 + 616, a3, v7);
}
