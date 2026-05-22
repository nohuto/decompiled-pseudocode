/*
 * XREFs of ??R?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@std@@QEBA_NAEBQEAUIDCompInputTarget@@0@Z @ 0x1800BB43C
 * Callers:
 *     ??$_Insert@AEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800BA1BC (--$_Insert@AEAU-$pair@QEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@std@@V-$_List.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@AEBQEAUIDCompInputTarget@@@Z @ 0x1800BFA18 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>::operator()(
        __int64 a1,
        __int64 *a2,
        __int64 **a3)
{
  __int64 *v3; // rsi
  __int64 v4; // r14
  unsigned __int8 (__fastcall *v5)(__int64, __int64, __int64); // rbp
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, _BYTE *); // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v11[40]; // [rsp+28h] [rbp-50h] BYREF

  v3 = *a3;
  v4 = *a2;
  v5 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL);
  v6 = **a3;
  v7 = *(__int64 (__fastcall **)(__int64 *, _BYTE *))(v6 + 72);
  v8 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 56))(*a3);
  v9 = v7(v3, v11);
  return v5(v4, v9, v8) == 0;
}
