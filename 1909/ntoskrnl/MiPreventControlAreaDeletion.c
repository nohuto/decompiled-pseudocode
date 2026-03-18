/*
 * XREFs of MiPreventControlAreaDeletion @ 0x14012F308
 * Callers:
 *     MiTrimSharedPage @ 0x14012F104 (MiTrimSharedPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceSubsection @ 0x140071D5C (MiReferenceSubsection.c)
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x14007463C (MiBuildWakeList.c)
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
  if ( qword_140465800 && (v7 & 0x10) == 0 )
    v7 &= ~qword_140465800;
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
        goto LABEL_7;
      if ( (*(_BYTE *)(v8 + 34) & 1) == 0 && (a2 != 1 || !*(_DWORD *)(v8 + 108)) )
      {
        MiReferenceSubsection(v8);
        *a3 = v8;
LABEL_7:
        v12 = MiBuildWakeList(v9, 4);
        ++*(_DWORD *)(v9 + 76);
        *a4 = v12;
        MiRemoveUnusedSegment(v9);
        if ( a2 == 1 )
          *(_DWORD *)(v9 + 56) |= 4u;
        goto LABEL_9;
      }
    }
    v9 = 0LL;
LABEL_9:
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    return v9;
  }
  return 0LL;
}
