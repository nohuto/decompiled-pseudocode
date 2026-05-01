/*
 * XREFs of ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18013A490
 * Callers:
 *     ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x18013A5E0 (-Unregister@CApplicationManager@@UEAAJK@Z.c)
 *     ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x180147A40 (-v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x180147A60 (-v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x180176B70 (-UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x1801783D0 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z.c)
 *     ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x1802225D0 (-Unregister@HolographicPositioner@@UEAAJK@Z.c)
 *     ?UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z @ 0x180405CB0 (-UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z.c)
 *     ?Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z @ 0x180410FB0 (-Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // r15
  RTL_SRWLOCK v5; // rbx
  __int64 v6; // rax
  _QWORD *Ptr; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+70h] [rbp+18h]

  v14 = 0LL;
  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v15 = v4;
  for ( v5.Ptr = this->Ptr; v5.Ptr != this[1].Ptr && *(_DWORD *)v5.Ptr != a2; v5.Ptr = (char *)v5.Ptr + 16 )
    ;
  try
  {
    if ( v5.Ptr == this[1].Ptr )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        43LL,
        (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)0x80070057LL);
    v6 = *((_QWORD *)v5.Ptr + 1);
    *((_QWORD *)v5.Ptr + 1) = 0LL;
    v14 = v6;
    Ptr = this[1].Ptr;
    if ( (_QWORD *)v5.Ptr + 2 != Ptr )
    {
      v8 = (char *)v5.Ptr + 24;
      do
      {
        *((_DWORD *)v8 - 6) = *((_DWORD *)v8 - 2);
        v9 = *v8;
        *v8 = 0LL;
        v10 = *(v8 - 2);
        *(v8 - 2) = v9;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v8 += 2;
      }
      while ( v8 - 1 != Ptr );
      Ptr = this[1].Ptr;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(Ptr - 1);
    this[1].Ptr = (char *)this[1].Ptr - 16;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31,
                           (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v11);
  }
  return result;
}
