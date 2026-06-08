/*
 * XREFs of PepDifferentialPerfRead @ 0x1C000EA80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     PepNotifyFeedbackRead @ 0x1C000EBF4 (PepNotifyFeedbackRead.c)
 */

__int64 __fastcall PepDifferentialPerfRead(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 16);
  LODWORD(v9) = *(_DWORD *)(v6 + 52);
  PepNotifyFeedbackRead(v7, &v9);
  *a3 = v10;
  result = v11;
  *a4 = v11;
  return result;
}
