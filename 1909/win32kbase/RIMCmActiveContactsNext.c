/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C01594EC
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0138B9C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013951C (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013983C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C013C730 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C013F2DC (RIMSuppressAllActiveContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C014D5A4 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C014DDDC (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C0152C3C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01530A8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C015339C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01540B8 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01562F8 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0159404 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableEnd @ 0x1C015B44C (ListTableEnd.c)
 *     ListTableIteratorNext @ 0x1C015B4A4 (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsNext(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // xmm0_8
  _BYTE v12[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 944) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *a2;
  if ( *a2 != a1 + 936 )
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
