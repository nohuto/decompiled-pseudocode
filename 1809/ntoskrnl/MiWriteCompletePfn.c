/*
 * XREFs of MiWriteCompletePfn @ 0x14001E770
 * Callers:
 *     MiUnlockMdlWritePages @ 0x14001E4F0 (MiUnlockMdlWritePages.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiBuildMappedCluster @ 0x14007FF70 (MiBuildMappedCluster.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x1401542C0 (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiIsPfnCommitNotCharged @ 0x140030DB0 (MiIsPfnCommitNotCharged.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011BA24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // rdi
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // eax
  ULONG_PTR v12; // rcx
  int v13; // ebp
  unsigned __int64 v14; // r9
  char v15; // al

  v2 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v11 = *(_DWORD *)(BugCheckParameter2 + 16);
    v12 = BugCheckParameter2 + 16;
    if ( (v11 & 0x400) == 0 )
      v2 = MiCapturePageFileInfoInline(v12, 1LL);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v13 = MI_IS_PTE_IN_WS_SWAP_SET(
            *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)),
            BugCheckParameter2 + 16);
    if ( !v13 && (*(_DWORD *)(BugCheckParameter2 + 16) & 2) != 0 )
      v13 = ((v14 >> 54) & 7) == 2;
    v2 = MiCapturePageFileInfoInline(BugCheckParameter2 + 16, 1LL);
    if ( v13 )
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~2uLL;
  }
  v5 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF7;
  *(_BYTE *)(BugCheckParameter2 + 34) = v5;
  v6 = v5;
  if ( (v5 & 0x20) != 0
    && ((*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0
     || (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16) - 6 > 1) )
  {
    LOBYTE(v6) = v6 & 0xDF;
    *(_BYTE *)(BugCheckParameter2 + 34) = v6;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2, v6) )
    {
      MiReturnCommit(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)), 1LL);
    }
    if ( (a2 & 8) != 0 )
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2);
    }
    else
    {
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(
          0x4Eu,
          7uLL,
          (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48,
          *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL,
          0LL);
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) == 0 )
      {
        v8 = *(_QWORD *)(BugCheckParameter2 + 16);
        v9 = -9LL;
        if ( (v8 & 0x400) != 0 )
          v9 = -2049LL;
        *(_QWORD *)(BugCheckParameter2 + 16) = v8 & v9;
        MiInsertPageInList(BugCheckParameter2);
        return v2;
      }
      v15 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v15 & 0x10) != 0 )
        *(_BYTE *)(BugCheckParameter2 + 35) = v15 & 0xEF;
      MiReleasePageFileSpace(
        *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)),
        *(_QWORD *)(BugCheckParameter2 + 16),
        1LL);
    }
    MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  }
  return v2;
}
