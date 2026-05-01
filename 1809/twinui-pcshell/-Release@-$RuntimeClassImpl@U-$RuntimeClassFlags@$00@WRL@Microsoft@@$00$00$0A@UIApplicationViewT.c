/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072EE0
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18000E55C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?Release@ApplicationViewTabInsertionContext@@UEAAKXZ @ 0x180072ED0 (-Release@ApplicationViewTabInsertionContext@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaConversationExperienceManager@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18009E2B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaConversat.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaConversationExperienceManager@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18009E2C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICor_ea_18009E2C0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800AA6C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@@Detai.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x18014E1C0 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VCCortanaConversationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18014F220 (--$MakeAndInitialize@VCCortanaConversationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvi.c)
 *     ??1?$ComPtr@VCCortanaConversationExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18014F4E4 (--1-$ComPtr@VCCortanaConversationExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x18015C080 (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VApplicationViewTabInsertionContext@@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1801F36B4 (--$MakeAndInitialize@VApplicationViewTabInsertionContext@@UIApplicationViewTabInsertionContext@V.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x180397614 (-InternalRelease@-$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
