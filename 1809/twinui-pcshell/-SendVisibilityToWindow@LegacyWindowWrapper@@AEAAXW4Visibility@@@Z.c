/*
 * XREFs of ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x18024CC34
 * Callers:
 *     ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x18024CDC0 (-v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18024CE20 (-v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18024E4BC (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18024E090 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

__int64 __fastcall LegacyWindowWrapper::SendVisibilityToWindow(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 200LL))(*(_QWORD *)(a1 + 288));
  v5 = *(int *)(a1 + 304);
  v6 = 0LL;
  if ( *(_BYTE *)(a1 + 601) && *(_DWORD *)(a1 + 304) && (*(_BYTE *)(a1 + 364) & 0x10) == 0 )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                     *(_QWORD *)(a1 + 288),
                     &v8);
    LOBYTE(v6) = a2 == 1;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 24LL))(*v7, v5, 0LL, 0LL, v6);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    WindowReadyState::VisibilityChanged(a1 + 368, 0LL, a2);
    return WindowReadyState::VisibilityChanged(a1 + 368, 1LL, a2);
  }
  return result;
}
