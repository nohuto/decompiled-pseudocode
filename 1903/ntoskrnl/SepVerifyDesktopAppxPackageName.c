/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x14031D414
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x14031D258 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     RtlFindAceByType @ 0x14000ABF0 (RtlFindAceByType.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400795E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084880 (AuthzBasepSetSecurityAttributesToken.c)
 *     SeSecurityAttributePresent @ 0x140092510 (SeSecurityAttributePresent.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140092EE0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140194924 (AuthzBasepAllocateSecurityAttributesList.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeQuerySecurityAttributesToken @ 0x140618C70 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(__int64 a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  int v6; // esi
  struct _KTHREAD *v7; // r8
  _BYTE *PoolWithTag; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _DWORD *SecurityAttributesList; // rax
  _DWORD *v13; // r14
  __int16 v14; // ax
  ACL *v15; // rcx
  __int64 v16; // rax
  _DWORD *AceByType; // rax
  _DWORD *v18; // r15
  int v19; // eax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+6Ch] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v25; // [rsp+80h] [rbp-80h]
  _BYTE P[512]; // [rsp+90h] [rbp-70h] BYREF

  v25 = a3;
  v22 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v23 = 2;
  SecurityAttributesToken = 0;
  NumberOfBytes = 0LL;
  v6 = 0;
  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !SeSecurityAttributePresent(a1, &DestinationString, v7) )
    return (unsigned int)SecurityAttributesToken;
  PoolWithTag = P;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              a1,
                              (unsigned int)&DestinationString,
                              1,
                              (unsigned int)P,
                              512,
                              (__int64)&NumberOfBytes);
  if ( SecurityAttributesToken == -1073741789 )
  {
    v11 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20206553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                a1,
                                (unsigned int)&DestinationString,
                                1,
                                (_DWORD)PoolWithTag,
                                v11,
                                (__int64)&NumberOfBytes);
  }
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  if ( !PoolWithTag )
    return (unsigned int)-1073739509;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v10, v9);
  v13 = SecurityAttributesList;
  if ( !SecurityAttributesList )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_25;
  }
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v23, (__int64)PoolWithTag);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_24;
  do
  {
    v14 = *(_WORD *)(a2 + 2);
    if ( (v14 & 4) == 0 )
    {
LABEL_13:
      v15 = 0LL;
      goto LABEL_18;
    }
    if ( v14 >= 0 )
    {
      v15 = *(ACL **)(a2 + 32);
    }
    else
    {
      v16 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v16 )
        goto LABEL_13;
      v15 = (ACL *)(v16 + a2);
    }
LABEL_18:
    AceByType = RtlFindAceByType(v15, 9u, (PULONG)&NumberOfBytes + 1);
    v18 = AceByType;
    if ( AceByType )
    {
      v19 = AuthzBasepEvaluateAceCondition(
              a1,
              (__int64)v13,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              &AceByType[*((unsigned __int8 *)AceByType + 9) + 4],
              *((unsigned __int16 *)AceByType + 1) - (4 * (unsigned int)*((unsigned __int8 *)AceByType + 9) + 8) - 8,
              0,
              0,
              &v22);
      v6 = v22;
      SecurityAttributesToken = v19;
      if ( v19 < 0 )
        break;
      if ( v22 == 1 )
        goto LABEL_23;
    }
    ++HIDWORD(NumberOfBytes);
  }
  while ( v18 );
  if ( v6 != 1 )
    goto LABEL_24;
LABEL_23:
  *v25 = 1;
LABEL_24:
  AuthzBasepFreeSecurityAttributesList(v13);
LABEL_25:
  if ( PoolWithTag && PoolWithTag != P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SecurityAttributesToken;
}
