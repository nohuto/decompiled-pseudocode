/*
 * XREFs of ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18011AFF8
 * Callers:
 *     wil::details::lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___::_lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___ @ 0x18011ADC4 (wil--details--lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___--_lambda_call__lambda_7479.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18011BC6C (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18011C124 (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18011C450 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18011F1FC (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

__int64 __fastcall PhoneCallAudio::CleanupRouting(PhoneCallAudio *this)
{
  struct IAudioProcess *v1; // rdx
  __int64 v3; // r8
  struct IAudioProcess *v4; // rdx
  DynamicAudioEndpointManager *v5; // rcx

  v1 = (struct IAudioProcess *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    DynamicAudioEndpointManager::RemoveRule(g_DynamicAudioEndpointManager, v1, *((_QWORD *)this + 19));
    v3 = *((_QWORD *)this + 18);
    v4 = (struct IAudioProcess *)*((_QWORD *)this + 17);
    v5 = g_DynamicAudioEndpointManager;
    *((_QWORD *)this + 19) = 0LL;
    DynamicAudioEndpointManager::RemoveRule(v5, v4, v3);
    *((_QWORD *)this + 18) = 0LL;
  }
  return 0LL;
}
