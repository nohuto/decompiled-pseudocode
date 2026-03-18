/*
 * XREFs of MiRemoveFaultNode @ 0x14013809C
 * Callers:
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     MiDecrementHugeContext @ 0x14018EFF0 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x1402E6DC0 (MiScrubNodeLargePageList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_1404660F0;
  if ( v1 )
    v3 = &dword_1404660E0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_1404660F8;
  if ( v1 )
    v4 = &qword_1404660E8;
  RtlAvlRemoveNode((unsigned __int64 *)v4, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
