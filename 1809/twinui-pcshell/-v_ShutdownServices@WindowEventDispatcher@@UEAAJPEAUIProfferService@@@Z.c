/*
 * XREFs of ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18022DB40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Buynode@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$_List_buy@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007AF14 (--$_Buynode@AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ @ 0x1802275D0 (-FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ.c)
 *     ?clear@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18022D3F0 (-clear@-$list@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18022D454 (-clear@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::v_ShutdownServices(WindowEventDispatcher *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // r15
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v13; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+70h] [rbp+18h]

  v3 = (RTL_SRWLOCK *)((char *)this + 336);
  AcquireSRWLockExclusive((PSRWLOCK)this + 42);
  v14 = v3;
  std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::clear((__int64 **)this + 29);
  v4 = (_QWORD *)*((_QWORD *)this + 46);
  try
  {
    while ( 1 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 == *((_QWORD **)this + 46) )
        break;
      v5 = (_QWORD *)v4[2];
      v13 = v5;
      if ( v5 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      v6 = *((_QWORD *)this + 48);
      v7 = *(__int64 **)(v6 + 8);
      v8 = std::_List_buy<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Buynode<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
             (__int64)v5,
             v6,
             (__int64)v7,
             &v13);
      v9 = *((_QWORD *)this + 49);
      if ( v9 == 0xAAAAAAAAAAAAAA9LL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)this + 49) = v9 + 1;
      *(_QWORD *)(v6 + 8) = v8;
      *v7 = v8;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
    }
    std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::clear((__int64)this + 368);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    WindowEventDispatcher::FlushRemovedPendingActivations((RTL_SRWLOCK *)this - 16);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 25);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x111,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v10);
  }
  return result;
}
