/*
 * XREFs of PfpReadSupportCleanup @ 0x14062750C
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14066D5F4 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408A0B0C (PfpPrefetchFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     PfpOpenHandleClose @ 0x140628DE8 (PfpOpenHandleClose.c)
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
    PfpOpenHandleClose(a2 + 8, a1);
}
