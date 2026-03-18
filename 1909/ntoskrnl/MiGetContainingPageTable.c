/*
 * XREFs of MiGetContainingPageTable @ 0x140023AA0
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1400231B0 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x140023870 (MiAssignNonPagedPoolPte.c)
 *     MiDeleteValidSystemPage @ 0x140024940 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiInitializeSystemPageTable @ 0x14009641C (MiInitializeSystemPageTable.c)
 *     MiInitializeTransitionPfn @ 0x140096BD8 (MiInitializeTransitionPfn.c)
 *     MiTrimSystemImagePages @ 0x1400FA4E8 (MiTrimSystemImagePages.c)
 *     MiDeleteNonPagedPoolPte @ 0x140116770 (MiDeleteNonPagedPoolPte.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x140146B90 (MiDecommitLargePoolVa.c)
 *     MiMapRetpolineStubs @ 0x140154F68 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiPfnRangeIsZero @ 0x14018673C (MiPfnRangeIsZero.c)
 *     MiInitializeUnusablePfns @ 0x140188FE4 (MiInitializeUnusablePfns.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x1402CA4A8 (MiMakeLargePageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v5 = v2 | 0x20;
      v6 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v7 = v2;
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v7) >> 12) & 0xFFFFFFFFFLL;
}
