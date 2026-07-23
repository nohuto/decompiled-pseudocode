/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x1400AACE0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB2B0 (SepNormalAccessCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x14015C2B4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C3D4 (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408A2220 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400A6AB0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8B14 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x1401216F8 (AuthzBasepMemAlloc.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140324564 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  bool v11; // zf
  int v12; // r13d
  int v13; // eax
  size_t v14; // [rsp+20h] [rbp-E0h]
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-B8h]
  _QWORD *v20; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v20 = a2;
  v17 = 2;
  v18 = 0LL;
  v19 = 0LL;
  v3 = 0;
  v4 = P;
  v5 = (_DWORD *)AuthzBasepMemAlloc(0x30uLL);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v7 = a1 + 8;
  v8 = v5 + 2;
  v9 = 0;
  v8[1] = v8;
  *v8 = v8;
  v6[6] = 0;
  *((_QWORD *)v6 + 5) = v6 + 8;
  *((_QWORD *)v6 + 4) = v6 + 8;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_3;
  while ( 1 )
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v11 = *(_BYTE *)v7 == 18;
    v4 = P;
    NumberOfBytes = 256;
    if ( !v11 || (*(_BYTE *)(v7 + 1) & 8) != 0 )
      goto LABEL_9;
    v12 = *(unsigned __int16 *)(v7 + 2) - 4 * *(unsigned __int8 *)(v7 + 9);
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v7 + 9) + 8,
           (unsigned int)(v12 - 16),
           P,
           &NumberOfBytes);
    if ( v3 == -1073741789 )
      break;
LABEL_20:
    if ( v3 < 0 )
      goto LABEL_10;
    v19 = v4;
    LOWORD(v18) = 1;
    HIDWORD(v18) = 1;
    LODWORD(v14) = 0;
    v13 = AuthzBasepQuerySecurityAttributesToken(v6, (__int64)v4, 1LL, 0LL, v14, &NumberOfBytes_4);
    v3 = v13;
    if ( v13 == -1073741789 || v13 == -1073741275 )
      v3 = 0;
    if ( v3 < 0 )
      goto LABEL_10;
    if ( NumberOfBytes_4 <= 0x10 )
      v3 = AuthzBasepSetSecurityAttributesToken(v6, &v17, (__int64)&v18);
    if ( v3 < 0 )
      goto LABEL_10;
LABEL_9:
    ++v9;
    v7 += *(unsigned __int16 *)(v7 + 2);
    if ( v9 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_10;
  }
  v4 = (_BYTE *)AuthzBasepMemAlloc(NumberOfBytes);
  if ( v4 )
  {
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 4 * (*(unsigned __int8 *)(v7 + 9) + 4LL),
           (unsigned int)(v12 - 16),
           v4,
           &NumberOfBytes);
    goto LABEL_20;
  }
  v3 = -1073741801;
LABEL_10:
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
  {
    AuthzBasepFreeSecurityAttributesList(v6);
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)v3;
  }
LABEL_3:
  *v20 = v6;
  return (unsigned int)v3;
}
