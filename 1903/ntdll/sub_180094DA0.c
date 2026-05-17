/*
 * XREFs of sub_180094DA0 @ 0x180094DA0
 * Callers:
 *     fabs @ 0x18008FE30 (fabs.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_180094D54 @ 0x180094D54 (sub_180094D54.c)
 *     sub_180094E98 @ 0x180094E98 (sub_180094E98.c)
 *     sub_1800951A0 @ 0x1800951A0 (sub_1800951A0.c)
 *     sub_180095420 @ 0x180095420 (sub_180095420.c)
 *     sub_180095454 @ 0x180095454 (sub_180095454.c)
 *     sub_180095704 @ 0x180095704 (sub_180095704.c)
 */

double __fastcall sub_180094DA0(__int64 a1, int a2, double a3, double a4, __int64 a5)
{
  __int64 v5; // rbx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // r8d
  int v10; // r9d
  double result; // xmm0_8
  double v12; // [rsp+48h] [rbp-61h] BYREF
  double v13; // [rsp+50h] [rbp-59h] BYREF
  char v14; // [rsp+58h] [rbp-51h] BYREF
  int v15; // [rsp+98h] [rbp-11h]

  v5 = a5;
  v13 = a3;
  v12 = a4;
  v7 = a1;
  if ( !(unsigned int)sub_180094E98(a1, &v12, a5) )
  {
    v15 &= ~1u;
    sub_1800951A0((unsigned int)&v14, (unsigned int)&a5, v7, a2, (__int64)&v13, (__int64)&v12, 0);
    v5 = a5;
  }
  v8 = sub_180094D54(v7);
  if ( dword_18015FF30 || !v8 )
  {
    sub_180095420(v8);
    sub_180095704(v5, 65472LL);
    return v12;
  }
  else
  {
    result = v12;
    sub_180095454(v8, a2, v9, v10, *(__int64 *)&v12, v5);
  }
  return result;
}
