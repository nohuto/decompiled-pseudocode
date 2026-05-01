/*
 * XREFs of ??$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@?$consume_IActivationFactory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUISettings@ViewManagement@UI@Windows@2@XZ @ 0x18009B290
 * Callers:
 *     ??$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@Z @ 0x18009B8F0 (--$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@-$factory_cache_entry@UUISettings@ViewMa.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::consume_IActivationFactory<winrt::Windows::Foundation::IActivationFactory>::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  void (__fastcall ***v6)(_QWORD, void *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = *(_QWORD *)((a1 - 8) & -(__int64)(a1 != 0));
  v4 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, void *, _QWORD *)))(*(_QWORD *)v3 + 48LL))(
         v3,
         &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = 0LL;
  if ( v6 )
    (**v6)(v6, &winrt::impl::guid_storage<winrt::Windows::UI::ViewManagement::IUISettings>::value, a2);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v6);
  return a2;
}
