/*
 * XREFs of ??RDCompTargetHash@@QEBA_KPEBUIDCompInputTarget@@@Z @ 0x1800BB4DC
 * Callers:
 *     ??$_Insert@AEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800BA1BC (--$_Insert@AEAU-$pair@QEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@std@@V-$_List.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800BA560 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAUIDCompInputTarget@@V-$.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@AEBQEAUIDCompInputTarget@@@Z @ 0x1800BFA18 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DCompTargetHash::operator()(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned __int8 *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r8
  unsigned __int8 *v8; // rcx
  int v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  _BYTE v12[40]; // [rsp+30h] [rbp-48h] BYREF

  v11 = -2LL;
  v10 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 72LL))(a2, v12);
  v3 = 0xCBF29CE484222325uLL;
  v4 = 0xCBF29CE484222325uLL;
  v5 = (unsigned __int8 *)&v10;
  v6 = 4LL;
  v7 = 4LL;
  do
  {
    v4 = 0x100000001B3LL * (*v5++ ^ (unsigned __int64)v4);
    --v7;
  }
  while ( v7 );
  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 72LL))(a2, v12) + 4);
  v8 = (unsigned __int8 *)&v10;
  do
  {
    v3 = 0x100000001B3LL * (*v8++ ^ (unsigned __int64)v3);
    --v6;
  }
  while ( v6 );
  return v4 ^ (2 * v3);
}
