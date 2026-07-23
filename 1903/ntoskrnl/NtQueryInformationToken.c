/*
 * XREFs of NtQueryInformationToken @ 0x1405ECF30
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x14030C5F0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     SepReferenceTokenByHandle @ 0x140036780 (SepReferenceTokenByHandle.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeEnterCriticalRegion @ 0x140043920 (KeEnterCriticalRegion.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400796D4 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertTokenPrivileges @ 0x140087780 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400877A0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x1400878C0 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x140087A38 (SeQueryMandatoryPolicyToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140092040 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400920E0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepCopyTokenIntegrity @ 0x1400AE2E8 (SepCopyTokenIntegrity.c)
 *     SeIsSModeAdminlessEnabled @ 0x1400AF810 (SeIsSModeAdminlessEnabled.c)
 *     RtlIsSandboxedTokenHandle @ 0x14013BDA4 (RtlIsSandboxedTokenHandle.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     Feature_PPLEnforcement__private_IsEnabledPreCheck @ 0x14031C7CC (Feature_PPLEnforcement__private_IsEnabledPreCheck.c)
 *     SepGetStackTraceHash @ 0x14031CD0C (SepGetStackTraceHash.c)
 *     RtlIsElevatedRid @ 0x1405D7E90 (RtlIsElevatedRid.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     SepCopyTokenAccessInformation @ 0x14061AD0C (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x14061AFF0 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14061B0B8 (SepGetTokenAccessInformationBufferSize.c)
 *     SepReferenceLogonSessionSilo @ 0x14061B754 (SepReferenceLogonSessionSilo.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     SeQuerySessionIdToken @ 0x1406C5180 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406D1FBC (AuthzBasepQueryClaimAttributesToken.c)
 *     EtwTraceAdminlessAccessFailure @ 0x1408FD7E8 (EtwTraceAdminlessAccessFailure.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r12
  PULONG v11; // rbx
  __int64 v12; // rax
  NTSTATUS result; // eax
  _DWORD *v14; // rcx
  PVOID v15; // rdx
  ULONG v16; // r8d
  PVOID v17; // rcx
  struct _ERESOURCE *v18; // rcx
  ULONG v19; // r13d
  unsigned int *v20; // r8
  __int64 v21; // rcx
  char *v22; // rdx
  _QWORD *v23; // rdx
  int v24; // r8d
  __int64 v25; // rax
  unsigned __int8 *Sid; // rcx
  ULONG v27; // eax
  ULONG v28; // ecx
  struct _ERESOURCE *v29; // rcx
  PVOID v30; // r15
  __int64 v31; // rax
  ULONG v32; // ecx
  PVOID v33; // rcx
  ULONG v34; // r13d
  unsigned __int8 v35; // r9
  PSID v36; // r10
  unsigned __int8 *v37; // rcx
  char *v38; // rdx
  __int64 v39; // rax
  ULONG v40; // r15d
  _QWORD *v41; // r12
  NTSTATUS inserted; // ebx
  unsigned int v43; // eax
  ULONG v44; // ecx
  int v45; // eax
  char *v46; // rcx
  PVOID v47; // rdx
  unsigned __int8 IsElevatedRid; // bl
  PVOID v49; // r10
  ULONG v50; // r8d
  _DWORD *v51; // rax
  ULONG v52; // r15d
  ULONG *v53; // rax
  ULONG v54; // r11d
  ULONG v55; // r8d
  unsigned int v56; // r13d
  int v57; // r11d
  unsigned int v58; // r12d
  unsigned int v59; // r8d
  unsigned int i; // edx
  unsigned int v61; // r15d
  unsigned int v62; // edx
  unsigned int v63; // r9d
  unsigned int j; // ecx
  ULONG v65; // ecx
  _SID_AND_ATTRIBUTES *v66; // r9
  _SID_AND_ATTRIBUTES *v67; // rdi
  __int64 v68; // rbx
  ULONG v69; // r15d
  PVOID v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // r15d
  ULONG v73; // r8d
  ULONG v74; // r8d
  ULONG TokenAccessInformationBufferSize; // eax
  int v76; // ebx
  NTSTATUS v77; // r14d
  unsigned int v78; // edx
  PVOID v79; // r9
  unsigned int v80; // r10d
  __int64 v81; // r11
  __int64 v82; // r8
  ULONG v83; // eax
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // r9
  PSID SidArea; // [rsp+20h] [rbp-188h]
  char v88[8]; // [rsp+80h] [rbp-128h] BYREF
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  int v90; // [rsp+90h] [rbp-118h] BYREF
  PSID SourceSid; // [rsp+98h] [rbp-110h] BYREF
  PSID RemainingSidArea; // [rsp+A0h] [rbp-108h] BYREF
  unsigned int v93; // [rsp+A8h] [rbp-100h] BYREF
  unsigned int v94; // [rsp+ACh] [rbp-FCh] BYREF
  unsigned int v95; // [rsp+B0h] [rbp-F8h] BYREF
  NTSTATUS v96; // [rsp+B4h] [rbp-F4h]
  int v97; // [rsp+B8h] [rbp-F0h]
  ULONG SessionId; // [rsp+BCh] [rbp-ECh] BYREF
  int v99; // [rsp+C0h] [rbp-E8h] BYREF
  int v100; // [rsp+C4h] [rbp-E4h] BYREF
  int v101; // [rsp+C8h] [rbp-E0h] BYREF
  int v102; // [rsp+CCh] [rbp-DCh] BYREF
  int v103; // [rsp+D0h] [rbp-D8h] BYREF
  int v104; // [rsp+D4h] [rbp-D4h] BYREF
  int v105; // [rsp+D8h] [rbp-D0h] BYREF
  ULONG v106; // [rsp+DCh] [rbp-CCh] BYREF
  _QWORD *v107; // [rsp+E0h] [rbp-C8h] BYREF
  PVOID v108; // [rsp+E8h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp-B8h] BYREF
  _SID_AND_ATTRIBUTES Src; // [rsp+F8h] [rbp-B0h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+108h] [rbp-A0h]
  _QWORD v112[6]; // [rsp+110h] [rbp-98h] BYREF
  _OWORD v113[3]; // [rsp+140h] [rbp-68h] BYREF
  __int64 v114; // [rsp+170h] [rbp-38h]
  __int64 v115; // [rsp+178h] [rbp-30h]

  v9 = 0LL;
  Dest = 0LL;
  v94 = 0;
  Src.Sid = 0LL;
  *(_QWORD *)&Src.Attributes = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  memset(v112, 0, sizeof(v112));
  v88[0] = 0;
  SourceSid = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(TokenInformation, TokenInformationLength, 4u);
    v11 = ReturnLength;
    v12 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  else
  {
    v11 = ReturnLength;
  }
  if ( TokenInformationClass != TokenUser )
  {
    switch ( TokenInformationClass )
    {
      case TokenGroups:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v72 = 1;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v15 = Object;
        v73 = 16 * *((_DWORD *)Object + 31) - 8;
        v90 = v73;
        if ( *((_DWORD *)Object + 31) > 1u )
        {
          do
          {
            v73 += 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 19) + 16LL * v72) + 1LL) + 8;
            v90 = v73;
            ++v72;
          }
          while ( v72 < *((_DWORD *)Object + 31) );
        }
        *v11 = v73;
        if ( TokenInformationLength < v73 )
          goto LABEL_85;
        *(_DWORD *)TokenInformation = *((_DWORD *)v15 + 31) - 1;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)v15 + 31) - 1,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)v15 + 19) + 16LL),
          v73,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v15 + 31) - 32) + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_13;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v43 = SepTokenPrivilegeCount((__int64)Object);
        v94 = v43;
        if ( v43 > 1 )
          LODWORD(v9) = 12 * (v43 - 1);
        v90 = v9 + 16;
        *v11 = v9 + 16;
        if ( TokenInformationLength < (int)v9 + 16 )
          goto LABEL_51;
        SepConvertTokenPrivileges((__int64)Object, TokenInformation);
        goto LABEL_13;
      case TokenOwner:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v20 = (unsigned int *)Object;
        v90 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 19) + 16LL * *((unsigned int *)Object + 36)) + 1LL)
            + 16;
        v44 = v90;
        *v11 = v90;
        if ( TokenInformationLength < v44 )
          goto LABEL_45;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
        RtlCopySid(v44 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v20 + 19) + 16LL * v20[36]));
        goto LABEL_13;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v20 = (unsigned int *)Object;
        v90 = 4 * *(unsigned __int8 *)(*((_QWORD *)Object + 21) + 1LL) + 16;
        v28 = v90;
        *v11 = v90;
        if ( TokenInformationLength < v28 )
          goto LABEL_45;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
        RtlCopySid(v28 - 8, (char *)TokenInformation + 8, *((PSID *)v20 + 21));
        goto LABEL_13;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 8;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v30 = Object;
        v31 = *((_QWORD *)Object + 23);
        v32 = v90;
        if ( v31 )
        {
          v32 = *(unsigned __int16 *)(v31 + 2) + v90;
          v90 = v32;
        }
        *v11 = v32;
        if ( TokenInformationLength < v32 )
        {
          v29 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
          goto LABEL_53;
        }
        v46 = (char *)TokenInformation + 8;
        if ( *((_QWORD *)v30 + 23) )
        {
          *(_QWORD *)TokenInformation = v46;
          memmove(v46, *((const void **)v30 + 23), *(unsigned __int16 *)(*((_QWORD *)v30 + 23) + 2LL));
        }
        else
        {
          *(_QWORD *)TokenInformation = 0LL;
        }
        v18 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
        goto LABEL_15;
      case TokenSource:
        result = SepReferenceTokenByHandle(TokenHandle, 0x10u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 16;
        *v11 = 16;
        if ( TokenInformationLength < 0x10 )
          goto LABEL_54;
        v14 = Object;
        *(_OWORD *)TokenInformation = *(_OWORD *)Object;
        goto LABEL_17;
      case TokenType:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_54;
        v14 = Object;
        *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
        goto LABEL_17;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v14 = Object;
        if ( *((_DWORD *)Object + 48) != 2 )
        {
          ObfDereferenceObject(Object);
          return -1073741821;
        }
        v90 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_55;
        *(_DWORD *)TokenInformation = v14[49];
        goto LABEL_17;
      case TokenStatistics:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 56;
        *v11 = 56;
        if ( TokenInformationLength < 0x38 )
          goto LABEL_54;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v23 = Object;
        *(_QWORD *)TokenInformation = *((_QWORD *)Object + 2);
        *((_QWORD *)TokenInformation + 1) = v23[3];
        *((_QWORD *)TokenInformation + 2) = v23[5];
        *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v23 + 48);
        *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v23 + 49);
        *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v23 + 34);
        v24 = *((_DWORD *)v23 + 34) - 4 * *(unsigned __int8 *)(v23[21] + 1LL) - 8;
        v97 = v24;
        v25 = v23[23];
        if ( v25 )
        {
          v24 -= *(unsigned __int16 *)(v25 + 2);
          v97 = v24;
        }
        *((_DWORD *)TokenInformation + 9) = v24;
        *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v23 + 31) - 1;
        *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v23);
        v17 = Object;
        *((_QWORD *)TokenInformation + 6) = *((_QWORD *)Object + 7);
        goto LABEL_14;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v49 = Object;
        v50 = 16 * *((_DWORD *)Object + 32) + 8;
        v90 = v50;
        if ( *((_DWORD *)Object + 32) )
        {
          do
          {
            v50 += 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 20) + 16LL * (unsigned int)v9) + 1LL) + 8;
            v90 = v50;
            LODWORD(v9) = v9 + 1;
          }
          while ( (unsigned int)v9 < *((_DWORD *)Object + 32) );
        }
        *v11 = v50;
        if ( TokenInformationLength < v50 )
          goto LABEL_121;
        *(_DWORD *)TokenInformation = *((_DWORD *)v49 + 32);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)v49 + 32),
          *((PSID_AND_ATTRIBUTES *)v49 + 20),
          v50,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v49 + 32)) + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_13;
      case TokenSessionId:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        *v11 = 4;
        v14 = Object;
        if ( TokenInformationLength < 4 )
          goto LABEL_55;
        SeQuerySessionIdToken(Object, &SessionId);
        *(_DWORD *)TokenInformation = SessionId;
        *v11 = 4;
        goto LABEL_16;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v56 = SepTokenPrivilegeCount((__int64)Object);
        v94 = v56;
        v57 = 12 * v56;
        v49 = Object;
        v58 = 16 * *((_DWORD *)Object + 31);
        v59 = v58;
        v95 = v58;
        for ( i = 0; i < *((_DWORD *)Object + 31); ++i )
        {
          v59 += (4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 19) + 16LL * i) + 1LL) + 15) & 0xFFFFFFF8;
          v95 = v59;
        }
        v61 = 16 * *((_DWORD *)Object + 32);
        v62 = v61;
        v93 = v61;
        v63 = 0;
        for ( j = v61; v63 < *((_DWORD *)Object + 32); ++v63 )
        {
          v62 += (4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 20) + 16LL * v63) + 1LL) + 15) & 0xFFFFFFF8;
          j = v62;
          v93 = v62;
        }
        v65 = v59 + v57 + j + 56;
        v90 = v65;
        *v11 = v65;
        if ( TokenInformationLength < v65 )
          goto LABEL_121;
        *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v49 + 3);
        *((_DWORD *)TokenInformation + 1) = v59;
        *(_DWORD *)TokenInformation = *((_DWORD *)v49 + 31);
        v66 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
        *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
        *((_DWORD *)TokenInformation + 5) = v62;
        *((_DWORD *)TokenInformation + 4) = *((_DWORD *)v49 + 32);
        if ( *((_DWORD *)v49 + 32) )
        {
          v67 = (_SID_AND_ATTRIBUTES *)((char *)v66 + ((v59 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
          *((_QWORD *)TokenInformation + 3) = v67;
        }
        else
        {
          *((_QWORD *)TokenInformation + 3) = 0LL;
          v67 = Dest;
        }
        *((_DWORD *)TokenInformation + 9) = v57;
        *((_DWORD *)TokenInformation + 8) = v56;
        v68 = (__int64)v66 + v62 + v59;
        *((_QWORD *)TokenInformation + 5) = v68;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)v49 + 31),
          *((PSID_AND_ATTRIBUTES *)v49 + 19),
          v59 - v58,
          v66,
          &v66[v58 / 0x10],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        if ( v67 )
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Object + 32),
            *((PSID_AND_ATTRIBUTES *)Object + 20),
            v93 - v61,
            v67,
            &v67[v61 / 0x10],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        SepConvertTokenPrivilegesToLuidAndAttributes(Object, v68);
        goto LABEL_13;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          return -1073741789;
        v14 = Object;
        *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
        goto LABEL_17;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
          return -1073741727;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        *v11 = 30;
        if ( TokenInformationLength < 0x1E )
          goto LABEL_54;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v17 = Object;
        *(_OWORD *)TokenInformation = *(_OWORD *)((char *)Object + 88);
        *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v17 + 13);
        *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v17 + 28);
        *((_WORD *)TokenInformation + 14) = *((_WORD *)v17 + 58);
        goto LABEL_14;
      case TokenOrigin:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        *v11 = 8;
        if ( TokenInformationLength < 8 )
          goto LABEL_54;
        *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
        goto LABEL_16;
      case TokenElevationType:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_54;
        v45 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
        if ( (v45 & 4) != 0 )
        {
          if ( SeIsSModeAdminlessEnabled() )
            *(_DWORD *)TokenInformation = 1;
          else
            *(_DWORD *)TokenInformation = 3;
        }
        else
        {
          LOBYTE(v9) = (v45 & 2) != 0;
          *(_DWORD *)TokenInformation = v9 + 1;
        }
        goto LABEL_16;
      case TokenLinkedToken:
        v108 = 0LL;
        memset(v113, 0, sizeof(v113));
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        *v11 = 8;
        if ( TokenInformationLength != 8 )
        {
          ObfDereferenceObject(Object);
          return -1073741820;
        }
        v76 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
        if ( SeIsSModeAdminlessEnabled() )
        {
          SepGetStackTraceHash(&v106);
          EtwTraceAdminlessAccessFailure(v106, 1LL, 0LL);
          ObfDereferenceObject(Object);
          return -1073741729;
        }
        v77 = SepReferenceLogonSessionSilo(
                *((_QWORD *)Object + 27) + 16LL,
                *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                &v107);
        if ( v77 < 0 )
        {
          ObfDereferenceObject(Object);
          return v77;
        }
        LODWORD(v113[0]) = 48;
        *((_QWORD *)&v113[0] + 1) = 0LL;
        if ( PreviousMode )
          DWORD2(v113[1]) = 0;
        else
          DWORD2(v113[1]) = 512;
        *(_QWORD *)&v113[1] = 0LL;
        v113[2] = 0LL;
        inserted = SepDuplicateToken(v107[6], (int)v113, 0, v76 + 2, 1u, 0, 0, (char **)&v108);
        SepDeReferenceLogonSessionDirect(v107);
        if ( inserted < 0 || (inserted = ObInsertObject(v108, 0LL, 0xF01FFu, 0, 0LL, &Handle), inserted < 0) )
        {
LABEL_76:
          ObfDereferenceObject(Object);
          return inserted;
        }
        *(_QWORD *)TokenInformation = Handle;
        goto LABEL_16;
      case TokenElevation:
        *v11 = 4;
        if ( TokenInformationLength != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v47 = Object;
        IsElevatedRid = (*((_QWORD *)Object + 8) & 0x1120160684LL) != 0;
        if ( *((_DWORD *)Object + 31) )
        {
          do
          {
            if ( IsElevatedRid )
              break;
            IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)v47 + 19) + 16LL * (unsigned int)v9));
            LODWORD(v9) = v9 + 1;
            v47 = Object;
          }
          while ( (unsigned int)v9 < *((_DWORD *)Object + 31) );
        }
        ExReleaseResourceLite(*((PERESOURCE *)v47 + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = IsElevatedRid;
        goto LABEL_16;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 1;
        *v11 = 1;
        if ( !TokenInformationLength )
          goto LABEL_54;
        v14 = Object;
        *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
        goto LABEL_17;
      case TokenAccessInformation:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)Object,
                                             (unsigned __int8)v88[0],
                                             (_DWORD)SourceSid,
                                             (unsigned int)&v94,
                                             (__int64)&v95,
                                             (__int64)&v105,
                                             (__int64)&v93,
                                             (__int64)&v104,
                                             (__int64)&v103,
                                             (__int64)&v102,
                                             (__int64)&v101,
                                             (__int64)&v100,
                                             (__int64)&v99);
        v90 = TokenAccessInformationBufferSize;
        *v11 = TokenAccessInformationBufferSize;
        if ( TokenInformationLength < TokenAccessInformationBufferSize )
          goto LABEL_51;
        SepCopyTokenAccessInformation(
          (_DWORD)Object,
          (_DWORD)TokenInformation,
          TokenInformationLength,
          v94,
          v95,
          v105,
          v93,
          v104,
          v103,
          v102,
          v101,
          v100,
          v99,
          v88[0],
          (__int64)SourceSid);
        goto LABEL_13;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_54;
        v14 = Object;
        switch ( TokenInformationClass )
        {
          case TokenVirtualizationAllowed:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 9) & 1;
            goto LABEL_140;
          case TokenVirtualizationEnabled:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 10) & 1;
            goto LABEL_140;
          case TokenUIAccess:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 12) & 1;
            goto LABEL_140;
        }
        if ( TokenInformationClass != TokenIsRestricted )
        {
          if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
            goto LABEL_140;
          goto LABEL_226;
        }
        v84 = *((_DWORD *)Object + 50);
        if ( (v84 & 0x10) != 0 || (v84 & 8) != 0 )
LABEL_226:
          LODWORD(v9) = 1;
LABEL_140:
        *(_DWORD *)TokenInformation = v9;
        break;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity((__int64)Object);
        Sid = (unsigned __int8 *)Src.Sid;
        v90 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        v27 = v90;
        *v11 = v90;
        if ( TokenInformationLength >= v27 )
        {
          RtlCopySidAndAttributesArray(
            1u,
            &Src,
            4 * Sid[1] + 8,
            (PSID_AND_ATTRIBUTES)TokenInformation,
            (char *)TokenInformation + 16,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_13;
        }
LABEL_51:
        v33 = Object;
LABEL_52:
        v29 = (struct _ERESOURCE *)*((_QWORD *)v33 + 6);
        goto LABEL_53;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_54;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        v96 = inserted;
        goto LABEL_76;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v78 = 0;
        v79 = Object;
        v80 = *((_DWORD *)Object + 31);
        if ( !v80 )
          goto LABEL_188;
        v81 = *((_QWORD *)Object + 19);
        while ( (*(_DWORD *)(v81 + 16LL * v78 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v78 >= v80 )
            goto LABEL_188;
        }
        v9 = *(_QWORD *)(v81 + 16LL * v78);
LABEL_188:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject(Object);
          return -1073741275;
        }
        v82 = 16LL * v78;
        v90 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v82 + *((_QWORD *)Object + 19)) + 1LL) + 32;
        v83 = v90;
        *v11 = v90;
        if ( TokenInformationLength < v83 )
        {
          v29 = (struct _ERESOURCE *)*((_QWORD *)v79 + 6);
          goto LABEL_53;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v82 + *((_QWORD *)v79 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v82 + *((_QWORD *)v79 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_13;
      case TokenIsAppContainer:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 4;
        *v11 = 4;
        v14 = Object;
        if ( TokenInformationLength < 4 )
          goto LABEL_55;
        LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x4000) != 0;
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_17;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v49 = Object;
        v74 = 16 * *((_DWORD *)Object + 200) + 8;
        v90 = v74;
        if ( *((_DWORD *)Object + 200) )
        {
          do
          {
            v74 += 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 99) + 16LL * (unsigned int)v9) + 1LL) + 8;
            v90 = v74;
            LODWORD(v9) = v9 + 1;
          }
          while ( (unsigned int)v9 < *((_DWORD *)Object + 200) );
        }
        *v11 = v74;
        if ( TokenInformationLength < v74 )
        {
LABEL_121:
          v29 = (struct _ERESOURCE *)*((_QWORD *)v49 + 6);
          goto LABEL_53;
        }
        *(_DWORD *)TokenInformation = *((_DWORD *)v49 + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)v49 + 200),
          *((PSID_AND_ATTRIBUTES *)v49 + 99),
          v74,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v49 + 200)) + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_13;
      case TokenAppContainerSid:
        v19 = 8;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v20 = (unsigned int *)Object;
        v21 = *((_QWORD *)Object + 98);
        if ( v21 )
          v19 = 4 * *(unsigned __int8 *)(v21 + 1) + 16;
        v90 = v19;
        *v11 = v19;
        if ( TokenInformationLength < v19 )
          goto LABEL_45;
        v22 = (char *)TokenInformation + 8;
        if ( !v21 )
          v22 = 0LL;
        *(_QWORD *)TokenInformation = v22;
        if ( v22 )
        {
          RtlCopySid(v19 - 8, v22, *((PSID *)v20 + 98));
          v20 = (unsigned int *)Object;
        }
        goto LABEL_34;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        v90 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_54;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v85 = *((_QWORD *)Object + 135);
        if ( v85 )
          LODWORD(v9) = *(_DWORD *)(v85 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_16;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v33 = Object;
        v39 = *((_QWORD *)Object + 137);
        if ( v39
          && (*(_QWORD *)(v39 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && ((v41 = *(_QWORD **)(v39 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v41 = *(_QWORD **)(v39 + 576);
          AuthzBasepQueryClaimAttributesToken(v41, 0LL, 0LL, &v90);
          v33 = Object;
          v40 = v90;
        }
        else
        {
          v40 = 16;
          v90 = 16;
          v112[2] = &v112[1];
          v112[1] = &v112[1];
          LODWORD(v112[3]) = 0;
          v112[5] = &v112[4];
          v112[4] = &v112[4];
          v41 = v112;
        }
        *v11 = v40;
        if ( TokenInformationLength < v40 )
          goto LABEL_52;
        inserted = AuthzBasepQueryClaimAttributesToken(v41, TokenInformation, TokenInformationLength, &v90);
        v96 = inserted;
        goto LABEL_75;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v15 = Object;
        v53 = (ULONG *)*((_QWORD *)Object + 137);
        if ( v53 && (v54 = *v53) != 0 )
        {
          v55 = 16 * v54 + 8;
        }
        else
        {
          v54 = 0;
          v55 = 24;
        }
        v90 = v55;
        if ( v54 )
        {
          v86 = v54;
          do
          {
            v55 += 4 * *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 137) + 8LL) + v9) + 1LL) + 8;
            v90 = v55;
            v9 += 16LL;
            --v86;
          }
          while ( v86 );
        }
        *v11 = v55;
        if ( TokenInformationLength < v55 )
          goto LABEL_85;
        *(_QWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 1) = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v54;
        if ( v54 )
        {
          RtlCopySidAndAttributesArray(
            v54,
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v15 + 137) + 8LL),
            v55,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v54 + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          v15 = Object;
        }
        v18 = (struct _ERESOURCE *)*((_QWORD *)v15 + 6);
        goto LABEL_15;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v33 = Object;
        v51 = (_DWORD *)*((_QWORD *)Object + 97);
        if ( v51 )
        {
          LODWORD(SidArea) = 0;
          AuthzBasepQuerySecurityAttributesToken(v51, 0LL, 0LL, 0LL, (size_t)SidArea, &v90);
          v33 = Object;
          v52 = v90;
        }
        else
        {
          v52 = 16;
          v90 = 16;
        }
        *v11 = v52;
        if ( TokenInformationLength < v52 )
          goto LABEL_52;
        LODWORD(SidArea) = TokenInformationLength;
        inserted = AuthzBasepQuerySecurityAttributesToken(
                     *((_DWORD **)v33 + 97),
                     0LL,
                     0LL,
                     TokenInformation,
                     (size_t)SidArea,
                     &v90);
        v96 = inserted;
        goto LABEL_75;
      case TokenProcessTrustLevel:
        v34 = 8;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v35 = v88[0];
        v36 = SourceSid;
        v20 = (unsigned int *)Object;
        if ( v88[0] )
          v37 = (unsigned __int8 *)SourceSid;
        else
          v37 = (unsigned __int8 *)*((_QWORD *)Object + 138);
        if ( v37 )
          v34 = 4 * v37[1] + 16;
        v90 = v34;
        *v11 = v34;
        if ( TokenInformationLength < v34 )
        {
LABEL_45:
          v29 = (struct _ERESOURCE *)*((_QWORD *)v20 + 6);
          goto LABEL_53;
        }
        v38 = (char *)TokenInformation + 8;
        if ( !v37 )
          v38 = 0LL;
        *(_QWORD *)TokenInformation = v38;
        if ( v38 )
        {
          if ( !v35 )
            v36 = (PSID)*((_QWORD *)v20 + 138);
          RtlCopySid(v34 - 8, v38, v36);
          v20 = (unsigned int *)Object;
        }
LABEL_34:
        v18 = (struct _ERESOURCE *)*((_QWORD *)v20 + 6);
        goto LABEL_15;
      case TokenSingletonAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        inserted = SepInternalQuerySecurityAttributesTokenEx(
                     (__int64)Object,
                     PreviousMode,
                     0LL,
                     0,
                     1,
                     (__int64)TokenInformation,
                     TokenInformationLength,
                     (__int64)v11);
        v96 = inserted;
LABEL_75:
        ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
        KeLeaveCriticalRegion();
        goto LABEL_76;
      case TokenBnoIsolation:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v69 = 16;
        v90 = 16;
        v70 = Object;
        v71 = *((_QWORD *)Object + 144);
        if ( v71 )
        {
          v69 = *(unsigned __int16 *)(v71 + 42) + 16;
          v90 = v69;
        }
        *v11 = v69;
        if ( TokenInformationLength < v69 )
        {
          v29 = (struct _ERESOURCE *)*((_QWORD *)v70 + 6);
          goto LABEL_53;
        }
        if ( *((_QWORD *)v70 + 144) )
        {
          *((_BYTE *)TokenInformation + 8) = 1;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
          memmove(
            (char *)TokenInformation + 16,
            *(const void **)(*((_QWORD *)v70 + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)v70 + 144) + 42LL));
          v70 = Object;
        }
        else
        {
          *((_BYTE *)TokenInformation + 8) = 0;
          *(_QWORD *)TokenInformation = 0LL;
        }
        v18 = (struct _ERESOURCE *)*((_QWORD *)v70 + 6);
        goto LABEL_15;
      case TokenIsSandboxed:
        v90 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          return -1073741789;
        *(_DWORD *)TokenInformation = (unsigned __int8)RtlIsSandboxedTokenHandle(TokenHandle);
        return 0;
      case TokenIsAppSilo:
        Feature_PPLEnforcement__private_IsEnabledPreCheck();
        return -1073741821;
      default:
        return -1073741821;
    }
    goto LABEL_17;
  }
  result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v88, &SourceSid);
  if ( result < 0 )
    return result;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v15 = Object;
  v90 = 4 * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 24;
  v16 = v90;
  *v11 = v90;
  if ( TokenInformationLength >= v16 )
  {
    RtlCopySidAndAttributesArray(
      1u,
      *((PSID_AND_ATTRIBUTES *)v15 + 19),
      v16,
      (PSID_AND_ATTRIBUTES)TokenInformation,
      (char *)TokenInformation + 16,
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
LABEL_13:
    v17 = Object;
LABEL_14:
    v18 = (struct _ERESOURCE *)*((_QWORD *)v17 + 6);
LABEL_15:
    ExReleaseResourceLite(v18);
    KeLeaveCriticalRegion();
LABEL_16:
    v14 = Object;
LABEL_17:
    ObfDereferenceObject(v14);
    return 0;
  }
LABEL_85:
  v29 = (struct _ERESOURCE *)*((_QWORD *)v15 + 6);
LABEL_53:
  ExReleaseResourceLite(v29);
  KeLeaveCriticalRegion();
LABEL_54:
  v14 = Object;
LABEL_55:
  ObfDereferenceObject(v14);
  return -1073741789;
}
