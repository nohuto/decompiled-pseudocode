/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14064B150
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x1405B52BC (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1405DFE00 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcConnectionDestroyProcedure @ 0x140616B30 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140647F84 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1406488D8 (AlpcpReleaseAttributes.c)
 *     NtAlpcCreateSectionView @ 0x1406492C0 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1406495FC (AlpcpCreateSectionView.c)
 *     AlpcpFlushCancelQueue @ 0x14064A128 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushResourcesPort @ 0x14064A1EC (AlpcpFlushResourcesPort.c)
 *     AlpcpDeletePort @ 0x14064A540 (AlpcpDeletePort.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064A968 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AAAC (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSecurityContext @ 0x14064AE60 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14064B050 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCreateView @ 0x14064B228 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14064B500 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14064B758 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x14064BCD8 (AlpcpDeleteView.c)
 *     AlpcViewDestroyProcedure @ 0x14064C310 (AlpcViewDestroyProcedure.c)
 *     AlpcpCleanupProcessViews @ 0x140671908 (AlpcpCleanupProcessViews.c)
 *     NtAlpcCreatePortSection @ 0x14068A860 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14068A9E8 (AlpcpCreateSection.c)
 *     AlpcpMapLegacyPortView @ 0x14068CDB8 (AlpcpMapLegacyPortView.c)
 *     AlpcMessageCleanupProcedure @ 0x1406BB600 (AlpcMessageCleanupProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BDDB0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406C84A8 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406CADE0 (AlpcpExposeViewAttribute.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406CB630 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtSecureConnectPort @ 0x1406CC980 (NtSecureConnectPort.c)
 *     NtAlpcDeleteSectionView @ 0x1406D2030 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1406D2380 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x1406D5830 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1406E3868 (AlpcpReleaseViewAttribute.c)
 *     AlpcCreateSecurityContext @ 0x140885260 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x140885680 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x140886600 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
