/*
 * XREFs of ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x18025EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180121284 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$_Insert_nohint@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@_NAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x18024CAB0 (--$_Insert_nohint@AEAV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU-$_Tre.c)
 *     ??$_Buynode@AEAPEAUIApplicationView@@@?$_Tree_comp_alloc@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@AEAPEAUIApplicationView@@@Z @ 0x18025E35C (--$_Buynode@AEAPEAUIApplicationView@@@-$_Tree_comp_alloc@V-$_Tset_traits@V-$com_ptr_t@UIApplicat.c)
 *     ?AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z @ 0x18025F00C (-AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall ViewGroup::AddView(ViewGroup *this, struct IApplicationView *a2)
{
  const char *v3; // r9
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  struct IApplicationView *v7; // rdi
  char v8; // r15
  int v9; // eax
  __int64 v10; // r9
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+30h] [rbp-98h]
  __int128 v18; // [rsp+30h] [rbp-98h]
  _BYTE v19[16]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v20; // [rsp+58h] [rbp-70h]
  char *v21; // [rsp+60h] [rbp-68h]
  __int128 v22; // [rsp+68h] [rbp-60h]
  __int64 *v23; // [rsp+78h] [rbp-50h]
  char v24; // [rsp+80h] [rbp-48h]
  __int128 v25; // [rsp+88h] [rbp-40h]
  char v26; // [rsp+98h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  struct IApplicationView *v28; // [rsp+D8h] [rbp+10h] BYREF
  __int64 WindowForView; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+20h] BYREF

  v28 = a2;
  v20 = -2LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(
                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                    a2);
  AcquireSRWLockExclusive((PSRWLOCK)this + 21);
  v21 = (char *)this + 168;
  if ( *((_BYTE *)this + 213) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      176LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      v3);
  v4 = std::_Tree_comp_alloc<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Buynode<IApplicationView * &>(
         (_QWORD *)this + 22,
         (__int64 *)&v28);
  std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Insert_nohint<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &,std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *> *>(
    (__int64 *)this + 22,
    (__int64)v19,
    v5,
    v4 + 4,
    v4);
  if ( !v19[8] )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      179LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)0x80070057LL);
  *(_QWORD *)&v17 = (char *)this - 8;
  *((_QWORD *)&v17 + 1) = v19;
  v25 = v17;
  v26 = 1;
  v6 = *((_QWORD *)this + 23);
  v30 = v6;
  v7 = v28;
  if ( v6 == 1 )
  {
    v8 = 1;
    *((_BYTE *)this + 212) = ViewGroup::AreViewTabsAppManaged((ViewGroup *)((char *)this - 8), v28);
    LODWORD(v6) = v30;
  }
  else
  {
    v8 = 0;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 32LL))(
         *((_QWORD *)this + 9),
         WindowForView,
         *((unsigned int *)this + 30),
         (unsigned int)v6);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      203LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)(unsigned int)v9);
  *(_QWORD *)&v18 = (char *)this - 8;
  *((_QWORD *)&v18 + 1) = &WindowForView;
  v22 = v18;
  v23 = &v30;
  v24 = 1;
  if ( v8 )
  {
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
      (__int64 *)this + 24,
      (__int64)v7);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, 1LL, 1LL);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        216LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 56LL))(
            *((_QWORD *)this + 9),
            *((unsigned int *)this + 30),
            WindowForView,
            2LL);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        222LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
      return ViewGroup::AddView_::_1_::dtor_0(v15, v14, v16);
    }
  }
  if ( this != (ViewGroup *)-168LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 21);
  if ( !*((_BYTE *)this + 212) )
  {
    LOBYTE(v10) = v8;
    (*(void (__fastcall **)(_QWORD, struct IApplicationView *, char *, __int64))(**((_QWORD **)this + 10) + 56LL))(
      *((_QWORD *)this + 10),
      v7,
      (char *)this + 104,
      v10);
  }
  return 0LL;
}
