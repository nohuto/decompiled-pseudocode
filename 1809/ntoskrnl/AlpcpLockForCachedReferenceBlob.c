/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x140617E4C
 * Callers:
 *     AlpcpCreateSectionView @ 0x14061767C (AlpcpCreateSectionView.c)
 *     AlpcpSendCloseMessage @ 0x140617910 (AlpcpSendCloseMessage.c)
 *     AlpcpAllocateMessage @ 0x140617D6C (AlpcpAllocateMessage.c)
 *     AlpcViewDestroyProcedure @ 0x140617E90 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140618818 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140618954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140618B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x140618D0C (AlpcpCreateView.c)
 *     AlpcpFlushQueue @ 0x14061A4D8 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x14061A6F0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14061AA3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061B900 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcSectionDeleteProcedure @ 0x14061C210 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x14061DCAC (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortView @ 0x14061DCE4 (AlpcpMapLegacyPortView.c)
 *     AlpcpReceiveMessagePort @ 0x1406339A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     AlpcpExposeViewAttribute @ 0x1406A67FC (AlpcpExposeViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x1406A7498 (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406B4720 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406C00D0 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1406CA6C0 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1406DC1E0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x14084BF28 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x14084C3E8 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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
