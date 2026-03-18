/*
 * XREFs of VmpFreeMemoryRanges @ 0x1408B073C
 * Callers:
 *     VmpInsertMemoryRange @ 0x14030C6A0 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x14030CB10 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14030D510 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14030D7D4 (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x1408B0140 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x1408B0370 (VmFreePreallocationForRangeCreate.c)
 *     VmpAllocateMemoryRanges @ 0x1408B05F4 (VmpAllocateMemoryRanges.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall VmpFreeMemoryRanges(char *P)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v2 = (_QWORD **)(P + 40);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(P, 0);
}
