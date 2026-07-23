/*
 * XREFs of NtSetInformationToken @ 0x140673100
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x14000A8B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14000AC8C (SepLocateTokenIntegrity.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084880 (AuthzBasepSetSecurityAttributesToken.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140131FCC (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x140139E20 (SepLinkLogonSessions.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061C1E4 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061C430 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x14061C8F0 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x14061C90C (SeCaptureAcl.c)
 *     SepDereferenceCachedHandlesEntry @ 0x14061F644 (SepDereferenceCachedHandlesEntry.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061FFDC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeCaptureSid @ 0x140644F1C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14064501C (SeReleaseSid.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C73E4 (SepDereferenceLowBoxNumberEntry.c)
 *     SepIdAssignableAsOwner @ 0x1406CDB4C (SepIdAssignableAsOwner.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1406D115C (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x1406DB2DC (SepShouldSetDelinkFlags.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1406DD6E4 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepAppendDefaultDacl @ 0x1406E1514 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x1406E1574 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x1406E15C0 (SepExpandDynamic.c)
 *     SeSetMandatoryPolicyToken @ 0x1406E31D8 (SeSetMandatoryPolicyToken.c)
 *     SeSetSessionIdToken @ 0x1406E5E90 (SeSetSessionIdToken.c)
 *     SepStopReferencingLogonSession @ 0x1406E9E68 (SepStopReferencingLogonSession.c)
 *     SeSetVirtualizationToken @ 0x1406EC3B4 (SeSetVirtualizationToken.c)
 *     SeSetPrivateNameSpaceToken @ 0x1408DA644 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x1408DA898 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x1408DA904 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x1408DA964 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x1408DE510 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x1408DEA04 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1408DEAD8 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x1408E140C (SepRemoveTokenLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  char PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID v16; // rsi
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  __int32 v20; // ebx
  int v21; // ebx
  int v22; // r14d
  PVOID v23; // rbx
  bool v24; // si
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v26; // r13
  int *v27; // rdx
  _DWORD *v28; // rbx
  NTSTATUS v29; // ebx
  void *v30; // rcx
  __int32 v31; // ebx
  __int32 v32; // ebx
  __int32 v33; // ebx
  __int32 v34; // ebx
  int v35; // ebx
  int v36; // ebx
  struct _KTHREAD *v37; // rax
  char v38; // bl
  int v39; // edx
  int v40; // r8d
  int v41; // r9d
  struct _KTHREAD *v42; // rax
  struct _ERESOURCE *v43; // rcx
  int v44; // eax
  ULONG v45; // ebx
  char *v46; // rcx
  struct _KTHREAD *v47; // rax
  PERESOURCE *v48; // rsi
  PVOID v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  char *v53; // rcx
  __int64 v54; // rcx
  ACL *v55; // r14
  ULONG v56; // ebx
  struct _KTHREAD *v57; // rax
  PVOID v58; // r15
  void *v59; // r13
  unsigned __int16 *v60; // rbx
  int v61; // edx
  UCHAR v62; // cl
  ULONG v63; // r12d
  struct _KTHREAD *v64; // rax
  _QWORD *v65; // rbx
  PSID *TokenIntegrity; // rax
  PSID *v67; // rsi
  PSID v68; // r13
  UCHAR v69; // cl
  ULONG v70; // eax
  unsigned __int8 v71; // al
  void *v72; // rcx
  void *v73; // rcx
  __int64 v74; // rdx
  int v75; // ebx
  struct _KTHREAD *v76; // rax
  PERESOURCE *v77; // rbx
  _QWORD *v78; // rdx
  __int64 v79; // rax
  struct _KTHREAD *v80; // rax
  struct _KTHREAD *v81; // rax
  PERESOURCE *v82; // rbx
  _QWORD *v83; // rdx
  struct _KTHREAD *v84; // rax
  _QWORD *v85; // r8
  char *v86; // rbx
  _OWORD *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rdx
  unsigned int v90; // esi
  struct _KTHREAD *v91; // rax
  PERESOURCE *v92; // r13
  _QWORD *v93; // rbx
  __int64 v94; // rax
  unsigned int v95; // ebx
  struct _KTHREAD *v96; // rax
  _DWORD *v97; // rsi
  char v98; // al
  PVOID v99; // rbx
  PVOID v100; // rbx
  int v101; // ebx
  struct _KTHREAD *v102; // rax
  PERESOURCE *v103; // rbx
  ULONG v104; // ebx
  signed __int32 v105[8]; // [rsp+0h] [rbp-168h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-148h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-140h]
  __int64 v108; // [rsp+30h] [rbp-138h]
  PVOID Token; // [rsp+50h] [rbp-118h] BYREF
  NTSTATUS v110; // [rsp+58h] [rbp-110h]
  char v111; // [rsp+5Ch] [rbp-10Ch]
  char v112; // [rsp+5Dh] [rbp-10Bh]
  unsigned int v113; // [rsp+60h] [rbp-108h] BYREF
  __int64 v115; // [rsp+68h] [rbp-100h] BYREF
  PSID Sid1; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v117; // [rsp+78h] [rbp-F0h] BYREF
  PVOID v118; // [rsp+80h] [rbp-E8h]
  _OWORD *v119; // [rsp+88h] [rbp-E0h] BYREF
  PVOID P; // [rsp+90h] [rbp-D8h] BYREF
  unsigned int v121; // [rsp+98h] [rbp-D0h] BYREF
  ULONG v122; // [rsp+9Ch] [rbp-CCh]
  ULONG v123; // [rsp+A0h] [rbp-C8h] BYREF
  ULONG v124; // [rsp+A4h] [rbp-C4h]
  __int64 v125; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v126; // [rsp+B0h] [rbp-B8h] BYREF
  ULONG v127; // [rsp+B8h] [rbp-B0h]
  ULONG v128; // [rsp+BCh] [rbp-ACh]
  ULONG v129; // [rsp+C0h] [rbp-A8h]
  ULONG v130; // [rsp+C4h] [rbp-A4h]
  __int64 v131; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-98h]
  PERESOURCE *v133; // [rsp+D8h] [rbp-90h]
  void *v134; // [rsp+E0h] [rbp-88h]
  __int64 v135; // [rsp+E8h] [rbp-80h]
  __int64 v136; // [rsp+F0h] [rbp-78h]
  __int64 v137; // [rsp+F8h] [rbp-70h]
  __int64 v138; // [rsp+100h] [rbp-68h]
  __int64 v139; // [rsp+108h] [rbp-60h]
  __int64 v140; // [rsp+110h] [rbp-58h]
  __int64 v141; // [rsp+120h] [rbp-48h]
  __int64 v142; // [rsp+128h] [rbp-40h]
  __int64 v143; // [rsp+130h] [rbp-38h]
  __int64 v144; // [rsp+138h] [rbp-30h]
  __int64 v145; // [rsp+140h] [rbp-28h]

  v8 = 0;
  v111 = 0;
  v121 = 0;
  v125 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v112 = PreviousMode;
  if ( PreviousMode && TokenInformationLength )
  {
    if ( ((unsigned __int8)TokenInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TokenInformation + TokenInformationLength > 0x7FFFFFFF0000LL
      || (char *)TokenInformation + TokenInformationLength < TokenInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags )
    return -1073741821;
  v10 = 0x24800F8B5070LL;
  if ( !_bittest64(&v10, TokenInformationClass) )
    return -1073741821;
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken )
  {
    v11 = 136;
  }
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v16 = Token;
  v118 = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass > TokenVirtualizationAllowed )
    {
      v17 = TokenInformationClass - 24;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 12;
              if ( !v21 )
              {
                if ( TokenInformation && TokenInformationLength >= 0x10 )
                {
                  LOBYTE(v13) = PreviousMode;
                  v22 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v13, &P);
                  if ( v22 >= 0 )
                  {
                    wil_details_FeaturePropertyCache_ReportUsageToService(
                      (__int64)&Feature_RelaxTcbForUWP__private_propertyCache,
                      16520188LL,
                      (__int64)&Feature_PdttSupport_logged_traits,
                      0,
                      3);
                    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                      v22 = -1073741727;
                    v110 = v22;
                    if ( v22 >= 0 )
                    {
                      v23 = P;
                      v24 = (unsigned __int8)SepShouldSetDelinkFlags(*((_QWORD *)P + 1), *(_QWORD *)P) != 0;
                      CurrentThread = KeGetCurrentThread();
                      --CurrentThread->KernelApcDisable;
                      v26 = (PERESOURCE *)Token;
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                      _InterlockedOr(v105, 0);
                      v27 = (int *)*((_QWORD *)v23 + 1);
                      v28 = Token;
                      v110 = AuthzBasepSetSecurityAttributesToken(*((_DWORD **)Token + 97), v27, *(_QWORD *)P);
                      if ( v110 >= 0 && v24 )
                        v28[50] |= 0x20000u;
                      v143 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      *((_QWORD *)v28 + 7) = v143;
                      _InterlockedOr(v105, 0);
                      ExReleaseResourceLite(v26[6]);
                      KeLeaveCriticalRegion();
                      SepReleaseTokenSecurityAttributesAndOperationsInformation(P);
                      v29 = v110;
                      goto LABEL_28;
                    }
                    SepReleaseTokenSecurityAttributesAndOperationsInformation(P);
                  }
                  v29 = v22;
                  goto LABEL_29;
                }
LABEL_132:
                v29 = -1073741820;
                goto LABEL_29;
              }
              v101 = v21 - 3;
              if ( v101 )
              {
                if ( v101 == 3 )
                {
                  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  {
                    if ( TokenInformationLength != 4 )
                      goto LABEL_132;
                    v129 = *(_DWORD *)TokenInformation;
                    if ( !v129 && (*((_DWORD *)v16 + 50) & 0x80000) != 0 )
                    {
                      v102 = KeGetCurrentThread();
                      --v102->KernelApcDisable;
                      v103 = (PERESOURCE *)Token;
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                      _InterlockedOr(v105, 0);
                      *((_DWORD *)v16 + 50) &= ~0x80000u;
                      v142 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      *((_QWORD *)Token + 7) = v142;
                      _InterlockedOr(v105, 0);
                      ExReleaseResourceLite(v103[6]);
                      KeLeaveCriticalRegion();
                      v16 = Token;
                    }
                    ObfDereferenceObject(v16);
                    return 0;
                  }
LABEL_136:
                  v29 = -1073741727;
                  goto LABEL_29;
                }
                return -1073741811;
              }
              if ( TokenInformationLength != 4 )
                goto LABEL_132;
              v104 = *(_DWORD *)TokenInformation;
              v130 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_136;
              v44 = SeSetPrivateNameSpaceToken(v16, v104);
            }
            else
            {
              if ( TokenInformationLength != 4 )
                goto LABEL_132;
              v123 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_136;
              if ( *((_BYTE *)v16 + 204) )
              {
                v29 = -1073741525;
                goto LABEL_29;
              }
              v44 = SeSetMandatoryPolicyToken(v16, &v123);
            }
LABEL_52:
            v29 = v44;
            goto LABEL_29;
          }
          if ( TokenInformationLength != 4 )
            goto LABEL_132;
          v124 = *(_DWORD *)TokenInformation;
          if ( v124 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_136;
          v81 = KeGetCurrentThread();
          --v81->KernelApcDisable;
          v82 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v105, 0);
          v83 = Token;
          if ( v124 )
            *((_DWORD *)Token + 50) |= 0x1000u;
          else
            *((_DWORD *)Token + 50) &= ~0x1000u;
          v144 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v83[7] = v144;
          _InterlockedOr(v105, 0);
          ExReleaseResourceLite(v82[6]);
          KeLeaveCriticalRegion();
          v29 = 0;
LABEL_28:
          v16 = Token;
LABEL_29:
          v30 = v16;
LABEL_30:
          ObfDereferenceObject(v30);
          return v29;
        }
        if ( TokenInformationLength < 0x10 )
          goto LABEL_132;
        v44 = SeCaptureSidAndAttributesArray(
                (char *)TokenInformation,
                1u,
                PreviousMode,
                0LL,
                0,
                (int)HandleInformation,
                v108,
                (PVOID *)&v126,
                (unsigned int *)&v131);
        v110 = v44;
        if ( v44 < 0 )
          goto LABEL_52;
        v59 = (void *)v126;
        v60 = *(unsigned __int16 **)v126;
        v61 = *(_DWORD *)(*(_QWORD *)v126 + 2LL) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
        if ( !v61 )
          v61 = v60[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
        if ( !v61 )
        {
          v62 = *RtlSubAuthorityCountSid(*(PSID *)v126);
          if ( !v62 )
          {
            v63 = 0;
LABEL_88:
            v64 = KeGetCurrentThread();
            --v64->KernelApcDisable;
            v133 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v105, 0);
            v65 = Token;
            TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
            v67 = TokenIntegrity;
            if ( TokenIntegrity )
            {
              v68 = *TokenIntegrity;
              v69 = *RtlSubAuthorityCountSid(*TokenIntegrity);
              if ( v69 )
                v70 = *RtlSubAuthoritySid(v68, (unsigned int)v69 - 1);
              else
                v70 = 0;
              if ( v63 <= v70 )
              {
LABEL_94:
                v71 = *((_BYTE *)*v67 + 1);
                if ( v71 )
                {
                  *RtlSubAuthoritySid(*v67, (unsigned int)v71 - 1) = v63;
                  if ( v63 < 0x3000 )
                  {
                    v65[9] &= 0xFFFFFFEEDFE9F97BuLL;
                    v65[10] &= 0xFFFFFFEEDFE9F97BuLL;
                  }
                  if ( v63 < 0x2000 )
                  {
                    v65[9] &= 0x202800000uLL;
                    v65[10] &= 0x202800000uLL;
                    *((_DWORD *)v65 + 50) &= ~0x2000u;
                  }
                  else
                  {
                    if ( (v65[25] & 0x4000) != 0 )
                    {
                      SepRemoveAceFromTokenDefaultDacl((__int64)v65, (_WORD *)v65[98]);
                      *((_DWORD *)v65 + 50) &= ~0x4000u;
                      v72 = (void *)v65[98];
                      if ( v72 )
                      {
                        ExFreePoolWithTag(v72, 0);
                        v65[98] = 0LL;
                      }
                      v73 = (void *)v65[99];
                      if ( v73 )
                      {
                        ExFreePoolWithTag(v73, 0);
                        v65[99] = 0LL;
                        *((_DWORD *)v65 + 200) = 0;
                        memset(v65 + 101, 0, 0x110uLL);
                      }
                      if ( v65[135] )
                      {
                        SepDereferenceLowBoxNumberEntry(*((unsigned int *)v65 + 30));
                        v65[135] = 0LL;
                      }
                      v74 = v65[136];
                      if ( v74 )
                      {
                        SepDereferenceCachedHandlesEntry(v65[27], v74);
                        v65[136] = 0LL;
                      }
                    }
                    *((_DWORD *)v65 + 50) |= 0x2000u;
                  }
                  v145 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  v65[7] = v145;
                  v29 = 0;
                }
                else
                {
                  v29 = -1073741811;
                }
                goto LABEL_109;
              }
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( !*((_BYTE *)v65 + 204) )
                  goto LABEL_94;
                v29 = -1073741525;
              }
              else
              {
                v29 = -1073741727;
              }
            }
            else
            {
              v29 = -1073740730;
            }
LABEL_109:
            _InterlockedOr(v105, 0);
            ExReleaseResourceLite(v133[6]);
            KeLeaveCriticalRegion();
            ObfDereferenceObject(Token);
            SeReleaseLuidAndAttributesArray((void *)v126, PreviousMode);
            return v29;
          }
          v63 = *RtlSubAuthoritySid(v60, (unsigned int)v62 - 1);
          if ( v63 <= 0x4000 )
            goto LABEL_88;
        }
        ObfDereferenceObject(v16);
        SeReleaseLuidAndAttributesArray(v59, PreviousMode);
        return -1073740730;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_132;
      HIDWORD(v131) = *(_DWORD *)TokenInformation;
      SeSetVirtualizationToken(Token);
LABEL_45:
      v29 = 0;
      goto LABEL_29;
    }
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_132;
      v122 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_136;
      v80 = KeGetCurrentThread();
      --v80->KernelApcDisable;
      v77 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v105, 0);
      v78 = Token;
      if ( v122 )
        *((_DWORD *)Token + 50) |= 0x200u;
      else
        *((_DWORD *)Token + 50) &= ~0x200u;
      v79 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      v141 = v79;
      goto LABEL_116;
    }
    v31 = TokenInformationClass - 4;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 6;
          if ( v34 )
          {
            v35 = v34 - 2;
            if ( !v35 )
            {
              if ( TokenInformationLength != 4 )
                goto LABEL_132;
              v56 = *(_DWORD *)TokenInformation;
              v127 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_136;
              if ( !v56 )
              {
                v57 = KeGetCurrentThread();
                --v57->KernelApcDisable;
                v58 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v105, 0);
                v16 = Token;
                if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                {
                  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
                    SepRemoveTokenLogonSession(Token);
                  v29 = SepStopReferencingLogonSession(v16);
                  v110 = v29;
                  if ( v29 < 0 )
                    goto LABEL_29;
                }
                _InterlockedOr(v105, 0);
                v43 = (struct _ERESOURCE *)*((_QWORD *)v58 + 6);
LABEL_44:
                ExReleaseResourceLite(v43);
                KeLeaveCriticalRegion();
                v16 = Token;
                goto LABEL_45;
              }
LABEL_135:
              v29 = -1073741811;
              goto LABEL_29;
            }
            v36 = v35 - 2;
            if ( !v36 )
            {
              v119 = 0LL;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_136;
              v37 = KeGetCurrentThread();
              --v37->KernelApcDisable;
              v16 = Token;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v38 = *((_BYTE *)v16 + 118);
              ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
              KeLeaveCriticalRegion();
              if ( !v38 )
              {
                if ( TokenInformation )
                {
                  LOBYTE(v39) = PreviousMode;
                  v29 = SepCaptureAuditPolicy(
                          (_DWORD)TokenInformation,
                          v39,
                          v40,
                          v41,
                          (_DWORD)Object,
                          (_DWORD)HandleInformation,
                          (__int64)&v119);
                  v110 = v29;
                  if ( v29 < 0 )
                    goto LABEL_29;
                  v84 = KeGetCurrentThread();
                  --v84->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
                  _InterlockedOr(v105, 0);
                  *((_BYTE *)v16 + 118) = 2;
                  v85 = Token;
                  v86 = (char *)Token + 88;
                  v87 = v119;
                  *(_OWORD *)((char *)Token + 88) = *v119;
                  *((_QWORD *)v86 + 2) = *((_QWORD *)v87 + 2);
                  *((_DWORD *)v86 + 6) = *((_DWORD *)v87 + 6);
                  *((_WORD *)v86 + 14) = *((_WORD *)v87 + 14);
                  v137 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  v85[7] = v137;
                  _InterlockedOr(v105, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v16 + 6));
                  KeLeaveCriticalRegion();
                  LOBYTE(v88) = 1;
                  SepModifyTokenPolicyCounter(v86, v88);
                  ObfDereferenceObject(Token);
                  LOBYTE(v89) = PreviousMode;
                  SepReleaseAuditPolicy(v119, v89);
                  return 0;
                }
                v42 = KeGetCurrentThread();
                --v42->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 6), 1u);
                _InterlockedOr(v105, 0);
                *((_BYTE *)v16 + 118) = 1;
                v136 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                *((_QWORD *)Token + 7) = v136;
                _InterlockedOr(v105, 0);
                v43 = (struct _ERESOURCE *)*((_QWORD *)v16 + 6);
                goto LABEL_44;
              }
              goto LABEL_135;
            }
            v75 = v36 - 1;
            if ( v75 )
            {
              if ( v75 != 2 )
                return -1073741811;
              if ( TokenInformationLength != 8 )
                goto LABEL_132;
              v134 = *(void **)TokenInformation;
              v44 = SepLinkLogonSessions((__int64)Token, v134, PreviousMode);
              goto LABEL_52;
            }
            if ( TokenInformationLength != 8 )
              goto LABEL_132;
            v132 = *(_QWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_136;
            v76 = KeGetCurrentThread();
            --v76->KernelApcDisable;
            v77 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v105, 0);
            v78 = Token;
            if ( !*((_QWORD *)Token + 28) )
              *((_QWORD *)Token + 28) = v132;
            v79 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            v135 = v79;
LABEL_116:
            v78[7] = v79;
            _InterlockedOr(v105, 0);
            ExReleaseResourceLite(v77[6]);
            KeLeaveCriticalRegion();
            v29 = 0;
            goto LABEL_28;
          }
          if ( TokenInformationLength == 4 )
          {
            v45 = *(_DWORD *)TokenInformation;
            v128 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_136;
            v44 = SeSetSessionIdToken(v16, v45);
            goto LABEL_52;
          }
LABEL_163:
          ObfDereferenceObject(Token);
          return -1073741820;
        }
        if ( TokenInformationLength < 8 )
          goto LABEL_163;
        v46 = *(char **)TokenInformation;
        v115 = (__int64)v46;
        if ( v46 )
        {
          v29 = SeCaptureAcl(v46, PreviousMode, v14, v15, PagedPool, (int)HandleInformation, (PVOID *)&v115, &v113);
          v110 = v29;
        }
        else
        {
          v113 = 0;
          v29 = 0;
          v110 = 0;
        }
        if ( v29 < 0 )
          goto LABEL_29;
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        v48 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v105, 0);
        v49 = Token;
        v50 = v113 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
        v113 = v50;
        if ( (unsigned int)v50 > *((_DWORD *)Token + 34) )
        {
          _InterlockedOr(v105, 0);
          ExReleaseResourceLite(v48[6]);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(Token);
          if ( v115 )
            SeReleaseAcl((void *)v115, PreviousMode);
          return -1073741671;
        }
        else
        {
          v110 = SepExpandDynamic(Token, v50);
          if ( v110 >= 0 )
          {
            v53 = (char *)*((_QWORD *)v49 + 23);
            if ( !v53
              || (v110 = SeCaptureAcl(v53, 0, v51, v52, PagedPool, (int)HandleInformation, (PVOID *)&v125, &v121),
                  v110 >= 0) )
            {
              SepFreeDefaultDacl(v49);
              v55 = (ACL *)v115;
              if ( v115 )
                SepAppendDefaultDacl(v49, v115);
              SeTokenDefaultDaclChangedAuditAlarm(v54, (__int64)v49, (unsigned __int64)TokenHandle, (ACL *)v125, v55);
              v138 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              *((_QWORD *)v49 + 7) = v138;
              _InterlockedOr(v105, 0);
              ExReleaseResourceLite(v48[6]);
              KeLeaveCriticalRegion();
              ObfDereferenceObject(Token);
              if ( v115 )
                SeReleaseAcl((void *)v115, PreviousMode);
              if ( v125 )
                SeReleaseAcl((void *)v125, 0);
              return 0;
            }
          }
          _InterlockedOr(v105, 0);
          ExReleaseResourceLite(v48[6]);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(Token);
          if ( v115 )
            SeReleaseAcl((void *)v115, PreviousMode);
          return v110;
        }
      }
      else
      {
        if ( TokenInformationLength < 8 )
          goto LABEL_163;
        v117 = *(_QWORD *)TokenInformation;
        v29 = SeCaptureSid((char *)v117, PreviousMode, v14, v15, (int)Object, 1, (PSID *)&v117);
        v110 = v29;
        v30 = v16;
        if ( v29 < 0 )
          goto LABEL_30;
        if ( (unsigned __int8)SepIdAssignableAsGroup(v16, v117) )
        {
          v90 = 4 * *(unsigned __int8 *)(v117 + 1) + 8;
          v113 = v90;
          v91 = KeGetCurrentThread();
          --v91->KernelApcDisable;
          v92 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v105, 0);
          v93 = Token;
          v94 = *((_QWORD *)Token + 23);
          if ( v94 )
          {
            v90 += *(unsigned __int16 *)(v94 + 2);
            v113 = v90;
          }
          if ( v90 <= *((_DWORD *)Token + 34) )
          {
            v110 = SepExpandDynamic(Token, v113);
            if ( v110 >= 0 )
            {
              SepFreePrimaryGroup(v93);
              SepAppendPrimaryGroup(v93, v117);
              v139 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              v93[7] = v139;
              _InterlockedOr(v105, 0);
              ExReleaseResourceLite(v92[6]);
              KeLeaveCriticalRegion();
            }
            else
            {
              _InterlockedOr(v105, 0);
              ExReleaseResourceLite(v92[6]);
              KeLeaveCriticalRegion();
              v8 = v110;
            }
          }
          else
          {
            _InterlockedOr(v105, 0);
            ExReleaseResourceLite(v92[6]);
            KeLeaveCriticalRegion();
            v8 = -1073741671;
          }
          v16 = Token;
        }
        else
        {
          v8 = -1073741733;
        }
        ObfDereferenceObject(v16);
        SeReleaseSid((void *)v117, PreviousMode, 1);
        return v8;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_163;
      Sid1 = *(PSID *)TokenInformation;
      v29 = SeCaptureSid((char *)Sid1, PreviousMode, v14, v15, (int)Object, 1, &Sid1);
      v110 = v29;
      if ( v29 < 0 )
        goto LABEL_29;
      v95 = 0;
      v96 = KeGetCurrentThread();
      --v96->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v105, 0);
      v97 = v118;
      while ( 1 )
      {
        if ( v95 >= v97[31] )
        {
          _InterlockedOr(v105, 0);
          v100 = v118;
          ExReleaseResourceLite(*((PERESOURCE *)v118 + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v100);
          SeReleaseSid(Sid1, PreviousMode, 1);
          return -1073741734;
        }
        if ( RtlEqualSid(Sid1, *(PSID *)(*((_QWORD *)v97 + 19) + 16LL * v95)) )
          break;
        ++v95;
      }
      if ( (unsigned __int8)SepIdAssignableAsOwner(v97, v95) )
      {
        v97[36] = v95;
        v98 = 1;
        v111 = 1;
        v110 = 0;
      }
      else
      {
        v110 = -1073741734;
        v98 = v111;
      }
      if ( v98 )
      {
        v140 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        *((_QWORD *)v97 + 7) = v140;
      }
      _InterlockedOr(v105, 0);
      v99 = v118;
      ExReleaseResourceLite(*((PERESOURCE *)v118 + 6));
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v99);
      SeReleaseSid(Sid1, PreviousMode, 1);
      return v110;
    }
  }
  return result;
}
