/*
 * XREFs of _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x18005BC80
 * Callers:
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180031B84 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C9734 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree__ea_1802C9734.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180331764 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x180332574 (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_46851bff5b4673daf3d019eee80c73b2_::operator()(struct IImmersiveMonitor ***a1)
{
  int v2; // eax
  struct IImmersiveMonitor **v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct IImmersiveMonitor *v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  struct IImmersiveMonitor **v11; // rdi
  struct IImmersiveMonitor *v12; // rcx
  __int64 *v13; // rax
  struct IApplicationFrame *v14; // rbx
  __int64 v15; // rax
  struct IApplicationFrame *v16; // rdi
  int v17; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v19; // [rsp+70h] [rbp+20h] BYREF
  struct IApplicationFrame *v20; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationFrame *v21; // [rsp+80h] [rbp+30h] BYREF

  v2 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)**a1 + 24LL))(**a1, &v19);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E7,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v17);
    __debugbreak();
  }
  v3 = a1[1];
  result = (__int64)v3[17];
  v5 = *(_QWORD *)(result + 8);
  v6 = result;
  if ( *(_BYTE *)(v5 + 25) )
    goto LABEL_11;
  do
  {
    if ( *(_DWORD *)(v5 + 32) < v19 )
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      v6 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  while ( !*(_BYTE *)(v5 + 25) );
  if ( v6 == result || v19 < *(_DWORD *)(v6 + 32) )
LABEL_11:
    v6 = (__int64)v3[17];
  if ( v6 == result )
  {
    v20 = 0LL;
    v7 = v3[16];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)v7 + 24LL))(
           v7,
           &v20);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1EE,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v8,
        v17);
      __debugbreak();
    }
    v9 = WindowSizeConverter::EnsurePosition(retaddr, **a1, v20);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v9,
        v17);
      __debugbreak();
    }
    v11 = a1[1];
    v12 = v11[17];
    v13 = (__int64 *)*((_QWORD *)v12 + 1);
    v14 = v12;
    if ( *((_BYTE *)v13 + 25) )
      goto LABEL_25;
    v10 = v19;
    do
    {
      if ( *((_DWORD *)v13 + 8) >= v19 )
      {
        v14 = (struct IApplicationFrame *)v13;
        v13 = (__int64 *)*v13;
      }
      else
      {
        v13 = (__int64 *)v13[2];
      }
    }
    while ( !*((_BYTE *)v13 + 25) );
    if ( v14 == v12 || v19 < *((_DWORD *)v14 + 8) )
    {
LABEL_25:
      v21 = (struct IApplicationFrame *)&v19;
      v15 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              v11 + 17,
              v10,
              &v21);
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        (_DWORD)v11 + 136,
        (unsigned int)&v21,
        (_DWORD)v14,
        v15 + 32,
        v15);
      v14 = v21;
    }
    v16 = v20;
    if ( *((struct IApplicationFrame **)v14 + 5) != v20 )
    {
      v21 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
      v21 = (struct IApplicationFrame *)*((_QWORD *)v14 + 5);
      *((_QWORD *)v14 + 5) = v16;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    }
    return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  return result;
}
