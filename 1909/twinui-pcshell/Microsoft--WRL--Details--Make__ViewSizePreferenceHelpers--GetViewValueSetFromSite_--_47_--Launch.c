/*
 * XREFs of Microsoft::WRL::Details::Make__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_Windows::Foundation::Collections::IPropertySet___ @ 0x1803AED54
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AF96C (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005C530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext::LaunchUIContext @ 0x1803AF14C (_ViewSizePreferenceHelpers--GetViewValueSetFromSite_--_47_--LaunchUIContext--LaunchUIContext.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_Windows::Foundation::Collections::IPropertySet___(
        __int64 *a1,
        _QWORD *a2)
{
  void *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rdi

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext::LaunchUIContext(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v5);
    *a1 = v6;
  }
  return a1;
}
