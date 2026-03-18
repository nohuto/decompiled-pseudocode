/*
 * XREFs of PopSetWin32kInputTimeout @ 0x1408791B8
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x1406DC650 (PopReleaseAdaptiveLock.c)
 * Callees:
 *     SessionIsInteractive @ 0x140001FF8 (SessionIsInteractive.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x14072987C (PopBroadcastSessionInfo.c)
 *     PopSendSessionInfo @ 0x140879324 (PopSendSessionInfo.c)
 */

__int64 __fastcall PopSetWin32kInputTimeout(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  GUID v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v2 = a1;
  v7 = a2;
  if ( SessionIsInteractive(a1) )
  {
    v6 = GUID_CONSOLE_INPUT_TIMEOUT;
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, GUID *))PopSendSessionInfo)(v2, v3, v4, &v6);
  }
  else
  {
    v6 = GUID_TS_INPUT_TIMEOUT;
    return PopBroadcastSessionInfo(0, 20, (__int64)&v6);
  }
}
