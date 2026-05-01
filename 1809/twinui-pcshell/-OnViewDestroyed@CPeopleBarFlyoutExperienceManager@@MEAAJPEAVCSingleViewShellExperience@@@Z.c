/*
 * XREFs of ?OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180163A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180161F24 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18016336C (-NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801647D4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x180164DCC (-TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewDestroyed(
        CPeopleBarFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _BYTE v4[320]; // [rsp+20h] [rbp-158h] BYREF

  CPeopleBarFlyoutExperienceManager::NotifyTrayOfFlyoutVisibility(
    (CPeopleBarFlyoutExperienceManager *)((char *)this - 64),
    0);
  if ( **((_DWORD **)this + 38) == 1 )
  {
    CommonPeopleTelemetry::ShowPeopleBarFlyout::TransferToCurrentThread((char *)this + 256, v4);
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v4,
      2147500036LL);
    CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v4);
  }
  return 0LL;
}
