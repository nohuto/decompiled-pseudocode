/*
 * XREFs of SeMakeSystemToken @ 0x140A01A5C
 * Callers:
 *     SepInitializationPhase0 @ 0x140A014A0 (SepInitializationPhase0.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140121E54 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14069D1C0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14069D1F0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14069D250 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14069E970 (RtlSetSaclSecurityDescriptor.c)
 *     SeSetMandatoryPolicyToken @ 0x1406E4688 (SeSetMandatoryPolicyToken.c)
 *     SepCreateToken @ 0x14075D35C (SepCreateToken.c)
 *     RtlAddProcessTrustLabelAce @ 0x14075D440 (RtlAddProcessTrustLabelAce.c)
 */

__int64 SeMakeSystemToken()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // r12
  PSID v5; // rbx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // r13d
  int v14; // eax
  ULONG v15; // edi
  ACL *PoolWithTag; // rax
  ACL *v17; // r14
  ULONG v18; // edi
  ACL *v19; // rax
  ACL *v20; // rsi
  PVOID v21; // rax
  void *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdx
  ACL *v29; // rcx
  signed __int32 v30[8]; // [rsp+8h] [rbp-120h] BYREF
  UCHAR AceType[4]; // [rsp+28h] [rbp-100h]
  ACCESS_MASK AccessMask[2]; // [rsp+30h] [rbp-F8h]
  int v33; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-70h] BYREF
  int v36[2]; // [rsp+C0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES v37; // [rsp+C8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-50h] BYREF
  int v39[12]; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v40; // [rsp+118h] [rbp-10h] BYREF
  int v41; // [rsp+120h] [rbp-8h]
  LUID v42; // [rsp+124h] [rbp-4h]
  int v43; // [rsp+12Ch] [rbp+4h]
  __int64 v44; // [rsp+130h] [rbp+8h]
  int v45; // [rsp+138h] [rbp+10h]
  LUID v46; // [rsp+13Ch] [rbp+14h]
  int v47; // [rsp+144h] [rbp+1Ch]
  LUID v48; // [rsp+148h] [rbp+20h]
  int v49; // [rsp+150h] [rbp+28h]
  LUID v50; // [rsp+154h] [rbp+2Ch]
  int v51; // [rsp+15Ch] [rbp+34h]
  LUID v52; // [rsp+160h] [rbp+38h]
  int v53; // [rsp+168h] [rbp+40h]
  LUID v54; // [rsp+16Ch] [rbp+44h]
  int v55; // [rsp+174h] [rbp+4Ch]
  LUID v56; // [rsp+178h] [rbp+50h]
  int v57; // [rsp+180h] [rbp+58h]
  LUID v58; // [rsp+184h] [rbp+5Ch]
  int v59; // [rsp+18Ch] [rbp+64h]
  __int64 v60; // [rsp+190h] [rbp+68h]
  int v61; // [rsp+198h] [rbp+70h]
  LUID v62; // [rsp+19Ch] [rbp+74h]
  int v63; // [rsp+1A4h] [rbp+7Ch]
  LUID v64; // [rsp+1A8h] [rbp+80h]
  int v65; // [rsp+1B0h] [rbp+88h]
  __int64 v66; // [rsp+1B4h] [rbp+8Ch]
  int v67; // [rsp+1BCh] [rbp+94h]
  LUID v68; // [rsp+1C0h] [rbp+98h]
  int v69; // [rsp+1C8h] [rbp+A0h]
  LUID v70; // [rsp+1CCh] [rbp+A4h]
  int v71; // [rsp+1D4h] [rbp+ACh]
  LUID v72; // [rsp+1D8h] [rbp+B0h]
  int v73; // [rsp+1E0h] [rbp+B8h]
  LUID v74; // [rsp+1E4h] [rbp+BCh]
  int v75; // [rsp+1ECh] [rbp+C4h]
  LUID v76; // [rsp+1F0h] [rbp+C8h]
  int v77; // [rsp+1F8h] [rbp+D0h]
  LUID v78; // [rsp+1FCh] [rbp+D4h]
  int v79; // [rsp+204h] [rbp+DCh]
  __int64 v80; // [rsp+208h] [rbp+E0h]
  int v81; // [rsp+210h] [rbp+E8h]
  __int64 v82; // [rsp+214h] [rbp+ECh]
  int v83; // [rsp+21Ch] [rbp+F4h]
  __int64 v84; // [rsp+220h] [rbp+F8h]
  int v85; // [rsp+228h] [rbp+100h]
  LUID v86; // [rsp+22Ch] [rbp+104h]
  int v87; // [rsp+234h] [rbp+10Ch]
  __int64 v88; // [rsp+238h] [rbp+110h]
  int v89; // [rsp+240h] [rbp+118h]
  __int64 v90; // [rsp+244h] [rbp+11Ch]
  int v91; // [rsp+24Ch] [rbp+124h]
  __int64 v92; // [rsp+250h] [rbp+128h]
  int v93; // [rsp+258h] [rbp+130h]
  LUID v94; // [rsp+25Ch] [rbp+134h]
  int v95; // [rsp+264h] [rbp+13Ch]
  __int64 v96; // [rsp+268h] [rbp+140h]
  int v97; // [rsp+270h] [rbp+148h]
  LUID v98; // [rsp+274h] [rbp+14Ch]
  int v99; // [rsp+27Ch] [rbp+154h]
  __int64 v100; // [rsp+280h] [rbp+158h]
  int v101; // [rsp+288h] [rbp+160h]
  _SID_AND_ATTRIBUTES v102; // [rsp+298h] [rbp+170h] BYREF
  PSID v103; // [rsp+2A8h] [rbp+180h]
  int v104; // [rsp+2B0h] [rbp+188h]
  __int64 v105; // [rsp+2B8h] [rbp+190h]
  int v106; // [rsp+2C0h] [rbp+198h]
  __int64 v107; // [rsp+2C8h] [rbp+1A0h]
  int v108; // [rsp+2D0h] [rbp+1A8h]

  v37.Sid = 0LL;
  *(_QWORD *)&v37.Attributes = 0LL;
  memset(v39, 0, sizeof(v39));
  v0 = (char *)ExLeapSecondData;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v35);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v30, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v34) )
    goto LABEL_6;
  v2 = v34;
  v3 = 0;
  if ( !v1 )
    goto LABEL_5;
  v26 = (__int64 *)(v0 + 8);
  while ( 1 )
  {
    v27 = *v26;
    if ( *v26 >= 0 )
    {
      if ( v2 < v27 + 10000000 )
      {
        if ( v2 < v27 )
          goto LABEL_5;
        v2 = 2 * v2 - v27;
      }
      else
      {
        v2 += 10000000LL;
      }
      goto LABEL_18;
    }
    v28 = v27 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 < v28 + 10000000 )
      break;
    v2 -= 10000000LL;
LABEL_18:
    ++v3;
    ++v26;
    if ( v3 >= v1 )
      goto LABEL_5;
  }
  if ( v2 < v28 )
LABEL_5:
    v35 = v2;
LABEL_6:
  v4 = SeAliasAdminsSid;
  v5 = SeLocalSystemSid;
  v104 = 7;
  v106 = 7;
  v6 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  v103 = SeWorldSid;
  v37.Sid = SeLocalSystemSid;
  v37.Attributes = 0;
  v7 = 4 * v6 + 11;
  v102.Sid = SeAliasAdminsSid;
  v8 = *((unsigned __int8 *)SeWorldSid + 1);
  v105 = SeAuthenticatedUsersSid;
  v107 = SeSystemMandatorySid;
  v102.Attributes = 14;
  v108 = 96;
  v41 = 3;
  v9 = ((4 * v8 + 11) & 0xFFFFFFFC) + (v7 & 0xFFFFFFFC);
  v43 = 0;
  v10 = *(unsigned __int8 *)(SeAuthenticatedUsersSid + 1);
  v45 = 0;
  v47 = 3;
  v49 = 3;
  v51 = 0;
  v53 = 0;
  v11 = ((4 * v10 + 11) & 0xFFFFFFFC) + v9;
  v55 = 3;
  v12 = *(unsigned __int8 *)(SeSystemMandatorySid + 1);
  v57 = 3;
  v59 = 3;
  v61 = 3;
  v63 = 0;
  v40 = (__int64)SeTcbPrivilege;
  v13 = v11 + ((4 * v12 + 11) & 0xFFFFFFFC) + 16;
  v42 = SeCreateTokenPrivilege;
  v44 = SeTakeOwnershipPrivilege;
  v46 = SeCreatePagefilePrivilege;
  v48 = SeLockMemoryPrivilege;
  v50 = SeAssignPrimaryTokenPrivilege;
  v52 = SeIncreaseQuotaPrivilege;
  v54 = SeIncreaseBasePriorityPrivilege;
  v56 = SeCreatePermanentPrivilege;
  v58 = SeDebugPrivilege;
  v60 = SeAuditPrivilege;
  v62 = SeSecurityPrivilege;
  v64 = SeSystemEnvironmentPrivilege;
  v66 = SeChangeNotifyPrivilege;
  v68 = SeBackupPrivilege;
  v70 = SeRestorePrivilege;
  v65 = 0;
  v67 = 3;
  v69 = 0;
  v72 = SeShutdownPrivilege;
  v74 = SeLoadDriverPrivilege;
  v76 = SeProfileSingleProcessPrivilege;
  v78 = SeSystemtimePrivilege;
  v80 = SeUndockPrivilege;
  v82 = SeManageVolumePrivilege;
  v84 = SeImpersonatePrivilege;
  v86 = SeCreateGlobalPrivilege;
  v88 = SeTrustedCredManAccessPrivilege;
  v90 = SeRelabelPrivilege;
  v92 = SeIncreaseWorkingSetPrivilege;
  v94 = SeTimeZonePrivilege;
  v96 = SeCreateSymbolicLinkPrivilege;
  v98 = SeSystemProfilePrivilege;
  v100 = SeDelegateSessionUserImpersonatePrivilege;
  v14 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  v77 = 3;
  v85 = 3;
  v87 = 3;
  v15 = 4 * v14 + 24;
  v93 = 3;
  v95 = 3;
  v97 = 3;
  v99 = 3;
  v101 = 3;
  v71 = 0;
  v73 = 0;
  v75 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v89 = 0;
  v91 = 0;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v15, 0x63416553u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v15, 2u);
    v18 = 4 * *((unsigned __int8 *)SeProcTrustWinTcbSid + 1) + 24;
    v19 = (ACL *)ExAllocatePoolWithTag(PagedPool, v18, 0x63416553u);
    v20 = v19;
    if ( v19 )
    {
      RtlCreateAcl(v19, v18, 2u);
      RtlAddAccessAllowedAce(v17, 2u, 0xF01FFu, SeLocalSystemSid);
      RtlAddProcessTrustLabelAce(v20, 2u, 0, SeProcTrustWinTcbSid, 0x14u, 0x20018u);
      v21 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
      v22 = v21;
      if ( v21 )
      {
        RtlCreateSecurityDescriptor(v21, 1u);
        RtlSetDaclSecurityDescriptor(v22, 1u, v17, 0);
        RtlSetSaclSecurityDescriptor(v22, 1u, v20, 0);
        RtlSetOwnerSecurityDescriptor(v22, SeAliasAdminsSid, 0);
        RtlSetGroupSecurityDescriptor(v22, SeAliasAdminsSid, 0);
        v39[0] = 48;
        memset(&v39[2], 0, 20);
        *(_QWORD *)&v39[10] = 0LL;
        *(_QWORD *)&v39[8] = v22;
        SepCreateToken(
          (HANDLE *)v36,
          v23,
          v24,
          (__int64)v39,
          *(int *)AceType,
          AccessMask[0],
          (__int64)&SeSystemAuthenticationId,
          &v35,
          &v37,
          4u,
          &v102,
          v13,
          0x1Fu,
          (char **)&v40,
          v4,
          v5,
          SeSystemDefaultDacl);
        SeSetMandatoryPolicyToken(*(__int64 *)v36, &v33);
        ExFreePoolWithTag(v17, 0);
        ExFreePoolWithTag(v20, 0);
        ExFreePoolWithTag(v22, 0);
        return *(_QWORD *)v36;
      }
      ExFreePoolWithTag(v17, 0);
      v29 = v20;
    }
    else
    {
      v29 = v17;
    }
    ExFreePoolWithTag(v29, 0);
  }
  return 0LL;
}
