/*
 * XREFs of ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0073BD0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C005F920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0073C6C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     IsShellParticipatesInSizing @ 0x1C0074B18 (IsShellParticipatesInSizing.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01A492C (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01A59E4 (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxNotifyShellPositioningChanged(struct tagWND *a1, struct tagCVR *const a2)
{
  __int64 v4; // r8
  int v5; // [rsp+20h] [rbp-18h]

  PostIAMPosChangedNotification(a2, a1);
  if ( (*((_DWORD *)a2 + 8) & 0x2100C0) == 0
    && (*((_DWORD *)a2 + 8) & 3) != 3
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    if ( (unsigned int)GetWindowCloakState(a1) )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_TabShell__private_propertyCache,
        10727725LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02D6BF4,
        0,
        v5);
    }
    else
    {
      if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 16LL, v4) )
        xxxNotifyShellTrackedWindowPosChanged(a1, 0LL);
      if ( (unsigned int)IsShellParticipatesInSizing(a1) )
        xxxNotifyShellWindowPosChangedCommon(a1, 0LL, 1LL, 7LL);
    }
  }
}
