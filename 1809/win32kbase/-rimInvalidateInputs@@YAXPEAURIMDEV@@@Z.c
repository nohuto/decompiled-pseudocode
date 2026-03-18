/*
 * XREFs of ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C01212DC
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0121120 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 */

void __fastcall rimInvalidateInputs(struct RIMDEV *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx

  v1 = *((_QWORD *)a1 + 42);
  RIMLockExclusive(v1 + 568);
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
    RIMEndAllActiveContacts((struct RawInputManagerObject *)v1, *((_QWORD *)a1 + 60), 0LL);
  if ( (*((_DWORD *)a1 + 46) & 0x4000) != 0 )
    InputExtensibilityCallout::CoreMsgSendMessage(v3, 10);
  *(_QWORD *)(v1 + 576) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 568, 0LL);
  KeLeaveCriticalRegion();
}
