/*
 * XREFs of MmFreeIndependentPages @ 0x14010DB20
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185480 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x140185820 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x14028C12C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x140339238 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14085124C (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140859D00 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14085A0A8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14085A3FC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14085A768 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A994 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x140892B30 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiReturnPoolCharges @ 0x14011103C (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r15
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // r11
  __int64 v11; // r11
  bool v13; // zf
  unsigned __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  unsigned __int64 v17; // [rsp+38h] [rbp-18h]
  __int128 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+38h]
  _QWORD *v21; // [rsp+90h] [rbp+40h]

  v15 = 0LL;
  v16 = 0LL;
  v20 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v14 = v20;
  v17 = v20;
  v18 = 0LL;
  v2 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v21 = v2;
  v3 = &v2[v20];
  do
  {
    v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v2);
    v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19);
    v6 = 48 * (v5 & *(_QWORD *)(48 * (v5 & (v4 >> 12)) - 0x58000000000LL + 40)) - 0x58000000000LL;
    if ( !MiPteInShadowRange((unsigned __int64)v2) )
      goto LABEL_3;
    if ( (unsigned int)MiPteHasShadow(v8) )
    {
      v9 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_3;
      v13 = (v7 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_3;
      v13 = (v7 & 1) == 0;
    }
    if ( !v13 )
      v7 |= 0x8000000000000000uLL;
LABEL_3:
    *v2 = v7;
    if ( v9 )
      MiWritePteShadow(v2, v7);
    if ( MiIsPfnFromSlabAllocation(v10) )
    {
      --v14;
      --v17;
      MiLockAndDecrementShareCount(v11, 1LL);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v11, 1LL) == 3 )
    {
      ++v15;
    }
    MiLockAndDecrementShareCount(v6, 0LL);
    ++v2;
  }
  while ( v2 < v3 );
  MiReleasePtes((__int64)&qword_1404669C0, (unsigned __int64)v21, v20);
  return MiReturnPoolCharges(&v14, 1LL);
}
