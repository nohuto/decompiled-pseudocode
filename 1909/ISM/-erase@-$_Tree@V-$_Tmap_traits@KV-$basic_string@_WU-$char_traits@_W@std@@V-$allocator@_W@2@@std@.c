/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800D9660
 * Callers:
 *     ??1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800D7BA4 (--1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180025538 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@Z @ 0x1800D91B8 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800D9728 (-erase@-$_Tree@V-$_Tmap_traits@KV-$basic_string@_WU-$char_traits@_W@std@@V-$allocat_ea_1800D9728.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::erase(
        _QWORD **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // r8
  __int64 v10; // rcx
  _QWORD *i; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == (_QWORD *)**a1 && a4 == v8 )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Erase(
      (__int64)a1,
      (void *)v8[1]);
    (*a1)[1] = v8;
    **a1 = v8;
    (*a1)[2] = v8;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v9 = v5;
      v10 = v5[2];
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( i = (_QWORD *)v5[1]; !*((_BYTE *)i + 25) && v5 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v5 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v10);
      }
      v5 = i;
      std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::erase(
        a1,
        &v13,
        v9);
    }
    *a2 = v5;
  }
  return a2;
}
