/*
 * XREFs of SeMakeAnonymousLogonToken @ 0x1409AF624
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

__int64 SeMakeAnonymousLogonToken()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // rbx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // r15d
  ULONG v9; // edi
  ACL *PoolWithTag; // rax
  ACL *v11; // rsi
  PVOID v12; // rax
  void *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  signed __int32 v20[12]; // [rsp+8h] [rbp-120h] BYREF
  int v21; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-70h] BYREF
  int v24[2]; // [rsp+C0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-60h] BYREF
  _SID_AND_ATTRIBUTES v26; // [rsp+D8h] [rbp-50h] BYREF
  int v27; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-38h]
  __int64 v29; // [rsp+F8h] [rbp-30h]
  int v30; // [rsp+100h] [rbp-28h]
  void *v31; // [rsp+108h] [rbp-20h]
  __int64 v32; // [rsp+110h] [rbp-18h]
  _SID_AND_ATTRIBUTES v33; // [rsp+118h] [rbp-10h] BYREF
  __int64 v34; // [rsp+128h] [rbp+0h]
  int v35; // [rsp+130h] [rbp+8h]

  v0 = (char *)ExLeapSecondData;
  v21 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v23);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v20, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v22) )
    goto LABEL_6;
  v2 = v22;
  v3 = 0;
  if ( !v1 )
    goto LABEL_5;
  v17 = (__int64 *)(v0 + 8);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 >= 0 )
    {
      if ( v2 < v18 + 10000000 )
      {
        if ( v2 < v18 )
          goto LABEL_5;
        v2 = 2 * v2 - v18;
      }
      else
      {
        v2 += 10000000LL;
      }
      goto LABEL_17;
    }
    v19 = v18 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 < v19 + 10000000 )
      break;
    v2 -= 10000000LL;
LABEL_17:
    ++v3;
    ++v17;
    if ( v3 >= v1 )
      goto LABEL_5;
  }
  if ( v2 < v19 )
LABEL_5:
    v23 = v2;
LABEL_6:
  v4 = SeAnonymousLogonSid;
  v26.Attributes = 0;
  v5 = *((unsigned __int8 *)SeWorldSid + 1);
  v33.Sid = SeWorldSid;
  v34 = *(_QWORD *)&SeLowMandatorySid;
  v26.Sid = SeAnonymousLogonSid;
  v6 = 4 * v5 + 11;
  v33.Attributes = 7;
  v7 = *(unsigned __int8 *)(*(_QWORD *)&SeLowMandatorySid + 1LL);
  v35 = 96;
  v8 = (v6 & 0xFFFFFFFC) + 16 + ((4 * v7 + 11) & 0xFFFFFFFC);
  v9 = 4 * (*((unsigned __int8 *)SeAnonymousLogonSid + 1) + *((unsigned __int8 *)SeWorldSid + 1)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, 0xC8uLL, 0x63416553u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v9, 2u);
    RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, SeWorldSid);
    RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, SeAnonymousLogonSid);
    v12 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
    v13 = v12;
    if ( v12 )
    {
      RtlCreateSecurityDescriptor(v12, 1u);
      RtlSetDaclSecurityDescriptor(v13, 1u, v11, 0);
      RtlSetOwnerSecurityDescriptor(v13, SeWorldSid, 0);
      RtlSetGroupSecurityDescriptor(v13, SeWorldSid, 0);
      v28 = 0LL;
      v30 = 0;
      v29 = 0LL;
      v32 = 0LL;
      v27 = 48;
      v31 = v13;
      SepCreateToken(
        (HANDLE *)v24,
        v14,
        v15,
        (__int64)&v27,
        v20[8],
        v20[10],
        (__int64)&SeAnonymousAuthenticationId,
        &v23,
        &v26,
        2u,
        &v33,
        v8,
        0,
        0LL,
        0LL,
        v4,
        v11);
      SeSetMandatoryPolicyToken(*(__int64 *)v24, &v21);
      ExFreePoolWithTag(v11, 0);
      ExFreePoolWithTag(v13, 0);
      return *(_QWORD *)v24;
    }
    ExFreePoolWithTag(v11, 0);
  }
  return 0LL;
}
