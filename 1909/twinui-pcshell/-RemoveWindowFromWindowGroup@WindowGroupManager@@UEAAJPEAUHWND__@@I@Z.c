/*
 * XREFs of ?RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z @ 0x18027CE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180181AF8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b039a04e92eef6f79ccb3d9549502cd___ @ 0x18027BC44 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5b039a04e92eef6f79ccb3d9549502cd.c)
 *     ?TryGetWindowGroupById@WindowGroupManager@@AEAA?AV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18027D1FC (-TryGetWindowGroupById@WindowGroupManager@@AEAA-AV-$com_ptr_t@UIWindowGroup@@Uerr_exception_poli.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18027D37C (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@w_ea_18027D37C.c)
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
  __int64 v12; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v19; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  v18[1] = -2LL;
  WindowGroupId = GetWindowGroupId(a2, &v21);
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
              v21,
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
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11), v21);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          171LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
          (const char *)(unsigned int)v11);
      WindowGroupManager::TryGetWindowGroupById((char *)this - 8, &v17, v21);
      if ( v17 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)this + 8);
        std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::erase(
          (char *)this + 72,
          &v21);
        if ( this != (WindowGroupManager *)-64LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
        v12 = *((_QWORD *)this + 14);
        v18[0] = &v17;
        *(_QWORD *)&v19 = v12;
        *((_QWORD *)&v19 + 1) = v18;
        CurrentThreadId = GetCurrentThreadId();
        v15 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b039a04e92eef6f79ccb3d9549502cd___(
                v14,
                CurrentThreadId,
                &v19);
        v16 = v15;
        if ( v15 >= 0 )
          v16 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5F,
            (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
            (const char *)(unsigned int)v15);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            187LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
            (const char *)(unsigned int)v16);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
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
