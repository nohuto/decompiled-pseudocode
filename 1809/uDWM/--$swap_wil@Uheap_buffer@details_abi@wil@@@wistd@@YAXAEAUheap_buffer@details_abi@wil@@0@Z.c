/*
 * XREFs of ??$swap_wil@Uheap_buffer@details_abi@wil@@@wistd@@YAXAEAUheap_buffer@details_abi@wil@@0@Z @ 0x180002294
 * Callers:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180002248 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 * Callees:
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180002464 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003B7B4 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wistd::swap_wil<wil::details_abi::heap_buffer>(__int128 *a1, __int128 *a2)
{
  __int64 v4; // xmm0_8
  void **v5; // rcx
  void *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // [rsp+20h] [rbp-38h]
  void *v9; // [rsp+48h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h]

  v8 = *a1;
  v4 = *((_QWORD *)a1 + 2);
  v5 = (void **)a1 + 3;
  v10 = v4;
  v6 = *v5;
  *v5 = 0LL;
  v7 = *a2;
  v9 = v6;
  *a1 = v7;
  *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(v5, (char *)a2 + 24);
  *a2 = v8;
  *((_QWORD *)a2 + 2) = v10;
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)a2 + 24, &v9);
  if ( v9 )
    MemoryFree(v9);
}
