/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800E3BB0
 * Callers:
 *     AUDIOSERVER_rundown @ 0x1800E6830 (AUDIOSERVER_rundown.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800E6C20 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800E6D80 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetChannelVolume @ 0x1800E7210 (AudioServerGetChannelVolume.c)
 *     AudioServerGetEndpointBufferSize @ 0x1800E7C20 (AudioServerGetEndpointBufferSize.c)
 *     AudioServerGetStreamLatency @ 0x1800E85F0 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800E8740 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x1800E9400 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1800E94B0 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioHistoryProducerHandle @ 0x1800E9600 (AudioServerReleaseAudioHistoryProducerHandle.c)
 *     AudioServerResetEndpoint @ 0x1800E9820 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1800E9970 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800E9AD0 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800E9B60 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800E9BF0 (AudioServerSetAmbRotation.c)
 *     AudioServerSetChannelVolume @ 0x1800E9CC0 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800E9E30 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800E9F70 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800EA170 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
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
