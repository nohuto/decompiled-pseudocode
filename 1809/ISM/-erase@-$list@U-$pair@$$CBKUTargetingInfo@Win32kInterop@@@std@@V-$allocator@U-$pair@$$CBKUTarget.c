/*
 * XREFs of ?erase@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x180085148
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x180085054 (-erase@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUTargetingInfo@Win32kInterop@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@@Z @ 0x1800855E8 (--$_Insert@AEAU-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$_List_unchecked_iterator@V-$_L.c)
 *     ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x180085BD4 (-_Destroy_if_node@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$h.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD **a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *result; // rax

  v3 = *a3;
  *a3[1] = *a3;
  (*a3)[1] = a3[1];
  --*(_QWORD *)(a1 + 8);
  v6 = a3[8];
  if ( v6 )
  {
    a3[8] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  }
  v7 = a3[4];
  if ( v7 )
  {
    a3[4] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  v8 = a3[3];
  if ( v8 )
  {
    a3[3] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  }
  operator delete(a3, (const struct std::nothrow_t *)0x50);
  result = a2;
  *a2 = v3;
  return result;
}
