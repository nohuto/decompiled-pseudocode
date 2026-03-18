/*
 * XREFs of MmFreeIndependentPages @ 0x14010D210
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x140185DD0 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x14028BE8C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x140338C98 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14085094C (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140859400 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1408597A8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x140859AFC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140859E68 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A094 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x140892350 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 */

__int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r15
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // r11
  __int64 v10; // r11
  bool v12; // zf
  unsigned __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h]
  unsigned __int64 v16; // [rsp+38h] [rbp-18h]
  __int128 v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+38h]
  _QWORD *v20; // [rsp+90h] [rbp+40h]

  v14 = 0LL;
  v15 = 0LL;
  v19 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v13 = v19;
  v16 = v19;
  v17 = 0LL;
  v2 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v20 = v2;
  v3 = &v2[v19];
  do
  {
    v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v2);
    v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18);
    v6 = 48 * (v5 & *(_QWORD *)(48 * (v5 & (v4 >> 12)) - 0x58000000000LL + 40)) - 0x58000000000LL;
    if ( !MiPteInShadowRange((unsigned __int64)v2) )
      goto LABEL_3;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_3;
      v12 = (v7 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_3;
      v12 = (v7 & 1) == 0;
    }
    if ( !v12 )
      v7 |= 0x8000000000000000uLL;
LABEL_3:
    *v2 = v7;
    if ( v8 )
      MiWritePteShadow((__int64)v2);
    if ( MiIsPfnFromSlabAllocation(v9) )
    {
      --v13;
      --v16;
      MiLockAndDecrementShareCount(v10, 1LL);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v10, 1LL) == 3 )
    {
      ++v14;
    }
    MiLockAndDecrementShareCount(v6, 0LL);
    ++v2;
  }
  while ( v2 < v3 );
  MiReleasePtes((__int64)&qword_1404666C0, (unsigned __int64)v20, v19);
  return MiReturnPoolCharges(&v13, 1LL);
}
