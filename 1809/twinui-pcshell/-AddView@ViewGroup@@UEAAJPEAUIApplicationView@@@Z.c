/*
 * XREFs of ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180206300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     ??$_Insert_nohint@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@_NAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x1801F9DC8 (--$_Insert_nohint@AEAV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU-$_Tre.c)
 *     ??$_Buynode@AEAPEAUIApplicationView@@@?$_Tree_comp_alloc@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@AEAPEAUIApplicationView@@@Z @ 0x180205A6C (--$_Buynode@AEAPEAUIApplicationView@@@-$_Tree_comp_alloc@V-$_Tset_traits@V-$com_ptr_t@UIApplicat.c)
 *     ?AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z @ 0x180206724 (-AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall ViewGroup::AddView(ViewGroup *this, struct IApplicationView *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r15
  bool v8; // r14
  bool v9; // al
  bool v10; // al
  int v11; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v18; // [rsp+30h] [rbp-B8h]
  __int128 v19; // [rsp+30h] [rbp-B8h]
  __int128 v20; // [rsp+30h] [rbp-B8h]
  _BYTE v21[16]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-90h]
  char *v23; // [rsp+60h] [rbp-88h]
  __int128 v24; // [rsp+68h] [rbp-80h]
  __int64 *v25; // [rsp+78h] [rbp-70h]
  char v26; // [rsp+80h] [rbp-68h]
  __int128 v27; // [rsp+88h] [rbp-60h]
  char v28; // [rsp+98h] [rbp-50h]
  __int128 v29; // [rsp+A0h] [rbp-48h]
  char v30; // [rsp+B0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  struct IApplicationView *v32; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v33; // [rsp+100h] [rbp+18h] BYREF
  __int64 WindowForView; // [rsp+108h] [rbp+20h] BYREF

  v32 = a2;
  v22 = -2LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(
                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                    a2);
  AcquireSRWLockExclusive((PSRWLOCK)this + 21);
  v23 = (char *)this + 168;
  v3 = std::_Tree_comp_alloc<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Buynode<IApplicationView * &>(
         (_QWORD *)this + 22,
         (__int64 *)&v32);
  std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Insert_nohint<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &,std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *> *>(
    (__int64 *)this + 22,
    (__int64)v21,
    v4,
    v3 + 4,
    v3);
  if ( !v21[8] )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      154LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)0x80070057LL);
  *(_QWORD *)&v18 = (char *)this - 8;
  *((_QWORD *)&v18 + 1) = v21;
  v27 = v18;
  v28 = 1;
  v6 = *((_QWORD *)this + 23);
  v33 = v6;
  v7 = v6;
  v8 = v6 == 1;
  v10 = 0;
  if ( v6 == 1 )
  {
    v9 = ViewGroup::AreViewTabsAppManaged((ViewGroup *)((char *)this - 8), v32);
    LODWORD(v6) = v33;
    if ( v9 )
      v10 = 1;
  }
  *((_BYTE *)this + 212) = v10;
  if ( !v10 )
  {
    LOBYTE(v5) = v8;
    (*(void (__fastcall **)(_QWORD, struct IApplicationView *, char *, __int64))(**((_QWORD **)this + 10) + 56LL))(
      *((_QWORD *)this + 10),
      v32,
      (char *)this + 104,
      v5);
    LODWORD(v6) = v33;
  }
  *(_QWORD *)&v19 = (char *)this - 8;
  *((_QWORD *)&v19 + 1) = &v32;
  v29 = v19;
  v30 = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 32LL))(
          *((_QWORD *)this + 9),
          WindowForView,
          *((unsigned int *)this + 30),
          (unsigned int)v6);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      185LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)(unsigned int)v11);
  *(_QWORD *)&v20 = (char *)this - 8;
  *((_QWORD *)&v20 + 1) = &WindowForView;
  v24 = v20;
  v25 = &v33;
  v26 = 1;
  if ( v7 == 1 )
  {
    wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=(
      (__int64 *)this + 24,
      (__int64)v32);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64))(*(_QWORD *)v32 + 96LL))(
            v32,
            1LL,
            1LL);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        198LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 56LL))(
            *((_QWORD *)this + 9),
            *((unsigned int *)this + 30),
            WindowForView,
            2LL);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        204LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
      return ViewGroup::AddView_::_1_::dtor_0(v16, v15, v17);
    }
  }
  if ( this != (ViewGroup *)-168LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 21);
  return 0LL;
}
