/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x1400A469C
 * Callers:
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x1400A2B5C (MiBuildMappedCluster.c)
 *     MiFillNoReservationCluster @ 0x14014D9A4 (MiFillNoReservationCluster.c)
 *     MmStoreProbeAndLockPages @ 0x140157AA0 (MmStoreProbeAndLockPages.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x1401635E0 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x1401637B8 (MiAddToReservationCluster.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiChargeForWriteInProgressPage @ 0x1400A7440 (MiChargeForWriteInProgressPage.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // al
  char v7; // al
  __int64 result; // rax
  __int64 v9; // rdx

  v4 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2);
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
      MiClearPfnImageVerified(BugCheckParameter2);
    }
    return v5;
  }
  v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1 | 2u;
  if ( (a2 & 2) == 0 )
    v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
  result = MiChargeForWriteInProgressPage(v4, v9);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
