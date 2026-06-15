/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180002EE4
 * Callers:
 *     AudioServerGetAudioSession @ 0x180002E00 (AudioServerGetAudioSession.c)
 *     AUDIOSERVER_rundown @ 0x1800DB6D0 (AUDIOSERVER_rundown.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800DB8E0 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DBA40 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetChannelVolume @ 0x1800DBE60 (AudioServerGetChannelVolume.c)
 *     AudioServerGetEndpointBufferSize @ 0x1800DC9A0 (AudioServerGetEndpointBufferSize.c)
 *     AudioServerGetStreamLatency @ 0x1800DD280 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800DD3D0 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x1800DE090 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1800DE140 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioHistoryProducerHandle @ 0x1800DE290 (AudioServerReleaseAudioHistoryProducerHandle.c)
 *     AudioServerResetEndpoint @ 0x1800DE440 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1800DE590 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800DE6F0 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800DE780 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800DE810 (AudioServerSetAmbRotation.c)
 *     AudioServerSetChannelVolume @ 0x1800DE8E0 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800DEA50 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800DEB90 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800DECF0 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

SetActivityIdFromVadServer *__fastcall SetActivityIdFromVadServer::SetActivityIdFromVadServer(
        SetActivityIdFromVadServer *this,
        char *a2)
{
  GUID v3; // xmm0

  if ( a2 )
    v3 = *(GUID *)(a2 + 280);
  else
    v3 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)this = v3;
  *((GUID *)this + 1) = v3;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
