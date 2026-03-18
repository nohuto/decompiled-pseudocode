/*
 * XREFs of GetNamespaceId @ 0x1C0003844
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     NVMeHwBuildIo @ 0x1C0002F70 (NVMeHwBuildIo.c)
 *     ScsiSyncCacheRequest @ 0x1C00037BC (ScsiSyncCacheRequest.c)
 *     NVMeInitStreams @ 0x1C000BDF0 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000E7C8 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F920 (IoctlQueryEnduranceInformation.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0010018 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00101D0 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0010598 (IoctlStorageStreamsReleaseId.c)
 *     ProtocolCommandCompletion @ 0x1C0012330 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00124BC (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012848 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0012AA4 (QueryProtocolInfoIdentifyData.c)
 *     ScsiSanitizeRequest @ 0x1C0013278 (ScsiSanitizeRequest.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013A40 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 192) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1648)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
