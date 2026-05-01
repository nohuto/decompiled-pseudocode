/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z @ 0x1801DE304
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 * Callees:
 *     WINRT_GetRestrictedErrorInfo @ 0x18008868F (WINRT_GetRestrictedErrorInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1801DE4B0 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801DEA40 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rsi
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // r9
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_DWORD *)(a1 + 12) = a2;
  v4 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  WINRT_GetRestrictedErrorInfo();
  if ( *v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 32LL))(*v4, a1);
    v5 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v4;
    v6 = 0LL;
    v8 = 0LL;
    if ( v5 )
    {
      (**v5)(v5, &winrt::impl::guid_storage<winrt::impl::ILanguageExceptionErrorInfo2>::value, &v8);
      v6 = v8;
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, 0LL);
      if ( v8 )
        winrt::com_ptr<IInspectable>::unconditional_release_ref(&v8);
    }
  }
  else
  {
    winrt::hresult_error::originate(a1, a2, 0LL);
  }
  return a1;
}
