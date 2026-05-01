/*
 * XREFs of _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x18005685C
 * Callers:
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180056834 (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 * Callees:
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180056920 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18020AC0C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180391808 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 */

__int64 __fastcall lambda_7a5168388c52e35df9f99ba32a5252ab_::operator()(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rdx
  WindowSizeConverter *v5; // rdi
  unsigned int *v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rdi
  _DWORD *v9; // rcx
  __int64 *v10; // rbx
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = WindowSizeConverter::EnsureEntry(*(WindowSizeConverter **)a1, **(struct IImmersiveMonitor ***)(a1 + 8));
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x241,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v13);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(***(_QWORD ***)(a1 + 8) + 24LL))(**(_QWORD **)(a1 + 8), &v15);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x245,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v3,
      v13);
    __debugbreak();
  }
  v5 = *(WindowSizeConverter **)a1;
  v6 = *(unsigned int **)(*(_QWORD *)a1 + 136LL);
  v7 = (__int64 *)*((_QWORD *)v6 + 1);
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_13;
  do
  {
    if ( *((_DWORD *)v7 + 8) < v15 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v6 = (unsigned int *)v7;
      v7 = (__int64 *)*v7;
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == *((unsigned int **)v5 + 17) || v15 < v6[8] )
  {
LABEL_13:
    v16 = &v15;
    v12 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (char *)v5 + 136,
            v4,
            &v16);
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
      (_DWORD)v5 + 136,
      (unsigned int)&v16,
      (_DWORD)v6,
      v12 + 32,
      v12);
    v6 = v16;
  }
  v8 = (__int64 *)(v6 + 10);
  v9 = v6 + 10;
  v10 = **(__int64 ***)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  result = *v8;
  *v10 = *v8;
  return result;
}
