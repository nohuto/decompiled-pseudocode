/*
 * XREFs of ??$swap_wil@Uheap_buffer@details_abi@wil@@@wistd@@YAXAEAUheap_buffer@details_abi@wil@@0@Z @ 0x18001D6BC
 * Callers:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18001D670 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18007AB80 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800876C4 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall wistd::swap_wil<wil::details_abi::heap_buffer>(__int128 *a1, __int128 *a2)
{
  __int64 v4; // xmm0_8
  wil::details **v5; // rcx
  wil::details *v6; // rax
  __int128 v7; // xmm0
  void *v8; // rdx
  __int128 v9; // [rsp+20h] [rbp-38h]
  wil::details *v10; // [rsp+48h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h]

  v9 = *a1;
  v4 = *((_QWORD *)a1 + 2);
  v5 = (wil::details **)a1 + 3;
  v11 = v4;
  v6 = *v5;
  *v5 = 0LL;
  v7 = *a2;
  v10 = v6;
  *a1 = v7;
  *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(v5, (char *)a2 + 24);
  *a2 = v9;
  *((_QWORD *)a2 + 2) = v11;
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)a2 + 24, &v10);
  if ( v10 )
    wil::details::FreeProcessHeap(v10, v8);
}
