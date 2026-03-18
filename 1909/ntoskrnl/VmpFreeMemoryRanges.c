/*
 * XREFs of VmpFreeMemoryRanges @ 0x1408ED4E4
 * Callers:
 *     VmpInsertMemoryRange @ 0x140329DC0 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x14032A22C (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14032AC50 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14032AF18 (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x1408ECBF0 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x1408ECE10 (VmFreePreallocationForRangeCreate.c)
 *     VmpAllocateMemoryRanges @ 0x1408ED320 (VmpAllocateMemoryRanges.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
