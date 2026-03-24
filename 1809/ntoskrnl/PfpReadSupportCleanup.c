/*
 * XREFs of PfpReadSupportCleanup @ 0x140662A0C
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140661F84 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140864008 (PfpPrefetchFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405E89E0 (NtClose.c)
 *     PfpOpenHandleClose @ 0x1406604CC (PfpOpenHandleClose.c)
 */

void __fastcall PfpReadSupportCleanup(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( (*(_QWORD *)(a2 + 32) & 0x400000000LL) != 0 )
    PfpOpenHandleClose((_QWORD *)(a2 + 8), a1);
}
