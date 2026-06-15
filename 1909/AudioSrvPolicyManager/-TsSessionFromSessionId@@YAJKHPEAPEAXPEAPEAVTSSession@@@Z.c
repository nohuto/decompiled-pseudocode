/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180005E60 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180006130 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180006760 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180006A30 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x180007660 (-GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z.c)
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x1800090A0 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180014010 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18001B7F4 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x18001C800 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001D7BC (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001D9C8 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180021CC0 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180021DF0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800238AC (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x1800251C4 (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x180025340 (-TsSessionIdIsMuted@@YAHK@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800253BC (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800254DC (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x1800255B8 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180025764 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180025838 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x1800258E8 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180025AE8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180025BC4 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180025D98 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180025F18 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x180025FD8 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x1800260AC (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180026178 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z @ 0x180026228 (-TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800263AC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800265D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     _lambda_d471d741133b083a671d83372ad1cc78_::operator() @ 0x180026904 (_lambda_d471d741133b083a671d83372ad1cc78_--operator().c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x180026B30 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x180026BB0 (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x180026C38 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180026F00 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x180027130 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x180027240 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002488C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionFromSessionId(DWORD a1, int a2, void **a3, struct TSSession **a4)
{
  _QWORD *v8; // rax
  void *v9; // rdx
  struct TSSession *v10; // rcx
  __int64 result; // rax

  if ( a3 )
    *a3 = 0LL;
  *a4 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v8 = qword_18004DC78;
  while ( 1 )
  {
    v9 = v8;
    if ( !v8 )
      break;
    v10 = (struct TSSession *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( a1 == *(_DWORD *)v10 )
    {
      if ( a3 )
        *a3 = v9;
      *a4 = v10;
      break;
    }
  }
  LeaveCriticalSection(&CriticalSection);
  result = *a4 == 0LL ? 0x490 : 0;
  if ( !*a4 )
  {
    if ( a2 )
      return TsSessionCreate(a1, a3, a4);
  }
  return result;
}
