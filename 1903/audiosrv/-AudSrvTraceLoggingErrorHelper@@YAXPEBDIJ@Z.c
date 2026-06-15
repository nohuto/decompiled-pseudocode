/*
 * XREFs of ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780
 * Callers:
 *     AudioSessionSetWindowId @ 0x180004960 (AudioSessionSetWindowId.c)
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x180004C34 (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     GetAudioSessionManager @ 0x180008EA0 (GetAudioSessionManager.c)
 *     ?RuntimeClassInitialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18000A014 (-RuntimeClassInitialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     AudioSessionGetState @ 0x18000D270 (AudioSessionGetState.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18001BD20 (AudioSessionManagerGetCurrentSession.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x18001D350 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001FD50 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180020280 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180020370 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180020AB0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180021A70 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800235A0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023680 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023740 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180023800 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180025330 (-ToMigratedString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180025F90 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180026420 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026E00 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180027160 (-InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180028320 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x180028700 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180028AA4 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     AudioSessionGetVolume @ 0x18002A1E0 (AudioSessionGetVolume.c)
 *     AudioSessionGetMute @ 0x18002A290 (AudioSessionGetMute.c)
 *     AudioSessionSetDuckingPreference @ 0x18002A340 (AudioSessionSetDuckingPreference.c)
 *     AudioSessionManagerAddVolumeDuckNotification @ 0x18002A3F0 (AudioSessionManagerAddVolumeDuckNotification.c)
 *     AudioServerGetAudioSession @ 0x18002A4D0 (AudioServerGetAudioSession.c)
 *     AudioSessionGetGroupingParam @ 0x18002A8B0 (AudioSessionGetGroupingParam.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18002C84C (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18002CFB0 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002D30C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180030C7C (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180030D90 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180030E60 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180034B30 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180039588 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z @ 0x180039764 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG0@Z @ 0x180039B34 (-Initialize@CAudioSessionStore@@QEAAJPEBG0@Z.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039C0C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039D64 (-OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18003BC5C (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18003BD54 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18003BECC (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18003CFE0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x18003D360 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     AudioServerCreateStream @ 0x18003D510 (AudioServerCreateStream.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18003D790 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18003FCD0 (-InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     AudioServerGetAllVolumes @ 0x18003FDD0 (AudioServerGetAllVolumes.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18004024C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180040400 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     AudioServerGetChannelCount @ 0x1800406D0 (AudioServerGetChannelCount.c)
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x1800409F0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180040F00 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800418C8 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180041A5C (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180042960 (-GetChannelCount@CVADServer@@UEAAJPEAI@Z.c)
 *     AudioServerGetMixFormat @ 0x180046A60 (AudioServerGetMixFormat.c)
 *     AudioServerDestroyStream @ 0x18004CB00 (AudioServerDestroyStream.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18004CF90 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18004D6D0 (-GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     PolicyConfigGetDeviceFormat @ 0x18004D890 (PolicyConfigGetDeviceFormat.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004DA40 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     AudioSessionManagerDeleteVolumeDuckNotification @ 0x18004DB80 (AudioSessionManagerDeleteVolumeDuckNotification.c)
 *     ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x18004E5A0 (-GetMute@CMuteControlBase@@UEAAJPEAH@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18004E640 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005A7D8 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18005BB20 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x18005F200 (-RegisterForNotifications@CMuteHardware@@UEAAJXZ.c)
 *     ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x18005F270 (-RegisterForNotifications@CVolumeHardware@@UEAAJXZ.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005F2C4 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18005F500 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005F604 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005F654 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005F75C (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005F924 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x18005FB20 (-GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18005FBB0 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005FC78 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005FE80 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x1800627E0 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18006282C (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800628DC (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x180062B20 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180062E10 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch$40 @ 0x18006FA20 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--catch$40.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::catch$17 @ 0x18006FB00 (_CSebNotifier--AcquireSebReference_--_1_--catch$17.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800BE320 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800BF970 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BFD68 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800C04E4 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800C0828 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x1800C38C0 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 *     ?GetChannelsPeakValues@CMeterHardware@@UEAAJIPEAM@Z @ 0x1800C3910 (-GetChannelsPeakValues@CMeterHardware@@UEAAJIPEAM@Z.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x1800C39F0 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x1800C3B50 (-GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z.c)
 *     ?GetPeakValue@CMeterHardware@@UEAAJPEAM@Z @ 0x1800C3BD0 (-GetPeakValue@CMeterHardware@@UEAAJPEAM@Z.c)
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x1800C3CF0 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     ?QueryInterface@CMeterControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C3EE0 (-QueryInterface@CMeterControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800C41F0 (-Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800C4280 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x1800C4428 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?QueryInterface@CMuteControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C4BB0 (-QueryInterface@CMuteControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800C4F40 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x1800C5570 (-GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z.c)
 *     ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800C55F0 (-GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800C5690 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x1800C5730 (-GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C5800 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x1800C59A0 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800C5D50 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800C5ED0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800C61B0 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?QueryInterface@CVolumeHardware@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7170 (-QueryInterface@CVolumeHardware@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVolumeSoftware@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7220 (-QueryInterface@CVolumeSoftware@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800C72A8 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x1800C7FE0 (-SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800C8350 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800CD3C0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD9D0 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CDA70 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CE060 (-GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CE1F0 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CE2E0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE540 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE640 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE730 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE7F0 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800CE9C0 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800CEAF0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CED10 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800CF004 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800CFECC (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800D05BC (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D0C30 (-PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800D0CE0 (-PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800D1800 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800D1990 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800D29F0 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800D2C50 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800D2E30 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?SetDisplayName@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800D31A0 (-SetDisplayName@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?SetIconPath@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800D3240 (-SetIconPath@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     AudioSessionGetAllVolumes @ 0x1800D3330 (AudioSessionGetAllVolumes.c)
 *     AudioSessionGetChannelCount @ 0x1800D3440 (AudioSessionGetChannelCount.c)
 *     AudioSessionGetChannelVolume @ 0x1800D3550 (AudioSessionGetChannelVolume.c)
 *     AudioSessionGetDisplayName @ 0x1800D3660 (AudioSessionGetDisplayName.c)
 *     AudioSessionGetDuckingState @ 0x1800D3870 (AudioSessionGetDuckingState.c)
 *     AudioSessionGetIconPath @ 0x1800D3980 (AudioSessionGetIconPath.c)
 *     AudioSessionGetId @ 0x1800D3A90 (AudioSessionGetId.c)
 *     AudioSessionGetInstanceId @ 0x1800D3BA0 (AudioSessionGetInstanceId.c)
 *     AudioSessionGetIsComms @ 0x1800D3CB0 (AudioSessionGetIsComms.c)
 *     AudioSessionGetLastActivation @ 0x1800D3DC0 (AudioSessionGetLastActivation.c)
 *     AudioSessionGetLastInactivation @ 0x1800D3ED0 (AudioSessionGetLastInactivation.c)
 *     AudioSessionGetProcessId @ 0x1800D3FE0 (AudioSessionGetProcessId.c)
 *     AudioSessionGetStreamSwitchId @ 0x1800D40F0 (AudioSessionGetStreamSwitchId.c)
 *     AudioSessionIsSystemSoundsSession @ 0x1800D4200 (AudioSessionIsSystemSoundsSession.c)
 *     AudioSessionMeterGetChannelsPeakValues @ 0x1800D4300 (AudioSessionMeterGetChannelsPeakValues.c)
 *     AudioSessionMeterGetMeteringChannelCount @ 0x1800D4410 (AudioSessionMeterGetMeteringChannelCount.c)
 *     AudioSessionMeterGetPeakValue @ 0x1800D4520 (AudioSessionMeterGetPeakValue.c)
 *     AudioSessionPropertyStoreCommit @ 0x1800D4630 (AudioSessionPropertyStoreCommit.c)
 *     AudioSessionPropertyStoreGetAt @ 0x1800D4770 (AudioSessionPropertyStoreGetAt.c)
 *     AudioSessionPropertyStoreGetCount @ 0x1800D48C0 (AudioSessionPropertyStoreGetCount.c)
 *     AudioSessionPropertyStoreGetValue @ 0x1800D4A10 (AudioSessionPropertyStoreGetValue.c)
 *     AudioSessionPropertyStoreSetValue @ 0x1800D4B60 (AudioSessionPropertyStoreSetValue.c)
 *     AudioSessionSetDisplayName @ 0x1800D4F30 (AudioSessionSetDisplayName.c)
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800D6130 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800D66D0 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800D6788 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800D6C80 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800D71A0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D7530 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     AudioSessionManagerAddAudioSessionClientNotification @ 0x1800D82D0 (AudioSessionManagerAddAudioSessionClientNotification.c)
 *     AudioSessionManagerDeleteAudioSessionClientNotification @ 0x1800D83F0 (AudioSessionManagerDeleteAudioSessionClientNotification.c)
 *     AudioSessionManagerGetExistingSession @ 0x1800D8670 (AudioSessionManagerGetExistingSession.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800DB734 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800DB808 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800DBD74 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800DC0C4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800DC160 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800DC4D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800DC988 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x1800DD658 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 *     ?GetAt@CAudioSessionStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x1800DF1B0 (-GetAt@CAudioSessionStore@@UEAAJKPEAU_tagpropertykey@@@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800DF320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800DF71C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800DF7E0 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1800DF890 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 *     ?SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800E0760 (-SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_.c)
 *     ?SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800E08F0 (-SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800E0B80 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z @ 0x1800E0E34 (-SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x1800E0F30 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800E0FC0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x1800E1080 (-SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800E112C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x1800E1220 (-SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z.c)
 *     ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800E12D0 (-SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 *     ?TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x1800E152C (-TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800E2360 (PolicyConfigGetMixFormat.c)
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x1800E4730 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800E4C20 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x1800E4F30 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 *     ?GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z @ 0x1800E5030 (-GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z.c)
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x1800E5310 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800E55B8 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800E5A04 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x1800E62C0 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800E6A90 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800E70A0 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetBufferSizeLimits @ 0x1800E7410 (AudioServerGetBufferSizeLimits.c)
 *     AudioServerGetChannelVolume @ 0x1800E7690 (AudioServerGetChannelVolume.c)
 *     AudioServerGetEndpointBufferSize @ 0x1800E80A0 (AudioServerGetEndpointBufferSize.c)
 *     AudioServerGetStreamLatency @ 0x1800E8A70 (AudioServerGetStreamLatency.c)
 *     AudioServerIsOffloadCapable @ 0x1800E9530 (AudioServerIsOffloadCapable.c)
 *     AudioServerIsRawStreamSupported @ 0x1800E96F0 (AudioServerIsRawStreamSupported.c)
 *     AudioServerRequestSpatialDynamicObjects @ 0x1800E9B80 (AudioServerRequestSpatialDynamicObjects.c)
 *     AudioServerResetEndpoint @ 0x1800E9CA0 (AudioServerResetEndpoint.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800E9F50 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800E9FE0 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800EA070 (AudioServerSetAmbRotation.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800EA2B0 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800EA3F0 (AudioServerSetStreamSampleRate.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800EC438 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     s_midiOpenPort @ 0x1800EC6C0 (s_midiOpenPort.c)
 *     ?GetEndpointBufferSize@CBaseStreamGroupProxy@@UEAAJPEAIPEAM@Z @ 0x1800EF140 (-GetEndpointBufferSize@CBaseStreamGroupProxy@@UEAAJPEAIPEAM@Z.c)
 *     ?ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800F0A30 (-ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_123c1579370fdd5089886a20c78d5805___ @ 0x1800F4F50 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F4F50.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e04f4d5da8e4b2898f3ec77e31f85733___ @ 0x1800F5350 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F5350.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F81D4 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8398 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ??1CPdcActivationClient@@QEAA@XZ @ 0x1800FAAE8 (--1CPdcActivationClient@@QEAA@XZ.c)
 * Callees:
 *     _TlgCreateSz @ 0x18003BAD8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 */

void __fastcall AudSrvTraceLoggingErrorHelper(LPCSTR psz, int a2, int a3)
{
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-39h]
  _DWORD v10[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v11; // [rsp+50h] [rbp-29h]
  unsigned __int16 *v12; // [rsp+60h] [rbp-19h] BYREF
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  void *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  int *v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]
  int *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]
  int v25; // [rsp+E8h] [rbp+6Fh] BYREF
  int v26; // [rsp+F0h] [rbp+77h] BYREF

  v26 = a3;
  v25 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateSz(&pDesc, psz);
    v21 = 0;
    v24 = 0;
    v22 = &v26;
    v19 = &v25;
    v20 = v4;
    v23 = v4;
    v11 = 0LL;
    v10[1] = 4;
    v12 = *(unsigned __int16 **)(v5 + 8);
    v10[0] = 184549376;
    v13 = *v12;
    v15 = &unk_1801773C3;
    v14 = 2;
    v6 = *(_QWORD *)(v5 + 32);
    v16 = 35;
    v17 = 1;
    v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(v6, v10, 0LL, 0LL, 5, &v12);
  }
}
