/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18006A434
 * Callers:
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x18034BF00 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180229EE0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x18033BBFC (--$_Insert_hint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tre.c)
 */

__int64 __fastcall std::map<unsigned int,unsigned short const *>::_Try_emplace<unsigned int const &,>(
        __int64 **a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v3; // rbx
  int v4; // esi
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v8; // rax
  unsigned int *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = (int)a1;
  v5 = a2;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_11;
  a2 = *a3;
  do
  {
    if ( *((_DWORD *)v6 + 8) < (unsigned int)a2 )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v3 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v3 == *a1 || (unsigned int)a2 < *((_DWORD *)v3 + 8) )
  {
LABEL_11:
    v9 = a3;
    v8 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
           a1,
           a2,
           &v9);
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      v4,
      (unsigned int)&v9,
      (_DWORD)v3,
      v8 + 32,
      v8);
    *(_QWORD *)v5 = v9;
    *(_BYTE *)(v5 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v5 = v3;
    *(_BYTE *)(v5 + 8) = 0;
  }
  return v5;
}
