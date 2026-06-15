/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003710C
 * Callers:
 *     ActivatePolicyManager @ 0x1800086F0 (ActivatePolicyManager.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180008D5C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x18000A450 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000E7D0 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ??$MakeAndInitialize@VCVolumeGainStage@@V1@PEBU_GUID@@AEAMH_N@Details@WRL@Microsoft@@YAJPEAPEAVCVolumeGainStage@@$$QEAPEBU_GUID@@AEAM$$QEAH$$QEA_N@Z @ 0x18000FC38 (--$MakeAndInitialize@VCVolumeGainStage@@V1@PEBU_GUID@@AEAMH_N@Details@WRL@Microsoft@@YAJPEAPEAVC.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180013F4C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x180017830 (-SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@A.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x180018AD4 (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18001E908 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x180026068 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028090 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _lambda_e50a82f6d063143869e1d90b13f36ad1_::operator() @ 0x180029FD4 (_lambda_e50a82f6d063143869e1d90b13f36ad1_--operator().c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x18002A4A0 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18002CB64 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x18002E420 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002FDCC (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800371A8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180001800 (--2@YAPEAX_K@Z.c)
 */

LPVOID __fastcall operator new(SIZE_T a1, const struct std::nothrow_t *a2)
{
  LPVOID result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
