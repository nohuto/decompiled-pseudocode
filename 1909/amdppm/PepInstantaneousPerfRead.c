/*
 * XREFs of PepInstantaneousPerfRead @ 0x1C000CD50
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyFeedbackRead @ 0x1C000C894 (PepNotifyFeedbackRead.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PepInstantaneousPerfRead(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  signed int v6; // eax
  unsigned __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned int *)(v3 + 4);
  LODWORD(v8) = *(_DWORD *)(v3 + 52);
  v6 = PoFxProcessorNotification(v4, 10LL, &v8);
  if ( v6 < 0 )
    PepNotifyFeedbackRead(v6);
  result = 100 * v9 / v5;
  *a2 = result;
  return result;
}
