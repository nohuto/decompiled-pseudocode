/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14065EDF0
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x1405B569C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1405DFFB0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1405E0630 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     AlpcConnectionDestroyProcedure @ 0x140618640 (AlpcConnectionDestroyProcedure.c)
 *     NtAlpcCreatePortSection @ 0x140650980 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x140650B08 (AlpcpCreateSection.c)
 *     AlpcpCleanupProcessViews @ 0x140652738 (AlpcpCleanupProcessViews.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14065BAE8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x14065C548 (AlpcpReleaseAttributes.c)
 *     NtAlpcCreateSectionView @ 0x14065CF30 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x14065D26C (AlpcpCreateSectionView.c)
 *     AlpcpFlushCancelQueue @ 0x14065DD98 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushResourcesPort @ 0x14065DE64 (AlpcpFlushResourcesPort.c)
 *     AlpcpDeletePort @ 0x14065E1C0 (AlpcpDeletePort.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14065E5E8 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14065E724 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSecurityContext @ 0x14065EB00 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14065ECF0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCreateView @ 0x14065EEC8 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14065F1A0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14065F3F8 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x14065F968 (AlpcpDeleteView.c)
 *     AlpcViewDestroyProcedure @ 0x14065FFA0 (AlpcViewDestroyProcedure.c)
 *     AlpcMessageCleanupProcedure @ 0x1406B6CB0 (AlpcMessageCleanupProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BD860 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406C67D8 (AlpcpCreateReserve.c)
 *     AlpcpMapLegacyPortView @ 0x1406C6E38 (AlpcpMapLegacyPortView.c)
 *     AlpcpExposeViewAttribute @ 0x1406C9800 (AlpcpExposeViewAttribute.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406CA460 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtSecureConnectPort @ 0x1406CB7B0 (NtSecureConnectPort.c)
 *     NtAlpcDeleteSectionView @ 0x1406D1390 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1406D16E0 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x1406D4F10 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1406E4D18 (AlpcpReleaseViewAttribute.c)
 *     AlpcpDereferenceView @ 0x140884514 (AlpcpDereferenceView.c)
 *     AlpcCreateSecurityContext @ 0x1408849B0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x140884E20 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x140885E10 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  signed __int64 BugCheckParameter4; // rax
  __int64 v4; // rdi
  void *v5; // rcx

  BugCheckParameter4 = -a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -a2);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    v4 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    (*(void (**)(void))(v4 + 24))();
    if ( (*(int (__fastcall **)(ULONG_PTR))(v4 + 40))(BugCheckParameter2) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToNPagedLookasideList(
          (PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v4 + 8),
          (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v5 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v4 + 48) )
          (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v4 + 8) + 7))(v5);
        else
          ExFreePoolWithTag(v5, *(_DWORD *)(v4 + 4));
      }
    }
  }
}
