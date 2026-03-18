/*
 * XREFs of AlpcpUnlockBlob @ 0x1405E4790
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x1405B52BC (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1405E4390 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140645CD0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCreateSectionView @ 0x1406495FC (AlpcpCreateSectionView.c)
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
 *     AlpcpReleaseViewAttribute @ 0x1406E3868 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14071CDF0 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1405E4880 (AlpcpDestroyBlob.c)
 */

char __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v1; // r8
  int v2; // eax
  signed __int64 BugCheckParameter4; // rdx
  ULONG_PTR v4; // rbx

  v1 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v1 & 1) != 0
    && (v2 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v1 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v2 > 0)
    && (BugCheckParameter4 = v2
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v2 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    return AlpcpDestroyBlob(BugCheckParameter2, 1LL);
  }
  else
  {
    v4 = BugCheckParameter2 - 16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    return KeAbPostRelease(v4);
  }
}
