/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x140619C70
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x14060905C (AlpcpCleanupProcessViews.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140617314 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtAlpcCreateSectionView @ 0x140617470 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x14061767C (AlpcpCreateSectionView.c)
 *     AlpcpDeletePort @ 0x140617AB0 (AlpcpDeletePort.c)
 *     AlpcViewDestroyProcedure @ 0x140617E90 (AlpcViewDestroyProcedure.c)
 *     NtAlpcCreateSecurityContext @ 0x140618600 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140618818 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140618954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140618B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x140618D0C (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14061901C (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140619274 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x140619AC0 (AlpcpDeleteView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140619B00 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpFlushResourcesPort @ 0x14061A228 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x14061A62C (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseAttributes @ 0x14061B818 (AlpcpReleaseAttributes.c)
 *     AlpcpCreateSection @ 0x14061BF74 (AlpcpCreateSection.c)
 *     NtAlpcCreatePortSection @ 0x14061C620 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeletePortSection @ 0x14061D3E0 (NtAlpcDeletePortSection.c)
 *     AlpcpReleaseViewAttribute @ 0x14061DCAC (AlpcpReleaseViewAttribute.c)
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x140634888 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     AlpcConnectionDestroyProcedure @ 0x140697450 (AlpcConnectionDestroyProcedure.c)
 *     AlpcMessageCleanupProcedure @ 0x140698000 (AlpcMessageCleanupProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x140699A60 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406A5258 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406A67FC (AlpcpExposeViewAttribute.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A6904 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtSecureConnectPort @ 0x1406A6DC0 (NtSecureConnectPort.c)
 *     NtAlpcDeleteSectionView @ 0x1406AF650 (NtAlpcDeleteSectionView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406B4720 (AlpcRegionDestroyProcedure.c)
 *     AlpcpDereferenceView @ 0x14084AB74 (AlpcpDereferenceView.c)
 *     AlpcCreateSecurityContext @ 0x14084AFE0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x14084B3A0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x14084C2F0 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpForceUnlinkSecureView @ 0x14084C3E8 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140619CB0 (AlpcpDestroyBlob.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 result; // rax
  signed __int64 BugCheckParameter4; // rdx

  result = -a2;
  BugCheckParameter4 = result + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    return AlpcpDestroyBlob(BugCheckParameter2, 0LL);
  }
  return result;
}
