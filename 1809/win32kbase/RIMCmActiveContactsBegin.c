/*
 * XREFs of RIMCmActiveContactsBegin @ 0x1C012E594
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C011913C (RIMSuppressAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0128580 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01296D4 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C012E614 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C0130BDC (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 result; // rax
  __int64 *v11; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  _BYTE v14[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a2 + 936) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (__int64 *)(a2 + 928);
  if ( !*v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*((_DWORD *)v5 + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *v5;
  v12 = 0;
  v13 = v6;
  v11 = v5;
  v7 = ListTableIteratorNext(v14, &v11);
  v8 = *(_OWORD *)v7;
  v9 = *(_QWORD *)(v7 + 16);
  result = a1;
  *(_OWORD *)a1 = v8;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
