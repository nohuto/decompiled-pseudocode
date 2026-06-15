/*
 * XREFs of ??$swap_wil@Uheap_buffer@details_abi@wil@@@wistd@@YAXAEAUheap_buffer@details_abi@wil@@0@Z @ 0x1800143D4
 * Callers:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180014388 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::swap_wil<wil::details_abi::heap_buffer>(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm2
  void **v3; // rsi
  char *v5; // rdi
  __int64 v6; // xmm3_8
  void *v7; // rbx
  void *v8; // rbp
  void *v9; // rcx
  void *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-20h] BYREF

  v2 = *a1;
  v3 = (void **)a1 + 3;
  v5 = (char *)a2 + 24;
  v11 = *a1;
  v6 = *((_QWORD *)a1 + 2);
  v7 = (void *)*((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = 0LL;
  *a1 = *a2;
  *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
  if ( (char *)a1 + 24 != (char *)a2 + 24 )
  {
    v8 = *(void **)v5;
    *(_QWORD *)v5 = 0LL;
    v9 = *v3;
    if ( v8 != *v3 )
    {
      if ( v9 )
      {
        operator delete(v9);
        v2 = v11;
      }
      *v3 = v8;
    }
  }
  *a2 = v2;
  *((_QWORD *)a2 + 2) = v6;
  if ( v5 != &v12 )
  {
    v10 = *(void **)v5;
    if ( v7 == *(void **)v5 )
      return;
    if ( v10 )
      operator delete(v10);
    *(_QWORD *)v5 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    operator delete(v7);
}
