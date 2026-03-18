/*
 * XREFs of PopDiagTraceFxDeviceStartPowerManagement @ 0x140779A34
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140195D20 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1400E1184 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceStartPowerManagement(__int64 a1)
{
  REGHANDLE v1; // rbx
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v2 = a1;
  PopFxAddLogEntry(a1, 0, 3, 0LL);
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWrite(v1, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT, 0LL, 1u, &UserData);
    }
  }
}
