/*
 * XREFs of SeQueryInformationToken @ 0x14063D370
 * Callers:
 *     RtlpQueryLowBoxId @ 0x1400CCDB0 (RtlpQueryLowBoxId.c)
 *     RtlCheckTokenCapability @ 0x1402EDCA0 (RtlCheckTokenCapability.c)
 *     NtCompareTokens @ 0x1405BAA30 (NtCompareTokens.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     SeQuerySigningPolicyWorker @ 0x14060B60C (SeQuerySigningPolicyWorker.c)
 *     AlpcpCheckConnectionSecurity @ 0x140614280 (AlpcpCheckConnectionSecurity.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteParseLogic @ 0x140641F80 (CmpVEExecuteParseLogic.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406558C4 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140655A58 (ObpCaptureBoundaryDescriptor.c)
 *     EtwpPsProvTraceProcess @ 0x14066D210 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066DBEC (EtwpBuildProcessEvent.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     SeTokenIsElevated @ 0x1406B1B9C (SeTokenIsElevated.c)
 *     CmpIsVirtEnabledForSubject @ 0x1406B332C (CmpIsVirtEnabledForSubject.c)
 *     SepCheckCapabilities @ 0x1406B44E8 (SepCheckCapabilities.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406DAF20 (PiDqOpenUserObjectRegKey.c)
 *     CmpCreateRegistryProcessToken @ 0x140758B04 (CmpCreateRegistryProcessToken.c)
 *     CmpBuildAdminInformation @ 0x1407F34F0 (CmpBuildAdminInformation.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F6418 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlpIsAppContainer @ 0x1408966C4 (RtlpIsAppContainer.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408B62BC (EtwpAcquireTokenAccessInformation.c)
 * Callees:
 *     SepConvertTokenPrivileges @ 0x1400142A0 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400142C0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x140014440 (SepTokenPrivilegeCount.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x140091D60 (SepCopyTokenIntegrity.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400A6D60 (SepCanTokenMatchAllPackageSid.c)
 *     RtlSubAuthorityCountSid @ 0x1400DCB60 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepCopyTokenAccessInformation @ 0x1405C00C8 (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1405C04A0 (SepGetTokenAccessInformationBufferSize.c)
 *     RtlCopySidAndAttributesArray @ 0x14062DDC0 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     RtlIsElevatedRid @ 0x140656090 (RtlIsElevatedRid.c)
 *     SeQuerySessionIdToken @ 0x14069F720 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406B46A8 (AuthzBasepQueryClaimAttributesToken.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  unsigned int v6; // eax
  int v7; // ebx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  int v10; // edi
  __int64 v11; // rax
  _DWORD *v12; // r12
  struct _KTHREAD *v13; // rcx
  unsigned int v14; // r15d
  bool v15; // bl
  unsigned int i; // edi
  BOOLEAN IsElevatedRid; // al
  unsigned int v18; // eax
  struct _KTHREAD *v19; // rax
  UCHAR v20; // cl
  ULONG v21; // edi
  _DWORD *v22; // rax
  int v23; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v25; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v27; // rdi
  char *v28; // rax
  char *v29; // rbx
  struct _KTHREAD *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  struct _KTHREAD *v33; // rax
  char *v34; // rdi
  unsigned int v35; // r15d
  char *v36; // rax
  struct _KTHREAD *v37; // rax
  unsigned int v38; // ecx
  ULONG v39; // edi
  ULONG v40; // eax
  __int64 *v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rax
  char *v44; // rax
  ULONG v45; // ecx
  _SID_AND_ATTRIBUTES *v46; // rdx
  BOOL v47; // ebx
  struct _KTHREAD *v48; // rax
  unsigned int v49; // edi
  char *v50; // rax
  _DWORD *v51; // rax
  struct _KTHREAD *v52; // rax
  unsigned int v53; // ecx
  ULONG v54; // eax
  __int64 v55; // r8
  __int64 *v56; // rdx
  __int64 v57; // rax
  char *v58; // rax
  struct _KTHREAD *v59; // rax
  unsigned int v60; // eax
  unsigned int v61; // r15d
  char *v62; // rax
  struct _KTHREAD *v63; // rax
  int v64; // eax
  unsigned int v65; // ecx
  int v66; // r9d
  unsigned int v67; // r12d
  __int64 *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rax
  unsigned int v71; // eax
  unsigned int v72; // r13d
  unsigned int v73; // r15d
  __int64 *v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rax
  char *v77; // rax
  char *v78; // rbx
  char *v79; // rcx
  char *v80; // rdi
  char *v81; // rax
  __int64 v82; // rcx
  ULONG v83; // r12d
  struct _KTHREAD *v84; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v86; // rax
  struct _KTHREAD *v87; // rax
  unsigned int v88; // edi
  char *v89; // rax
  struct _KTHREAD *v90; // rax
  __int64 v91; // rax
  SIZE_T v92; // r15
  char *v93; // rax
  void *v94; // rcx
  _OWORD *v95; // rax
  _DWORD *v96; // rax
  struct _KTHREAD *v97; // rax
  __int64 v98; // r12
  __int64 *v99; // rax
  __int64 *v100; // r12
  unsigned int v101; // r15d
  PVOID v102; // rax
  void *v103; // rbx
  NTSTATUS v104; // edi
  struct _KTHREAD *v105; // rax
  unsigned int *v106; // rax
  unsigned int v107; // edi
  ULONG v108; // r15d
  ULONG v109; // ecx
  __int64 *v110; // rdx
  __int64 v111; // r8
  __int64 v112; // rax
  struct _KTHREAD *v113; // rax
  unsigned int v114; // r15d
  char *v115; // rax
  char *v116; // rdi
  struct _KTHREAD *v117; // rax
  __int64 v118; // rax
  SIZE_T v119; // r15
  char *SidArea; // [rsp+20h] [rbp-A9h]
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  int v122; // [rsp+88h] [rbp-41h] BYREF
  int v123; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v124; // [rsp+90h] [rbp-39h] BYREF
  int v125; // [rsp+94h] [rbp-35h] BYREF
  int v126; // [rsp+98h] [rbp-31h] BYREF
  int v127; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v128; // [rsp+A0h] [rbp-29h] BYREF
  int v129; // [rsp+A4h] [rbp-25h] BYREF
  __int64 v130; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v131; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v132; // [rsp+B8h] [rbp-11h]
  __int64 v133; // [rsp+C0h] [rbp-9h]
  __int64 v134; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v135; // [rsp+D0h] [rbp+7h]
  PSID Sid; // [rsp+D8h] [rbp+Fh]
  int v137; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  int v139; // [rsp+148h] [rbp+7Fh] BYREF

  v130 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
LABEL_2:
    v6 = *((_DWORD *)Token + 50);
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      if ( (v6 & 0x200) != 0 )
      {
        v7 = 1;
        goto LABEL_6;
      }
LABEL_5:
      v7 = 0;
LABEL_6:
      *(_DWORD *)TokenInformation = v7;
      return 0;
    }
    if ( TokenInformationClass == TokenVirtualizationEnabled )
    {
      if ( (v6 & 0x400) != 0 )
      {
        v7 = 1;
        goto LABEL_6;
      }
      goto LABEL_5;
    }
    if ( TokenInformationClass == TokenUIAccess )
    {
      *(_DWORD *)TokenInformation = (v6 >> 12) & 1;
    }
    else
    {
      if ( TokenInformationClass == TokenIsAppContainer )
      {
        v18 = v6 >> 14;
      }
      else
      {
        if ( TokenInformationClass == TokenHasRestrictions )
        {
          *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
          return 0;
        }
        v18 = HIWORD(v6);
      }
      *(_DWORD *)TokenInformation = v18 & 1;
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
        v25 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v25, 0x20206553u);
        v27 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_68;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v25,
          PoolWithTag,
          &PoolWithTag[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        result = 0;
        *TokenInformation = v27;
        return result;
      case TokenGroups:
        v52 = KeGetCurrentThread();
        --v52->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v53 = *((_DWORD *)Token + 31);
        v39 = 16 * v53 - 8;
        v54 = v39;
        if ( v53 > 1 )
        {
          v55 = v53 - 1;
          v56 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v57 = *v56;
            v56 += 2;
            v39 += 4 * *(unsigned __int8 *)(v57 + 1) + 8;
            v54 = v39;
            --v55;
          }
          while ( v55 );
        }
        v58 = (char *)ExAllocatePoolWithTag(PagedPool, v54, 0x20206553u);
        v29 = v58;
        if ( !v58 )
          goto LABEL_68;
        *(_DWORD *)v58 = *((_DWORD *)Token + 31) - 1;
        v46 = (_SID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 19) + 16LL);
        v45 = *((_DWORD *)Token + 31) - 1;
        SidArea = &v58[16 * *((_DWORD *)Token + 31) - 32 + 24];
        goto LABEL_51;
      case TokenPrivileges:
        v59 = KeGetCurrentThread();
        --v59->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v60 = SepTokenPrivilegeCount((__int64)Token);
        if ( v60 <= 1 )
          v61 = 16;
        else
          v61 = 12 * v60 + 4;
        v62 = (char *)ExAllocatePoolWithTag(PagedPool, v61, 0x20206553u);
        v29 = v62;
        if ( !v62 )
          goto LABEL_68;
        SepConvertTokenPrivileges((__int64)Token, v62);
        goto LABEL_35;
      case TokenOwner:
        v87 = KeGetCurrentThread();
        --v87->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v88 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v89 = (char *)ExAllocatePoolWithTag(PagedPool, v88, 0x20206553u);
        v29 = v89;
        if ( !v89 )
          goto LABEL_68;
        *(_QWORD *)v89 = v89 + 8;
        RtlCopySid(v88 - 8, v89 + 8, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_35;
      case TokenPrimaryGroup:
        v48 = KeGetCurrentThread();
        --v48->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v49 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v50 = (char *)ExAllocatePoolWithTag(PagedPool, v49, 0x20206553u);
        v29 = v50;
        if ( !v50 )
          goto LABEL_68;
        *(_QWORD *)v50 = v50 + 8;
        RtlCopySid(v49 - 8, v50 + 8, *((PSID *)Token + 21));
        goto LABEL_35;
      case TokenDefaultDacl:
        v90 = KeGetCurrentThread();
        --v90->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v91 = *((_QWORD *)Token + 23);
        v92 = 8LL;
        if ( v91 )
          v92 = *(unsigned __int16 *)(v91 + 2) + 8LL;
        v93 = (char *)ExAllocatePoolWithTag(PagedPool, v92, 0x20206553u);
        v29 = v93;
        if ( !v93 )
          goto LABEL_68;
        v94 = v93 + 8;
        if ( !*((_QWORD *)Token + 23) )
          goto LABEL_139;
        *(_QWORD *)v93 = v94;
        memmove(v94, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        goto LABEL_35;
      case TokenSource:
        v95 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
        if ( !v95 )
          return -1073741670;
        *v95 = *(_OWORD *)Token;
        *TokenInformation = v95;
        return 0;
      case TokenType:
        v96 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v96 )
          return -1073741670;
        *v96 = *((_DWORD *)Token + 48);
        *TokenInformation = v96;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v51 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v51 )
          return -1073741670;
        *v51 = *((_DWORD *)Token + 49);
        *TokenInformation = v51;
        return 0;
      case TokenStatistics:
        v28 = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v29 = v28;
        if ( !v28 )
          return -1073741670;
        *(_QWORD *)v28 = *((_QWORD *)Token + 2);
        *((_QWORD *)v28 + 1) = *((_QWORD *)Token + 3);
        *((_DWORD *)v28 + 6) = *((_DWORD *)Token + 48);
        *((_DWORD *)v28 + 7) = *((_DWORD *)Token + 49);
        *((_QWORD *)v28 + 2) = *((_QWORD *)Token + 5);
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        *((_DWORD *)v29 + 8) = *((_DWORD *)Token + 34);
        v31 = *((_QWORD *)Token + 23);
        v32 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v31 )
          v32 -= *(unsigned __int16 *)(v31 + 2);
        *((_DWORD *)v29 + 9) = v32;
        *((_DWORD *)v29 + 9) = *((_DWORD *)Token + 35);
        *((_DWORD *)v29 + 10) = *((_DWORD *)Token + 31) - 1;
        *((_DWORD *)v29 + 11) = SepTokenPrivilegeCount((__int64)Token);
        *((_QWORD *)v29 + 6) = *((_QWORD *)Token + 7);
        goto LABEL_35;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v64 = SepTokenPrivilegeCount((__int64)Token);
        v65 = *((_DWORD *)Token + 31);
        v137 = v64;
        v66 = 12 * v64;
        v67 = 16 * v65;
        LODWORD(NumberOfBytes) = 12 * v64;
        v139 = 16 * v65;
        if ( v65 )
        {
          v68 = (__int64 *)*((_QWORD *)Token + 19);
          v69 = v65;
          do
          {
            v70 = *v68;
            v68 += 2;
            v67 += (4 * *(unsigned __int8 *)(v70 + 1) + 15) & 0xFFFFFFF8;
            --v69;
          }
          while ( v69 );
        }
        v71 = *((_DWORD *)Token + 32);
        v72 = 16 * v71;
        v73 = 16 * v71;
        if ( v71 )
        {
          v74 = (__int64 *)*((_QWORD *)Token + 20);
          v75 = v71;
          do
          {
            v76 = *v74;
            v74 += 2;
            v73 += (4 * *(unsigned __int8 *)(v76 + 1) + 15) & 0xFFFFFFF8;
            --v75;
          }
          while ( v75 );
        }
        v77 = (char *)ExAllocatePoolWithTag(PagedPool, v73 + v67 + v66 + 56, 0x20206553u);
        v78 = v77;
        if ( v77 )
        {
          v79 = v77 + 56;
          *((_QWORD *)v77 + 6) = *((_QWORD *)Token + 3);
          *((_DWORD *)v77 + 1) = v67;
          *(_DWORD *)v77 = *((_DWORD *)Token + 31);
          *((_QWORD *)v77 + 1) = v77 + 56;
          *((_DWORD *)v77 + 5) = v73;
          *((_DWORD *)v77 + 4) = *((_DWORD *)Token + 32);
          if ( *((_DWORD *)Token + 32) )
            v80 = &v79[(v67 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
          else
            v80 = 0LL;
          *((_QWORD *)v77 + 3) = v80;
          *((_DWORD *)v77 + 9) = NumberOfBytes;
          *((_DWORD *)v77 + 8) = v137;
          v81 = &v79[v67 + (unsigned __int64)v73];
          v82 = (unsigned int)v139;
          v83 = v67 - v139;
          *((_QWORD *)v78 + 5) = v81;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 31),
            *((PSID_AND_ATTRIBUTES *)Token + 19),
            v83,
            (PSID_AND_ATTRIBUTES)(v78 + 56),
            &v78[v82 + 56],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( *((_DWORD *)v78 + 4) )
            RtlCopySidAndAttributesArray(
              *((_DWORD *)Token + 32),
              *((PSID_AND_ATTRIBUTES *)Token + 20),
              v73 - v72,
              *((PSID_AND_ATTRIBUTES *)v78 + 3),
              (PSID)(*((_QWORD *)v78 + 3) + v72),
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v78 + 5));
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          result = 0;
          *TokenInformation = v78;
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
        v84 = KeGetCurrentThread();
        --v84->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)Token,
                                             0,
                                             0LL,
                                             &v129,
                                             &v128,
                                             &v127,
                                             &v126,
                                             &v125,
                                             (unsigned int *)&v124,
                                             &v123,
                                             &v122,
                                             (unsigned int *)&v139,
                                             &v137);
        v86 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v29 = v86;
        if ( !v86 )
          goto LABEL_68;
        SepCopyTokenAccessInformation(
          (__int64)Token,
          (__int64)v86,
          TokenAccessInformationBufferSize,
          v129,
          v128,
          v127,
          v126,
          v125,
          v124,
          v123,
          v122,
          v139,
          v137,
          0,
          0LL);
        goto LABEL_35;
      case TokenIntegrityLevel:
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity();
        v20 = *RtlSubAuthorityCountSid(Sid);
        if ( v20 )
          v21 = *RtlSubAuthoritySid(Sid, (unsigned int)v20 - 1);
        else
          v21 = 0;
        *(_DWORD *)TokenInformation = v21;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v38 = *((_DWORD *)Token + 200);
        v39 = 16 * v38 + 24;
        v40 = v39;
        if ( v38 )
        {
          v41 = (__int64 *)*((_QWORD *)Token + 99);
          v42 = v38;
          do
          {
            v43 = *v41;
            v41 += 2;
            v39 += 4 * *(unsigned __int8 *)(v43 + 1) + 8;
            v40 = v39;
            --v42;
          }
          while ( v42 );
        }
        v44 = (char *)ExAllocatePoolWithTag(PagedPool, v40, 0x20206553u);
        v29 = v44;
        if ( !v44 )
          goto LABEL_68;
        *(_DWORD *)v44 = *((_DWORD *)Token + 200);
        v45 = *((_DWORD *)Token + 200);
        SidArea = &v44[16 * v45 + 24];
        v46 = (_SID_AND_ATTRIBUTES *)*((_QWORD *)Token + 99);
LABEL_51:
        RtlCopySidAndAttributesArray(
          v45,
          v46,
          v39,
          (PSID_AND_ATTRIBUTES)(v29 + 8),
          SidArea,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_35;
      case TokenAppContainerSid:
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v34 = (char *)*((_QWORD *)Token + 98);
        if ( v34 )
          v35 = 4 * (unsigned __int8)v34[1] + 16;
        else
          v35 = 8;
        v36 = (char *)ExAllocatePoolWithTag(PagedPool, v35, 0x20206553u);
        v29 = v36;
        if ( !v36 )
          goto LABEL_68;
        if ( v34 )
        {
          v34 = v36 + 8;
          RtlCopySid(v35 - 8, v36 + 8, *((PSID *)Token + 98));
        }
        goto LABEL_41;
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
        v97 = KeGetCurrentThread();
        --v97->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v98 = *((_QWORD *)Token + 137);
        if ( v98
          && ((v99 = *(__int64 **)(v98 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v100 = *(__int64 **)(v98 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v100 = v99;
          AuthzBasepQueryClaimAttributesToken(v100, 0LL, 0LL, &NumberOfBytes);
          v101 = NumberOfBytes;
        }
        else
        {
          LODWORD(v130) = 0;
          v132 = &v131;
          v100 = &v130;
          LODWORD(v133) = 0;
          v131 = (__int64)&v131;
          v101 = 16;
          v135 = &v134;
          v134 = (__int64)&v134;
        }
        v102 = ExAllocatePoolWithTag(PagedPool, v101, 0x20206553u);
        v103 = v102;
        if ( !v102 )
          goto LABEL_68;
        v104 = AuthzBasepQueryClaimAttributesToken(v100, v102, v101, &NumberOfBytes);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        if ( v104 >= 0 )
          *TokenInformation = v103;
        else
          ExFreePoolWithTag(v103, 0);
        return v104;
      case TokenDeviceGroups:
        v105 = KeGetCurrentThread();
        --v105->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v106 = (unsigned int *)*((_QWORD *)Token + 137);
        if ( v106 && (v107 = *v106) != 0 )
        {
          v108 = 16 * v107 + 8;
        }
        else
        {
          v107 = 0;
          v108 = 24;
        }
        v109 = v108;
        if ( v107 )
        {
          v110 = (__int64 *)*((_QWORD *)v106 + 1);
          v111 = v107;
          do
          {
            v112 = *v110;
            v110 += 2;
            v108 += 4 * *(unsigned __int8 *)(v112 + 1) + 8;
            v109 = v108;
            --v111;
          }
          while ( v111 );
        }
        v29 = (char *)ExAllocatePoolWithTag(PagedPool, v109, 0x20206553u);
        if ( !v29 )
          goto LABEL_68;
        *(_QWORD *)v29 = 0LL;
        *((_QWORD *)v29 + 1) = 0LL;
        *((_QWORD *)v29 + 2) = 0LL;
        *(_DWORD *)v29 = v107;
        if ( v107 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v108,
            (PSID_AND_ATTRIBUTES)(v29 + 8),
            &v29[16 * v107 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_35;
      case TokenProcessTrustLevel:
        v113 = KeGetCurrentThread();
        --v113->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v34 = (char *)*((_QWORD *)Token + 138);
        if ( v34 )
          v114 = 4 * (unsigned __int8)v34[1] + 16;
        else
          v114 = 8;
        v115 = (char *)ExAllocatePoolWithTag(PagedPool, v114, 0x20206553u);
        v29 = v115;
        if ( !v115 )
          goto LABEL_68;
        if ( v34 )
        {
          v116 = v115 + 8;
          RtlCopySid(v114 - 8, v115 + 8, *((PSID *)Token + 138));
          *(_QWORD *)v29 = v116;
        }
        else
        {
LABEL_41:
          *(_QWORD *)v29 = v34;
        }
        goto LABEL_35;
      case TokenBnoIsolation:
        v117 = KeGetCurrentThread();
        --v117->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v118 = *((_QWORD *)Token + 144);
        v119 = 16LL;
        if ( v118 )
          v119 = *(unsigned __int16 *)(v118 + 42) + 16LL;
        v93 = (char *)ExAllocatePoolWithTag(PagedPool, v119, 0x20206553u);
        v29 = v93;
        if ( !v93 )
        {
LABEL_68:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( *((_QWORD *)Token + 144) )
        {
          v93[8] = 1;
          *(_QWORD *)v93 = v93 + 16;
          memmove(
            v93 + 16,
            *(const void **)(*((_QWORD *)Token + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
        }
        else
        {
          v93[8] = 0;
LABEL_139:
          *(_QWORD *)v93 = 0LL;
        }
LABEL_35:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v29;
        break;
      case TokenIsLessPrivilegedAppContainer:
        v47 = (*((_DWORD *)Token + 50) & 0x4000) != 0 && !SepCanTokenMatchAllPackageSid((__int64)Token);
        *(_DWORD *)TokenInformation = v47;
        return 0;
      default:
        return -1073741821;
    }
  }
  return 0;
}
