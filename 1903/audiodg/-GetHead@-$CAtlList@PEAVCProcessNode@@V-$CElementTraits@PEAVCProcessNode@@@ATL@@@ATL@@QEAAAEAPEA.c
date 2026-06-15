/*
 * XREFs of ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9E4
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140003E3C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004980 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F50 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400091F0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A520 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000D6F0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14000D960 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000D9A8 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DA10 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000ED70 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400105F4 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProce.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140034A34 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140034A7C (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140037DB0 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x14003E890 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z.c)
 *     ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x14003ECF0 (-SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(_QWORD *a1)
{
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  return *a1 + 16LL;
}
