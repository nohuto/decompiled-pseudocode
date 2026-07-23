/*
 * XREFs of PopTraceSystemIdleTimeReset @ 0x140138D08
 * Callers:
 *     PopResetIdleTime @ 0x140138CA0 (PopResetIdleTime.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopTraceSystemIdleTimeReset(int a1)
{
  REGHANDLE v1; // rbx
  int v2; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]
  int v7; // [rsp+80h] [rbp+8h] BYREF

  v7 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_TIME_RESET) )
    {
      UserData.Reserved = 0;
      v2 = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v4 = &v2;
      v5 = 4;
      EtwWriteEx(v1, &POP_ETW_EVENT_SYSTEM_IDLE_TIME_RESET, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
