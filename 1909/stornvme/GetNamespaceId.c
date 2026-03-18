/*
 * XREFs of GetNamespaceId @ 0x1C0003DA4
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     NVMeHwBuildIo @ 0x1C0003040 (NVMeHwBuildIo.c)
 *     ScsiSyncCacheRequest @ 0x1C0003D1C (ScsiSyncCacheRequest.c)
 *     NVMeInitStreams @ 0x1C000BD00 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000E6F8 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F850 (IoctlQueryEnduranceInformation.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000FF48 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0010100 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C00104C8 (IoctlStorageStreamsReleaseId.c)
 *     ProtocolCommandCompletion @ 0x1C0012260 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C0012400 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012788 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00129E4 (QueryProtocolInfoIdentifyData.c)
 *     ScsiSanitizeRequest @ 0x1C00131C8 (ScsiSanitizeRequest.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
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
