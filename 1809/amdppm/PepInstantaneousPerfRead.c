/*
 * XREFs of PepInstantaneousPerfRead @ 0x1C000A380
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyFeedbackRead @ 0x1C0009EE8 (PepNotifyFeedbackRead.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PepInstantaneousPerfRead(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v5; // rdi
  signed int v6; // eax
  unsigned __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned int *)(v2 + 4);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  LODWORD(v8) = *(_DWORD *)(v2 + 52);
  v6 = PoFxProcessorNotification(v3, 10LL, &v8);
  if ( v6 < 0 )
    PepNotifyFeedbackRead(v6);
  result = 100 * v9 / v5;
  *a2 = result;
  return result;
}
