/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14064A878
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x1405B52BC (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140646A90 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSendCloseMessage @ 0x1406494DC (AlpcpSendCloseMessage.c)
 *     AlpcpCreateSectionView @ 0x1406495FC (AlpcpCreateSectionView.c)
 *     AlpcpDisconnectPort @ 0x14064986C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140649BC0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140649FC4 (AlpcpFlushQueue.c)
 *     AlpcpAllocateMessage @ 0x14064A798 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064A968 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AAAC (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14064B228 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14064C310 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x14068CDB8 (AlpcpMapLegacyPortView.c)
 *     AlpcpExposeViewAttribute @ 0x1406CADE0 (AlpcpExposeViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x1406CD05C (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406D5830 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406D9460 (AlpcSectionDeleteProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406DFF58 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReleaseViewAttribute @ 0x1406E3868 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1406EA5F0 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14071CDF0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x140886240 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
