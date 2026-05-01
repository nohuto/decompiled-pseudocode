/*
 * XREFs of ?DestroyViewGroup@ViewGroupManager@@UEAAJPEAUIViewGroup@@@Z @ 0x18024D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@0@AEAPEAUIViewGroup@@@Z @ 0x180099C00 (--$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA-AV-$com_ptr_t@UIViewGroupInternal@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V32@@Z @ 0x18024DFB4 (-erase@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewGroupManager::DestroyViewGroup(RTL_SRWLOCK *this, struct IViewGroup *a2)
{
  _QWORD *Ptr; // r8
  __int64 *v4; // rcx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IViewGroup *v9; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+20h] BYREF

  v9 = a2;
  try
  {
    wil::com_query<IViewGroupInternal,IViewGroup * &>((__int64)&v10, &v9);
    AcquireSRWLockExclusive(this + 31);
    v11 = this + 31;
    Ptr = this[32].Ptr;
    v4 = (__int64 *)Ptr[1];
    if ( *((_BYTE *)v4 + 25) )
      goto LABEL_9;
    do
    {
      if ( v4[4] >= v10 )
      {
        Ptr = v4;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
      }
    }
    while ( !*((_BYTE *)v4 + 25) );
    if ( Ptr == this[32].Ptr || v10 < Ptr[4] )
LABEL_9:
      Ptr = this[32].Ptr;
    if ( Ptr == this[32].Ptr )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)0x80070490LL);
    std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::erase(
      &this[32],
      &v11);
    if ( this != (RTL_SRWLOCK *)-248LL )
      ReleaseSRWLockExclusive(this + 31);
    v5 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 104LL))(v10);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAD,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v5);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB1,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v6);
  }
  return result;
}
