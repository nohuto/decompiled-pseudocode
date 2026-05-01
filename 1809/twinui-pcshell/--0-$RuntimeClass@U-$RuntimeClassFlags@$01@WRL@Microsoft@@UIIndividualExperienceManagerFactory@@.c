/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIndividualExperienceManagerFactory@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180148834
 * Callers:
 *     ??$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180148560 (--$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VControlCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18014C9E0 (--$MakeAndInitialize@VControlCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VCortanaConversationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18014F348 (--$MakeAndInitialize@VCortanaConversationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Mi.c)
 *     ??$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801503A0 (--$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180156128 (--$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@.c)
 *     ??$MakeAndInitialize@VTaskContinuityActivitiesExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180156FA8 (--$MakeAndInitialize@VTaskContinuityActivitiesExperienceManagerFactory@@UIUnknown@@$$V@Details@W.c)
 *     ??$MakeAndInitialize@VToastCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801582A4 (--$MakeAndInitialize@VToastCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180161684 (--$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micros.c)
 *     ??$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180165528 (--$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micr.c)
 *     ??$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180166FC8 (--$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VStartExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18016962C (--$MakeAndInitialize@VStartExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPE.c)
 *     ??$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18016BD64 (--$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180170DA4 (--$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801771D8 (--$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micros.c)
 *     ??$MakeAndInitialize@VScreenClippingExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18017C204 (--$MakeAndInitialize@VScreenClippingExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microso.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::`vftable'{for `IIndividualExperienceManagerFactory'};
  *(_QWORD *)(a1 + 8) = &ScreenClippingExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
