/*
 * XREFs of _lambda_f167818d7963a6aecc3c3c61dfbcf93a_::operator() @ 0x180270A2C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f167818d7963a6aecc3c3c61dfbcf93a__void_::_Do_call @ 0x1802739A0 (std--_Func_impl_no_alloc__lambda_f167818d7963a6aecc3c3c61dfbcf93a__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180269BE0 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180272C90 (-SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@I.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_f167818d7963a6aecc3c3c61dfbcf93a_::operator()(__int64 a1)
{
  struct IWeakReference *v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  struct Windows::Internal::ComposableShell::Tabs::IShellTab **v7; // rdi
  struct Windows::Internal::ComposableShell::Tabs::IShellTab **v8; // rbx
  int v9; // eax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab **v11; // [rsp+28h] [rbp-18h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  void *v14; // [rsp+50h] [rbp+10h] BYREF

  v2 = *(struct IWeakReference **)(*(_QWORD *)(a1 + 8) + 144LL);
  if ( v2 )
  {
    wil::details::weak_query_policy::query(v2, &GUID_e83d78bd_0b44_4cec_9830_1db207e411f2, &v14);
    v2 = (struct IWeakReference *)v14;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v2 )
  {
LABEL_21:
    v4 = 0;
    goto LABEL_22;
  }
  v11 = 0LL;
  v12 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IWeakReference *, _QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab ***))v2->lpVtbl->Resolve)(
         v2,
         *(_QWORD *)(a1 + 16),
         &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v7 = (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)v12;
    v8 = v11;
    if ( v11 != (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)v12 )
    {
      do
      {
        v9 = DefaultIconManager::SyncAppSpecifiedIcons(*(DefaultIconManager **)(a1 + 8), *(HWND *)(a1 + 16), *v8);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xD1,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
            (const char *)(unsigned int)v9);
        ++v8;
      }
      while ( v8 != v7 );
      v7 = (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)v12;
      v8 = v11;
    }
    if ( v8 )
    {
      if ( v8 != v7 )
      {
        do
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v8++);
        while ( v8 != v7 );
        v8 = v11;
      }
      std::_Deallocate<16,0>(
        v8,
        (const struct std::nothrow_t *)((*((_QWORD *)&v12 + 1) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCD,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
    (const char *)(unsigned int)v3);
  v5 = (__int64 *)v11;
  if ( v11 )
  {
    v6 = (__int64 *)v12;
    if ( v11 != (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)v12 )
    {
      do
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v5++);
      while ( v5 != v6 );
      v5 = (__int64 *)v11;
    }
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)&v12 + 1) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
  }
LABEL_22:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
  return v4;
}
