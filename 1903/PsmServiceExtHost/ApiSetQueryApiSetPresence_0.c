/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800486C0
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x1800483C0 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsRmRpsInitializePresent @ 0x1800485C8 (IsRmRpsInitializePresent.c)
 *     IsQueryUserTokenPresent @ 0x180048758 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180048838 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x1800489A4 (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048ABC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x180048B10 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x180048FA8 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x180049088 (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x1800490DC (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
