/*
 * XREFs of PopDiagTraceSetDeepSleepConstraint @ 0x1400F08CC
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1400F06C8 (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSetDeepSleepConstraint(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_SET_CONSTRAINT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWriteEx(v1, &POP_ETW_DEEP_SLEEP_SET_CONSTRAINT, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
