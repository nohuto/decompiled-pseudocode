/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140087910
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiDeleteValidSystemPage @ 0x14007A860 (MiDeleteValidSystemPage.c)
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockPageAndSetDirty @ 0x140086028 (MiLockPageAndSetDirty.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086780 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiRevertValidPte @ 0x1400B2340 (MiRevertValidPte.c)
 *     MiTrimSystemImagePages @ 0x1400DB1B4 (MiTrimSystemImagePages.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiLockPagedAddress @ 0x1401408F0 (MiLockPagedAddress.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14018F9A4 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4268 (MiMakeOutswappedPageResident.c)
 *     MmReplaceImportEntry @ 0x1402AB0CC (MmReplaceImportEntry.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBB04 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x140853450 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140119DB0 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // dl
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
