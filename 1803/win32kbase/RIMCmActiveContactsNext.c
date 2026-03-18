/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C0106840
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00E69E4 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00F950C (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00F993C (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01003F8 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01067A0 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C005876C (ListTableIteratorNext.c)
 *     ListTableEnd @ 0x1C0058870 (ListTableEnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 **__fastcall RIMCmActiveContactsNext(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 **result; // rax
  __int64 *v10; // xmm1_8
  __int64 *v11[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 904) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 != a1 + 896 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4);
    v4 = *(_QWORD *)a2;
  }
  v5 = (_QWORD *)ListTableEnd((__int64)v11, v4);
  if ( *(_QWORD *)a2 == *v5 && *(_DWORD *)(a2 + 8) == (unsigned int)v5[1] && *(_QWORD *)(a2 + 16) == v5[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  result = ListTableIteratorNext(v11, (__int64 *)a2);
  v10 = result[2];
  *(_OWORD *)a2 = *(_OWORD *)result;
  *(_QWORD *)(a2 + 16) = v10;
  return result;
}
