/*
 * XREFs of PopDiagTraceFxDeviceDirectedCompletion @ 0x1402E0E40
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1402D7CAC (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceDirectedCompletion(__int64 a1, unsigned __int8 a2)
{
  REGHANDLE v3; // rbx
  int v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v5 = a1;
  PopFxAddLogEntry(a1, 0, 26, a2);
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_END) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v4 = a2;
      UserData.Size = 8;
      UserData.Ptr = (ULONGLONG)&v5;
      v7 = &v4;
      v8 = 4;
      EtwWriteEx(v3, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_END, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
