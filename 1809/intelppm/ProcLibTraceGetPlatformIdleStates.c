/*
 * XREFs of ProcLibTraceGetPlatformIdleStates @ 0x1C001E3B4
 * Callers:
 *     QueryPepCapabilites @ 0x1C001ED58 (QueryPepCapabilites.c)
 *     ProcLibTraceControlCallback @ 0x1C0024D00 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceGetPlatformIdleStates(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  v1 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATES;
  if ( a1 )
    v1 = &PPM_ETW_GET_PLATFORM_IDLE_STATES_RUNDOWN;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v1);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (unsigned __int64)&dword_1C001A8E0;
    UserData.Size = 4;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v1, 0LL, 1u, &UserData);
  }
  return result;
}
