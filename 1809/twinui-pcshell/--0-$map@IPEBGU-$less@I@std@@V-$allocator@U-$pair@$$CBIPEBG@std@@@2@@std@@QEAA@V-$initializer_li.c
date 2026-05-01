/*
 * XREFs of ??0?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBIPEBG@std@@@1@@Z @ 0x1802C04B0
 * Callers:
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1802C0640 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1801EFDD8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 *     ??$_Buynode@AEBU?$pair@$$CBIPEBG@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@AEBU?$pair@$$CBIPEBG@1@@Z @ 0x1802BF0E4 (--$_Buynode@AEBU-$pair@$$CBIPEBG@std@@@-$_Tree_comp_alloc@V-$_Tmap_traits@IPEBGU-$less@I@std@@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x1802BF32C (--$_Insert_hint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::map<unsigned int,unsigned short const *>::map<unsigned int,unsigned short const *>(
        __int64 **a1,
        __m128i *a2)
{
  _OWORD *v4; // rsi
  unsigned __int64 v5; // xmm0_8
  __int64 *v6; // rbx
  unsigned int *v7; // rax
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode();
  v4 = (_OWORD *)a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  while ( v4 != (_OWORD *)v5 )
  {
    v6 = *a1;
    v7 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Buynode<std::pair<unsigned int const,unsigned short const *> const &>(
                           a1,
                           v4);
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      (__int64 *)a1,
      &v9,
      v6,
      v7 + 8,
      v7);
    ++v4;
  }
  return a1;
}
