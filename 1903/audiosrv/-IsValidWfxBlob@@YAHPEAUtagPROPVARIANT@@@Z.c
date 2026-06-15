/*
 * XREFs of ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180004FAC
 * Callers:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180035448 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800378D0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800471E0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___ @ 0x1801138C4 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114B44 (CEndpointCharacteristics--GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x180114C5C (CEndpointCharacteristics--GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x180114DA4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1801182FC (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidWfxBlob(struct tagPROPVARIANT *a1)
{
  __int64 ulVal; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( a1->vt == 65 )
    {
      ulVal = a1->ulVal;
      if ( (unsigned int)ulVal >= 0x12 && ulVal == *((unsigned __int16 *)a1->bstrblobVal.pData + 8) + 18LL )
        return 1;
    }
  }
  return result;
}
