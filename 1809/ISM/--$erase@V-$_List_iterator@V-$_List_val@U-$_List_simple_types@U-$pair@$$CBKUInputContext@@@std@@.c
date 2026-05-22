/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@V21@@Z @ 0x18008D0F0
 * Callers:
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180089D70 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputContext_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputContext____0___::_Insert_std::pair_unsigned_long_const__InputContext__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__InputContext__________::_1_::catch$2 @ 0x180132527 (_std--_Hash_std--_Umap_traits_unsigned_long_InputContext_std--_Uhash_compare_unsign_ea_180132527.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *result; // rax

  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = *((unsigned __int8 *)a3 + v5++ + 16);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  while ( v5 < 4 );
  v9 = a1[3];
  v10 = 2 * (v6 & a1[6]);
  if ( *(_QWORD **)(v9 + 16 * (v6 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v9 + 16 * (v6 & a1[6])) == a3 )
    {
      *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = a3[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(_QWORD **)(v9 + 16 * (v6 & a1[6])) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = *a3;
  }
  v12 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8LL) = a3[1];
  --a1[2];
  v13 = a3[4];
  if ( v13 )
  {
    a3[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = a3[3];
  if ( v14 )
  {
    a3[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  operator delete(a3, (const struct std::nothrow_t *)0x40);
  result = a2;
  *a2 = v12;
  return result;
}
