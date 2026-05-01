/*
 * XREFs of ?DestroyViewGroup@ViewGroupManager@@UEAAJPEAUIViewGroup@@@Z @ 0x1801FA4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@0@AEAPEAUIViewGroup@@@Z @ 0x1800900A8 (--$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA-AV-$com_ptr_t@UIViewGroupInternal@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V32@@Z @ 0x1801FB2A8 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewGroupManager::DestroyViewGroup(RTL_SRWLOCK *this, struct IViewGroup *a2)
{
  _QWORD *Ptr; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // r8
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IViewGroup *v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+20h] BYREF

  v10 = a2;
  try
  {
    wil::com_query<IViewGroupInternal,IViewGroup * &>((__int64)&v11, &v10);
    AcquireSRWLockExclusive(this + 30);
    v12 = this + 30;
    Ptr = this[31].Ptr;
    v4 = (_QWORD *)Ptr[1];
    v5 = Ptr;
    if ( *((_BYTE *)v4 + 25) )
      goto LABEL_9;
    do
    {
      if ( v4[4] >= v11 )
      {
        v5 = v4;
        v4 = (_QWORD *)*v4;
      }
      else
      {
        v4 = (_QWORD *)v4[2];
      }
    }
    while ( !*((_BYTE *)v4 + 25) );
    if ( v5 == Ptr || v11 < v5[4] )
LABEL_9:
      v5 = this[31].Ptr;
    if ( v5 == Ptr )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        155LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)0x80070490LL);
    std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::erase(
      &this[31],
      &v12);
    if ( this != (RTL_SRWLOCK *)-240LL )
      ReleaseSRWLockExclusive(this + 30);
    v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 104LL))(v11);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        159LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA3,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v7);
  }
  return result;
}
