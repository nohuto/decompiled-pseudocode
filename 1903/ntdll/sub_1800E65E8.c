/*
 * XREFs of sub_1800E65E8 @ 0x1800E65E8
 * Callers:
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlSidDominates @ 0x180066F30 (RtlSidDominates.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x18009ED10 (ZwPrivilegeCheck.c)
 */

char __fastcall sub_1800E65E8(__int64 a1, _BYTE *a2, char a3, int *a4)
{
  _BYTE *v7; // rdi
  int InformationToken; // eax
  _BYTE *v9; // rax
  int v10; // eax
  int v11; // eax
  char v12; // cl
  char v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v16; // [rsp+38h] [rbp-C8h]
  __int64 v17; // [rsp+40h] [rbp-C0h]
  int v18; // [rsp+48h] [rbp-B8h]
  int v19; // [rsp+4Ch] [rbp-B4h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  _BYTE v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+B0h] [rbp-50h]

  v16 = 4096;
  v14[0] = 0;
  v15 = 0;
  RtlInitializeSid((__int64)v22, (__int64)&v15, 1u);
  v23 = 0x2000;
  v7 = v22;
  if ( a2 )
    v7 = a2;
  InformationToken = ZwQueryInformationToken();
  *a4 = InformationToken;
  if ( InformationToken < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates((__int64)v7, (__int64)v22, v14) < 0 )
      return 0;
    v9 = v7;
    v7 = v22;
    if ( v14[0] )
      v7 = v9;
  }
  v10 = RtlSidDominates(v24, (__int64)v7, v14);
  *a4 = v10;
  if ( v10 < 0 )
    return 0;
  if ( !v14[0] )
  {
    v17 = 32LL;
    v20 = 32LL;
    v18 = 1;
    v19 = 1;
    v21 = 0;
    v11 = ZwPrivilegeCheck();
    v12 = v14[0];
    if ( v11 < 0 )
      v12 = 0;
    if ( !v12 )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
