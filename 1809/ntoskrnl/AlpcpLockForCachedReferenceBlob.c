/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x140616E4C
 * Callers:
 *     AlpcpCreateSectionView @ 0x14061667C (AlpcpCreateSectionView.c)
 *     AlpcpSendCloseMessage @ 0x140616910 (AlpcpSendCloseMessage.c)
 *     AlpcpAllocateMessage @ 0x140616D6C (AlpcpAllocateMessage.c)
 *     AlpcViewDestroyProcedure @ 0x140616E90 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140617818 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140617954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140617B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x140617D0C (AlpcpCreateView.c)
 *     AlpcpFlushQueue @ 0x1406194D8 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1406196F0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140619A3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061A900 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcSectionDeleteProcedure @ 0x14061B210 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x14061CCAC (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortView @ 0x14061CCE4 (AlpcpMapLegacyPortView.c)
 *     AlpcpReceiveMessagePort @ 0x140632980 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x140633190 (AlpcpExposeAttributes.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 *     AlpcpExposeViewAttribute @ 0x1406A557C (AlpcpExposeViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x1406A6218 (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406B34A0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406BEE50 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1406C9440 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1406DAF60 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x14084ACE8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x14084B1A8 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx(BugCheckParameter2 - 16, 0LL);
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
