/*
 * XREFs of GetNamespaceId @ 0x1C0005144
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     ScsiUnmapRequest @ 0x1C0003E84 (ScsiUnmapRequest.c)
 *     NVMeHwBuildIo @ 0x1C0004040 (NVMeHwBuildIo.c)
 *     ScsiSyncCacheRequest @ 0x1C0004DC8 (ScsiSyncCacheRequest.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0005C10 (FormInquiryDeviceIdentifiersData.c)
 *     NVMeInitStreams @ 0x1C000E75C (NVMeInitStreams.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00112E4 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0011488 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0011838 (IoctlStorageStreamsReleaseId.c)
 *     ProtocolCommandCompletion @ 0x1C0013170 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00132F4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001359C (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00137FC (QueryProtocolInfoIdentifyData.c)
 *     ScsiSanitizeRequest @ 0x1C0014018 (ScsiSanitizeRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 184) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1640)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
