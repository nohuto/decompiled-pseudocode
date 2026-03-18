/*
 * XREFs of RIMCmActiveContactsBegin @ 0x1C00586E4
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01067A0 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C005876C (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 result; // rax
  __int64 *v10; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  _BYTE v13[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a2 + 904) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = (__int64 *)(a2 + 896);
  if ( !*v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !*((_DWORD *)v4 + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v5 = *v4;
  v11 = 0;
  v12 = v5;
  v10 = v4;
  v6 = ListTableIteratorNext(v13, &v10);
  v7 = *(_OWORD *)v6;
  v8 = *(_QWORD *)(v6 + 16);
  result = a1;
  *(_OWORD *)a1 = v7;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
