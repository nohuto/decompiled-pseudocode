/*
 * XREFs of NtSetInformationToken @ 0x1405BEAA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x1400A8F8C (SepLocateTokenIntegrity.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8B14 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlSubAuthorityCountSid @ 0x1400DCB60 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400F2A84 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140139ACC (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x140176F18 (SepLinkLogonSessions.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BD394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSetSessionIdToken @ 0x1405BD45C (SeSetSessionIdToken.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BDE84 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BE0D0 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x1405BE590 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x1405BE894 (SeCaptureAcl.c)
 *     SepStopReferencingLogonSession @ 0x1405BE9C8 (SepStopReferencingLogonSession.c)
 *     SeSetMandatoryPolicyToken @ 0x1405BEA08 (SeSetMandatoryPolicyToken.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1405BFE00 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x1405BFEF0 (SepShouldSetDelinkFlags.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405BFF50 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405E0038 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1405E0178 (SepDereferenceCachedHandlesEntry.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SepIdAssignableAsOwner @ 0x1406A6668 (SepIdAssignableAsOwner.c)
 *     SepAppendDefaultDacl @ 0x1406C3078 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x1406C30D8 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x1406C3124 (SepExpandDynamic.c)
 *     SeSetVirtualizationToken @ 0x1406CD994 (SeSetVirtualizationToken.c)
 *     SeSetPrivateNameSpaceToken @ 0x14089CFC4 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14089D0A0 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14089D10C (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14089D16C (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x1408A0FA4 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x1408A14D4 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1408A15A8 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x1408A3D60 (SepRemoveTokenLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  int v22; // ebx
  int v23; // ebx
  NTSTATUS v24; // ebx
  int v25; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v27; // rbx
  _QWORD *v28; // rdx
  struct _KTHREAD *v29; // rax
  PVOID v30; // rsi
  char v31; // bl
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  struct _KTHREAD *v35; // rax
  struct _ERESOURCE *v36; // rcx
  struct _KTHREAD *v37; // rax
  _QWORD *v38; // r8
  char *v39; // rbx
  _OWORD *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // ebx
  struct _KTHREAD *v44; // rax
  PVOID v45; // r15
  ULONG v46; // ebx
  char *v47; // rcx
  struct _KTHREAD *v48; // rax
  PERESOURCE *v49; // rsi
  PVOID v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  char *v54; // rcx
  __int64 v55; // rcx
  ACL *v56; // r14
  void *v57; // rcx
  unsigned int v58; // esi
  struct _KTHREAD *v59; // rax
  PERESOURCE *v60; // r13
  _QWORD *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rdx
  unsigned int v65; // ebx
  struct _KTHREAD *v66; // rax
  _DWORD *v67; // rsi
  char v68; // al
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdx
  struct _KTHREAD *v73; // rax
  int v74; // eax
  unsigned int v75; // eax
  __int32 v76; // ebx
  __int32 v77; // ebx
  __int32 v78; // ebx
  __int32 v79; // ebx
  int v80; // ebx
  int v81; // ebx
  struct _KTHREAD *v82; // rax
  PERESOURCE *v83; // rbx
  ULONG v84; // ebx
  int v85; // r14d
  PVOID v86; // rbx
  bool v87; // si
  struct _KTHREAD *v88; // rax
  PERESOURCE *v89; // r13
  int *v90; // rdx
  _DWORD *v91; // rbx
  struct _KTHREAD *v92; // rax
  PVOID v93; // rbx
  _QWORD *v94; // rdx
  int v95; // eax
  unsigned int v96; // eax
  void *v97; // r13
  _WORD *v98; // rbx
  UCHAR v99; // cl
  ULONG v100; // r12d
  struct _KTHREAD *v101; // rax
  _DWORD *v102; // rbx
  PSID *TokenIntegrity; // rax
  PSID v104; // r13
  UCHAR v105; // si
  ULONG v106; // eax
  int v107; // edx
  ULONG v108; // eax
  unsigned __int8 v109; // al
  void *v110; // rcx
  void *v111; // rcx
  signed __int32 v112[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v115; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  NTSTATUS v117; // [rsp+58h] [rbp-C0h]
  char v118; // [rsp+5Ch] [rbp-BCh]
  char v119; // [rsp+5Dh] [rbp-BBh]
  __int64 v120; // [rsp+60h] [rbp-B8h] BYREF
  PVOID v121; // [rsp+68h] [rbp-B0h]
  __int64 v123; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v124; // [rsp+80h] [rbp-98h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-90h] BYREF
  _OWORD *v126; // [rsp+90h] [rbp-88h] BYREF
  PVOID v127; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v128; // [rsp+A0h] [rbp-78h] BYREF
  ULONG v129; // [rsp+A4h] [rbp-74h]
  ULONG v130; // [rsp+A8h] [rbp-70h] BYREF
  ULONG v131; // [rsp+ACh] [rbp-6Ch]
  PVOID P; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v133; // [rsp+B8h] [rbp-60h] BYREF
  PERESOURCE *v134; // [rsp+C0h] [rbp-58h]
  int v135; // [rsp+C8h] [rbp-50h]
  ULONG v136; // [rsp+CCh] [rbp-4Ch]
  ULONG v137; // [rsp+D0h] [rbp-48h]
  ULONG v138; // [rsp+D4h] [rbp-44h]
  __int64 v139; // [rsp+D8h] [rbp-40h] BYREF
  void *v140; // [rsp+E0h] [rbp-38h]
  PSID *v141; // [rsp+E8h] [rbp-30h]
  void *v142; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v118 = 0;
  v128 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v119 = PreviousMode;
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
  v121 = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenVirtualizationAllowed )
    {
      if ( TokenInformationClass != TokenVirtualizationAllowed )
      {
        v17 = TokenInformationClass - 4;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 6;
              if ( v20 )
              {
                v21 = v20 - 2;
                if ( v21 )
                {
                  v22 = v21 - 2;
                  if ( v22 )
                  {
                    v23 = v22 - 1;
                    if ( v23 )
                    {
                      if ( v23 == 2 )
                      {
                        if ( TokenInformationLength != 8 )
                        {
LABEL_25:
                          v24 = -1073741820;
LABEL_93:
                          v57 = v16;
                          goto LABEL_94;
                        }
                        v142 = *(void **)TokenInformation;
                        v25 = SepLinkLogonSessions((__int64)Token, v142, PreviousMode);
LABEL_54:
                        v24 = v25;
                        goto LABEL_93;
                      }
                      return -1073741811;
                    }
                    if ( TokenInformationLength != 8 )
                      goto LABEL_25;
                    v140 = *(void **)TokenInformation;
                    if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    {
                      CurrentThread = KeGetCurrentThread();
                      --CurrentThread->KernelApcDisable;
                      v27 = (PERESOURCE *)Token;
                      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                      _InterlockedOr(v112, 0);
                      v28 = Token;
                      if ( !*((_QWORD *)Token + 28) )
                        *((_QWORD *)Token + 28) = v140;
LABEL_31:
                      v28[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      _InterlockedOr(v112, 0);
                      ExReleaseResourceLite(v27[6]);
                      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                      v24 = 0;
LABEL_49:
                      v16 = Token;
                      goto LABEL_93;
                    }
                    goto LABEL_52;
                  }
                  v126 = 0LL;
                  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    goto LABEL_52;
                  v29 = KeGetCurrentThread();
                  --v29->KernelApcDisable;
                  v30 = Token;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
                  v31 = *((_BYTE *)v30 + 119);
                  ExReleaseResourceLite(*((PERESOURCE *)v30 + 6));
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  if ( v31 )
                  {
                    v24 = -1073741811;
                    goto LABEL_49;
                  }
                  if ( !TokenInformation )
                  {
                    v35 = KeGetCurrentThread();
                    --v35->KernelApcDisable;
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v30 + 6), 1u);
                    _InterlockedOr(v112, 0);
                    *((_BYTE *)v30 + 119) = 1;
                    *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                    _InterlockedOr(v112, 0);
                    v36 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
                    goto LABEL_48;
                  }
                  LOBYTE(v32) = PreviousMode;
                  v24 = SepCaptureAuditPolicy(
                          (_DWORD)TokenInformation,
                          v32,
                          v33,
                          v34,
                          (_DWORD)Object,
                          (_DWORD)HandleInformation,
                          (__int64)&v126);
                  v117 = v24;
                  if ( v24 < 0 )
                    goto LABEL_49;
                  v37 = KeGetCurrentThread();
                  --v37->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v30 + 6), 1u);
                  _InterlockedOr(v112, 0);
                  *((_BYTE *)v30 + 119) = 2;
                  v38 = Token;
                  v39 = (char *)Token + 88;
                  v40 = v126;
                  *(_OWORD *)((char *)Token + 88) = *v126;
                  *((_QWORD *)v39 + 2) = *((_QWORD *)v40 + 2);
                  *((_DWORD *)v39 + 6) = *((_DWORD *)v40 + 6);
                  *((_WORD *)v39 + 14) = *((_WORD *)v40 + 14);
                  v39[30] = *((_BYTE *)v40 + 30);
                  v38[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v112, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v30 + 6));
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  LOBYTE(v41) = 1;
                  SepModifyTokenPolicyCounter(v39, v41);
                  ObfDereferenceObject(Token);
                  LOBYTE(v42) = PreviousMode;
                  SepReleaseAuditPolicy(v126, v42);
                  return 0;
                }
                if ( TokenInformationLength != 4 )
                  goto LABEL_25;
                v43 = *(_DWORD *)TokenInformation;
                v135 = *(_DWORD *)TokenInformation;
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  goto LABEL_52;
                if ( v43 )
                {
                  v24 = -1073741811;
                  goto LABEL_93;
                }
                v44 = KeGetCurrentThread();
                --v44->KernelApcDisable;
                v45 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v112, 0);
                v16 = Token;
                if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                {
                  if ( SeTokenLeakTracking )
                    SepRemoveTokenLogonSession(Token);
                  v24 = SepStopReferencingLogonSession((__int64)v16);
                  v117 = v24;
                  if ( v24 < 0 )
                    goto LABEL_93;
                }
                _InterlockedOr(v112, 0);
                v36 = (struct _ERESOURCE *)*((_QWORD *)v45 + 6);
LABEL_48:
                ExReleaseResourceLite(v36);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                v24 = 0;
                goto LABEL_49;
              }
              if ( TokenInformationLength == 4 )
              {
                v46 = *(_DWORD *)TokenInformation;
                v136 = *(_DWORD *)TokenInformation;
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v25 = SeSetSessionIdToken(v16, v46);
                  goto LABEL_54;
                }
                goto LABEL_52;
              }
LABEL_91:
              ObfDereferenceObject(Token);
              return -1073741820;
            }
            if ( TokenInformationLength < 8 )
              goto LABEL_91;
            v47 = *(char **)TokenInformation;
            v123 = (__int64)v47;
            if ( v47 )
            {
              v24 = SeCaptureAcl(
                      v47,
                      PreviousMode,
                      v14,
                      v15,
                      PagedPool,
                      (int)HandleInformation,
                      (PVOID *)&v123,
                      (unsigned int *)&v120);
              v117 = v24;
            }
            else
            {
              LODWORD(v120) = 0;
              v24 = 0;
              v117 = 0;
            }
            if ( v24 < 0 )
              goto LABEL_93;
            v48 = KeGetCurrentThread();
            --v48->KernelApcDisable;
            v49 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v112, 0);
            v50 = Token;
            v51 = (_DWORD)v120 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
            LODWORD(v120) = v51;
            if ( (unsigned int)v51 <= *((_DWORD *)Token + 34) )
            {
              v117 = SepExpandDynamic(Token, v51);
              if ( v117 >= 0 )
              {
                v54 = (char *)*((_QWORD *)v50 + 23);
                if ( !v54
                  || (v117 = SeCaptureAcl(v54, 0, v52, v53, PagedPool, (int)HandleInformation, &P, &v128), v117 >= 0) )
                {
                  SepFreeDefaultDacl(v50);
                  v56 = (ACL *)v123;
                  if ( v123 )
                    SepAppendDefaultDacl(v50, v123);
                  SeTokenDefaultDaclChangedAuditAlarm(v55, (__int64)v50, (__int64)TokenHandle, (ACL *)P, v56);
                  *((_QWORD *)v50 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v112, 0);
                  ExReleaseResourceLite(v49[6]);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  ObfDereferenceObject(Token);
                  if ( v123 )
                    SeReleaseAcl((void *)v123, PreviousMode);
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                  return 0;
                }
              }
              _InterlockedOr(v112, 0);
              ExReleaseResourceLite(v49[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              ObfDereferenceObject(Token);
              if ( v123 )
                SeReleaseAcl((void *)v123, PreviousMode);
              return v117;
            }
            else
            {
              _InterlockedOr(v112, 0);
              ExReleaseResourceLite(v49[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              ObfDereferenceObject(Token);
              if ( v123 )
                SeReleaseAcl((void *)v123, PreviousMode);
              return -1073741671;
            }
          }
          else
          {
            if ( TokenInformationLength < 8 )
              goto LABEL_91;
            v124 = *(_QWORD *)TokenInformation;
            v24 = SeCaptureSid((void *)v124, (int)Object, 1, (__int64)&v124);
            v117 = v24;
            v57 = v16;
            if ( v24 < 0 )
            {
LABEL_94:
              ObfDereferenceObject(v57);
              return v24;
            }
            if ( (unsigned __int8)SepIdAssignableAsGroup(v16, v124) )
            {
              v58 = 4 * *(unsigned __int8 *)(v124 + 1) + 8;
              LODWORD(v120) = v58;
              v59 = KeGetCurrentThread();
              --v59->KernelApcDisable;
              v60 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v112, 0);
              v61 = Token;
              v62 = *((_QWORD *)Token + 23);
              if ( v62 )
              {
                v58 += *(unsigned __int16 *)(v62 + 2);
                LODWORD(v120) = v58;
              }
              if ( v58 <= *((_DWORD *)Token + 34) )
              {
                v117 = SepExpandDynamic(Token, (unsigned int)v120);
                if ( v117 >= 0 )
                {
                  SepFreePrimaryGroup(v61);
                  SepAppendPrimaryGroup(v61, v124);
                  v61[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v112, 0);
                  ExReleaseResourceLite(v60[6]);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                }
                else
                {
                  _InterlockedOr(v112, 0);
                  ExReleaseResourceLite(v60[6]);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  v8 = v117;
                }
              }
              else
              {
                _InterlockedOr(v112, 0);
                ExReleaseResourceLite(v60[6]);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                v8 = -1073741671;
              }
              v16 = Token;
            }
            else
            {
              v8 = -1073741733;
            }
            ObfDereferenceObject(v16);
            LOBYTE(v63) = 1;
            LOBYTE(v64) = PreviousMode;
            SeReleaseSid(v124, v64, v63);
            return v8;
          }
        }
        else
        {
          if ( TokenInformationLength < 8 )
            goto LABEL_91;
          Sid1 = *(PSID *)TokenInformation;
          v24 = SeCaptureSid(Sid1, (int)Object, 1, (__int64)&Sid1);
          v117 = v24;
          if ( v24 < 0 )
            goto LABEL_93;
          v65 = 0;
          v66 = KeGetCurrentThread();
          --v66->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v112, 0);
          v67 = v121;
          while ( 1 )
          {
            if ( v65 >= v67[31] )
            {
              _InterlockedOr(v112, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v121 + 6));
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              ObfDereferenceObject(v121);
              LOBYTE(v71) = 1;
              LOBYTE(v72) = PreviousMode;
              SeReleaseSid(Sid1, v72, v71);
              return -1073741734;
            }
            if ( RtlEqualSid(Sid1, *(PSID *)(*((_QWORD *)v67 + 19) + 16LL * v65)) )
              break;
            ++v65;
          }
          if ( (unsigned __int8)SepIdAssignableAsOwner(v67, v65) )
          {
            v67[36] = v65;
            v68 = 1;
            v118 = 1;
            v117 = 0;
          }
          else
          {
            v117 = -1073741734;
            v68 = v118;
          }
          if ( v68 )
          {
            v134 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
            *((_QWORD *)v67 + 7) = v134;
          }
          _InterlockedOr(v112, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v121 + 6));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(v121);
          LOBYTE(v69) = 1;
          LOBYTE(v70) = PreviousMode;
          SeReleaseSid(Sid1, v70, v69);
          return v117;
        }
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_25;
      v129 = *(_DWORD *)TokenInformation;
      if ( SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
      {
        v73 = KeGetCurrentThread();
        --v73->KernelApcDisable;
        v27 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v112, 0);
        v28 = Token;
        v74 = *((_DWORD *)Token + 50);
        if ( v129 )
          v75 = v74 | 0x200;
        else
          v75 = v74 & 0xFFFFFDFF;
        *((_DWORD *)Token + 50) = v75;
        goto LABEL_31;
      }
LABEL_52:
      v24 = -1073741727;
      goto LABEL_93;
    }
    v76 = TokenInformationClass - 24;
    if ( !v76 )
    {
      if ( TokenInformationLength == 4 )
      {
        HIDWORD(v139) = *(_DWORD *)TokenInformation;
        SeSetVirtualizationToken(Token);
        v24 = 0;
        goto LABEL_93;
      }
      goto LABEL_25;
    }
    v77 = v76 - 1;
    if ( v77 )
    {
      v78 = v77 - 1;
      if ( !v78 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v131 = *(_DWORD *)TokenInformation;
        if ( v131 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_52;
        v92 = KeGetCurrentThread();
        --v92->KernelApcDisable;
        v93 = Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v112, 0);
        v94 = Token;
        v95 = *((_DWORD *)Token + 50);
        if ( v131 )
          v96 = v95 | 0x1000;
        else
          v96 = v95 & 0xFFFFEFFF;
        *((_DWORD *)Token + 50) = v96;
        v94[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        _InterlockedOr(v112, 0);
        v36 = (struct _ERESOURCE *)*((_QWORD *)v93 + 6);
        goto LABEL_48;
      }
      v79 = v78 - 1;
      if ( !v79 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v130 = *(_DWORD *)TokenInformation;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( *((_BYTE *)v16 + 204) )
          {
            v24 = -1073741525;
            goto LABEL_93;
          }
          v25 = SeSetMandatoryPolicyToken((__int64)v16, &v130);
          goto LABEL_54;
        }
        goto LABEL_52;
      }
      v80 = v79 - 12;
      if ( !v80 )
      {
        if ( !TokenInformation || TokenInformationLength < 0x10 )
          goto LABEL_25;
        LOBYTE(v13) = PreviousMode;
        v85 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v13, &v127);
        if ( v85 >= 0 )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            (__int64)&Feature_RelaxTcbForUWP__private_propertyCache,
            16520188LL,
            (__int64)&Feature_PdttSupport_logged_traits,
            0,
            3);
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            v85 = -1073741727;
          v117 = v85;
          if ( v85 >= 0 )
          {
            v86 = v127;
            v87 = (unsigned __int8)SepShouldSetDelinkFlags(*((_QWORD *)v127 + 1), *(_QWORD *)v127) != 0;
            v88 = KeGetCurrentThread();
            --v88->KernelApcDisable;
            v89 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v112, 0);
            v90 = (int *)*((_QWORD *)v86 + 1);
            v91 = Token;
            v117 = AuthzBasepSetSecurityAttributesToken(*((_DWORD **)Token + 97), v90, *(_QWORD *)v127);
            if ( v117 >= 0 && v87 )
              v91[50] |= 0x20000u;
            *((_QWORD *)v91 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v112, 0);
            ExReleaseResourceLite(v89[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            SepReleaseTokenSecurityAttributesAndOperationsInformation(v127);
            v24 = v117;
            goto LABEL_49;
          }
          SepReleaseTokenSecurityAttributesAndOperationsInformation(v127);
        }
        v24 = v85;
        goto LABEL_93;
      }
      v81 = v80 - 3;
      if ( !v81 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v84 = *(_DWORD *)TokenInformation;
        v138 = *(_DWORD *)TokenInformation;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          v25 = SeSetPrivateNameSpaceToken(v16, v84);
          goto LABEL_54;
        }
        goto LABEL_52;
      }
      if ( v81 != 3 )
        return -1073741811;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v137 = *(_DWORD *)TokenInformation;
        if ( !v137 && (*((_DWORD *)v16 + 50) & 0x80000) != 0 )
        {
          v82 = KeGetCurrentThread();
          --v82->KernelApcDisable;
          v83 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v112, 0);
          *((_DWORD *)v16 + 50) &= ~0x80000u;
          *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v112, 0);
          ExReleaseResourceLite(v83[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v16 = Token;
        }
        ObfDereferenceObject(v16);
        return 0;
      }
      goto LABEL_52;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_25;
    v25 = SeCaptureSidAndAttributesArray(
            (char *)TokenInformation,
            1u,
            PreviousMode,
            0LL,
            0,
            (int)HandleInformation,
            v115,
            (PVOID *)&v133,
            (unsigned int *)&v139);
    v117 = v25;
    if ( v25 < 0 )
      goto LABEL_54;
    v97 = (void *)v133;
    v98 = *(_WORD **)v133;
    if ( *(_DWORD *)(*(_QWORD *)v133 + 2LL) == *(_DWORD *)((char *)SeUntrustedMandatorySid + 2)
      && v98[3] == *((_WORD *)SeUntrustedMandatorySid + 3) )
    {
      v99 = *RtlSubAuthorityCountSid(*(PSID *)v133);
      if ( !v99 )
      {
        v100 = 0;
        goto LABEL_161;
      }
      v100 = *RtlSubAuthoritySid(v98, (unsigned int)v99 - 1);
      if ( v100 <= 0x4000 )
      {
LABEL_161:
        v101 = KeGetCurrentThread();
        --v101->KernelApcDisable;
        v134 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v112, 0);
        v102 = Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v141 = TokenIntegrity;
        if ( !TokenIntegrity )
        {
          v24 = -1073740730;
LABEL_193:
          _InterlockedOr(v112, 0);
          ExReleaseResourceLite(v134[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Token);
          SeReleaseLuidAndAttributesArray((void *)v133, PreviousMode);
          return v24;
        }
        v104 = *TokenIntegrity;
        v105 = *RtlSubAuthorityCountSid(*TokenIntegrity);
        if ( v105 )
        {
          v106 = *RtlSubAuthoritySid(v104, (unsigned int)v105 - 1);
          v107 = v105;
        }
        else
        {
          v106 = 0;
          v107 = 0;
        }
        if ( v100 <= v106 )
        {
          if ( v105 )
            v108 = *RtlSubAuthoritySid(v104, v107 - 1);
          else
            v108 = 0;
          if ( v100 < v108 )
            v102[50] &= ~0x1000u;
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v24 = -1073741727;
            goto LABEL_193;
          }
          if ( *((_BYTE *)v102 + 204) )
          {
            v24 = -1073741525;
            goto LABEL_193;
          }
        }
        v109 = *((_BYTE *)*v141 + 1);
        if ( v109 )
        {
          *RtlSubAuthoritySid(*v141, (unsigned int)v109 - 1) = v100;
          if ( v100 < 0x3000 )
          {
            *((_QWORD *)v102 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v102 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          if ( v100 >= 0x2000 )
          {
            if ( (v102[50] & 0x4000) != 0 )
            {
              SepRemoveAceFromTokenDefaultDacl((__int64)v102, *((_WORD **)v102 + 98));
              v102[50] &= ~0x4000u;
              v110 = (void *)*((_QWORD *)v102 + 98);
              if ( v110 )
              {
                ExFreePoolWithTag(v110, 0);
                *((_QWORD *)v102 + 98) = 0LL;
              }
              v111 = (void *)*((_QWORD *)v102 + 99);
              if ( v111 )
              {
                ExFreePoolWithTag(v111, 0);
                *((_QWORD *)v102 + 99) = 0LL;
                v102[200] = 0;
                memset(v102 + 202, 0, 0x110uLL);
              }
              if ( *((_QWORD *)v102 + 135) )
              {
                SepDereferenceLowBoxNumberEntry((unsigned int)v102[30]);
                *((_QWORD *)v102 + 135) = 0LL;
              }
              if ( *((_QWORD *)v102 + 136) )
              {
                SepDereferenceCachedHandlesEntry(*((_QWORD *)v102 + 27));
                *((_QWORD *)v102 + 136) = 0LL;
              }
            }
            v102[50] |= 0x2000u;
          }
          else
          {
            *((_QWORD *)v102 + 9) &= 0x202800000uLL;
            *((_QWORD *)v102 + 10) &= 0x202800000uLL;
            v102[50] &= ~0x2000u;
          }
          *((_QWORD *)v102 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v24 = 0;
        }
        else
        {
          v24 = -1073741811;
        }
        goto LABEL_193;
      }
    }
    ObfDereferenceObject(v16);
    SeReleaseLuidAndAttributesArray(v97, PreviousMode);
    return -1073740730;
  }
  return result;
}
