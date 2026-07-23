/*
 * XREFs of sub_1800FAF50 @ 0x1800FAF50
 * Callers:
 *     sub_1800FAA88 @ 0x1800FAA88 (sub_1800FAA88.c)
 * Callees:
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800FAB50 @ 0x1800FAB50 (sub_1800FAB50.c)
 *     sub_1800FAB90 @ 0x1800FAB90 (sub_1800FAB90.c)
 */

__int64 __fastcall sub_1800FAF50(void *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( qword_180163B78 )
    return 3221225994LL;
  v4 = sub_1800FAB90(a1, a2, a3, &v5);
  if ( v4 >= 0 && _InterlockedCompareExchange64((volatile signed __int64 *)&qword_180163B78, (signed __int64)v5, 0LL) )
  {
    sub_1800FAB50(v5);
    return 3221225994LL;
  }
  if ( v4 >= 0 && dword_1801664E0 == 3 )
  {
    v6[0] = 1;
    v6[1] = 0x8000000;
    v6[2] = 0x8000000;
    sub_18006790C((__int64)sub_1800FB000, (__int64)v6, 0);
  }
  return (unsigned int)v4;
}
