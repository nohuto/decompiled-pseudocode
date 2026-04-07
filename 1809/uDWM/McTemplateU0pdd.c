/*
 * XREFs of McTemplateU0pdd @ 0x1800AA57C
 * Callers:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000C0C4 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x180077960 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0pdd(__int64 a1, int a2, __int64 a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v10 = 4LL;
  v7 = &v13;
  v12 = 4LL;
  v9 = &v14;
  v11 = &a5;
  return McGenEventWrite((unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, a3, 4, (__int64)v6);
}
