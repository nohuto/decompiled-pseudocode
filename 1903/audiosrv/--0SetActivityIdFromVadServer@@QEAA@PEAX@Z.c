/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800E4050
 * Callers:
 *     AUDIOSERVER_rundown @ 0x1800E6CB0 (AUDIOSERVER_rundown.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800E70A0 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800E7200 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetChannelVolume @ 0x1800E7690 (AudioServerGetChannelVolume.c)
 *     AudioServerGetEndpointBufferSize @ 0x1800E80A0 (AudioServerGetEndpointBufferSize.c)
 *     AudioServerGetStreamLatency @ 0x1800E8A70 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800E8BC0 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x1800E9880 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1800E9930 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioHistoryProducerHandle @ 0x1800E9A80 (AudioServerReleaseAudioHistoryProducerHandle.c)
 *     AudioServerResetEndpoint @ 0x1800E9CA0 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1800E9DF0 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800E9F50 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800E9FE0 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800EA070 (AudioServerSetAmbRotation.c)
 *     AudioServerSetChannelVolume @ 0x1800EA140 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800EA2B0 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800EA3F0 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800EA5F0 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
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
