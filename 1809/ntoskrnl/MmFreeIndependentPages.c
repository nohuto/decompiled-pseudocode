/*
 * XREFs of MmFreeIndependentPages @ 0x140001010
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x14017EA70 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x140277D5C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x14031A38C (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14081784C (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14081FCC8 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140820058 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x1408203B0 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408206EC (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140820918 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     KiStartDynamicProcessor @ 0x140842DE8 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x140858EA4 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x1409B5DAC (KeStartAllProcessors.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockAndDecrementShareCount @ 0x140118088 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x140120E50 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120EB0 (MiPteHasShadow.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // r11
  __int64 v10; // r11
  bool v12; // zf
  _QWORD v13[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp+48h]
  _QWORD *v16; // [rsp+A0h] [rbp+50h]

  memset(v13, 0, 0x28uLL);
  v15 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v13[0] = v15;
  v13[3] = v15;
  v4 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v16 = v4;
  v5 = &v4[v15];
  do
  {
    v14 = MI_READ_PTE_LOCK_FREE(v4);
    v6 = 48
       * (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
    if ( !(unsigned int)MiPteInShadowRange(v4, ZeroPte, 0LL) )
      goto LABEL_3;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_14043A1AC) )
        goto LABEL_3;
      v12 = (v7 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_3;
      v12 = (v7 & 1) == 0;
    }
    if ( !v12 )
      v7 |= 0x8000000000000000uLL;
LABEL_3:
    *v4 = v7;
    if ( v8 )
      MiWritePteShadow(v4);
    if ( (unsigned int)MiIsPfnFromSlabAllocation(v9) )
    {
      --v13[0];
      --v13[3];
      MiLockAndDecrementShareCount(v10, 1LL);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v10, 1LL) == 3 )
    {
      ++v13[1];
    }
    MiLockAndDecrementShareCount(v6, 0LL);
    ++v4;
  }
  while ( v4 < v5 );
  MiReleasePtes(&qword_14043AFA0, v16, v15);
  return MiReturnPoolCharges(v13, 1LL);
}
