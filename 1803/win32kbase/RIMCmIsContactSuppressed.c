/*
 * XREFs of RIMCmIsContactSuppressed @ 0x1C0106D50
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00E69E4 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01003F8 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1C010248C (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0102D4C (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01068F0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmDeactivateContact @ 0x1C0106B18 (RIMCmDeactivateContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C0106CE8 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0106DCC (RIMCmRemoveContactSuppressionReasons.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmIsContactSuppressed(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  return *(_DWORD *)(a1 + 8) != 0;
}
