/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085130
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x1400862C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400C7500 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x1400C9850 (SepFilterCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x1401566F8 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140156818 (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x1408DEF70 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408DF8A0 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400795E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084880 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x140085258 (AuthzBasepMemAlloc.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400920E0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140345DF0 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  bool v10; // zf
  int v12; // r13d
  int v13; // eax
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v18; // [rsp+48h] [rbp-B8h]
  _QWORD *v19; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = a2;
  v16 = 2;
  v17 = 0LL;
  v18 = 0LL;
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
    goto LABEL_12;
  while ( 1 )
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v10 = *(_BYTE *)v7 == 18;
    v4 = P;
    NumberOfBytes = 256;
    if ( !v10 || (*(_BYTE *)(v7 + 1) & 8) != 0 )
      goto LABEL_7;
    v12 = *(unsigned __int16 *)(v7 + 2) - 4 * *(unsigned __int8 *)(v7 + 9);
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v7 + 9) + 8,
           (unsigned int)(v12 - 16),
           P,
           &NumberOfBytes);
    if ( v3 == -1073741789 )
      break;
LABEL_19:
    if ( v3 < 0 )
      goto LABEL_8;
    v18 = v4;
    LOWORD(v17) = 1;
    HIDWORD(v17) = 1;
    v13 = AuthzBasepQuerySecurityAttributesToken(v6, v4, 1LL, 0LL, 0, &NumberOfBytes_4);
    v3 = v13;
    if ( v13 == -1073741789 || v13 == -1073741275 )
      v3 = 0;
    if ( v3 < 0 )
      goto LABEL_8;
    if ( NumberOfBytes_4 <= 0x10 )
      v3 = AuthzBasepSetSecurityAttributesToken(v6, &v16, (__int64)&v17);
    if ( v3 < 0 )
      goto LABEL_8;
LABEL_7:
    ++v9;
    v7 += *(unsigned __int16 *)(v7 + 2);
    if ( v9 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_8;
  }
  v4 = (_BYTE *)AuthzBasepMemAlloc(NumberOfBytes);
  if ( v4 )
  {
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 4 * (*(unsigned __int8 *)(v7 + 9) + 4LL),
           (unsigned int)(v12 - 16),
           v4,
           &NumberOfBytes);
    goto LABEL_19;
  }
  v3 = -1073741801;
LABEL_8:
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
  {
    AuthzBasepFreeSecurityAttributesList(v6);
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
LABEL_12:
    *v19 = v6;
  }
  return (unsigned int)v3;
}
