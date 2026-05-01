/*
 * XREFs of ?EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BAC90
 * Callers:
 *     ?EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BAC10 (-EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafe.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32AppInfo::EnumerateAppViews(
        Win32AppInfo *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  __int64 v3; // rax
  Win32AppInfo *v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // r8
  _QWORD *v10; // rdi
  _QWORD *v11; // rdx
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v5 = this;
  if ( *((_QWORD *)this + 3) >= 8uLL )
    v5 = *(Win32AppInfo **)this;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, Win32AppInfo *))(v3 + 24))(
    a2,
    v5);
  v6 = (_QWORD *)*((_QWORD *)this + 4);
  v7 = (_QWORD *)*v6;
  v13 = (_QWORD *)*v6;
  while ( v7 != v6 )
  {
    v8 = v7[5];
    v9 = (_QWORD *)(v8 + 24);
    if ( *(_QWORD *)(v8 + 48) >= 8uLL )
      v9 = (_QWORD *)*v9;
    (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD, _QWORD *, const WCHAR *))(*(_QWORD *)a2 + 32LL))(
      a2,
      *(unsigned int *)(v8 + 16),
      v9,
      &szAgent);
    v10 = *(_QWORD **)v8;
    v11 = (_QWORD *)*v10;
    v12 = (_QWORD *)*v10;
    while ( v11 != v10 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD))(*(_QWORD *)a2 + 40LL))(
        a2,
        v11[4]);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v12);
      v11 = v12;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v13);
    v7 = v13;
  }
}
