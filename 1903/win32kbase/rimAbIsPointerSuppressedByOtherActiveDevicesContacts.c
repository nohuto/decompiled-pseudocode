/*
 * XREFs of rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C013B180
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013BB8C (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013BEAC (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C013B20C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherActiveDevicesContacts(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _QWORD **v4; // rsi
  _QWORD *i; // rbx
  __int64 v8; // r8

  v3 = 0;
  v4 = (_QWORD **)(a1 + 448);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v8 = *(i - 1);
    if ( v8 != a2 && (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(a3, a2, v8, 1LL) )
      return 1;
  }
  return v3;
}
