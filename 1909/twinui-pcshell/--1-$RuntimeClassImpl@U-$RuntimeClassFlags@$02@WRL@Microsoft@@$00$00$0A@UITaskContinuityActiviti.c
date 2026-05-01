/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskContinuityActivitiesExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180092A5C
 * Callers:
 *     ??1ShellFeedsExperienceManagerImpl@@UEAA@XZ @ 0x180092A84 (--1ShellFeedsExperienceManagerImpl@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotification@Cortana@TwinUI@@UIClosable@Foundation@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180092C60 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotificatio.c)
 *     ??_GShellFeedsExperienceManagerNotification@@UEAAPEAXI@Z @ 0x180092DF0 (--_GShellFeedsExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180097080 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x180097180 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x18019C4BC (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z @ 0x18019C850 (--_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x1801A2280 (--_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801B12A4 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x1801BF4BC (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoaderInternal@@@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180365F50 (--_E-$RuntimeClass@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoaderInternal@@@.c)
 *     ??_GCIconLoaderInternal@@UEAAPEAXI@Z @ 0x180365F90 (--_GCIconLoaderInternal@@UEAAPEAXI@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x180378658 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v2 >> 63;
  if ( v2 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
             2 * v2,
             a2);
  return result;
}
