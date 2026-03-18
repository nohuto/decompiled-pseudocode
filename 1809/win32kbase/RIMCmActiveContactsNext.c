/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C012E6FC
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01102DC (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C011913C (RIMSuppressAllActiveContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0123700 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0123E68 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0128580 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C012886C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01296D4 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C012B5E8 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C012E614 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableEnd @ 0x1C0130B8C (ListTableEnd.c)
 *     ListTableIteratorNext @ 0x1C0130BDC (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsNext(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // xmm1_8
  _BYTE v12[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 936) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *a2;
  if ( *a2 != a1 + 928 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3);
    v5 = *a2;
  }
  v6 = (_QWORD *)ListTableEnd(v12, v5);
  if ( *a2 == *v6 && *((_DWORD *)a2 + 2) == (unsigned int)v6[1] && a2[2] == v6[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  result = ListTableIteratorNext(v12, a2);
  v11 = *(_QWORD *)(result + 16);
  *(_OWORD *)a2 = *(_OWORD *)result;
  a2[2] = v11;
  return result;
}
