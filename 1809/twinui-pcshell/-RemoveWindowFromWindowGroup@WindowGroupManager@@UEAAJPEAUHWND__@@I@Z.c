/*
 * XREFs of ?RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z @ 0x180205130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180077240 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@9@$0A@@std@@@std@@QEAA_KAEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801F1338 (-erase@-$_Tree@V-$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal_ea_1801F1338.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_928947457fe9a2633d945ad0aaf0a4a8___ @ 0x180203EF8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_928947457fe9a2633d945ad0aaf0a4a8.c)
 *     ?TryGetWindowGroupById@WindowGroupManager@@AEAA?AV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18020552C (-TryGetWindowGroupById@WindowGroupManager@@AEAA-AV-$com_ptr_t@UIWindowGroup@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowGroupManager::RemoveWindowFromWindowGroup(WindowGroupManager *this, HWND a2, int a3)
{
  int WindowGroupId; // eax
  const char *v6; // r9
  int v7; // esi
  DWORD LastError; // eax
  __int64 result; // rax
  int v10; // eax
  int v11; // eax
  DWORD CurrentThreadId; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v18; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v17[1] = -2LL;
  WindowGroupId = GetWindowGroupId(a2, &v20);
  v7 = WindowGroupId;
  if ( !WindowGroupId )
  {
    LastError = GetLastError();
    if ( LastError == 1400 )
      return 0LL;
  }
  try
  {
    if ( !v7 )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xA0,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        v6);
    if ( a3 == 2 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 11) + 48LL))(
              *((_QWORD *)this + 11),
              v20,
              1LL,
              0LL);
      if ( v10 >= 0 )
        return 0LL;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        166LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( a3 == 1 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11), v20);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          171LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
          (const char *)(unsigned int)v11);
      WindowGroupManager::TryGetWindowGroupById((char *)this - 8, &v16, v20);
      if ( v16 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)this + 8);
        std::_Tree<std::_Tmap_traits<Windows::Internal::ApplicationModel::WindowManagement::WindowId,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<Windows::Internal::ApplicationModel::WindowManagement::WindowId>,std::allocator<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::erase(
          (__int64 *)this + 9,
          &v20);
        if ( this != (WindowGroupManager *)-64LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
        v17[0] = &v16;
        *(_QWORD *)&v18 = *((_QWORD *)this + 14);
        *((_QWORD *)&v18 + 1) = v17;
        CurrentThreadId = GetCurrentThreadId();
        v14 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_928947457fe9a2633d945ad0aaf0a4a8___(
                v13,
                CurrentThreadId,
                &v18);
        v15 = v14;
        if ( v14 >= 0 )
          v15 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5F,
            (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
            (const char *)(unsigned int)v14);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            187LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
            (const char *)(unsigned int)v15);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
    }
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
                           v6);
  }
  return result;
}
