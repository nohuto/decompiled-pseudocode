/*
 * XREFs of AlpcpReferenceBlob @ 0x140619428
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x14060905C (AlpcpCleanupProcessViews.c)
 *     AlpcpFormatConnectionRequest @ 0x140615A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateRegion @ 0x140617770 (AlpcpCreateRegion.c)
 *     AlpcpPrepareViewForDelivery @ 0x140618954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140618B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x140618D0C (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14061901C (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x140619368 (AlpcReferenceBlobByHandle.c)
 *     AlpcpFlushResourcesPort @ 0x14061A228 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x14061A4D8 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14061AA3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateSection @ 0x14061BF74 (AlpcpCreateSection.c)
 *     AlpcpReceiveMessagePort @ 0x1406339A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 *     AlpcpCreateReserve @ 0x1406A5258 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406A67FC (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1406A886C (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406C00D0 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x14084C7A0 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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
