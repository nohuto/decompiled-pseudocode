/*
 * XREFs of MiPreventControlAreaDeletion @ 0x1400E9578
 * Callers:
 *     MiTrimSharedPage @ 0x1400E97F0 (MiTrimSharedPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     MiReferenceSubsection @ 0x1400770D4 (MiReferenceSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiPreventControlAreaDeletion(__int64 a1, int a2, ULONG_PTR *a3, __int64 **a4)
{
  __int64 v7; // rbx
  ULONG_PTR v8; // rbx
  __int64 v9; // rdi
  volatile LONG *v10; // rbp
  int v11; // ecx
  __int64 *v12; // rax

  *a4 = 0LL;
  *a3 = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  if ( qword_14043B180 && (v7 & 0x10) == 0 )
    v7 &= ~qword_14043B180;
  v8 = v7 >> 16;
  if ( (*(_BYTE *)(v8 + 34) & 2) == 0 )
  {
    v9 = *(_QWORD *)v8;
    v10 = (volatile LONG *)(*(_QWORD *)v8 + 72LL);
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    v11 = *(_DWORD *)(v9 + 56);
    if ( !(v11 & 1 | ((v11 & 2) != 0)) )
    {
      if ( (v11 & 0x20) != 0 )
        goto LABEL_10;
      if ( (*(_BYTE *)(v8 + 34) & 1) == 0 && (a2 != 1 || !*(_DWORD *)(v8 + 108)) )
      {
        MiReferenceSubsection(v8);
        *a3 = v8;
LABEL_10:
        v12 = MiBuildWakeList(v9, 4);
        ++*(_DWORD *)(v9 + 76);
        *a4 = v12;
        MiRemoveUnusedSegment(v9);
        if ( a2 == 1 )
          *(_DWORD *)(v9 + 56) |= 4u;
        goto LABEL_12;
      }
    }
    v9 = 0LL;
LABEL_12:
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    return v9;
  }
  return 0LL;
}
