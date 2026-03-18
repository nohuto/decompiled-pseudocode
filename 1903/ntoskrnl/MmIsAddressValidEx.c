/*
 * XREFs of MmIsAddressValidEx @ 0x14001F520
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiIncreaseUsedPtesCount @ 0x14001F4A0 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x140185D04 (MiFreedUnusedPfnPagesWorker.c)
 *     KiIsAddressRangeValid @ 0x140199F08 (KiIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x140294FB0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140295510 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x140296C90 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x140296D08 (IopGetMaxValidMemorySizeDown.c)
 *     IopGetMaxValidSectionSize @ 0x140296D7C (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x140296DC4 (IopGetMaxValidSectionSizeDown.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1402A8B84 (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x1402A9390 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1402A9768 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1402A9964 (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x1402A9A38 (KiValidateComponentName.c)
 *     MmIsAddressValid @ 0x1402C4C10 (MmIsAddressValid.c)
 *     MmIsSpecialPoolAddress @ 0x1402C53BC (MmIsSpecialPoolAddress.c)
 *     MiDbgCopyMemory @ 0x1402D08E8 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x1402D15E8 (MiDbgWriteCheck.c)
 *     MiKernelWriteToExecutableMemory @ 0x1402D2C0C (MiKernelWriteToExecutableMemory.c)
 *     RtlMarkHiberPhase @ 0x14031857C (RtlMarkHiberPhase.c)
 *     ViFreeTrackedPool @ 0x1409728A8 (ViFreeTrackedPool.c)
 * Callees:
 *     <none>
 */

char __fastcall MmIsAddressValidEx(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
    v10 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = 4LL;
    while ( 1 )
    {
      v3 = *(&v9 + v2--);
      v4 = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL
        && v3 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v4 & 1) == 0 )
          return 0;
        if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v7 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v3 >> 3) & 0x1FF));
            v8 = v4 | 0x20;
            if ( (v7 & 0x20) == 0 )
              v8 = v4;
            LOBYTE(v4) = v8;
            if ( (v7 & 0x42) != 0 )
              LOBYTE(v4) = v8 | 0x42;
          }
        }
      }
      if ( (v4 & 1) == 0 )
        return 0;
      if ( (v4 & 0x80u) != 0LL )
        break;
      if ( !v2 )
        return 1;
    }
    if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL || (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL )
      return 1;
  }
  return 0;
}
