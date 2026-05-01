/*
 * XREFs of _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x1800721E0
 * Callers:
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x18005695C (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18020AC0C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180391808 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x180392590 (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_46851bff5b4673daf3d019eee80c73b2_::operator()(struct IImmersiveMonitor ***a1)
{
  int v2; // eax
  struct IImmersiveMonitor **v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  struct IImmersiveMonitor *v7; // rdi
  __int64 (__fastcall *v8)(struct IImmersiveMonitor *, struct IApplicationFrame **); // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  struct IImmersiveMonitor **v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
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
  v4 = (__int64)v3[17];
  v5 = v4;
  result = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)(result + 25) )
    goto LABEL_11;
  do
  {
    if ( *(_DWORD *)(result + 32) < v19 )
    {
      result = *(_QWORD *)(result + 16);
    }
    else
    {
      v5 = result;
      result = *(_QWORD *)result;
    }
  }
  while ( !*(_BYTE *)(result + 25) );
  if ( v5 == v4 || v19 < *(_DWORD *)(v5 + 32) )
LABEL_11:
    v5 = (__int64)v3[17];
  if ( v5 == v4 )
  {
    v20 = 0LL;
    v7 = v3[16];
    v8 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)v7 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v9 = v8(v7, &v20);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1EE,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v9,
        v17);
      __debugbreak();
    }
    v10 = WindowSizeConverter::EnsurePosition(retaddr, **a1, v20);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v10,
        v17);
      __debugbreak();
    }
    v12 = a1[1];
    v13 = (__int64)v12[17];
    v14 = *(_QWORD *)(v13 + 8);
    if ( *(_BYTE *)(v14 + 25) )
      goto LABEL_24;
    do
    {
      if ( *(_DWORD *)(v14 + 32) >= v19 )
      {
        v13 = v14;
        v14 = *(_QWORD *)v14;
      }
      else
      {
        v14 = *(_QWORD *)(v14 + 16);
      }
    }
    while ( !*(_BYTE *)(v14 + 25) );
    if ( (struct IImmersiveMonitor *)v13 == v12[17] || v19 < *(_DWORD *)(v13 + 32) )
    {
LABEL_24:
      v21 = (struct IApplicationFrame *)&v19;
      v15 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              v12 + 17,
              v11,
              &v21);
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        (_DWORD)v12 + 136,
        (unsigned int)&v21,
        v13,
        v15 + 32,
        v15);
      v13 = (__int64)v21;
    }
    v16 = v20;
    if ( *(struct IApplicationFrame **)(v13 + 40) != v20 )
    {
      v21 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      v21 = *(struct IApplicationFrame **)(v13 + 40);
      *(_QWORD *)(v13 + 40) = v16;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    }
    return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  return result;
}
