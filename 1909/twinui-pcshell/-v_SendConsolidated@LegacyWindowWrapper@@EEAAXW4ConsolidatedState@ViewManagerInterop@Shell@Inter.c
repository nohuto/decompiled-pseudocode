/*
 * XREFs of ?v_SendConsolidated@LegacyWindowWrapper@@EEAAXW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802C2A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyWindowWrapper::v_SendConsolidated(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 208LL))(*(_QWORD *)(a1 + 288));
  v5 = *(int *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 304) )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 160LL))(
                     *(_QWORD *)(a1 + 288),
                     &v7);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, bool, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, v5, 2LL, a2 == 2, 0LL);
    return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
  }
  return result;
}
