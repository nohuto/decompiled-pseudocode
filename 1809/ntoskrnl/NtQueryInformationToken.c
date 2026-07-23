/*
 * XREFs of NtQueryInformationToken @ 0x14062B780
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1402EDFC0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1400140A0 (SepDeReferenceLogonSessionDirect.c)
 *     SeQueryMandatoryPolicyToken @ 0x14001428C (SeQueryMandatoryPolicyToken.c)
 *     SepConvertTokenPrivileges @ 0x1400142A0 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400142C0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x140014440 (SepTokenPrivilegeCount.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x140091D60 (SepCopyTokenIntegrity.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6A08 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400A6AB0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepReferenceTokenByHandle @ 0x1400A8CC0 (SepReferenceTokenByHandle.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepReferenceLogonSessionSilo @ 0x1405BE728 (SepReferenceLogonSessionSilo.c)
 *     SepCopyTokenAccessInformation @ 0x1405C00C8 (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1405C04A0 (SepGetTokenAccessInformationBufferSize.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     RtlCopySidAndAttributesArray @ 0x14062DDC0 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     RtlIsElevatedRid @ 0x140656090 (RtlIsElevatedRid.c)
 *     SeQuerySessionIdToken @ 0x14069F720 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406B46A8 (AuthzBasepQueryClaimAttributesToken.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v9; // rbx
  unsigned __int8 v10; // r12
  PULONG v11; // rdi
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
  PVOID v30; // r14
  __int64 v31; // rax
  ULONG v32; // ecx
  PVOID v33; // rcx
  ULONG v34; // r13d
  char v35; // r9
  PSID v36; // r10
  unsigned __int8 *v37; // rcx
  char *v38; // rdx
  unsigned int v39; // eax
  ULONG v40; // ecx
  int v41; // edx
  PVOID v42; // rdx
  unsigned __int8 IsElevatedRid; // di
  __int64 v44; // rax
  ULONG v45; // r14d
  _QWORD *v46; // r12
  NTSTATUS inserted; // ebx
  char *v48; // rcx
  PVOID v49; // r10
  ULONG v50; // r8d
  _DWORD *v51; // rax
  ULONG v52; // r14d
  ULONG *v53; // rax
  ULONG v54; // r11d
  ULONG v55; // r8d
  int v56; // r13d
  int v57; // r11d
  unsigned int v58; // r12d
  unsigned int v59; // r8d
  unsigned int i; // edx
  unsigned int v61; // r14d
  unsigned int v62; // edx
  unsigned int v63; // r9d
  unsigned int j; // ecx
  ULONG v65; // ecx
  _SID_AND_ATTRIBUTES *v66; // r9
  _SID_AND_ATTRIBUTES *v67; // rdi
  __int64 v68; // rbx
  ULONG v69; // r14d
  PVOID v70; // r13
  __int64 v71; // rax
  unsigned int v72; // r14d
  ULONG v73; // r8d
  ULONG v74; // r8d
  ULONG TokenAccessInformationBufferSize; // eax
  int v76; // edi
  NTSTATUS v77; // r14d
  NTSTATUS v78; // edi
  unsigned int v79; // edx
  PVOID v80; // r9
  unsigned int v81; // r10d
  __int64 v82; // r11
  __int64 v83; // r8
  ULONG v84; // eax
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // r9
  PSID SidArea; // [rsp+20h] [rbp-178h]
  char v89[8]; // [rsp+80h] [rbp-118h] BYREF
  PVOID Object; // [rsp+88h] [rbp-110h] BYREF
  int v91; // [rsp+90h] [rbp-108h] BYREF
  PSID SourceSid; // [rsp+98h] [rbp-100h] BYREF
  PSID RemainingSidArea; // [rsp+A0h] [rbp-F8h] BYREF
  int v94; // [rsp+A8h] [rbp-F0h] BYREF
  int v95; // [rsp+ACh] [rbp-ECh] BYREF
  int v96; // [rsp+B0h] [rbp-E8h] BYREF
  NTSTATUS v97; // [rsp+B4h] [rbp-E4h]
  int v98; // [rsp+B8h] [rbp-E0h]
  int v99; // [rsp+BCh] [rbp-DCh] BYREF
  int v100; // [rsp+C0h] [rbp-D8h] BYREF
  int v101; // [rsp+C4h] [rbp-D4h] BYREF
  int v102; // [rsp+C8h] [rbp-D0h] BYREF
  int v103; // [rsp+CCh] [rbp-CCh] BYREF
  int v104; // [rsp+D0h] [rbp-C8h] BYREF
  int v105; // [rsp+D4h] [rbp-C4h] BYREF
  ULONG SessionId; // [rsp+D8h] [rbp-C0h] BYREF
  _QWORD *v107; // [rsp+E0h] [rbp-B8h] BYREF
  PVOID v108; // [rsp+E8h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp-A8h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+F8h] [rbp-A0h]
  _QWORD v111[6]; // [rsp+100h] [rbp-98h] BYREF
  _SID_AND_ATTRIBUTES Src; // [rsp+130h] [rbp-68h] BYREF
  int v113; // [rsp+140h] [rbp-58h] BYREF
  __int64 v114; // [rsp+148h] [rbp-50h]
  __int64 v115; // [rsp+150h] [rbp-48h]
  int v116; // [rsp+158h] [rbp-40h]
  __int128 v117; // [rsp+160h] [rbp-38h]

  v9 = 0LL;
  Dest = 0LL;
  v95 = 0;
  memset(v111, 0, sizeof(v111));
  v89[0] = 0;
  SourceSid = 0LL;
  v10 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v10 )
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
  if ( TokenInformationClass == TokenUser )
  {
    result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
    if ( result < 0 )
      return result;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v15 = Object;
    v91 = 4 * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 24;
    v16 = v91;
    *v11 = v91;
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
LABEL_14:
      v17 = Object;
LABEL_15:
      v18 = (struct _ERESOURCE *)*((_QWORD *)v17 + 6);
LABEL_16:
      ExReleaseResourceLite(v18);
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
LABEL_83:
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
  if ( TokenInformationClass != TokenSessionId )
  {
    switch ( TokenInformationClass )
    {
      case TokenGroups:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          v72 = 1;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v15 = Object;
          v73 = 16 * *((_DWORD *)Object + 31) - 8;
          v91 = v73;
          if ( *((_DWORD *)Object + 31) > 1u )
          {
            do
            {
              v73 += 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 19) + 16LL * v72) + 1LL) + 8;
              v91 = v73;
              ++v72;
            }
            while ( v72 < *((_DWORD *)Object + 31) );
          }
          *v11 = v73;
          if ( TokenInformationLength >= v73 )
          {
            *(_DWORD *)TokenInformation = *((_DWORD *)v15 + 31) - 1;
            RtlCopySidAndAttributesArray(
              *((_DWORD *)v15 + 31) - 1,
              (PSID_AND_ATTRIBUTES)(*((_QWORD *)v15 + 19) + 16LL),
              v73,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v15 + 31) - 32) + 24,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_14;
          }
          goto LABEL_83;
        }
        return result;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v39 = SepTokenPrivilegeCount((__int64)Object);
          v95 = v39;
          if ( v39 > 1 )
            LODWORD(v9) = 12 * (v39 - 1);
          v91 = v9 + 16;
          *v11 = v9 + 16;
          if ( TokenInformationLength >= (int)v9 + 16 )
          {
            SepConvertTokenPrivileges((__int64)Object, TokenInformation);
            goto LABEL_14;
          }
          goto LABEL_51;
        }
        return result;
      case TokenOwner:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v20 = (unsigned int *)Object;
          v91 = 4
              * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 19) + 16LL * *((unsigned int *)Object + 36)) + 1LL)
              + 16;
          v40 = v91;
          *v11 = v91;
          if ( TokenInformationLength < v40 )
            goto LABEL_45;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v40 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v20 + 19) + 16LL * v20[36]));
          goto LABEL_14;
        }
        return result;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v20 = (unsigned int *)Object;
          v91 = 4 * *(unsigned __int8 *)(*((_QWORD *)Object + 21) + 1LL) + 16;
          v28 = v91;
          *v11 = v91;
          if ( TokenInformationLength < v28 )
            goto LABEL_45;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v28 - 8, (char *)TokenInformation + 8, *((PSID *)v20 + 21));
          goto LABEL_14;
        }
        return result;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          v91 = 8;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v30 = Object;
          v31 = *((_QWORD *)Object + 23);
          v32 = v91;
          if ( v31 )
          {
            v32 = *(unsigned __int16 *)(v31 + 2) + v91;
            v91 = v32;
          }
          *v11 = v32;
          if ( TokenInformationLength < v32 )
          {
            v29 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
            goto LABEL_53;
          }
          v48 = (char *)TokenInformation + 8;
          if ( *((_QWORD *)v30 + 23) )
          {
            *(_QWORD *)TokenInformation = v48;
            memmove(v48, *((const void **)v30 + 23), *(unsigned __int16 *)(*((_QWORD *)v30 + 23) + 2LL));
          }
          else
          {
            *(_QWORD *)TokenInformation = 0LL;
          }
          v18 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
          goto LABEL_16;
        }
        return result;
      case TokenSource:
        result = SepReferenceTokenByHandle(TokenHandle, 0x10u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          v91 = 16;
          *v11 = 16;
          if ( TokenInformationLength < 0x10 )
            goto LABEL_54;
          v14 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_18;
        }
        return result;
      case TokenType:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          v91 = 4;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_54;
          v14 = Object;
          *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
          goto LABEL_18;
        }
        return result;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          v14 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObject(Object);
            return -1073741821;
          }
          v91 = 4;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_55;
          *(_DWORD *)TokenInformation = v14[49];
          goto LABEL_18;
        }
        return result;
      case TokenStatistics:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          v91 = 56;
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
          v98 = v24;
          v25 = v23[23];
          if ( v25 )
          {
            v24 -= *(unsigned __int16 *)(v25 + 2);
            v98 = v24;
          }
          *((_DWORD *)TokenInformation + 9) = v24;
          *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v23 + 31) - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v23);
          v17 = Object;
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)Object + 7);
          goto LABEL_15;
        }
        return result;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v49 = Object;
          v50 = 16 * *((_DWORD *)Object + 32) + 8;
          v91 = v50;
          if ( *((_DWORD *)Object + 32) )
          {
            do
            {
              v50 += 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 20) + 16LL * (unsigned int)v9) + 1LL) + 8;
              v91 = v50;
              LODWORD(v9) = v9 + 1;
            }
            while ( (unsigned int)v9 < *((_DWORD *)Object + 32) );
          }
          *v11 = v50;
          if ( TokenInformationLength >= v50 )
          {
            *(_DWORD *)TokenInformation = *((_DWORD *)v49 + 32);
            RtlCopySidAndAttributesArray(
              *((_DWORD *)v49 + 32),
              *((PSID_AND_ATTRIBUTES *)v49 + 20),
              v50,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v49 + 32)) + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_14;
          }
          goto LABEL_119;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v56 = SepTokenPrivilegeCount((__int64)Object);
          v95 = v56;
          v57 = 12 * v56;
          v49 = Object;
          v58 = 16 * *((_DWORD *)Object + 31);
          v59 = v58;
          v96 = v58;
          for ( i = 0; i < *((_DWORD *)Object + 31); ++i )
          {
            v59 += (4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 19) + 16LL * i) + 1LL) + 15) & 0xFFFFFFF8;
            v96 = v59;
          }
          v61 = 16 * *((_DWORD *)Object + 32);
          v62 = v61;
          v94 = v61;
          v63 = 0;
          for ( j = v61; v63 < *((_DWORD *)Object + 32); ++v63 )
          {
            v62 += (4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 20) + 16LL * v63) + 1LL) + 15) & 0xFFFFFFF8;
            j = v62;
            v94 = v62;
          }
          v65 = v59 + v57 + j + 56;
          v91 = v65;
          *v11 = v65;
          if ( TokenInformationLength >= v65 )
          {
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
                v94 - v61,
                v67,
                &v67[v61 / 0x10],
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
            SepConvertTokenPrivilegesToLuidAndAttributes(Object, v68);
            goto LABEL_14;
          }
          goto LABEL_119;
        }
        return result;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            return -1073741789;
          v14 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_18;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, v10) )
          return -1073741727;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          *v11 = 31;
          if ( TokenInformationLength < 0x1F )
            goto LABEL_54;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v17 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)((char *)Object + 88);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v17 + 13);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v17 + 28);
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v17 + 58);
          *((_BYTE *)TokenInformation + 30) = *((_BYTE *)v17 + 118);
          goto LABEL_15;
        }
        return result;
      case TokenOrigin:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          *v11 = 8;
          if ( TokenInformationLength < 8 )
            goto LABEL_54;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_17;
        }
        return result;
      case TokenElevationType:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          v91 = 4;
          *v11 = 4;
          if ( TokenInformationLength < 4 )
            goto LABEL_54;
          v14 = Object;
          v41 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v41 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else
          {
            LOBYTE(v9) = (v41 & 2) != 0;
            *(_DWORD *)TokenInformation = v9 + 1;
          }
          goto LABEL_18;
        }
        return result;
      case TokenLinkedToken:
        v108 = 0LL;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          *v11 = 8;
          if ( TokenInformationLength != 8 )
          {
            ObfDereferenceObject(Object);
            return -1073741820;
          }
          v76 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, v10) != 0);
          v77 = SepReferenceLogonSessionSilo(
                  (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                  *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                  (__int64 *)&v107);
          if ( v77 >= 0 )
          {
            v113 = 48;
            v114 = 0LL;
            if ( v10 )
              v116 = 0;
            else
              v116 = 512;
            v115 = 0LL;
            v117 = 0LL;
            v78 = SepDuplicateToken(v107[6], (unsigned int)&v113, 0, v76 + 2, 1, 0, 0, (__int64)&v108);
            SepDeReferenceLogonSessionDirect(v107);
            if ( v78 >= 0 )
            {
              inserted = ObInsertObject(v108, 0LL, 0xF01FFu, 0, 0LL, &Handle);
              if ( inserted < 0 )
                goto LABEL_97;
              *(_QWORD *)TokenInformation = Handle;
              goto LABEL_17;
            }
            ObfDereferenceObject(Object);
            return v78;
          }
          else
          {
            ObfDereferenceObject(Object);
            return v77;
          }
        }
        return result;
      case TokenElevation:
        *v11 = 4;
        if ( TokenInformationLength != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v42 = Object;
          IsElevatedRid = (*((_QWORD *)Object + 8) & 0x1120160684LL) != 0;
          if ( *((_DWORD *)Object + 31) )
          {
            do
            {
              if ( IsElevatedRid )
                break;
              IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)v42 + 19) + 16LL * (unsigned int)v9));
              LODWORD(v9) = v9 + 1;
              v42 = Object;
            }
            while ( (unsigned int)v9 < *((_DWORD *)Object + 31) );
          }
          ExReleaseResourceLite(*((PERESOURCE *)v42 + 6));
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = IsElevatedRid;
          goto LABEL_17;
        }
        return result;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          v91 = 1;
          *v11 = 1;
          if ( !TokenInformationLength )
            goto LABEL_54;
          v14 = Object;
          *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
          goto LABEL_18;
        }
        return result;
      case TokenAccessInformation:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                               (__int64)Object,
                                               v89[0],
                                               (__int64)SourceSid,
                                               &v95,
                                               &v96,
                                               &v105,
                                               &v94,
                                               &v104,
                                               (unsigned int *)&v103,
                                               &v102,
                                               &v101,
                                               (unsigned int *)&v100,
                                               &v99);
          v91 = TokenAccessInformationBufferSize;
          *v11 = TokenAccessInformationBufferSize;
          if ( TokenInformationLength < TokenAccessInformationBufferSize )
            goto LABEL_51;
          SepCopyTokenAccessInformation(
            (__int64)Object,
            (__int64)TokenInformation,
            TokenInformationLength,
            v95,
            v96,
            v105,
            v94,
            v104,
            v103,
            v102,
            v101,
            v100,
            v99,
            v89[0],
            (unsigned __int8 *)SourceSid);
          goto LABEL_14;
        }
        return result;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        v91 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_54;
        v14 = Object;
        if ( TokenInformationClass == TokenVirtualizationAllowed )
        {
          LODWORD(v9) = (*((_DWORD *)Object + 50) >> 9) & 1;
          goto LABEL_127;
        }
        if ( TokenInformationClass == TokenVirtualizationEnabled )
        {
          LODWORD(v9) = (*((_DWORD *)Object + 50) >> 10) & 1;
          goto LABEL_127;
        }
        if ( TokenInformationClass != TokenUIAccess )
        {
          if ( TokenInformationClass == TokenIsRestricted )
          {
            v85 = *((_DWORD *)Object + 50);
            if ( (v85 & 0x10) == 0 && (v85 & 8) == 0 )
              goto LABEL_127;
          }
          else if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
          {
LABEL_127:
            *(_DWORD *)TokenInformation = v9;
            goto LABEL_18;
          }
          LODWORD(v9) = 1;
          goto LABEL_127;
        }
        LODWORD(v9) = (*((_DWORD *)Object + 50) >> 12) & 1;
        goto LABEL_127;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity();
        Sid = (unsigned __int8 *)Src.Sid;
        v91 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        v27 = v91;
        *v11 = v91;
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
          goto LABEL_14;
        }
LABEL_51:
        v33 = Object;
LABEL_52:
        v29 = (struct _ERESOURCE *)*((_QWORD *)v33 + 6);
        goto LABEL_53;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        v91 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_54;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        v97 = inserted;
        goto LABEL_97;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v79 = 0;
        v80 = Object;
        v81 = *((_DWORD *)Object + 31);
        if ( !v81 )
          goto LABEL_185;
        v82 = *((_QWORD *)Object + 19);
        while ( (*(_DWORD *)(v82 + 16LL * v79 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v79 >= v81 )
            goto LABEL_185;
        }
        v9 = *(_QWORD *)(v82 + 16LL * v79);
LABEL_185:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject(Object);
          return -1073741275;
        }
        v83 = 16LL * v79;
        v91 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 19) + v83) + 1LL) + 32;
        v84 = v91;
        *v11 = v91;
        if ( TokenInformationLength < v84 )
        {
          v29 = (struct _ERESOURCE *)*((_QWORD *)v80 + 6);
          goto LABEL_53;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v83 + *((_QWORD *)v80 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v83 + *((_QWORD *)v80 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_14;
      case TokenIsAppContainer:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        v91 = 4;
        *v11 = 4;
        v14 = Object;
        if ( TokenInformationLength < 4 )
          goto LABEL_55;
        LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x4000) != 0;
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_18;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v49 = Object;
        v74 = 16 * *((_DWORD *)Object + 200) + 8;
        v91 = v74;
        if ( *((_DWORD *)Object + 200) )
        {
          do
          {
            v74 += 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 99) + 16LL * (unsigned int)v9) + 1LL) + 8;
            v91 = v74;
            LODWORD(v9) = v9 + 1;
          }
          while ( (unsigned int)v9 < *((_DWORD *)Object + 200) );
        }
        *v11 = v74;
        if ( TokenInformationLength < v74 )
        {
LABEL_119:
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
        goto LABEL_14;
      case TokenAppContainerSid:
        v19 = 8;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v20 = (unsigned int *)Object;
        v21 = *((_QWORD *)Object + 98);
        if ( v21 )
          v19 = 4 * *(unsigned __int8 *)(v21 + 1) + 16;
        v91 = v19;
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
        goto LABEL_31;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        v91 = 4;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_54;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v86 = *((_QWORD *)Object + 135);
        if ( v86 )
          LODWORD(v9) = *(_DWORD *)(v86 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_17;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v33 = Object;
        v44 = *((_QWORD *)Object + 137);
        if ( v44
          && (*(_QWORD *)(v44 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && ((v46 = *(_QWORD **)(v44 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v46 = *(_QWORD **)(v44 + 576);
          AuthzBasepQueryClaimAttributesToken(v46, 0LL, 0LL, &v91);
          v33 = Object;
          v45 = v91;
        }
        else
        {
          v45 = 16;
          v91 = 16;
          LODWORD(v111[0]) = 0;
          v111[2] = &v111[1];
          v111[1] = &v111[1];
          LODWORD(v111[3]) = 0;
          v111[5] = &v111[4];
          v111[4] = &v111[4];
          v46 = v111;
        }
        *v11 = v45;
        if ( TokenInformationLength < v45 )
          goto LABEL_52;
        inserted = AuthzBasepQueryClaimAttributesToken(v46, TokenInformation, TokenInformationLength, &v91);
        v97 = inserted;
        goto LABEL_96;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
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
        v91 = v55;
        if ( v54 )
        {
          v87 = v54;
          do
          {
            v55 += 4 * *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 137) + 8LL) + v9) + 1LL) + 8;
            v91 = v55;
            v9 += 16LL;
            --v87;
          }
          while ( v87 );
        }
        *v11 = v55;
        if ( TokenInformationLength < v55 )
          goto LABEL_83;
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
        goto LABEL_16;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v33 = Object;
        v51 = (_DWORD *)*((_QWORD *)Object + 97);
        if ( v51 )
        {
          LODWORD(SidArea) = 0;
          AuthzBasepQuerySecurityAttributesToken(v51, 0LL, 0LL, 0LL, (size_t)SidArea, &v91);
          v33 = Object;
          v52 = v91;
        }
        else
        {
          v52 = 16;
          v91 = 16;
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
                     &v91);
        v97 = inserted;
        goto LABEL_96;
      case TokenProcessTrustLevel:
        v34 = 8;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v35 = v89[0];
        v36 = SourceSid;
        v20 = (unsigned int *)Object;
        if ( v89[0] )
          v37 = (unsigned __int8 *)SourceSid;
        else
          v37 = (unsigned __int8 *)*((_QWORD *)Object + 138);
        if ( v37 )
          v34 = 4 * v37[1] + 16;
        v91 = v34;
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
LABEL_31:
        v18 = (struct _ERESOURCE *)*((_QWORD *)v20 + 6);
        goto LABEL_16;
      case TokenSingletonAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        inserted = SepInternalQuerySecurityAttributesTokenEx(
                     (__int64)Object,
                     v10,
                     0LL,
                     0,
                     1,
                     (__int64)TokenInformation,
                     TokenInformationLength,
                     (__int64)v11);
        v97 = inserted;
LABEL_96:
        ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
        KeLeaveCriticalRegion();
LABEL_97:
        ObfDereferenceObject(Object);
        return inserted;
      case TokenBnoIsolation:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
        if ( result < 0 )
          return result;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v69 = 16;
        v91 = 16;
        v70 = Object;
        v71 = *((_QWORD *)Object + 144);
        if ( v71 )
        {
          v69 = *(unsigned __int16 *)(v71 + 42) + 16;
          v91 = v69;
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
        }
        else
        {
          *((_BYTE *)TokenInformation + 8) = 0;
          *(_QWORD *)TokenInformation = 0LL;
        }
        v18 = (struct _ERESOURCE *)*((_QWORD *)v70 + 6);
        goto LABEL_16;
      default:
        return -1073741821;
    }
  }
  result = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v89, &SourceSid);
  if ( result >= 0 )
  {
    *v11 = 4;
    v14 = Object;
    if ( TokenInformationLength >= 4 )
    {
      SeQuerySessionIdToken(Object, &SessionId);
      *(_DWORD *)TokenInformation = SessionId;
      *v11 = 4;
LABEL_17:
      v14 = Object;
LABEL_18:
      ObfDereferenceObject(v14);
      return 0;
    }
    goto LABEL_55;
  }
  return result;
}
