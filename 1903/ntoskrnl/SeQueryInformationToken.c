/*
 * XREFs of SeQueryInformationToken @ 0x1405FEE00
 * Callers:
 *     RtlpQueryLowBoxId @ 0x14001D0E8 (RtlpQueryLowBoxId.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     SeQuerySigningPolicyWorker @ 0x140618AB0 (SeQuerySigningPolicyWorker.c)
 *     NtCompareTokens @ 0x140619EC0 (NtCompareTokens.c)
 *     AlpcpCheckConnectionSecurity @ 0x140645340 (AlpcpCheckConnectionSecurity.c)
 *     PiDqOpenUserObjectRegKey @ 0x140667C28 (PiDqOpenUserObjectRegKey.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140680A48 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140680BEC (ObpCaptureBoundaryDescriptor.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     EtwpPsProvTraceProcess @ 0x1406906B0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140690CA4 (EtwpBuildProcessEvent.c)
 *     CmpVEExecuteParseLogic @ 0x1406AD5E0 (CmpVEExecuteParseLogic.c)
 *     CmpIsVirtEnabledForSubject @ 0x1406ADA70 (CmpIsVirtEnabledForSubject.c)
 *     SeTokenIsElevated @ 0x1406D2160 (SeTokenIsElevated.c)
 *     SepCheckCapabilities @ 0x1406D6070 (SepCheckCapabilities.c)
 *     PsIsProcessAppContainer @ 0x1406DA6CC (PsIsProcessAppContainer.c)
 *     CmpBuildAdminInformation @ 0x1406F58F0 (CmpBuildAdminInformation.c)
 *     CmpCreateRegistryProcessToken @ 0x1407691C4 (CmpCreateRegistryProcessToken.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DFC0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlpIsAppContainer @ 0x1408D3374 (RtlpIsAppContainer.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408F1EAC (EtwpAcquireTokenAccessInformation.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14000A8B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     SepConvertTokenPrivileges @ 0x140087780 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400877A0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x1400878C0 (SepTokenPrivilegeCount.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140092380 (SepCanTokenMatchAllPackageSid.c)
 *     SepCopyTokenIntegrity @ 0x1400AE2E8 (SepCopyTokenIntegrity.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlIsElevatedRid @ 0x1405D7E90 (RtlIsElevatedRid.c)
 *     SepCopyTokenAccessInformation @ 0x14061AD0C (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x14061AFF0 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14061B0B8 (SepGetTokenAccessInformationBufferSize.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
 *     SeQuerySessionIdToken @ 0x1406C5180 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406D1FBC (AuthzBasepQueryClaimAttributesToken.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  unsigned int v6; // eax
  unsigned int v7; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  int v10; // r14d
  __int64 v11; // rax
  _DWORD *v12; // r12
  struct _KTHREAD *v13; // rcx
  unsigned int v14; // r15d
  bool v15; // bl
  unsigned int i; // r14d
  BOOLEAN IsElevatedRid; // al
  struct _KTHREAD *CurrentThread; // rax
  ULONG v19; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v21; // r14
  _DWORD *v22; // rax
  int v23; // edx
  struct _KTHREAD *v24; // rax
  UCHAR v25; // cl
  ULONG v26; // r14d
  char *v27; // rax
  char *v28; // rbx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  int v31; // edx
  struct _KTHREAD *v32; // rax
  char *v33; // r14
  unsigned int v34; // r15d
  char *v35; // rax
  struct _KTHREAD *v36; // rax
  unsigned int v37; // ecx
  ULONG v38; // r14d
  ULONG v39; // eax
  __int64 *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  char *v43; // rax
  ULONG v44; // ecx
  _SID_AND_ATTRIBUTES *v45; // rdx
  BOOL v46; // ebx
  struct _KTHREAD *v47; // rax
  unsigned int v48; // r14d
  char *v49; // rax
  struct _KTHREAD *v50; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v52; // rax
  struct _KTHREAD *v53; // rax
  unsigned int v54; // ecx
  ULONG v55; // eax
  __int64 v56; // r8
  __int64 *v57; // rdx
  __int64 v58; // rax
  char *v59; // rax
  _DWORD *v60; // rax
  struct _KTHREAD *v61; // rax
  unsigned int v62; // eax
  unsigned int v63; // r15d
  char *v64; // rax
  struct _KTHREAD *v65; // rax
  int v66; // eax
  unsigned int v67; // ecx
  int v68; // r9d
  unsigned int v69; // r12d
  __int64 *v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rax
  unsigned int v73; // eax
  unsigned int v74; // r13d
  unsigned int v75; // r15d
  __int64 *v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rax
  char *v79; // rax
  char *v80; // rbx
  char *v81; // rcx
  char *v82; // r14
  char *v83; // rax
  __int64 v84; // rcx
  ULONG v85; // r12d
  struct _KTHREAD *v86; // rax
  unsigned int v87; // r14d
  char *v88; // rax
  struct _KTHREAD *v89; // rax
  __int64 v90; // rax
  SIZE_T v91; // r15
  char *v92; // rax
  void *v93; // rcx
  _OWORD *v94; // rax
  _DWORD *v95; // rax
  struct _KTHREAD *v96; // rax
  __int64 v97; // r12
  __int64 *v98; // rax
  __int64 *v99; // r12
  unsigned int v100; // r15d
  PVOID v101; // rax
  void *v102; // rbx
  NTSTATUS v103; // r14d
  struct _KTHREAD *v104; // rax
  unsigned int *v105; // rax
  unsigned int v106; // r14d
  ULONG v107; // r15d
  ULONG v108; // ecx
  __int64 *v109; // rdx
  __int64 v110; // r8
  __int64 v111; // rax
  struct _KTHREAD *v112; // rax
  unsigned int v113; // r15d
  char *v114; // rax
  char *v115; // r14
  struct _KTHREAD *v116; // rax
  __int64 v117; // rax
  SIZE_T v118; // r15
  char *SidArea; // [rsp+20h] [rbp-A9h]
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  int v121; // [rsp+88h] [rbp-41h] BYREF
  int v122; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v123; // [rsp+90h] [rbp-39h] BYREF
  int v124; // [rsp+94h] [rbp-35h] BYREF
  int v125; // [rsp+98h] [rbp-31h] BYREF
  int v126; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v127; // [rsp+A0h] [rbp-29h] BYREF
  int v128; // [rsp+A4h] [rbp-25h] BYREF
  __int64 v129; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v130; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v131; // [rsp+B8h] [rbp-11h]
  __int64 v132; // [rsp+C0h] [rbp-9h]
  __int64 v133; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v134; // [rsp+D0h] [rbp+7h]
  PSID Sid; // [rsp+D8h] [rbp+Fh]
  int v136; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned int v138; // [rsp+148h] [rbp+7Fh] BYREF

  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
LABEL_2:
    v6 = *((_DWORD *)Token + 50);
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) & 0x200) != 0;
    }
    else
    {
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationEnabled:
          v7 = v6 >> 10;
          break;
        case TokenUIAccess:
          v7 = v6 >> 12;
          break;
        case TokenIsAppContainer:
          v7 = v6 >> 14;
          break;
        case TokenHasRestrictions:
          *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
          return 0;
        default:
          v7 = HIWORD(v6);
          break;
      }
      *(_DWORD *)TokenInformation = v7 & 1;
    }
  }
  else
  {
    switch ( TokenInformationClass )
    {
      case TokenUser:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v19 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v19, 0x20206553u);
        v21 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_68;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v19,
          PoolWithTag,
          &PoolWithTag[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        result = 0;
        *TokenInformation = v21;
        return result;
      case TokenGroups:
        v53 = KeGetCurrentThread();
        --v53->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v54 = *((_DWORD *)Token + 31);
        v38 = 16 * v54 - 8;
        v55 = v38;
        if ( v54 > 1 )
        {
          v56 = v54 - 1;
          v57 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v58 = *v57;
            v57 += 2;
            v38 += 4 * *(unsigned __int8 *)(v58 + 1) + 8;
            v55 = v38;
            --v56;
          }
          while ( v56 );
        }
        v59 = (char *)ExAllocatePoolWithTag(PagedPool, v55, 0x20206553u);
        v28 = v59;
        if ( !v59 )
          goto LABEL_68;
        *(_DWORD *)v59 = *((_DWORD *)Token + 31) - 1;
        v45 = (_SID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 19) + 16LL);
        v44 = *((_DWORD *)Token + 31) - 1;
        SidArea = &v59[16 * *((_DWORD *)Token + 31) - 32 + 24];
        goto LABEL_49;
      case TokenPrivileges:
        v61 = KeGetCurrentThread();
        --v61->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v62 = SepTokenPrivilegeCount((__int64)Token);
        if ( v62 <= 1 )
          v63 = 16;
        else
          v63 = 12 * v62 + 4;
        v64 = (char *)ExAllocatePoolWithTag(PagedPool, v63, 0x20206553u);
        v28 = v64;
        if ( !v64 )
          goto LABEL_68;
        SepConvertTokenPrivileges((__int64)Token, v64);
        goto LABEL_33;
      case TokenOwner:
        v86 = KeGetCurrentThread();
        --v86->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v87 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v88 = (char *)ExAllocatePoolWithTag(PagedPool, v87, 0x20206553u);
        v28 = v88;
        if ( !v88 )
          goto LABEL_68;
        *(_QWORD *)v88 = v88 + 8;
        RtlCopySid(v87 - 8, v88 + 8, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_33;
      case TokenPrimaryGroup:
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v48 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v49 = (char *)ExAllocatePoolWithTag(PagedPool, v48, 0x20206553u);
        v28 = v49;
        if ( !v49 )
          goto LABEL_68;
        *(_QWORD *)v49 = v49 + 8;
        RtlCopySid(v48 - 8, v49 + 8, *((PSID *)Token + 21));
        goto LABEL_33;
      case TokenDefaultDacl:
        v89 = KeGetCurrentThread();
        --v89->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v90 = *((_QWORD *)Token + 23);
        v91 = 8LL;
        if ( v90 )
          v91 = *(unsigned __int16 *)(v90 + 2) + 8LL;
        v92 = (char *)ExAllocatePoolWithTag(PagedPool, v91, 0x20206553u);
        v28 = v92;
        if ( !v92 )
          goto LABEL_68;
        v93 = v92 + 8;
        if ( !*((_QWORD *)Token + 23) )
          goto LABEL_137;
        *(_QWORD *)v92 = v93;
        memmove(v93, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        goto LABEL_33;
      case TokenSource:
        v94 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
        if ( !v94 )
          return -1073741670;
        *v94 = *(_OWORD *)Token;
        *TokenInformation = v94;
        return 0;
      case TokenType:
        v95 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v95 )
          return -1073741670;
        *v95 = *((_DWORD *)Token + 48);
        *TokenInformation = v95;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v60 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v60 )
          return -1073741670;
        *v60 = *((_DWORD *)Token + 49);
        *TokenInformation = v60;
        return 0;
      case TokenStatistics:
        v27 = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v28 = v27;
        if ( !v27 )
          return -1073741670;
        *(_QWORD *)v27 = *((_QWORD *)Token + 2);
        *((_QWORD *)v27 + 1) = *((_QWORD *)Token + 3);
        *((_DWORD *)v27 + 6) = *((_DWORD *)Token + 48);
        *((_DWORD *)v27 + 7) = *((_DWORD *)Token + 49);
        *((_QWORD *)v27 + 2) = *((_QWORD *)Token + 5);
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        *((_DWORD *)v28 + 8) = *((_DWORD *)Token + 34);
        v30 = *((_QWORD *)Token + 23);
        v31 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v30 )
          v31 -= *(unsigned __int16 *)(v30 + 2);
        *((_DWORD *)v28 + 9) = v31;
        *((_DWORD *)v28 + 9) = *((_DWORD *)Token + 35);
        *((_DWORD *)v28 + 10) = *((_DWORD *)Token + 31) - 1;
        *((_DWORD *)v28 + 11) = SepTokenPrivilegeCount((__int64)Token);
        *((_QWORD *)v28 + 6) = *((_QWORD *)Token + 7);
        goto LABEL_33;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v65 = KeGetCurrentThread();
        --v65->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v66 = SepTokenPrivilegeCount((__int64)Token);
        v67 = *((_DWORD *)Token + 31);
        v136 = v66;
        v68 = 12 * v66;
        v69 = 16 * v67;
        LODWORD(NumberOfBytes) = 12 * v66;
        v138 = 16 * v67;
        if ( v67 )
        {
          v70 = (__int64 *)*((_QWORD *)Token + 19);
          v71 = v67;
          do
          {
            v72 = *v70;
            v70 += 2;
            v69 += (4 * *(unsigned __int8 *)(v72 + 1) + 15) & 0xFFFFFFF8;
            --v71;
          }
          while ( v71 );
        }
        v73 = *((_DWORD *)Token + 32);
        v74 = 16 * v73;
        v75 = 16 * v73;
        if ( v73 )
        {
          v76 = (__int64 *)*((_QWORD *)Token + 20);
          v77 = v73;
          do
          {
            v78 = *v76;
            v76 += 2;
            v75 += (4 * *(unsigned __int8 *)(v78 + 1) + 15) & 0xFFFFFFF8;
            --v77;
          }
          while ( v77 );
        }
        v79 = (char *)ExAllocatePoolWithTag(PagedPool, v75 + v69 + v68 + 56, 0x20206553u);
        v80 = v79;
        if ( v79 )
        {
          v81 = v79 + 56;
          *((_QWORD *)v79 + 6) = *((_QWORD *)Token + 3);
          *((_DWORD *)v79 + 1) = v69;
          *(_DWORD *)v79 = *((_DWORD *)Token + 31);
          *((_QWORD *)v79 + 1) = v79 + 56;
          *((_DWORD *)v79 + 5) = v75;
          *((_DWORD *)v79 + 4) = *((_DWORD *)Token + 32);
          if ( *((_DWORD *)Token + 32) )
            v82 = &v81[(v69 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
          else
            v82 = 0LL;
          *((_QWORD *)v79 + 3) = v82;
          *((_DWORD *)v79 + 9) = NumberOfBytes;
          *((_DWORD *)v79 + 8) = v136;
          v83 = &v81[v69 + (unsigned __int64)v75];
          v84 = v138;
          v85 = v69 - v138;
          *((_QWORD *)v80 + 5) = v83;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 31),
            *((PSID_AND_ATTRIBUTES *)Token + 19),
            v85,
            (PSID_AND_ATTRIBUTES)(v80 + 56),
            &v80[v84 + 56],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( *((_DWORD *)v80 + 4) )
            RtlCopySidAndAttributesArray(
              *((_DWORD *)Token + 32),
              *((PSID_AND_ATTRIBUTES *)Token + 20),
              v75 - v74,
              *((PSID_AND_ATTRIBUTES *)v80 + 3),
              (PSID)(*((_QWORD *)v80 + 3) + v74),
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v80 + 5));
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          result = 0;
          *TokenInformation = v80;
        }
        else
        {
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        return result;
      case TokenElevationType:
        v22 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v22 )
          return -1073741670;
        v23 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v23 & 4) != 0 )
          *v22 = 3;
        else
          *v22 = ((v23 & 2) != 0) + 1;
        *TokenInformation = v22;
        return 0;
      case TokenElevation:
        v12 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v12 )
          return -1073741670;
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v14 = *((_DWORD *)Token + 31);
        v15 = (*((_QWORD *)Token + 8) & 0x1120160684LL) != 0;
        for ( i = 0; i < v14; v15 = IsElevatedRid )
        {
          if ( v15 )
            break;
          IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL * i++));
        }
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *v12 = v15;
        *TokenInformation = v12;
        return 0;
      case TokenHasRestrictions:
      case TokenVirtualizationAllowed:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenPrivateNameSpace:
        goto LABEL_2;
      case TokenAccessInformation:
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)Token,
                                             0,
                                             0,
                                             (unsigned int)&v128,
                                             (__int64)&v127,
                                             (__int64)&v126,
                                             (__int64)&v125,
                                             (__int64)&v124,
                                             (__int64)&v123,
                                             (__int64)&v122,
                                             (__int64)&v121,
                                             (__int64)&v138,
                                             (__int64)&v136);
        v52 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v28 = v52;
        if ( !v52 )
          goto LABEL_68;
        SepCopyTokenAccessInformation(
          (_DWORD)Token,
          (_DWORD)v52,
          TokenAccessInformationBufferSize,
          v128,
          v127,
          v126,
          v125,
          v124,
          v123,
          v122,
          v121,
          v138,
          v136,
          0,
          0LL);
        goto LABEL_33;
      case TokenIntegrityLevel:
        Sid = 0LL;
        v24 = KeGetCurrentThread();
        --v24->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity((__int64)Token);
        v25 = *RtlSubAuthorityCountSid(Sid);
        if ( v25 )
          v26 = *RtlSubAuthoritySid(Sid, (unsigned int)v25 - 1);
        else
          v26 = 0;
        *(_DWORD *)TokenInformation = v26;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v37 = *((_DWORD *)Token + 200);
        v38 = 16 * v37 + 24;
        v39 = v38;
        if ( v37 )
        {
          v40 = (__int64 *)*((_QWORD *)Token + 99);
          v41 = v37;
          do
          {
            v42 = *v40;
            v40 += 2;
            v38 += 4 * *(unsigned __int8 *)(v42 + 1) + 8;
            v39 = v38;
            --v41;
          }
          while ( v41 );
        }
        v43 = (char *)ExAllocatePoolWithTag(PagedPool, v39, 0x20206553u);
        v28 = v43;
        if ( !v43 )
          goto LABEL_68;
        *(_DWORD *)v43 = *((_DWORD *)Token + 200);
        v44 = *((_DWORD *)Token + 200);
        SidArea = &v43[16 * v44 + 24];
        v45 = (_SID_AND_ATTRIBUTES *)*((_QWORD *)Token + 99);
LABEL_49:
        RtlCopySidAndAttributesArray(
          v44,
          v45,
          v38,
          (PSID_AND_ATTRIBUTES)(v28 + 8),
          SidArea,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_33;
      case TokenAppContainerSid:
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v33 = (char *)*((_QWORD *)Token + 98);
        if ( v33 )
          v34 = 4 * (unsigned __int8)v33[1] + 16;
        else
          v34 = 8;
        v35 = (char *)ExAllocatePoolWithTag(PagedPool, v34, 0x20206553u);
        v28 = v35;
        if ( !v35 )
          goto LABEL_68;
        if ( v33 )
        {
          v33 = v35 + 8;
          RtlCopySid(v34 - 8, v35 + 8, *((PSID *)Token + 98));
        }
        goto LABEL_39;
      case TokenAppContainerNumber:
        v9 = KeGetCurrentThread();
        v10 = 0;
        --v9->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v11 = *((_QWORD *)Token + 135);
        if ( v11 )
          v10 = *(_DWORD *)(v11 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = v10;
        return 0;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        *TokenInformation = 0LL;
        v96 = KeGetCurrentThread();
        --v96->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v97 = *((_QWORD *)Token + 137);
        if ( v97
          && ((v98 = *(__int64 **)(v97 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v99 = *(__int64 **)(v97 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v99 = v98;
          AuthzBasepQueryClaimAttributesToken(v99, 0LL, 0LL, &NumberOfBytes);
          v100 = NumberOfBytes;
        }
        else
        {
          LODWORD(v132) = 0;
          v131 = &v130;
          v99 = &v129;
          v100 = 16;
          v130 = (__int64)&v130;
          v134 = &v133;
          v133 = (__int64)&v133;
        }
        v101 = ExAllocatePoolWithTag(PagedPool, v100, 0x20206553u);
        v102 = v101;
        if ( !v101 )
          goto LABEL_68;
        v103 = AuthzBasepQueryClaimAttributesToken(v99, v101, v100, &NumberOfBytes);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        if ( v103 >= 0 )
          *TokenInformation = v102;
        else
          ExFreePoolWithTag(v102, 0);
        return v103;
      case TokenDeviceGroups:
        v104 = KeGetCurrentThread();
        --v104->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v105 = (unsigned int *)*((_QWORD *)Token + 137);
        if ( v105 && (v106 = *v105) != 0 )
        {
          v107 = 16 * v106 + 8;
        }
        else
        {
          v106 = 0;
          v107 = 24;
        }
        v108 = v107;
        if ( v106 )
        {
          v109 = (__int64 *)*((_QWORD *)v105 + 1);
          v110 = v106;
          do
          {
            v111 = *v109;
            v109 += 2;
            v107 += 4 * *(unsigned __int8 *)(v111 + 1) + 8;
            v108 = v107;
            --v110;
          }
          while ( v110 );
        }
        v28 = (char *)ExAllocatePoolWithTag(PagedPool, v108, 0x20206553u);
        if ( !v28 )
          goto LABEL_68;
        *(_QWORD *)v28 = 0LL;
        *((_QWORD *)v28 + 1) = 0LL;
        *((_QWORD *)v28 + 2) = 0LL;
        *(_DWORD *)v28 = v106;
        if ( v106 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v107,
            (PSID_AND_ATTRIBUTES)(v28 + 8),
            &v28[16 * v106 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_33;
      case TokenProcessTrustLevel:
        v112 = KeGetCurrentThread();
        --v112->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v33 = (char *)*((_QWORD *)Token + 138);
        if ( v33 )
          v113 = 4 * (unsigned __int8)v33[1] + 16;
        else
          v113 = 8;
        v114 = (char *)ExAllocatePoolWithTag(PagedPool, v113, 0x20206553u);
        v28 = v114;
        if ( !v114 )
          goto LABEL_68;
        if ( v33 )
        {
          v115 = v114 + 8;
          RtlCopySid(v113 - 8, v114 + 8, *((PSID *)Token + 138));
          *(_QWORD *)v28 = v115;
        }
        else
        {
LABEL_39:
          *(_QWORD *)v28 = v33;
        }
        goto LABEL_33;
      case TokenBnoIsolation:
        v116 = KeGetCurrentThread();
        --v116->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v117 = *((_QWORD *)Token + 144);
        v118 = 16LL;
        if ( v117 )
          v118 = *(unsigned __int16 *)(v117 + 42) + 16LL;
        v92 = (char *)ExAllocatePoolWithTag(PagedPool, v118, 0x20206553u);
        v28 = v92;
        if ( !v92 )
        {
LABEL_68:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( *((_QWORD *)Token + 144) )
        {
          v92[8] = 1;
          *(_QWORD *)v92 = v92 + 16;
          memmove(
            v92 + 16,
            *(const void **)(*((_QWORD *)Token + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
        }
        else
        {
          v92[8] = 0;
LABEL_137:
          *(_QWORD *)v92 = 0LL;
        }
LABEL_33:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v28;
        break;
      case TokenIsLessPrivilegedAppContainer:
        v46 = (*((_DWORD *)Token + 50) & 0x4000) != 0
           && !SepCanTokenMatchAllPackageSid((__int64)Token, 0x140000000LL, (struct _KTHREAD *)TokenInformation);
        *(_DWORD *)TokenInformation = v46;
        return 0;
      case TokenIsAppSilo:
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_PPLEnforcement__private_propertyCache,
          19318041LL,
          (__int64)&Feature_PPLEnforcement_logged_traits,
          0,
          3);
        return -1073741821;
      default:
        return -1073741821;
    }
  }
  return 0;
}
