/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x140618C70
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x14060805C (AlpcpCleanupProcessViews.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140616314 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtAlpcCreateSectionView @ 0x140616470 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x14061667C (AlpcpCreateSectionView.c)
 *     AlpcpDeletePort @ 0x140616AB0 (AlpcpDeletePort.c)
 *     AlpcViewDestroyProcedure @ 0x140616E90 (AlpcViewDestroyProcedure.c)
 *     NtAlpcCreateSecurityContext @ 0x140617600 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140617818 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140617954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140617B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x140617D0C (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14061801C (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140618274 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x140618AC0 (AlpcpDeleteView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140618B00 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpFlushResourcesPort @ 0x140619228 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x14061962C (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseAttributes @ 0x14061A818 (AlpcpReleaseAttributes.c)
 *     AlpcpCreateSection @ 0x14061AF74 (AlpcpCreateSection.c)
 *     NtAlpcCreatePortSection @ 0x14061B620 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeletePortSection @ 0x14061C3E0 (NtAlpcDeletePortSection.c)
 *     AlpcpReleaseViewAttribute @ 0x14061CCAC (AlpcpReleaseViewAttribute.c)
 *     AlpcpExposeAttributes @ 0x140633190 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x140633868 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406962B0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcMessageCleanupProcedure @ 0x140696E60 (AlpcMessageCleanupProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406988C0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406A3FD8 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406A557C (AlpcpExposeViewAttribute.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A5684 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtSecureConnectPort @ 0x1406A5B40 (NtSecureConnectPort.c)
 *     NtAlpcDeleteSectionView @ 0x1406AE3D0 (NtAlpcDeleteSectionView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406B34A0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpDereferenceView @ 0x140849934 (AlpcpDereferenceView.c)
 *     AlpcCreateSecurityContext @ 0x140849DA0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x14084A160 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x14084B0B0 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpForceUnlinkSecureView @ 0x14084B1A8 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140618CB0 (AlpcpDestroyBlob.c)
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
