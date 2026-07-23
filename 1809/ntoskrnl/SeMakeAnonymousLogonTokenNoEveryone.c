/*
 * XREFs of SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AF3B0
 * Callers:
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140127228 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSetMandatoryPolicyToken @ 0x1405BEA08 (SeSetMandatoryPolicyToken.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140656740 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140656770 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 *     SepCreateToken @ 0x140728AF0 (SepCreateToken.c)
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
  __m128i si128; // [rsp+C8h] [rbp-60h] BYREF
  _SID_AND_ATTRIBUTES v24; // [rsp+D8h] [rbp-50h] BYREF
  int v25; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-38h]
  __int64 v27; // [rsp+F8h] [rbp-30h]
  int v28; // [rsp+100h] [rbp-28h]
  void *v29; // [rsp+108h] [rbp-20h]
  __int64 v30; // [rsp+110h] [rbp-18h]
  _SID_AND_ATTRIBUTES v31; // [rsp+118h] [rbp-10h] BYREF

  v0 = (char *)ExLeapSecondData;
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
  v24.Attributes = 0;
  v31.Sid = SeUntrustedMandatorySid;
  v5 = *((unsigned __int8 *)SeUntrustedMandatorySid + 1);
  v24.Sid = SeAnonymousLogonSid;
  v31.Attributes = 96;
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
      v26 = 0LL;
      v28 = 0;
      v27 = 0LL;
      v30 = 0LL;
      v25 = 48;
      v29 = v11;
      SepCreateToken(
        (HANDLE *)v22,
        v12,
        v13,
        (__int64)&v25,
        v18[8],
        v18[10],
        (__int64)&SeAnonymousAuthenticationId,
        &v21,
        &v24,
        1u,
        &v31,
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
