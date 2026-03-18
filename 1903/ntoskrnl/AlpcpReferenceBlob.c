/*
 * XREFs of AlpcpReferenceBlob @ 0x14064B920
 * Callers:
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     AlpcpFormatConnectionRequest @ 0x1406470B4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateRegion @ 0x1406496F0 (AlpcpCreateRegion.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140649BC0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140649FC4 (AlpcpFlushQueue.c)
 *     AlpcpFlushResourcesPort @ 0x14064A1EC (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AAAC (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14064B228 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14064B500 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x14064B850 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCleanupProcessViews @ 0x140671908 (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateSection @ 0x14068A9E8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1406C84A8 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406CADE0 (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406CD6DC (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406DFF58 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408869F8 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
