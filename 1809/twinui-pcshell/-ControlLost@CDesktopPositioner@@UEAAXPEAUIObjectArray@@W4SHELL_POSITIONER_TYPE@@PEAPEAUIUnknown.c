/*
 * XREFs of ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x18033C830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180341218 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1803416C4 (-erase@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::ControlLost(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // r13d
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned int i; // edi
  const char *v9; // r9
  __int64 v10; // r8
  unsigned __int8 v11; // r15
  int v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-68h] BYREF
  struct IApplicationView *v17; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v19[72]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v18[1] = -2LL;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  *a4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v16);
  for ( i = 0; i < v16; ++i )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    (*(void (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v5 + 32LL))(
      v5,
      i,
      &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
      &v17);
    CDesktopPositioner::_PersistPosition((CDesktopPositioner *)(v6 - 136), v17);
    v10 = *(_QWORD *)(v6 + 176);
    if ( v10 )
    {
      v11 = 0;
      if ( v4 == 1 || v4 == 3 )
        v11 = 1;
      if ( !v11 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(*(_QWORD *)v10 + 80LL))(
                *(_QWORD *)(v6 + 176),
                v17);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            835LL,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v12);
      }
      try
      {
        v14 = **(_QWORD **)(v6 + 200);
        v18[0] = v14;
        while ( v14 != *(_QWORD *)(v6 + 200) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(v14 + 48) + 64LL))(
                 *(_QWORD *)(v14 + 48),
                 v17) )
          {
            v13 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD))(**(_QWORD **)(v14 + 48) + 32LL))(
                    *(_QWORD *)(v14 + 48),
                    v17,
                    v11 ^ 1u);
            if ( v13 >= 0 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 48) + 72LL))(*(_QWORD *)(v14 + 48)) )
              {
                v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 192) + 32LL))(
                        *(_QWORD *)(v6 + 192),
                        *(_QWORD *)(v14 + 48));
                if ( v15 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    851LL,
                    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v15);
                std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::erase(
                  v6 + 200,
                  v19,
                  v14);
                goto LABEL_23;
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                849LL,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v13);
            }
          }
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(v18);
          v14 = v18[0];
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x35A,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          v9);
        v6 = a1;
        v4 = a3;
        v5 = a2;
        goto LABEL_19;
      }
LABEL_23:
      ;
    }
LABEL_19:
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  return result;
}
