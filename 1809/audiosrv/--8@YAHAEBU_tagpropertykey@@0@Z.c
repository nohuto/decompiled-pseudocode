/*
 * XREFs of ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800BD440
 * Callers:
 *     ?OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800BD980 (-OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800C2400 (-PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010BAF0 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 *     ?GetValue@CHybridPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18010F340 (-GetValue@CHybridPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall operator==(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16) )
  {
    v3 = *(_QWORD *)a1 - *(_QWORD *)a2;
    if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
      v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a2 + 8);
    if ( !v3 )
      return 1;
  }
  return v2;
}
