/*
 * XREFs of ?OnTitleBarsLost@ViewGroupManager@@UEAAJXZ @ 0x18024DB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITitleBarRecovery@@@?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITitleBarRecovery@@Uerr_exception_policy@wil@@@1@XZ @ 0x180099AC0 (--$query@UITitleBarRecovery@@@-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewGroupManager::OnTitleBarsLost(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  const char *v3; // r9
  _QWORD *Ptr; // rdi
  _QWORD *v5; // rax
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+18h]

  v2 = this + 29;
  AcquireSRWLockShared(this + 29);
  v11 = v2;
  Ptr = this[30].Ptr;
  v5 = (_QWORD *)*Ptr;
  v10 = (_QWORD *)*Ptr;
  try
  {
    while ( v5 != Ptr )
    {
      wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>::query<ITitleBarRecovery>(v5 + 4, (__int64)&v9);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBB,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
          (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v10);
      v5 = v10;
    }
    if ( v2 )
      ReleaseSRWLockShared(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v3);
  }
  return result;
}
