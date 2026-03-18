/*
 * XREFs of MiRemoveFaultNode @ 0x1400F96A4
 * Callers:
 *     MiMapPagesToZero @ 0x1400F90C0 (MiMapPagesToZero.c)
 *     MiDecrementHugeContext @ 0x140185A28 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x1402CCA90 (MiScrubNodeLargePageList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_14043A6E8;
  if ( v1 )
    v3 = &dword_14043A6D8;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_14043A6F0;
  if ( v1 )
    v4 = &qword_14043A6E0;
  RtlAvlRemoveNode((unsigned __int64 *)v4, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
