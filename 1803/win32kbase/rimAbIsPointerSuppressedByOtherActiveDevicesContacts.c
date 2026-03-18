/*
 * XREFs of rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C00E6958
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00E69E4 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherActiveDevicesContacts(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _QWORD **v4; // rsi
  _QWORD *i; // rbx
  __int64 v8; // r8

  v3 = 0;
  v4 = (_QWORD **)(a1 + 432);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v8 = *(i - 1);
    if ( v8 != a2 && (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(a3, a2, v8, 1LL) )
      return 1;
  }
  return v3;
}
