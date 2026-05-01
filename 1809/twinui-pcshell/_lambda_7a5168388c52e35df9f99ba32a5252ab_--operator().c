/*
 * XREFs of _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x180031A94
 * Callers:
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180031A6C (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 * Callees:
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180031B84 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C9734 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree__ea_1802C9734.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180331764 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 */

_QWORD **__fastcall lambda_7a5168388c52e35df9f99ba32a5252ab_::operator()(__int64 *a1)
{
  unsigned int *v2; // rdx
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int *v9; // rbx
  __int64 *v10; // rax
  _QWORD **result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-20h]
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v18; // [rsp+60h] [rbp+20h] BYREF
  unsigned int *v19; // [rsp+68h] [rbp+28h] BYREF

  v2 = *(unsigned int **)a1[1];
  v16[0] = &v19;
  v16[1] = *a1;
  v19 = v2;
  v3 = wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___(v16);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v3,
      v15);
  else
    v4 = 0;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x241,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v4,
      v15);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)a1[1] + 24LL))(*(_QWORD *)a1[1], &v18);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x245,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v5,
      v15);
    __debugbreak();
  }
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 136);
  v9 = (unsigned int *)v8;
  v10 = *(__int64 **)(v8 + 8);
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_19;
  v6 = v18;
  do
  {
    if ( *((_DWORD *)v10 + 8) < v18 )
    {
      v10 = (__int64 *)v10[2];
    }
    else
    {
      v9 = (unsigned int *)v10;
      v10 = (__int64 *)*v10;
    }
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v9 == (unsigned int *)v8 || v18 < v9[8] )
  {
LABEL_19:
    v19 = &v18;
    v14 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            v7 + 136,
            v6,
            &v19);
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
      v7 + 136,
      (unsigned int)&v19,
      (_DWORD)v9,
      v14 + 32,
      v14);
    v9 = v19;
  }
  result = (_QWORD **)a1[2];
  v12 = *((_QWORD *)v9 + 5);
  v13 = *result;
  if ( v12 )
  {
    result = (_QWORD **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v12 = *((_QWORD *)v9 + 5);
  }
  *v13 = v12;
  return result;
}
