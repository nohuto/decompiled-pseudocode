/*
 * XREFs of ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003479C
 * Callers:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180011490 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x1800346EC (-RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z.c)
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x180047C70 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180054800 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005C198 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800C23F0 (-DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800CB920 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800EBFB8 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800EDC20 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x1800F0634 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1800FBF78 (-CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecPara.c)
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FD01C (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010410C (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 *     ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x18011757C (-GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x180118360 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     ?SerializeProcessingModeCharacteristics@@YAJPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAKPEAPEAE@Z @ 0x18011A2FC (-SerializeProcessingModeCharacteristics@@YAJPEAV-$CSimpleArray@PEAVCConnectorProcessingModeChara.c)
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180139AF8 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x1800C3060 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 */

__int64 __fastcall CTCoAllocPolicy::Alloc(void *a1, char a2, SIZE_T a3, void **a4)
{
  void *v6; // rax
  size_t v8; // rax

  v6 = CoTaskMemAlloc(a3);
  *a4 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( (a2 & 1) != 0 )
  {
    v8 = CTCoAllocPolicy::_CoTaskMemSize(v6);
    memset_0(*a4, 0, v8);
  }
  return 0LL;
}
