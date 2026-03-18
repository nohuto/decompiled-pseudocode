/*
 * XREFs of AlpcpReferenceBlob @ 0x14065F5C0
 * Callers:
 *     AlpcpExposeAttributes @ 0x1405DFFB0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 *     AlpcpCreateSection @ 0x140650B08 (AlpcpCreateSection.c)
 *     AlpcpCleanupProcessViews @ 0x140652738 (AlpcpCleanupProcessViews.c)
 *     AlpcpFormatConnectionRequest @ 0x140659944 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateRegion @ 0x14065D360 (AlpcpCreateRegion.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14065D830 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x14065DC34 (AlpcpFlushQueue.c)
 *     AlpcpFlushResourcesPort @ 0x14065DE64 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14065E724 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14065EEC8 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14065F1A0 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x14065F4F0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateReserve @ 0x1406C67D8 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406C9800 (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406CC50C (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406E168C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140886224 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  result = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( result > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), result + 1, result);
    if ( result == v2 )
      return ++result;
  }
  if ( result )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, result);
  return result;
}
