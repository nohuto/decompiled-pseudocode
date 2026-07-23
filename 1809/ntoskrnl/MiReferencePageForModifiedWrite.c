/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x14011BC04
 * Callers:
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x14007FF70 (MiBuildMappedCluster.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140150760 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x14015096C (MiAddToReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x140150E48 (MiFillNoReservationCluster.c)
 *     MmStoreProbeAndLockPages @ 0x140153E74 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x14002CEBC (MiChargeForWriteInProgressPage.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // al
  char v7; // al
  __int64 result; // rax
  int v9; // r8d
  char v10; // dl

  v4 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2, 0);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    v6 = *(_BYTE *)(BugCheckParameter2 + 34);
    ++*(_WORD *)(BugCheckParameter2 + 32);
    v7 = v6 | 8;
    *(_BYTE *)(BugCheckParameter2 + 34) = v7;
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) = v7 & 0xEF;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 34) |= 0x20u;
      MiClearPfnImageVerified(BugCheckParameter2, 28);
    }
    return v5;
  }
  v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
  v10 = v9 | 2;
  if ( (a2 & 2) == 0 )
    v10 = v9;
  result = MiChargeForWriteInProgressPage(v4, v10);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
