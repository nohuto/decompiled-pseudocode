/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14005C224
 * Callers:
 *     MiDeleteValidSystemPage @ 0x140024940 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiMakePteClean @ 0x14005C0F0 (MiMakePteClean.c)
 *     MiLockPageAndSetDirty @ 0x14005D304 (MiLockPageAndSetDirty.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiResolveTransitionFault @ 0x1400B2260 (MiResolveTransitionFault.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiTrimSystemImagePages @ 0x1400FA4E8 (MiTrimSystemImagePages.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401558AC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140199F80 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x14088C940 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // r9
  __int64 result; // rax
  _QWORD *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (((*v4 & 0x400LL) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
    {
      result = MiCapturePageFileInfoInline(v4, 1LL);
      v1 = *(_BYTE *)(a1 + 34);
    }
    *(_BYTE *)(a1 + 34) = v1 | 0x10;
  }
  return result;
}
