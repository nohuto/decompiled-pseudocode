/*
 * XREFs of _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x180331DC8
 * Callers:
 *     wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x1803315AC (wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C9734 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree__ea_1802C9734.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180331764 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 */

__int64 __fastcall lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator()(unsigned int **a1, __int64 a2)
{
  unsigned int *v2; // rsi
  unsigned int *v4; // r8
  __int64 *v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned int *v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rsi
  __int64 *v11; // rbx
  __int64 v12; // rax
  unsigned int *v13; // rax
  unsigned int *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = a1[1];
  v5 = (__int64 *)*((_QWORD *)*a1 + 17);
  v6 = v5;
  v7 = v5[1];
  if ( *(_BYTE *)(v7 + 25) )
    goto LABEL_9;
  a2 = *v4;
  do
  {
    if ( *(_DWORD *)(v7 + 32) >= (unsigned int)a2 )
    {
      v6 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  while ( !*(_BYTE *)(v7 + 25) );
  if ( v6 == v5 || (unsigned int)a2 < *((_DWORD *)v6 + 8) )
  {
LABEL_9:
    v15 = v4;
    v8 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                           (_QWORD *)v2 + 17,
                           a2,
                           &v15);
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
      (__int64 *)v2 + 17,
      (__int64 *)&v15,
      v6,
      v8 + 8,
      (__int64)v8);
    v6 = (__int64 *)v15;
  }
  if ( v6[5] )
  {
    v9 = *((_QWORD *)*a1 + 16);
    v10 = (__int64 *)(*a1 + 34);
    v11 = (__int64 *)*v10;
    v12 = *(_QWORD *)(*v10 + 8);
    if ( *(_BYTE *)(v12 + 25) )
      goto LABEL_19;
    a2 = *a1[1];
    do
    {
      if ( *(_DWORD *)(v12 + 32) >= (unsigned int)a2 )
      {
        v11 = (__int64 *)v12;
        v12 = *(_QWORD *)v12;
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    while ( !*(_BYTE *)(v12 + 25) );
    if ( v11 == (__int64 *)*v10 || (unsigned int)a2 < *((_DWORD *)v11 + 8) )
    {
LABEL_19:
      v15 = a1[1];
      v13 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                              v10,
                              a2,
                              &v15);
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        v10,
        (__int64 *)&v15,
        v11,
        v13 + 8,
        (__int64)v13);
      v11 = (__int64 *)v15;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v11[5]);
  }
  return std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
           *a1 + 34,
           a1[1]);
}
