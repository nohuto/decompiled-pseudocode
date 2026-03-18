/*
 * XREFs of MiGetContainingPageTable @ 0x140079850
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140026984 (MiInitializeSystemPageTable.c)
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiDeleteValidSystemPage @ 0x14007A860 (MiDeleteValidSystemPage.c)
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400992E0 (MiAssignNonPagedPoolPtes.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MiWsleFree @ 0x1400B2C50 (MiWsleFree.c)
 *     MiTrimSystemImagePages @ 0x1400DB1B4 (MiTrimSystemImagePages.c)
 *     MiDeleteNonPagedPoolPte @ 0x140111590 (MiDeleteNonPagedPoolPte.c)
 *     MiDecommitLargePoolVa @ 0x14015B2C0 (MiDecommitLargePoolVa.c)
 *     MiInitializeUnusablePfns @ 0x14017F02C (MiInitializeUnusablePfns.c)
 *     MmAllocateSpecialPool @ 0x1402ACA64 (MmAllocateSpecialPool.c)
 *     MiSwitchToTransition @ 0x1402AF540 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x1402B4FE8 (MiMakeLargePageTable.c)
 *     MiDeleteClusterPage @ 0x1402C612C (MiDeleteClusterPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // [rsp+8h] [rbp+8h] BYREF

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v4 )
    {
      v5 = v2 | 0x20;
      v6 = *(_QWORD *)(v4 + 8 * ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v10 = v2;
  if ( (unsigned __int64)&v10 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v10 >> 3) & 0x1FF));
      v9 = v2 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v2;
      v2 = v9;
      if ( (v8 & 0x42) != 0 )
        v2 = v9 | 0x42;
    }
  }
  return (v2 >> 12) & 0xFFFFFFFFFLL;
}
