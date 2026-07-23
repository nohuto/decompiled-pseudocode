/*
 * XREFs of SeMakeAnonymousLogonTokenNoEveryone @ 0x140A01AF8
 * Callers:
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140121004 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140680120 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140680150 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406801B0 (RtlSetOwnerSecurityDescriptor.c)
 *     SeSetMandatoryPolicyToken @ 0x1406E31D8 (SeSetMandatoryPolicyToken.c)
 *     SepCreateToken @ 0x140758ACC (SepCreateToken.c)
 */

__int64 SeMakeAnonymousLogonTokenNoEveryone()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // rbx
  int v5; // eax
  unsigned int v6; // r14d
  ULONG v7; // edi
  ACL *PoolWithTag; // rax
  ACL *v9; // rsi
  PVOID v10; // rax
  void *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  signed __int32 v18[12]; // [rsp+8h] [rbp-120h] BYREF
  int v19; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-70h] BYREF
  int v22[2]; // [rsp+C0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES v23; // [rsp+C8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-50h] BYREF
  int v25[12]; // [rsp+E8h] [rbp-40h] BYREF
  _SID_AND_ATTRIBUTES v26; // [rsp+118h] [rbp-10h] BYREF

  v23.Sid = 0LL;
  *(_QWORD *)&v23.Attributes = 0LL;
  memset(v25, 0, sizeof(v25));
  v0 = (char *)ExLeapSecondData;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v21);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v18, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v20) )
    goto LABEL_6;
  v2 = v20;
  v3 = 0;
  if ( !v1 )
    goto LABEL_5;
  v15 = (__int64 *)(v0 + 8);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 >= 0 )
    {
      if ( v2 < v16 + 10000000 )
      {
        if ( v2 < v16 )
          goto LABEL_5;
        v2 = 2 * v2 - v16;
      }
      else
      {
        v2 += 10000000LL;
      }
      goto LABEL_17;
    }
    v17 = v16 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 < v17 + 10000000 )
      break;
    v2 -= 10000000LL;
LABEL_17:
    ++v3;
    ++v15;
    if ( v3 >= v1 )
      goto LABEL_5;
  }
  if ( v2 < v17 )
LABEL_5:
    v21 = v2;
LABEL_6:
  v4 = SeAnonymousLogonSid;
  v26.Sid = SeUntrustedMandatorySid;
  v23.Sid = SeAnonymousLogonSid;
  v5 = *((unsigned __int8 *)SeUntrustedMandatorySid + 1);
  v23.Attributes = 0;
  v26.Attributes = 96;
  v6 = ((4 * v5 + 11) & 0xFFFFFFFC) + 16;
  v7 = 4 * (*((unsigned __int8 *)SeAnonymousLogonSid + 1) + *((unsigned __int8 *)SeWorldSid + 1)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, 0xC8uLL, 0x63416553u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v7, 2u);
    RtlAddAccessAllowedAce(v9, 2u, 0xF01FFu, SeWorldSid);
    RtlAddAccessAllowedAce(v9, 2u, 0xF01FFu, SeAnonymousLogonSid);
    v10 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
    v11 = v10;
    if ( v10 )
    {
      RtlCreateSecurityDescriptor(v10, 1u);
      RtlSetDaclSecurityDescriptor(v11, 1u, v9, 0);
      RtlSetOwnerSecurityDescriptor(v11, SeWorldSid, 0);
      RtlSetGroupSecurityDescriptor(v11, SeWorldSid, 0);
      v25[0] = 48;
      memset(&v25[2], 0, 20);
      *(_QWORD *)&v25[8] = v11;
      *(_QWORD *)&v25[10] = 0LL;
      SepCreateToken(
        (HANDLE *)v22,
        v12,
        v13,
        (__int64)v25,
        v18[8],
        v18[10],
        (__int64)&SeAnonymousAuthenticationId,
        &v21,
        &v23,
        1u,
        &v26,
        v6,
        0,
        0LL,
        0LL,
        v4,
        v9);
      SeSetMandatoryPolicyToken(*(__int64 *)v22, &v19);
      ExFreePoolWithTag(v9, 0);
      ExFreePoolWithTag(v11, 0);
      return *(_QWORD *)v22;
    }
    ExFreePoolWithTag(v9, 0);
  }
  return 0LL;
}
