/*
 * XREFs of ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6878
 * Callers:
 *     ?IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800D29AC (-IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Foundation::operator==(void (__fastcall ****a1)(_QWORD, void *, __int64 *), _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // bl
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a1;
  if ( v3 == (void (__fastcall ***)(_QWORD, void *, __int64 *))*a2 )
    return 1;
  if ( !v3 || !*a2 )
    return 0;
  v9 = 0LL;
  (**v3)(v3, &winrt::impl::guid_storage<winrt::Windows::Foundation::IUnknown>::value, &v9);
  v5 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*a2;
  v6 = v9;
  v7 = 0LL;
  v10 = 0LL;
  if ( v5 )
  {
    (**v5)(v5, &winrt::impl::guid_storage<winrt::Windows::Foundation::IUnknown>::value, &v10);
    v7 = v10;
  }
  v8 = v6 == v7;
  if ( v7 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(&v10);
  if ( v9 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(&v9);
  return v8;
}
