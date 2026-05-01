/*
 * XREFs of ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801C786C
 * Callers:
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_ @ 0x1801C76C8 (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--__lambda_ebd42d67d4ed24c24d65003e6952ebf6_.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801CA4D0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$0 @ 0x1801CAA43 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801627F0 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch(
        CommonPeopleTelemetry::PeoplePaneAppLaunch *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
