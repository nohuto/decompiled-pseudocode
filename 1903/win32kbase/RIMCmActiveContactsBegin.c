/*
 * XREFs of RIMCmActiveContactsBegin @ 0x1C015B578
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013BEAC (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C013EDA0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C014194C (RIMSuppressAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01552A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01562B0 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C015B5FC (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C015D69C (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a2 + 944) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = a2 + 936;
  if ( !*(_QWORD *)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)(v5 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10[0] = v5;
  v10[1] = 0LL;
  v10[2] = *(_QWORD *)v5;
  v6 = ListTableIteratorNext(v11, v10);
  v7 = *(_OWORD *)v6;
  v8 = *(_QWORD *)(v6 + 16);
  result = a1;
  *(_OWORD *)a1 = v7;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
