/*
 * XREFs of rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0110250
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01102DC (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
