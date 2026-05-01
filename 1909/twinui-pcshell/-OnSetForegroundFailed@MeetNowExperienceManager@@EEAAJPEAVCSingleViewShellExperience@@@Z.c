/*
 * XREFs of ?OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x180097208 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x180097A2C (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x180097AEC (-CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?HideFlyout@MeetNowExperienceManager@@UEAAJXZ @ 0x1800982F0 (-HideFlyout@MeetNowExperienceManager@@UEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009A970 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA?AV12@XZ @ 0x18009AD6C (-TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA-AV12@XZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnSetForegroundFailed(
        CBaseTrayFlyoutExperienceManager **this,
        struct CSingleViewShellExperience *a2)
{
  _BYTE v4[320]; // [rsp+20h] [rbp-158h] BYREF

  MeetNowExperienceManager::CancelShowFlyoutActivityTimeout((MeetNowExperienceManager *)(this - 6));
  if ( *(_DWORD *)this[10] == 1 )
  {
    MeetNowTelemetry::ShowFlyoutActivity::TransferToCurrentThread(this + 4, v4);
    MeetNowTelemetry::ShowFlyoutActivity::CancelledDueToForeground((MeetNowTelemetry::ShowFlyoutActivity *)v4);
    MeetNowExperienceManager::HideFlyout(this - 6);
    wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v4);
    MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v4);
  }
  return 0LL;
}
