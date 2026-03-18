/*
 * XREFs of AlpcpReferenceBlob @ 0x140618428
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x14060805C (AlpcpCleanupProcessViews.c)
 *     AlpcpFormatConnectionRequest @ 0x140614A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateRegion @ 0x140616770 (AlpcpCreateRegion.c)
 *     AlpcpPrepareViewForDelivery @ 0x140617954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140617B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x140617D0C (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14061801C (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x140618368 (AlpcReferenceBlobByHandle.c)
 *     AlpcpFlushResourcesPort @ 0x140619228 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x1406194D8 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140619A3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140619CD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateSection @ 0x14061AF74 (AlpcpCreateSection.c)
 *     AlpcpReceiveMessagePort @ 0x140632980 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x140633190 (AlpcpExposeAttributes.c)
 *     AlpcpCreateReserve @ 0x1406A3FD8 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406A557C (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406A75EC (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406BEE50 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x14084B560 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
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
