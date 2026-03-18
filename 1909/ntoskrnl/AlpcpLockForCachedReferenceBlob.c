/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14065E4F8
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x1405B569C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1405DFFB0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14065A7F0 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSendCloseMessage @ 0x14065D14C (AlpcpSendCloseMessage.c)
 *     AlpcpCreateSectionView @ 0x14065D26C (AlpcpCreateSectionView.c)
 *     AlpcpDisconnectPort @ 0x14065D4DC (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14065D830 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x14065DC34 (AlpcpFlushQueue.c)
 *     AlpcpAllocateMessage @ 0x14065E418 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14065E5E8 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14065E724 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14065EEC8 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14065FFA0 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1406C6E38 (AlpcpMapLegacyPortView.c)
 *     AlpcpExposeViewAttribute @ 0x1406C9800 (AlpcpExposeViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x1406CBE8C (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406D4F10 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406D90D0 (AlpcSectionDeleteProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406E168C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReleaseViewAttribute @ 0x1406E4D18 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1406EB7E0 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14071EC80 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x140885A4C (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
