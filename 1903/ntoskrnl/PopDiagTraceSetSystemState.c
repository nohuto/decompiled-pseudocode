/*
 * XREFs of PopDiagTraceSetSystemState @ 0x1401813D0
 * Callers:
 *     PopSetSystemState @ 0x1401812C4 (PopSetSystemState.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSetSystemState(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SETSYSTEMSTATE) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWriteEx(v1, &POP_ETW_EVENT_SETSYSTEMSTATE, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
