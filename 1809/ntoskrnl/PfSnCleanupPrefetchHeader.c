/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x14066134C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140667720 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfpPrefetchSharedDeref @ 0x14065DBC4 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x14065E0C4 (PfpPrefetchSharedCleanup.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140661458 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1)
{
  void *v2; // rcx
  unsigned int v3; // edi
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  ULONG_PTR v10; // rcx
  void *v11; // rcx

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    if ( *(_QWORD *)a1 )
    {
      v3 = 0;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 88LL) )
      {
        do
          PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(a1 + 56) + 56LL * v3++));
        while ( v3 < *(_DWORD *)(*(_QWORD *)a1 + 88LL) );
        v2 = *(void **)(a1 + 56);
      }
    }
    ExFreePoolWithTag(v2, 0);
  }
  v4 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    PfpOpenHandleClose(v5 + 8, *(_QWORD *)(a1 + 8));
    PfpOpenHandleClose(v5 + 4, *(_QWORD *)(a1 + 8));
  }
  v7 = *(void **)(a1 + 16);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = *(void **)(a1 + 80);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = *(void **)(a1 + 88);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 )
  {
    PfpPrefetchSharedCleanup(v10);
    PfpPrefetchSharedDeref(*(volatile signed __int64 **)(a1 + 8));
  }
  v11 = *(void **)(a1 + 112);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
}
