/*
 * XREFs of SeMakeSystemToken @ 0x1409AEE18
 * Callers:
 *     SepInitializationPhase0 @ 0x1409AE8C0 (SepInitializationPhase0.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140127228 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSetMandatoryPolicyToken @ 0x1405BEA08 (SeSetMandatoryPolicyToken.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140655450 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140656740 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140656770 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 *     SepCreateToken @ 0x140728AF0 (SepCreateToken.c)
 *     RtlAddProcessTrustLabelAce @ 0x140728BD0 (RtlAddProcessTrustLabelAce.c)
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
  __m128i si128; // [rsp+C8h] [rbp-60h] BYREF
  _SID_AND_ATTRIBUTES v38; // [rsp+D8h] [rbp-50h] BYREF
  int v39; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-38h]
  __int64 v41; // [rsp+F8h] [rbp-30h]
  int v42; // [rsp+100h] [rbp-28h]
  void *v43; // [rsp+108h] [rbp-20h]
  __int64 v44; // [rsp+110h] [rbp-18h]
  __int64 v45; // [rsp+118h] [rbp-10h] BYREF
  int v46; // [rsp+120h] [rbp-8h]
  LUID v47; // [rsp+124h] [rbp-4h]
  int v48; // [rsp+12Ch] [rbp+4h]
  __int64 v49; // [rsp+130h] [rbp+8h]
  int v50; // [rsp+138h] [rbp+10h]
  LUID v51; // [rsp+13Ch] [rbp+14h]
  int v52; // [rsp+144h] [rbp+1Ch]
  LUID v53; // [rsp+148h] [rbp+20h]
  int v54; // [rsp+150h] [rbp+28h]
  LUID v55; // [rsp+154h] [rbp+2Ch]
  int v56; // [rsp+15Ch] [rbp+34h]
  LUID v57; // [rsp+160h] [rbp+38h]
  int v58; // [rsp+168h] [rbp+40h]
  LUID v59; // [rsp+16Ch] [rbp+44h]
  int v60; // [rsp+174h] [rbp+4Ch]
  LUID v61; // [rsp+178h] [rbp+50h]
  int v62; // [rsp+180h] [rbp+58h]
  LUID v63; // [rsp+184h] [rbp+5Ch]
  int v64; // [rsp+18Ch] [rbp+64h]
  __int64 v65; // [rsp+190h] [rbp+68h]
  int v66; // [rsp+198h] [rbp+70h]
  LUID v67; // [rsp+19Ch] [rbp+74h]
  int v68; // [rsp+1A4h] [rbp+7Ch]
  LUID v69; // [rsp+1A8h] [rbp+80h]
  int v70; // [rsp+1B0h] [rbp+88h]
  __int64 v71; // [rsp+1B4h] [rbp+8Ch]
  int v72; // [rsp+1BCh] [rbp+94h]
  LUID v73; // [rsp+1C0h] [rbp+98h]
  int v74; // [rsp+1C8h] [rbp+A0h]
  LUID v75; // [rsp+1CCh] [rbp+A4h]
  int v76; // [rsp+1D4h] [rbp+ACh]
  LUID v77; // [rsp+1D8h] [rbp+B0h]
  int v78; // [rsp+1E0h] [rbp+B8h]
  LUID v79; // [rsp+1E4h] [rbp+BCh]
  int v80; // [rsp+1ECh] [rbp+C4h]
  LUID v81; // [rsp+1F0h] [rbp+C8h]
  int v82; // [rsp+1F8h] [rbp+D0h]
  LUID v83; // [rsp+1FCh] [rbp+D4h]
  int v84; // [rsp+204h] [rbp+DCh]
  __int64 v85; // [rsp+208h] [rbp+E0h]
  int v86; // [rsp+210h] [rbp+E8h]
  __int64 v87; // [rsp+214h] [rbp+ECh]
  int v88; // [rsp+21Ch] [rbp+F4h]
  __int64 v89; // [rsp+220h] [rbp+F8h]
  int v90; // [rsp+228h] [rbp+100h]
  LUID v91; // [rsp+22Ch] [rbp+104h]
  int v92; // [rsp+234h] [rbp+10Ch]
  __int64 v93; // [rsp+238h] [rbp+110h]
  int v94; // [rsp+240h] [rbp+118h]
  __int64 v95; // [rsp+244h] [rbp+11Ch]
  int v96; // [rsp+24Ch] [rbp+124h]
  __int64 v97; // [rsp+250h] [rbp+128h]
  int v98; // [rsp+258h] [rbp+130h]
  LUID v99; // [rsp+25Ch] [rbp+134h]
  int v100; // [rsp+264h] [rbp+13Ch]
  __int64 v101; // [rsp+268h] [rbp+140h]
  int v102; // [rsp+270h] [rbp+148h]
  LUID v103; // [rsp+274h] [rbp+14Ch]
  int v104; // [rsp+27Ch] [rbp+154h]
  __int64 v105; // [rsp+280h] [rbp+158h]
  int v106; // [rsp+288h] [rbp+160h]
  _SID_AND_ATTRIBUTES v107; // [rsp+298h] [rbp+170h] BYREF
  PSID v108; // [rsp+2A8h] [rbp+180h]
  int v109; // [rsp+2B0h] [rbp+188h]
  __int64 v110; // [rsp+2B8h] [rbp+190h]
  int v111; // [rsp+2C0h] [rbp+198h]
  __int64 v112; // [rsp+2C8h] [rbp+1A0h]
  int v113; // [rsp+2D0h] [rbp+1A8h]

  v0 = (char *)ExLeapSecondData;
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
  v109 = 7;
  v111 = 7;
  v6 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  v108 = SeWorldSid;
  v38.Sid = SeLocalSystemSid;
  v38.Attributes = 0;
  v7 = 4 * v6 + 11;
  v107.Sid = SeAliasAdminsSid;
  v8 = *((unsigned __int8 *)SeWorldSid + 1);
  v110 = SeAuthenticatedUsersSid;
  v112 = SeSystemMandatorySid;
  v107.Attributes = 14;
  v113 = 96;
  v46 = 3;
  v9 = ((4 * v8 + 11) & 0xFFFFFFFC) + (v7 & 0xFFFFFFFC);
  v48 = 0;
  v10 = *(unsigned __int8 *)(SeAuthenticatedUsersSid + 1);
  v50 = 0;
  v52 = 3;
  v54 = 3;
  v56 = 0;
  v58 = 0;
  v11 = ((4 * v10 + 11) & 0xFFFFFFFC) + v9;
  v60 = 3;
  v12 = *(unsigned __int8 *)(SeSystemMandatorySid + 1);
  v62 = 3;
  v64 = 3;
  v66 = 3;
  v68 = 0;
  v45 = (__int64)SeTcbPrivilege;
  v13 = v11 + ((4 * v12 + 11) & 0xFFFFFFFC) + 16;
  v47 = SeCreateTokenPrivilege;
  v49 = SeTakeOwnershipPrivilege;
  v51 = SeCreatePagefilePrivilege;
  v53 = SeLockMemoryPrivilege;
  v55 = SeAssignPrimaryTokenPrivilege;
  v57 = SeIncreaseQuotaPrivilege;
  v59 = SeIncreaseBasePriorityPrivilege;
  v61 = SeCreatePermanentPrivilege;
  v63 = SeDebugPrivilege;
  v65 = SeAuditPrivilege;
  v67 = SeSecurityPrivilege;
  v69 = SeSystemEnvironmentPrivilege;
  v71 = SeChangeNotifyPrivilege;
  v73 = SeBackupPrivilege;
  v75 = SeRestorePrivilege;
  v70 = 0;
  v72 = 3;
  v74 = 0;
  v77 = SeShutdownPrivilege;
  v79 = SeLoadDriverPrivilege;
  v81 = SeProfileSingleProcessPrivilege;
  v83 = SeSystemtimePrivilege;
  v85 = SeUndockPrivilege;
  v87 = SeManageVolumePrivilege;
  v89 = SeImpersonatePrivilege;
  v91 = SeCreateGlobalPrivilege;
  v93 = SeTrustedCredManAccessPrivilege;
  v95 = SeRelabelPrivilege;
  v97 = SeIncreaseWorkingSetPrivilege;
  v99 = SeTimeZonePrivilege;
  v101 = SeCreateSymbolicLinkPrivilege;
  v103 = SeSystemProfilePrivilege;
  v105 = SeDelegateSessionUserImpersonatePrivilege;
  v14 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  v82 = 3;
  v90 = 3;
  v92 = 3;
  v15 = 4 * v14 + 24;
  v98 = 3;
  v100 = 3;
  v102 = 3;
  v104 = 3;
  v106 = 3;
  v76 = 0;
  v78 = 0;
  v80 = 0;
  v84 = 0;
  v86 = 0;
  v88 = 0;
  v94 = 0;
  v96 = 0;
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
        v39 = 48;
        v40 = 0LL;
        v42 = 0;
        v41 = 0LL;
        v44 = 0LL;
        v43 = v22;
        SepCreateToken(
          (HANDLE *)v36,
          v23,
          v24,
          (__int64)&v39,
          *(int *)AceType,
          AccessMask[0],
          (__int64)&SeSystemAuthenticationId,
          &v35,
          &v38,
          4u,
          &v107,
          v13,
          0x1Fu,
          (char **)&v45,
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
