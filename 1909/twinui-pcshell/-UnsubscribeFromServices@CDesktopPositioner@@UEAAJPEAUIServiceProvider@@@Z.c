/*
 * XREFs of ?UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803C3FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x1803C5A84 (-clear@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::UnsubscribeFromServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v14[1] = -2LL;
  if ( *((_DWORD *)this + 86) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 104LL))(*((_QWORD *)this + 29));
    *((_DWORD *)this + 86) = 0;
  }
  if ( *((_DWORD *)this + 87) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 80LL))(*((_QWORD *)this + 30));
    *((_DWORD *)this + 87) = 0;
  }
  if ( *((_DWORD *)this + 89) )
  {
    v14[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(
           *((_QWORD *)this + 25),
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           v14);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 200LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
      return v4;
    }
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14[0] + 32LL))(v14[0], *((unsigned int *)this + 89));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 201LL;
      goto LABEL_10;
    }
    *((_DWORD *)this + 89) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  }
  v7 = *((_QWORD *)this + 35);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 1LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  }
  if ( *((_QWORD *)this + 36) )
  {
    v10 = (__int64 *)*((_QWORD *)this + 37);
    v11 = *v10;
    v14[0] = *v10;
    while ( (__int64 *)v11 != v10 )
    {
      v15 = *(_OWORD *)(v11 + 32);
      v12 = *(_QWORD *)(v11 + 48);
      v16 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 36) + 32LL))(*((_QWORD *)this + 36), v12);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD7,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(v14);
      v11 = v14[0];
    }
    std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::clear((char *)this + 296);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
  return 0LL;
}
