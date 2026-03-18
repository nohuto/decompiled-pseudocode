/*
 * XREFs of AlpcpUnlockBlob @ 0x140637040
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x140613E70 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpUnlockMessage @ 0x140615E4C (AlpcpUnlockMessage.c)
 *     AlpcpCreateSectionView @ 0x14061667C (AlpcpCreateSectionView.c)
 *     AlpcViewDestroyProcedure @ 0x140616E90 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140617818 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140617954 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140617B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x140617D0C (AlpcpCreateView.c)
 *     AlpcSectionDeleteProcedure @ 0x14061B210 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x14061CCAC (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortView @ 0x14061CCE4 (AlpcpMapLegacyPortView.c)
 *     AlpcpExposeAttributes @ 0x140633190 (AlpcpExposeAttributes.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140634530 (AlpcpDispatchReplyToWaitingThread.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140637740 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeViewAttribute @ 0x1406A557C (AlpcpExposeViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x1406A6218 (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406B34A0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1406DAF60 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x14084B1A8 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140618CB0 (AlpcpDestroyBlob.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
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
    AlpcpDestroyBlob(BugCheckParameter2, 1);
  }
  else
  {
    v4 = BugCheckParameter2 - 16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(v4);
  }
}
