/*
 * XREFs of ?FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ @ 0x1802275D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111___::Run @ 0x18022B510 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111___--Run.c)
 *     ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18022DB40 (-v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18020FDB0 (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ?erase@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18022D5B8 (-erase@-$list@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowEventDispatcher::FlushRemovedPendingActivations(RTL_SRWLOCK *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  char v6; // [rsp+60h] [rbp+18h] BYREF

  while ( this[65].Ptr )
  {
    AcquireSRWLockExclusive(this + 58);
    v2 = *(_QWORD *)(*(_QWORD *)this[64].Ptr + 16LL);
    v5 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::erase(
      &this[64],
      &v6,
      *(_QWORD *)this[64].Ptr);
    if ( this != (RTL_SRWLOCK *)-464LL )
      ReleaseSRWLockExclusive(this + 58);
    v3 = *(_QWORD *)(v2 + 24);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v2 + 16), 0LL);
    ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
      v2 + 8,
      &StringRawBuffer);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v5);
  }
}
