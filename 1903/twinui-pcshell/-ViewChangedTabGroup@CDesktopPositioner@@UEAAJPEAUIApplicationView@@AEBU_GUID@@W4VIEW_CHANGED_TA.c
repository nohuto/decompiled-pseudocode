/*
 * XREFs of ?ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TAB_GROUP_FLAGS@@@Z @ 0x1803A4D80
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180036A6C (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x1803A1E38 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1803A67C4 (-erase@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr.c)
 */

__int64 __fastcall CDesktopPositioner::ViewChangedTabGroup(__int64 a1, struct IApplicationView *a2, __int64 a3, int a4)
{
  CDesktopPositioner *v6; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // r14d
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int updated; // ebx
  __int64 v13; // rdx
  int v15; // eax
  struct IUnknown *v16; // [rsp+30h] [rbp-40h] BYREF
  struct IViewGroup *v17; // [rsp+38h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp-30h]
  _QWORD v19[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v19[1] = -2LL;
  v18 = a4;
  *(_QWORD *)&v20 = a3;
  v6 = (CDesktopPositioner *)(a1 - 128);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 56) & -(__int64)(a1 != 128));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v9 = **(_QWORD **)(a1 + 208);
  v19[0] = v9;
  while ( v9 != *(_QWORD *)(a1 + 208) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(v9 + 48) + 64LL))(
           *(_QWORD *)(v9 + 48),
           a2) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(v9 + 48) + 32LL))(
              *(_QWORD *)(v9 + 48),
              a2,
              1LL);
      if ( v10 >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 48) + 72LL))(*(_QWORD *)(v9 + 48)) )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 200) + 32LL))(
                  *(_QWORD *)(a1 + 200),
                  *(_QWORD *)(v9 + 48));
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1C6,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v11);
          std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::erase(
            a1 + 208,
            v19,
            v9);
          break;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C4,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v10);
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(v19);
    v9 = v19[0];
  }
  v16 = 0LL;
  v17 = 0LL;
  v20 = *(_OWORD *)v20;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  updated = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
              v6,
              a2,
              (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&v20,
              &v17,
              (struct IApplicationView **)&v16);
  if ( updated < 0 )
  {
    v13 = 464LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)updated);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    if ( v8 >= 0 )
      LeaveCriticalSection(v7);
    return (unsigned int)updated;
  }
  if ( (v18 & 1) == 0 )
  {
    if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, v16) )
    {
      v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D5,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v15);
    }
  }
  updated = CDesktopPositioner::_UpdateViewTabState(v6, a2);
  if ( updated < 0 )
  {
    v13 = 473LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}
