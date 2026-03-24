/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x1402FF1CC
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1402FF010 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6300 (AuthzBasepEvaluateAceCondition.c)
 *     SeSecurityAttributePresent @ 0x1400A7050 (SeSecurityAttributePresent.c)
 *     RtlFindAceByType @ 0x1400A8FB0 (RtlFindAceByType.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8A94 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140181880 (AuthzBasepAllocateSecurityAttributesList.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SeQuerySecurityAttributesToken @ 0x140625740 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(__int64 a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  int v6; // esi
  _BYTE *PoolWithTag; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *SecurityAttributesList; // rax
  _DWORD *v12; // r14
  __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v17; // r15
  int v18; // eax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE *v23; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[512]; // [rsp+90h] [rbp-70h] BYREF

  v23 = a3;
  v21 = 0;
  NumberOfBytes = 0LL;
  *a3 = 0;
  SecurityAttributesToken = 0;
  v22 = 2;
  v6 = 0;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !SeSecurityAttributePresent(a1, &DestinationString) )
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
    v10 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20206553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                a1,
                                (unsigned int)&DestinationString,
                                1,
                                (_DWORD)PoolWithTag,
                                v10,
                                (__int64)&NumberOfBytes);
  }
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  if ( !PoolWithTag )
    return (unsigned int)-1073739509;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v9, v8);
  v12 = SecurityAttributesList;
  if ( !SecurityAttributesList )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_25;
  }
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v22, (__int64)PoolWithTag);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_24;
  do
  {
    v13 = *(_WORD *)(a2 + 2);
    if ( (v13 & 4) == 0 )
    {
LABEL_13:
      v14 = 0LL;
      goto LABEL_18;
    }
    if ( v13 >= 0 )
    {
      v14 = *(_QWORD *)(a2 + 32);
    }
    else
    {
      v15 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v15 )
        goto LABEL_13;
      v14 = v15 + a2;
    }
LABEL_18:
    AceByType = RtlFindAceByType(v14, 9, (unsigned int *)&NumberOfBytes + 1);
    v17 = AceByType;
    if ( AceByType )
    {
      v18 = AuthzBasepEvaluateAceCondition(
              a1,
              (__int64)v12,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              &AceByType[4 * AceByType[9] + 16],
              *((unsigned __int16 *)AceByType + 1) - (4 * (unsigned int)AceByType[9] + 8) - 8,
              0,
              0,
              &v21);
      v6 = v21;
      SecurityAttributesToken = v18;
      if ( v18 < 0 )
        break;
      if ( v21 == 1 )
        goto LABEL_23;
    }
    ++HIDWORD(NumberOfBytes);
  }
  while ( v17 );
  if ( v6 != 1 )
    goto LABEL_24;
LABEL_23:
  *v23 = 1;
LABEL_24:
  AuthzBasepFreeSecurityAttributesList(v12);
LABEL_25:
  if ( PoolWithTag && PoolWithTag != P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SecurityAttributesToken;
}
