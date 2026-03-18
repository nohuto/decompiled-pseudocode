/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x1400B08C0
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x1400B0564 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1400B1094 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowered(__int64 a1)
{
  BOOLEAN result; // al
  REGHANDLE v2; // rbx
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v3 = a1;
  result = PopFxAddLogEntry(a1, 0LL, 7LL);
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWERED);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      return EtwWriteEx(v2, &POP_ETW_EVENT_DEVICE_POWERED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
