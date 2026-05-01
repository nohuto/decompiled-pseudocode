/*
 * XREFs of _CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::CCortanaShownEventArgs @ 0x18000D748
 * Callers:
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&___ptr64_ @ 0x18000D6DC (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShow.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::CCortanaShownEventArgs(
        __int64 a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaShownEventArgs'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v4 = *a2;
  *(_QWORD *)a1 = off_1803C10B0;
  *(_QWORD *)(a1 + 8) = off_1803C1090;
  result = a1;
  *(_OWORD *)(a1 + 32) = v4;
  return result;
}
