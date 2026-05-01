/*
 * XREFs of _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x180391E40
 * Callers:
 *     wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x180391650 (wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18020AC0C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180391808 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 */

__int64 __fastcall lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator()(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int *v3; // rdx
  unsigned int *v4; // rbx
  __int64 *v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int *v8; // rdx
  __int64 v9; // r14
  __int64 *v10; // rsi
  __int64 *v11; // rbx
  void (__fastcall *v12)(__int64, __int64); // rbp
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int *v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = (unsigned int *)a1[1];
  v4 = *(unsigned int **)(*a1 + 136LL);
  v5 = (__int64 *)*((_QWORD *)v4 + 1);
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_9;
  v6 = *v3;
  do
  {
    if ( *((_DWORD *)v5 + 8) >= v6 )
    {
      v4 = (unsigned int *)v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == *(unsigned int **)(v1 + 136) || v6 < v4[8] )
  {
LABEL_9:
    v17 = v3;
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
           v1 + 136,
           (__int64)v3,
           &v17);
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
      (__int64 *)(v1 + 136),
      (__int64 *)&v17,
      (__int64 *)v4,
      (unsigned int *)(v7 + 32),
      v7);
    v4 = v17;
  }
  if ( *((_QWORD *)v4 + 5) )
  {
    v8 = (unsigned int *)a1[1];
    v9 = *(_QWORD *)(*a1 + 128LL);
    v10 = (__int64 *)(*a1 + 136LL);
    v11 = (__int64 *)*v10;
    v12 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL);
    v13 = *(_QWORD *)(*v10 + 8);
    if ( *(_BYTE *)(v13 + 25) )
      goto LABEL_19;
    v14 = *v8;
    do
    {
      if ( *(_DWORD *)(v13 + 32) >= v14 )
      {
        v11 = (__int64 *)v13;
        v13 = *(_QWORD *)v13;
      }
      else
      {
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    while ( !*(_BYTE *)(v13 + 25) );
    if ( v11 == (__int64 *)*v10 || v14 < *((_DWORD *)v11 + 8) )
    {
LABEL_19:
      v17 = (unsigned int *)a1[1];
      v15 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              (__int64)v10,
              (__int64)v8,
              &v17);
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        v10,
        (__int64 *)&v17,
        v11,
        (unsigned int *)(v15 + 32),
        v15);
      v11 = (__int64 *)v17;
    }
    v12(v9, v11[5]);
  }
  return std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
           *a1 + 136LL,
           a1[1]);
}
