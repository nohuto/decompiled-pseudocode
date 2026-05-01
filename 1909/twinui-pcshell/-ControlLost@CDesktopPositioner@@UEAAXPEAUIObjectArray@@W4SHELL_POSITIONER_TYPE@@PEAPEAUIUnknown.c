/*
 * XREFs of ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803C0B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803C57A4 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1803C5CB4 (-erase@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::ControlLost(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 result; // rax
  unsigned int i; // edi
  void (__fastcall *v9)(__int64, _QWORD, GUID *, struct IApplicationView **); // rbx
  const char *v10; // r9
  __int64 v11; // r8
  unsigned __int8 v12; // r14
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-68h] BYREF
  struct IApplicationView *v18; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v20[72]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v19[1] = -2LL;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  *a4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v17);
  for ( i = 0; i < v17; ++i )
  {
    v18 = 0LL;
    v9 = *(void (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v5 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v9(v5, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v18);
    CDesktopPositioner::_PersistPosition((CDesktopPositioner *)(v6 - 136), v18);
    v11 = *(_QWORD *)(v6 + 176);
    if ( v11 )
    {
      v12 = 0;
      if ( v4 == 1 || v4 == 3 )
        v12 = 1;
      if ( !v12 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(*(_QWORD *)v11 + 88LL))(
                *(_QWORD *)(v6 + 176),
                v18);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x312,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v13);
      }
      try
      {
        v15 = **(_QWORD **)(v6 + 200);
        v19[0] = v15;
        while ( v15 != *(_QWORD *)(v6 + 200) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(v15 + 48) + 64LL))(
                 *(_QWORD *)(v15 + 48),
                 v18) )
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD))(**(_QWORD **)(v15 + 48) + 32LL))(
                    *(_QWORD *)(v15 + 48),
                    v18,
                    v12 ^ 1u);
            if ( v14 >= 0 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 48) + 72LL))(*(_QWORD *)(v15 + 48)) )
              {
                v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 192) + 32LL))(
                        *(_QWORD *)(v6 + 192),
                        *(_QWORD *)(v15 + 48));
                if ( v16 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x322,
                    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v16);
                std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::erase(
                  v6 + 200,
                  v20,
                  v15);
                goto LABEL_23;
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x320,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v14);
            }
          }
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(v19);
          v15 = v19[0];
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x329,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          v10);
        v6 = a1;
        v4 = a3;
        v5 = a2;
        goto LABEL_19;
      }
LABEL_23:
      ;
    }
LABEL_19:
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  return result;
}
