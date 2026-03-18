/*
 * XREFs of PopDiagTraceFxDeviceDirectedTransition @ 0x1402FDE44
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x1402F343C (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1400B1094 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceDirectedTransition(__int64 a1, unsigned __int8 a2)
{
  REGHANDLE v3; // rbx
  int v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v5 = a1;
  PopFxAddLogEntry(a1, 0, 25, a2);
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v4 = a2;
      UserData.Size = 8;
      UserData.Ptr = (ULONGLONG)&v5;
      v7 = &v4;
      v8 = 4;
      EtwWriteEx(v3, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
