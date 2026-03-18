/*
 * XREFs of AlpcpUnlockBlob @ 0x1405E4F60
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x1405B569C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1405DFFB0 (AlpcpExposeAttributes.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1405E4B60 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140659D10 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCreateSectionView @ 0x14065D26C (AlpcpCreateSectionView.c)
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
 *     AlpcpReleaseViewAttribute @ 0x1406E4D18 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14071EC80 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1405E5050 (AlpcpDestroyBlob.c)
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
