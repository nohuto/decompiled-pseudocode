/*
 * XREFs of ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FA4C
 * Callers:
 *     ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18001E878 (-FreeNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@.c)
 *     VADServerUserSessionChanged @ 0x1800205C8 (VADServerUserSessionChanged.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$1 @ 0x18006BB10 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$1.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$3 @ 0x18006CED0 (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$3.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800C7E28 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     _CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor$0 @ 0x1800C7FAF (_CAudioSessionManager--DisconnectSessionsForTsSession_--_1_--dtor$0.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800C82F0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800C8810 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetExistingSession @ 0x1800C9C90 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800C9E80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ??1CVADServer@@QEAA@XZ @ 0x1800D8AB8 (--1CVADServer@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSessionInstanceId::~CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 5) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 2) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
