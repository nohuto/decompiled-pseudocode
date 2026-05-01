/*
 * XREFs of ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x180162E30
 * Callers:
 *     ?OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1801634B0 (-OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180163500 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180017C5C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180161A10 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_180161A10.c)
 *     ??1HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180161EF8 (--1HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x1801645A8 (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801647D4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::HideFlyout(CPeopleBarFlyoutExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  if ( *((_DWORD *)this + 38) == 2 )
  {
    if ( !*((_DWORD *)this + 170) )
      *((_DWORD *)this + 170) = 1;
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v5,
      (__int64)"HidePeopleBarFlyout");
    v5[0] = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
    CommonPeopleTelemetry::HidePeopleBarFlyout::StartActivity(v5, *((unsigned int *)this + 170));
    *((_DWORD *)this + 170) = 0;
    v2 = CSingleViewShellExperience::Hide((__int64)this + 112, 0LL);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      CommonPeopleTelemetry::HidePeopleBarFlyout::~HidePeopleBarFlyout((CommonPeopleTelemetry::HidePeopleBarFlyout *)v5);
      return v3;
    }
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v5,
      0LL);
    CommonPeopleTelemetry::HidePeopleBarFlyout::~HidePeopleBarFlyout((CommonPeopleTelemetry::HidePeopleBarFlyout *)v5);
  }
  return 0LL;
}
