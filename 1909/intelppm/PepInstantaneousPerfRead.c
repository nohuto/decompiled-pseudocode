/*
 * XREFs of PepInstantaneousPerfRead @ 0x1C000F6F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     PepNotifyFeedbackRead @ 0x1C000F764 (PepNotifyFeedbackRead.c)
 */

unsigned __int64 __fastcall PepInstantaneousPerfRead(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned int *)(v3 + 4);
  LODWORD(v7) = *(_DWORD *)(v3 + 52);
  PepNotifyFeedbackRead(v4, &v7);
  result = 100 * v8 / v5;
  *a2 = result;
  return result;
}
