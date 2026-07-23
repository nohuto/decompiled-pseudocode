/*
 * XREFs of MiRemoveFaultNode @ 0x1400F9744
 * Callers:
 *     MiMapPagesToZero @ 0x1400F9160 (MiMapPagesToZero.c)
 *     MiDecrementHugeContext @ 0x140185B88 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_14043B7A8;
  if ( v1 )
    v3 = &dword_14043B798;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_14043B7B0;
  if ( v1 )
    v4 = &qword_14043B7A0;
  RtlAvlRemoveNode((unsigned __int64 *)v4, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
