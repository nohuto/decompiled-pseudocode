/*
 * XREFs of MiWriteCompletePfn @ 0x1400DE110
 * Callers:
 *     MiBuildMappedCluster @ 0x1400A2B5C (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x140157F98 (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsPfnCommitNotCharged @ 0x140054CE0 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B0C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // rdi
  _DWORD *v5; // rcx
  _DWORD *v8; // r14
  int v9; // ebp
  unsigned __int64 v10; // r9

  v2 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v5 = (_DWORD *)(BugCheckParameter2 + 16);
    if ( (*v5 & 0x400LL) == 0 )
      v2 = MiCapturePageFileInfoInline(v5, 1LL);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v8 = (_DWORD *)(BugCheckParameter2 + 16);
    v9 = MI_IS_PTE_IN_WS_SWAP_SET(
           *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)),
           (_WORD *)(BugCheckParameter2 + 16));
    if ( !v9 && (*v8 & 2) != 0 )
      v9 = ((v10 >> 54) & 7) == 2;
    v2 = MiCapturePageFileInfoInline(v8, 1LL);
    if ( v9 )
      *(_QWORD *)v8 &= ~2uLL;
  }
  *(_BYTE *)(BugCheckParameter2 + 34) &= ~8u;
  if ( (*(_WORD *)(BugCheckParameter2 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2) )
    {
      MiReturnCommit(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)), 1uLL);
    }
    if ( (a2 & 8) != 0 )
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2, 1);
      MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 2);
    }
    else
    {
      MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
    }
  }
  return v2;
}
