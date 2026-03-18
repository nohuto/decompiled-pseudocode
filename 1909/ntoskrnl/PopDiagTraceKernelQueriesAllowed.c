/*
 * XREFs of PopDiagTraceKernelQueriesAllowed @ 0x14072AF14
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceKernelQueriesAllowed(unsigned __int8 a1)
{
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_KERNEL_QUERY_ALLOWED) )
    {
      UserData.Reserved = 0;
      v3 = a1;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v3;
      EtwWrite(v2, &POP_ETW_EVENT_KERNEL_QUERY_ALLOWED, 0LL, 1u, &UserData);
    }
  }
}
