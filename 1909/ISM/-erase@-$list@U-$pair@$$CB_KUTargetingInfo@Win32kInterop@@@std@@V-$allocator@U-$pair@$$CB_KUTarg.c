/*
 * XREFs of ?erase@?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x1800BF888
 * Callers:
 *     ??$_Insert@AEAU?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@@Z @ 0x1800B9FF0 (--$_Insert@AEAU-$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V-$_List_unchecked_iterator@V-$_.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Win32kInterop::TargetingInfo____0___::_Insert_std::pair_unsigned___int64_const__Win32kInterop::TargetingInfo__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__Win32kInterop::TargetingInfo__________::_1_::catch$56 @ 0x1800BA160 (_std--_Hash_std--_Umap_traits_unsigned___int64_Win32kInterop--TargetingInfo_std--_U_ea_1800BA160.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x1800BF6B0 (-erase@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@_KU-$hash@_K@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1InputContext@@QEAA@XZ @ 0x1800BACCC (--1InputContext@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD **a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rcx
  _QWORD *result; // rax

  v3 = *a3;
  *a3[1] = *a3;
  (*a3)[1] = a3[1];
  --*(_QWORD *)(a1 + 8);
  v6 = a3[16];
  if ( v6 )
  {
    a3[16] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  }
  InputContext::~InputContext((InputContext *)(a3 + 3));
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0x90);
  result = a2;
  *a2 = v3;
  return result;
}
