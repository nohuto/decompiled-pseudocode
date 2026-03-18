/*
 * XREFs of xxxODI_ColorInit @ 0x1C00756E0
 * Callers:
 *     InitUserScreen @ 0x1C00761B4 (InitUserScreen.c)
 * Callees:
 *     xxxSetSysColors @ 0x1C0051FD4 (xxxSetSysColors.c)
 *     ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1C0075950 (-CI_GetClrVal@@YAKPEAGK@Z.c)
 *     FastGetProfileStringFromIDW @ 0x1C0075B70 (FastGetProfileStringFromIDW.c)
 *     GetProcessLuid @ 0x1C0075E30 (GetProcessLuid.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(__int64 a1)
{
  char *v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rsi
  char *v5; // rcx
  char *v6; // rbx
  unsigned int ClrVal; // eax
  __int64 v8; // rcx
  struct _LUID AuthenticationId; // [rsp+40h] [rbp-C0h] BYREF
  char v11[128]; // [rsp+50h] [rbp-B0h] BYREF
  char v12[128]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v13[28]; // [rsp+150h] [rbp+50h] BYREF

  v1 = (char *)gpsi;
  v3 = 0;
  v4 = 0LL;
  *(_OWORD *)((char *)gpsi + 4568) = gargbInitial;
  *(_OWORD *)(v1 + 4584) = xmmword_1C01DD180;
  *(_OWORD *)(v1 + 4600) = xmmword_1C01DD190;
  *(_OWORD *)(v1 + 4616) = xmmword_1C01DD1A0;
  *(_OWORD *)(v1 + 4632) = xmmword_1C01DD1B0;
  *(_OWORD *)(v1 + 4648) = xmmword_1C01DD1C0;
  *(_OWORD *)(v1 + 4664) = xmmword_1C01DD1D0;
  *((_QWORD *)v1 + 585) = 0xFF993300F2E4D7LL;
  *((_DWORD *)v1 + 1172) = 15790320;
  v5 = (char *)gpsi;
  *(_OWORD *)((char *)gpsi + 4444) = *(_OWORD *)((char *)gpsi + 4568);
  *(_OWORD *)(v5 + 4460) = *(_OWORD *)(v5 + 4584);
  *(_OWORD *)(v5 + 4476) = *(_OWORD *)(v5 + 4600);
  *(_OWORD *)(v5 + 4492) = *(_OWORD *)(v5 + 4616);
  *(_OWORD *)(v5 + 4508) = *(_OWORD *)(v5 + 4632);
  *(_OWORD *)(v5 + 4524) = *(_OWORD *)(v5 + 4648);
  *(_OWORD *)(v5 + 4540) = *(_OWORD *)(v5 + 4664);
  *(_QWORD *)(v5 + 4556) = *((_QWORD *)v5 + 585);
  *((_DWORD *)v5 + 1141) = *((_DWORD *)v5 + 1172);
  do
  {
    AuthenticationId = 0LL;
    v13[0] = 0;
    if ( v3 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (FastGetProfileStringFromIDW(a1, 26LL, 33LL, &szNull, v13, 25, 0), !v13[0]) )
    {
      FastGetProfileStringFromIDW(a1, 0LL, v3 + 32, &szNull, v13, 25, 0);
    }
    v6 = &v11[v4];
    ClrVal = CI_GetClrVal(v13, *(_DWORD *)&v11[v4 + 4568LL - (_QWORD)v11 + (_QWORD)gpsi]);
    *(_DWORD *)&v12[v4] = v3++;
    v4 += 4LL;
    *(_DWORD *)v6 = ClrVal;
  }
  while ( v3 < 0x1F );
  return xxxSetSysColors(v8, v3, v12, v11, 6u);
}
