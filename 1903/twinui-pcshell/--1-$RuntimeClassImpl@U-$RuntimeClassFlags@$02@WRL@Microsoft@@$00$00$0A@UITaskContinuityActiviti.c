/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskContinuityActivitiesExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18008F1FC
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18008F258 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x18008F358 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotification@Cortana@TwinUI@@UIClosable@Foundation@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008F800 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotificatio.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x18017D388 (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z @ 0x18017D7E0 (--_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x1801831F0 (--_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801921B4 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x1801A05CC (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoaderInternal@@@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180346810 (--_E-$RuntimeClass@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoaderInternal@@@.c)
 *     ??_GCIconLoaderInternal@@UEAAPEAXI@Z @ 0x180346850 (--_GCIconLoaderInternal@@UEAAPEAXI@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x180358E24 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800775C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1800775C0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::Release((volatile signed __int32 *)(2 * v1));
  return result;
}
