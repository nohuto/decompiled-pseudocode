/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804327B0
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180071E60 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     _lambda_280b45e0809411ada214328da8ed29e6_::operator() @ 0x180090EF0 (_lambda_280b45e0809411ada214328da8ed29e6_--operator().c)
 *     _lambda_f51720ce74bc227b5f49bc6a309c1440_::_lambda_invoker_cdecl_ @ 0x1800967F0 (_lambda_f51720ce74bc227b5f49bc6a309c1440_--_lambda_invoker_cdecl_.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180195EEC (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18019A0F8 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801A7AFC (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _lambda_03da5635ba8288824260caa7fdc59a24_::_lambda_invoker_cdecl_ @ 0x180317320 (_lambda_03da5635ba8288824260caa7fdc59a24_--_lambda_invoker_cdecl_.c)
 *     _lambda_1824815e24ce35eb7467a7b2ef54a01e_::_lambda_invoker_cdecl_ @ 0x180317390 (_lambda_1824815e24ce35eb7467a7b2ef54a01e_--_lambda_invoker_cdecl_.c)
 *     _lambda_4af01f2a77325a2f7ccbe9b4c7e45e28_::_lambda_invoker_cdecl_ @ 0x1803173F0 (_lambda_4af01f2a77325a2f7ccbe9b4c7e45e28_--_lambda_invoker_cdecl_.c)
 *     _lambda_9300e52c2de4f38dec61c5d27e814692_::_lambda_invoker_cdecl_ @ 0x1803174B0 (_lambda_9300e52c2de4f38dec61c5d27e814692_--_lambda_invoker_cdecl_.c)
 *     _lambda_d26632c2fdfcc62bc8a379c5e2104173_::_lambda_invoker_cdecl_ @ 0x1803174F0 (_lambda_d26632c2fdfcc62bc8a379c5e2104173_--_lambda_invoker_cdecl_.c)
 *     _lambda_dd976bef556cee69380af816f3e38b4e_::_lambda_invoker_cdecl_ @ 0x180317550 (_lambda_dd976bef556cee69380af816f3e38b4e_--_lambda_invoker_cdecl_.c)
 *     _lambda_3c35c1cad30329477d1975ae8bf095a3_::operator() @ 0x180319E74 (_lambda_3c35c1cad30329477d1975ae8bf095a3_--operator().c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x18031BE70 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x180080E14 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(
        ExperienceManagerUtils *this,
        struct IUnknown *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
