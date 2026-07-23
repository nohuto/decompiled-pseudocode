/*
 * XREFs of SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4
 * Callers:
 *     SepCommonAccessCheckEx @ 0x14015626C (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x14000ACD4 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x14000C228 (SepFreeResourceInfo.c)
 *     SepMandatoryToDiscretionary @ 0x14000C468 (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14000C4A8 (SepTrustLevelCheck.c)
 *     SepTokenIsOwner @ 0x14000C730 (SepTokenIsOwner.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085530 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     RtlpOwnerAcesPresent @ 0x140088390 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x1400884C0 (SepConstrainByMandatory.c)
 *     SepMandatoryIntegrityCheck @ 0x1400A91E0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x1400A96D0 (SepFilterCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400D0200 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepSetAccessReasons @ 0x140112840 (AuthzBasepSetAccessReasons.c)
 *     SeLogAccessFailure @ 0x14012777C (SeLogAccessFailure.c)
 *     SepAccessCheckEx @ 0x1401569C0 (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14031C5BC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x14031C714 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14031C864 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x14031C9C8 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x14031E824 (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x1403461EC (AuthzBasepMergeAccessReasons.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x1405F6E00 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F6E60 (SeUnlockSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406235B0 (SepAdtAuditThisEventWithContext.c)
 */

char __fastcall SepCommonAccessCheckExWithAdminlessChecks(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        char a7,
        char a8)
{
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  _QWORD *v16; // rax
  char v17; // di
  unsigned int v18; // r13d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  struct _KTHREAD *v23; // r8
  __int64 v24; // r9
  int *v25; // rdx
  int v26; // ebx
  int *v27; // rax
  __int64 *ClientToken; // rsi
  __int64 v29; // rcx
  int v30; // eax
  int *v31; // rdx
  __int64 v32; // rdx
  int v33; // eax
  char v34; // bl
  char v35; // cl
  LONG v36; // eax
  char v37; // al
  char IsOwner; // al
  int v39; // ebx
  unsigned int v40; // edx
  char v41; // r13
  __int64 v42; // rcx
  PACCESS_TOKEN v43; // r8
  PACCESS_TOKEN v44; // r9
  char v45; // al
  __int64 v46; // rdx
  char *v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  bool v50; // r13
  int v51; // ebx
  int *v52; // r8
  _DWORD *v53; // rcx
  int v54; // edx
  char v55; // bl
  int *v56; // rdx
  _DWORD *v57; // r9
  int v58; // ecx
  int v59; // r8d
  __int64 *v60; // rcx
  char v62; // al
  __int64 v63; // rcx
  __int16 v64; // ax
  __int64 v65; // rax
  __int64 v66; // rdx
  char v67; // al
  int v68; // ecx
  int v69; // edx
  int v70; // eax
  int v71; // edx
  int v72; // r13d
  int v73; // eax
  int *v74; // rcx
  int v75; // ecx
  _QWORD *v76; // rax
  bool v77; // zf
  int v78; // esi
  __int64 v79; // rdi
  ULONGLONG TokenTrustLevel; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rax
  int v84; // ecx
  __int64 v85; // rcx
  __int16 v86; // dx
  __int64 v87; // rax
  ACL *v88; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v91; // rdx
  bool v92; // sf
  int *v93; // rcx
  int *v94; // rsi
  int v95; // r9d
  int v96; // r10d
  int v97; // r13d
  unsigned int **v98; // rcx
  unsigned int *v99; // rcx
  unsigned int v100; // eax
  _DWORD *v101; // rcx
  char v102; // al
  __int64 v103; // r9
  int *PoolWithTag; // rax
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // rcx
  PVOID v108; // rcx
  unsigned int v109; // ecx
  PVOID v110; // r13
  int v111; // eax
  int v112; // ecx
  __int64 *v113; // rbx
  _QWORD *v114; // rax
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r9
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // r8
  int v122; // ecx
  _QWORD *v123; // rax
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rcx
  int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // r8
  int v130; // ebx
  __int64 v131; // rdx
  int v132; // ebx
  __int64 v133; // r8
  int v134; // ebx
  unsigned int v135; // r13d
  int v136; // edx
  char v137; // al
  int v138; // r8d
  int v139; // ebx
  int v140; // r13d
  int v141; // ebx
  int v142; // eax
  int v143; // r13d
  __int64 v144; // rdx
  __int64 v145; // r8
  int v146; // ebx
  int v147; // edx
  int v148; // eax
  __int64 v149; // rcx
  __int64 v150; // rcx
  unsigned int v151; // ecx
  __int64 v152; // rcx
  __int64 v153; // rcx
  PVOID v154; // rcx
  __int64 v155; // rcx
  int v156; // eax
  int v157; // r13d
  int v158; // eax
  unsigned int v159; // edx
  unsigned int v160; // r8d
  int *v161; // rcx
  int v162; // ecx
  int v163; // r8d
  int v164; // ebx
  int v165; // ebx
  __int64 v166; // rcx
  __int64 v167; // r9
  int v168; // eax
  int v169; // eax
  __int64 v170; // rbx
  char v171; // si
  int v172; // edi
  ULONGLONG v173; // rax
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // rcx
  __int64 v177; // rcx
  __int64 v178; // [rsp+28h] [rbp-108h]
  int v179; // [rsp+30h] [rbp-100h]
  __int64 v180; // [rsp+38h] [rbp-F8h]
  int v181; // [rsp+40h] [rbp-F0h]
  __int64 v182; // [rsp+50h] [rbp-E0h]
  __int64 v183; // [rsp+58h] [rbp-D8h]
  __int64 v184; // [rsp+60h] [rbp-D0h]
  __int64 v185; // [rsp+68h] [rbp-C8h]
  char v187; // [rsp+B1h] [rbp-7Fh]
  char v188; // [rsp+B2h] [rbp-7Eh]
  bool v189; // [rsp+B3h] [rbp-7Dh] BYREF
  char v190; // [rsp+B4h] [rbp-7Ch]
  char v191; // [rsp+B5h] [rbp-7Bh]
  char v192; // [rsp+B6h] [rbp-7Ah]
  char v193; // [rsp+B7h] [rbp-79h]
  char v194; // [rsp+B8h] [rbp-78h]
  unsigned int v195; // [rsp+BCh] [rbp-74h]
  int v196; // [rsp+C0h] [rbp-70h]
  PVOID v197; // [rsp+C8h] [rbp-68h] BYREF
  unsigned int v198; // [rsp+D0h] [rbp-60h]
  int v199; // [rsp+D4h] [rbp-5Ch]
  int v200; // [rsp+D8h] [rbp-58h]
  int v201; // [rsp+DCh] [rbp-54h]
  unsigned int v202; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v203; // [rsp+E8h] [rbp-48h]
  int v204; // [rsp+F0h] [rbp-40h]
  int v205; // [rsp+F4h] [rbp-3Ch] BYREF
  int v206; // [rsp+F8h] [rbp-38h] BYREF
  unsigned int *v207; // [rsp+100h] [rbp-30h]
  int v208; // [rsp+10Ch] [rbp-24h] BYREF
  int v209; // [rsp+110h] [rbp-20h]
  int v210; // [rsp+114h] [rbp-1Ch] BYREF
  __int64 *PrimaryToken; // [rsp+118h] [rbp-18h]
  PVOID P; // [rsp+120h] [rbp-10h]
  __int64 v213; // [rsp+128h] [rbp-8h]
  int v214; // [rsp+130h] [rbp+0h]
  int v215[3]; // [rsp+138h] [rbp+8h] BYREF
  __int128 v216; // [rsp+144h] [rbp+14h]
  __int64 v217; // [rsp+154h] [rbp+24h]
  __int64 v218; // [rsp+160h] [rbp+30h] BYREF
  __int64 v219; // [rsp+168h] [rbp+38h]
  char v220[8]; // [rsp+170h] [rbp+40h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+178h] [rbp+48h] BYREF
  _BYTE v222[40]; // [rsp+1A0h] [rbp+70h] BYREF
  _DWORD v223[14]; // [rsp+1C8h] [rbp+98h] BYREF
  _BYTE v224[128]; // [rsp+200h] [rbp+D0h] BYREF
  _BYTE v225[128]; // [rsp+280h] [rbp+150h] BYREF
  _BYTE v226[128]; // [rsp+300h] [rbp+1D0h] BYREF

  v218 = 0LL;
  v219 = 0LL;
  v213 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v222, 0, sizeof(v222));
  v203 = 0LL;
  v187 = 0;
  v197 = 0LL;
  memset(v224, 0, sizeof(v224));
  memset(v225, 0, sizeof(v225));
  memset(v226, 0, sizeof(v226));
  v190 = 0;
  v192 = 0;
  v205 = -1;
  v215[0] = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v12 = *(_DWORD **)(a4 + 16);
  if ( !v12 )
    return 0;
  if ( !SubjectContext
    || !a3
    || *(_DWORD *)a3 != 56
    || (v13 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v14 = *(_DWORD **)(a3 + 8)) != 0LL && (*v14 != 16 || (v14[1] & 0xFFFFFFF8) != 0)
    || a5 && *a5 != 96 )
  {
    *v12 = -1073741811;
    return 0;
  }
  *v13 = 0;
  v15 = *(_DWORD **)(a4 + 16);
  v210 = 0;
  v206 = -1073741790;
  *v15 = -1073741790;
  v16 = *(_QWORD **)(a4 + 32);
  if ( v16 )
    *v16 = 0LL;
  v17 = 1;
  v18 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20) & 0xFDFFFFFF;
  AuthzBasepSetAccessReasons(v18, 0, 0, *(_QWORD *)(a4 + 24), 1);
  if ( !a6 )
  {
    v73 = *(_DWORD *)(a3 + 16);
    v74 = *(int **)(a4 + 8);
    if ( (v73 & 0x2000000) != 0 )
    {
      *v74 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      *v74 = *(_DWORD *)(a3 + 20) | v73;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return v17;
  }
  v20 = *(_QWORD *)(a3 + 8);
  if ( !v20 || !*(_QWORD *)(v20 + 8) )
  {
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  if ( SubjectContext->ClientToken && SubjectContext->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 16) )
  {
    v75 = *(_DWORD *)(a3 + 20);
    if ( !v75 )
    {
      **(_DWORD **)(a4 + 16) = -1073741790;
      return 0;
    }
    **(_DWORD **)(a4 + 8) = v75;
    **(_DWORD **)(a4 + 16) = 0;
    v76 = *(_QWORD **)(a4 + 32);
    if ( v76 )
      *v76 = 0LL;
    return v17;
  }
  v21 = *(_DWORD *)(a4 + 4);
  if ( v21 != 1 && v21 != *(_DWORD *)(a3 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
  {
    SeLockSubjectContext(SubjectContext);
    v20 = *(_QWORD *)(a3 + 8);
  }
  v22 = SepTrustLevelCheck(v19, *(_QWORD *)(v20 + 8), SubjectContext, 0LL, 0LL, 0, &v205);
  v24 = 0LL;
  **(_DWORD **)(a4 + 16) = v22;
  v25 = *(int **)(a4 + 16);
  if ( *v25 < 0 )
  {
    v77 = a2 == 0;
    goto LABEL_117;
  }
  v26 = v205;
  *v25 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v205 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
  v27 = *(int **)(a4 + 16);
  ClientToken = (__int64 *)SubjectContext->ClientToken;
  PrimaryToken = (__int64 *)SubjectContext->ClientToken;
  if ( *v27 < 0 )
  {
    if ( !ClientToken )
      PrimaryToken = (__int64 *)SubjectContext->PrimaryToken;
    v78 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
    v79 = *(_QWORD *)(a3 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)SubjectContext);
    SeLogAccessFailure((__int64)PrimaryToken, v81, v82, TokenTrustLevel, *(_QWORD *)(v79 + 8), v78, 0, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    AuthzBasepSetAccessReasons(v18 & ~v26, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  if ( !ClientToken )
  {
    ClientToken = (__int64 *)SubjectContext->PrimaryToken;
    PrimaryToken = ClientToken;
  }
  v29 = *(_QWORD *)(a3 + 8);
  if ( (*(_DWORD *)(v29 + 4) & 4) == 0 )
  {
    v30 = SepFilterCheck(*(_QWORD *)(v29 + 8), &v197, (__int64)ClientToken, 0, v215);
    v24 = 0LL;
    **(_DWORD **)(a4 + 16) = v30;
    v31 = *(int **)(a4 + 16);
    if ( *v31 < 0 )
      goto LABEL_116;
    *v31 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v215[0] & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
    if ( **(int **)(a4 + 16) < 0 )
    {
      SeLogAccessFailure(
        (__int64)ClientToken,
        (unsigned int)(*(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20)),
        (__int64)v23,
        0LL,
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
        *(_BYTE *)(a3 + 16) | *(_BYTE *)(a3 + 20),
        0,
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      AuthzBasepSetAccessReasons(v215[0] & v18, 10485760, 0, *(_QWORD *)(a4 + 24), 0);
      return 0;
    }
  }
  v32 = *(_QWORD *)(a3 + 8);
  v33 = *(_DWORD *)(v32 + 4);
  v34 = v33 & 1;
  v191 = v33 & 1;
  if ( (v33 & 2) != 0 )
  {
    LOBYTE(v23) = 1;
    if ( (ClientToken[25] & 0x2000) != 0 )
    {
      v35 = 1;
      goto LABEL_34;
    }
  }
  else
  {
    LOBYTE(v23) = 0;
  }
  v35 = 0;
LABEL_34:
  v194 = v35;
  if ( !SepAllowAccessUponLogoff && (ClientToken[25] & 0x20) == 0 )
  {
    v83 = ClientToken[27];
    if ( v83 )
    {
      if ( (*(_DWORD *)(v83 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        goto LABEL_116;
      }
    }
  }
  LOBYTE(v201) = 0;
  if ( !v35 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *(int **)(a3 + 32),
                               *(_QWORD *)(v32 + 8),
                               v23,
                               (__int64)ClientToken,
                               0,
                               a8,
                               (__int64)&v218);
    if ( **(int **)(a4 + 16) >= 0 )
    {
      v36 = SepMandatoryToDiscretionary(&v218, *(_DWORD *)(a3 + 16));
      v23->Header.LockNV = v36;
      if ( **(_DWORD **)(a4 + 16) < (int)v24 )
      {
        if ( (ClientToken[25] & 0x4000) == 0 || HIDWORD(v219) > 0x2000 )
        {
          if ( a2 == (_BYTE)v24 )
          {
            SeUnlockSubjectContext(SubjectContext);
            LOBYTE(v24) = 0;
          }
          AuthzBasepSetAccessReasons(v18 & ~(_DWORD)v218, 3145728, 0, *(_QWORD *)(a4 + 24), v24);
          return 0;
        }
        LOBYTE(v201) = 1;
      }
      else if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 && (ClientToken[25] & 0x4000) != 0 )
      {
        v84 = (unsigned __int8)v201;
        if ( HIDWORD(v219) <= 0x2000 )
          v84 = 1;
        v201 = v84;
      }
      goto LABEL_40;
    }
LABEL_116:
    v77 = a2 == 0;
LABEL_117:
    if ( v77 )
      SeUnlockSubjectContext(SubjectContext);
    return 0;
  }
LABEL_40:
  if ( !SepRmEnforceCap )
    goto LABEL_41;
  v85 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v86 = *(_WORD *)(v85 + 2);
  if ( (v86 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_41;
  if ( v86 >= 0 )
  {
    v88 = *(ACL **)(v85 + 24);
  }
  else
  {
    v87 = *(unsigned int *)(v85 + 12);
    if ( !(_DWORD)v87 )
    {
      v213 = v24;
LABEL_41:
      v37 = 0;
      goto LABEL_42;
    }
    v88 = (ACL *)(v85 + v87);
  }
  v213 = (__int64)v88;
  if ( !v88 )
    goto LABEL_41;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v88);
  v24 = 0LL;
  if ( ScopedPolicySid )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v91 = v203;
    v24 = 0LL;
    v92 = Cap < 0;
    v37 = 1;
    v187 = 1;
    if ( v92 )
      v91 = SepRmDefaultCap;
    v203 = v91;
  }
  else
  {
    v37 = 0;
  }
LABEL_42:
  if ( !v34 || (v39 = *(_DWORD *)(a3 + 16), (v39 & 0x2060000) != 0) || v37 )
  {
    IsOwner = SepTokenIsOwner((__int64)ClientToken, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), (__int64)v23, a8);
    v39 = *(_DWORD *)(a3 + 16);
    v24 = 0LL;
  }
  else
  {
    IsOwner = v24;
  }
  v188 = IsOwner;
  v40 = v39;
  if ( !IsOwner || (v39 & 0x2060000) == 0 )
    goto LABEL_45;
  v62 = v191;
  if ( v191 )
  {
LABEL_146:
    v40 = v39;
    if ( v62 )
      goto LABEL_77;
LABEL_45:
    v41 = v187;
    goto LABEL_46;
  }
  v63 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v64 = *(_WORD *)(v63 + 2);
  if ( (v64 & 4) == 0 )
  {
LABEL_143:
    v66 = v24;
    goto LABEL_76;
  }
  if ( v64 < 0 )
  {
    v65 = *(unsigned int *)(v63 + 16);
    if ( (_DWORD)v65 )
    {
      v66 = v63 + v65;
      goto LABEL_76;
    }
    goto LABEL_143;
  }
  v66 = *(_QWORD *)(v63 + 32);
LABEL_76:
  v67 = RtlpOwnerAcesPresent(0, v66);
  v24 = 0LL;
  if ( v67 )
  {
    v62 = 0;
    goto LABEL_146;
  }
LABEL_77:
  v68 = 393216;
  v69 = *(_DWORD *)(a3 + 16);
  v70 = v69 & 0x60000;
  v39 = 393216;
  v71 = v69 & 0x2000000;
  if ( !v71 )
    v39 = v70;
  v72 = v18 & 0x60000;
  *(_DWORD *)(a3 + 20) |= v39;
  if ( !v71 )
    v68 = v72;
  AuthzBasepSetAccessReasons(v68, 0x400000, 0, *(_QWORD *)(a4 + 24), v24);
  v24 = 0LL;
  v41 = v187;
  v40 = *(_DWORD *)(a3 + 16) & 0xFFF9FFFF;
  *(_DWORD *)(a3 + 16) = v40;
  if ( !v187 )
    v188 = 0;
LABEL_46:
  if ( !v40 )
  {
    v40 = v24;
    if ( !v41 && ((ClientToken[25] & 0x2000) != 0 || !v39) )
    {
      if ( a2 == (_BYTE)v24 )
      {
        SeUnlockSubjectContext(SubjectContext);
        LODWORD(v24) = 0;
      }
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20);
      **(_DWORD **)(a4 + 16) = v24;
      return v17;
    }
  }
  v42 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v43 = SubjectContext->PrimaryToken;
  v185 = *(_QWORD *)(a4 + 24);
  v184 = *(_QWORD *)(a4 + 16);
  v183 = *(_QWORD *)(a4 + 32);
  v182 = *(_QWORD *)(a4 + 8);
  v181 = *(_DWORD *)(a3 + 20);
  v180 = *(_QWORD *)(a3 + 32);
  v179 = v24;
  v178 = v24;
  v217 = v24;
  v44 = SubjectContext->ClientToken;
  v216 = 0LL;
  v215[2] = v39;
  v45 = SepAccessCheckEx(v42, v40, (_DWORD)v43, (_DWORD)v44, v40, v178, v179, v180, v181, a6, v182, v183, v184, v185);
  v49 = v203;
  v191 = v45;
  if ( !SepRmEnforceCap || (v214 = **(_DWORD **)(a4 + 16), v214 < 0) || !v41 )
  {
    v50 = v189;
    P = v197;
LABEL_49:
    if ( v194 || (v46 = *(unsigned int *)(a3 + 16), (v46 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v201 && !*(_WORD *)((char *)&v217 + 1) )
      {
        v50 = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        **(_DWORD **)(a4 + 8) = 0;
        AuthzBasepSetAccessReasons(~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
      }
    }
    else
    {
      v47 = *(char **)(a4 + 8);
      v51 = *(_DWORD *)v47;
      if ( !(_BYTE)v201 || !*(_WORD *)((char *)&v217 + 1) )
      {
        SepConstrainByMandatory((__int64)&v218, v46, v47, *(char **)(a4 + 16), &v189, 0);
        AuthzBasepSetAccessReasons(v51 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        v50 = v189;
      }
    }
    if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 )
    {
      v52 = *(int **)(a4 + 8);
      v53 = *(_DWORD **)(a4 + 16);
      v54 = *v52;
      if ( v205 == -1 || (v168 = v205 & v54, (v205 & v54) == v54) )
      {
        v55 = 0;
      }
      else
      {
        *v52 = v168;
        v55 = 1;
        if ( v168 )
        {
          *v53 = 0;
          v50 = 1;
        }
        else
        {
          v50 = 0;
          *v53 = -1073741790;
        }
      }
      AuthzBasepSetAccessReasons(v54 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
      v56 = *(int **)(a4 + 8);
      v57 = *(_DWORD **)(a4 + 16);
      v58 = *(_DWORD *)(a3 + 16);
      v59 = *v56;
      v192 = 0;
      if ( v215[0] != -1 )
      {
        v169 = v215[0] & v59;
        if ( (v215[0] & v59) != v59 )
        {
          v192 = 1;
          *v56 = v169;
          if ( (v58 & 0x2000000) != 0 )
          {
            v50 = v169 != 0;
            *v57 = v169 == 0 ? 0xC0000022 : 0;
          }
          else
          {
            *v57 = -1073741790;
            v50 = *v56 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v59 & ~**(_DWORD **)(a4 + 8), 10485760, 0, *(_QWORD *)(a4 + 24), 0);
    }
    else
    {
      v55 = v190;
    }
    v60 = PrimaryToken;
    if ( PrimaryToken )
    {
      if ( v55 || v192 || !DWORD2(v216) && (PrimaryToken[25] & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || BYTE3(v217)) )
      {
        v170 = *(_QWORD *)(a3 + 8);
        v171 = **(_DWORD **)(a4 + 16) >= 0;
        v172 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
        v173 = SepLocateTokenTrustLevel((__int64 *)SubjectContext);
        SeLogAccessFailure((__int64)PrimaryToken, v174, v175, v173, *(_QWORD *)(v170 + 8), v172, v171, 0);
        v60 = PrimaryToken;
        v17 = 1;
      }
      if ( **(int **)(a4 + 16) < 0 && !DWORD2(v216) && (v60[25] & 0x4000) != 0 )
      {
        if ( BYTE4(v217) )
        {
          v176 = *(_DWORD *)(a3 + 16) & ~((unsigned int)v216 | DWORD1(v216) | 0x2000000);
          if ( ((unsigned int)v176 & HIDWORD(v216)) == (_DWORD)v176 )
            SepLogLpacAccessFailure(v176, v46, v47, v48);
        }
      }
    }
    if ( v187 )
    {
      v177 = *(_QWORD *)(v203 + 32);
      if ( v177 )
        SepRmDereferenceCapTable(v177, v46, v47);
    }
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    SepFreeResourceInfo(P);
    if ( !v191 || !v50 )
      return 0;
    return v17;
  }
  v93 = *(int **)(a4 + 8);
  v94 = 0LL;
  LOBYTE(v209) = 0;
  v95 = 0;
  v200 = 0;
  v96 = *v93;
  v97 = v96;
  v98 = *(unsigned int ***)(a4 + 32);
  v204 = v96;
  v199 = v96;
  if ( v98 )
  {
    v99 = *v98;
    if ( v99 )
    {
      v100 = *v99;
      if ( *v99 )
      {
        v101 = v99 + 3;
        v47 = (char *)v100;
        do
        {
          if ( (int)v101[1] < 0 )
          {
            v46 = (unsigned int)*(v101 - 1);
            if ( *(_QWORD *)(v101 - 1) == SeSecurityPrivilege )
            {
              v95 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v101 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v101 - 1) == SeRelabelPrivilege )
            {
              v95 |= 0x80000u;
            }
          }
          v101 += 3;
          --v47;
        }
        while ( v47 );
        v200 = v95;
      }
    }
  }
  v196 = v96;
  LOBYTE(v47) = 1;
  LOBYTE(v46) = 1;
  v102 = SepAdtAuditThisEventWithContext(129LL, v46, v47, SubjectContext);
  v103 = 0LL;
  v193 = v102;
  if ( v102 )
  {
    PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v49 + 60), 0x41536553u);
    v94 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v107 = *(_QWORD *)(v49 + 32);
      if ( v107 )
        SepRmDereferenceCapTable(v107, v105, v106);
      v108 = v197;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(v108);
      return 0;
    }
    memset(PoolWithTag, 0, 8LL * *(unsigned int *)(v49 + 60));
    v103 = 0LL;
  }
  v109 = *(_DWORD *)(v49 + 60);
  v198 = 0;
  v195 = v109;
  if ( !v109 )
  {
    P = v197;
LABEL_263:
    if ( v193 )
    {
      if ( v97 != v204 )
      {
        v156 = v204 ^ v97;
        v157 = v199 & (v204 ^ v97);
        v158 = v204 & v156;
        v159 = 0;
        v202 = 0;
        v196 = v158;
        if ( v109 )
        {
          v160 = v195;
          v161 = v94;
          v207 = (unsigned int *)v94;
          do
          {
            if ( !v157 && !v158 )
              break;
            if ( *((_BYTE *)v161 + 4) )
            {
              v162 = *v161;
              v206 = v162;
              v163 = v159 << 24;
              v164 = v158 & (v162 ^ v158);
              if ( v164 )
              {
                AuthzBasepSetAccessReasons(v164, 0x80000000, v163, (__int64)v225, 0);
                v158 = v196;
                v103 = 0LL;
                v162 = v206;
              }
              v196 = ~v164 & v158;
              v165 = v162 & v157;
              if ( (v162 & v157) != 0 )
                AuthzBasepSetAccessReasons(v165, 0x80000000, v163, (__int64)v225, 0);
              v157 &= ~v165;
              AuthzBasepMergeAccessReasons(v224, v225, 4278190080LL, v103);
              v158 = v196;
              v103 = 0LL;
              v161 = (int *)v207;
              v159 = v202;
              v160 = v195;
            }
            ++v159;
            v161 += 2;
            v202 = v159;
            v207 = (unsigned int *)v161;
          }
          while ( v159 < v160 );
        }
      }
    }
    if ( v94 )
      ExFreePoolWithTag(v94, 0);
    v50 = v189;
    **(_DWORD **)(a4 + 16) = v214;
    **(_DWORD **)(a4 + 8) &= v204;
    v166 = *(_QWORD *)(a4 + 24);
    if ( **(int **)(a4 + 16) < 0 )
      v50 = 0;
    v189 = v50;
    AuthzBasepMergeAccessReasons(v166, v224, 0LL, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v224, 4278190080LL, v167);
    goto LABEL_49;
  }
  v110 = v197;
  P = v197;
  while ( 1 )
  {
    memset(v223, 0, 0x30uLL);
    v207 = *(unsigned int **)(v49 + 8LL * v198 + 64);
    if ( *((_QWORD *)v207 + 3) )
    {
      if ( !v110 )
      {
        v111 = AuthzBasepInitializeResourceClaimsFromSacl(v213, &v197);
        v110 = v197;
        v112 = (unsigned __int8)v209;
        if ( v111 < 0 )
          v112 = 1;
        P = v197;
        v209 = v112;
      }
      v113 = PrimaryToken;
      v114 = (_QWORD *)PrimaryToken[137];
      v115 = v114 ? v114[75] : 0LL;
      v116 = v114 ? v114[73] : 0LL;
      v117 = v114 ? v114[74] : 0LL;
      v118 = v114 ? v114[72] : 0LL;
      v119 = AuthzBasepEvaluateAceCondition(
               (__int64)PrimaryToken,
               PrimaryToken[97],
               (__int64)v110,
               v118,
               v117,
               v116,
               v115,
               *((_DWORD **)v207 + 3),
               v207[4],
               1u,
               0,
               &v208);
      v122 = v208;
      v195 = v119;
      if ( v208 != 1 )
      {
        v103 = 0LL;
        if ( v119 < 0 )
        {
          if ( !a2 )
            SeUnlockSubjectContext(SubjectContext);
          v152 = *(_QWORD *)(v203 + 32);
          if ( v152 )
            SepRmDereferenceCapTable(v152, v120, v121);
          v151 = v195;
          **(_DWORD **)(a4 + 8) = 0;
          **(_DWORD **)(a4 + 16) = v151;
          goto LABEL_244;
        }
        if ( (v113[25] & 0x10) != 0 )
        {
          v123 = (_QWORD *)v113[137];
          if ( v123 )
            v124 = v123[75];
          else
            v124 = 0LL;
          if ( v123 )
            v125 = v123[73];
          else
            v125 = 0LL;
          if ( v123 )
            v126 = v123[74];
          else
            v126 = 0LL;
          if ( v123 )
            v103 = v123[72];
          v127 = AuthzBasepEvaluateAceCondition(
                   (__int64)v113,
                   v113[97],
                   (__int64)v110,
                   v103,
                   v126,
                   v125,
                   v124,
                   *((_DWORD **)v207 + 3),
                   v207[4],
                   1u,
                   1u,
                   &v208);
          v103 = 0LL;
          v130 = v127;
          if ( v127 < 0 )
          {
            if ( !a2 )
              SeUnlockSubjectContext(SubjectContext);
            v150 = *(_QWORD *)(v203 + 32);
            if ( v150 )
              SepRmDereferenceCapTable(v150, v128, v129);
            **(_DWORD **)(a4 + 8) = 0;
            **(_DWORD **)(a4 + 16) = v130;
LABEL_244:
            SepFreeResourceInfo(v110);
            goto LABEL_256;
          }
          v122 = v208;
        }
        if ( !(_BYTE)v209 && v122 != 1 )
          goto LABEL_236;
      }
    }
    v132 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v132 < 0 )
      break;
    v134 = *(_DWORD *)(a3 + 16);
    if ( (v207[12] & 1) != 0 )
    {
      if ( (v134 & 0x2000000) == 0 )
        v134 |= *(_DWORD *)(a3 + 20);
      v135 = 0;
    }
    else
    {
      v135 = *(_DWORD *)(a3 + 20);
    }
    v195 = v135;
    memset(v223, 0, 0x30uLL);
    v137 = SepAccessCheckEx(
             (unsigned int)SecurityDescriptor,
             v136,
             SubjectContext->PrimaryToken,
             SubjectContext->ClientToken,
             v134 | 0x2000000u,
             (__int64)v223,
             1,
             *(_QWORD *)(a3 + 32),
             v135,
             a6,
             (__int64)&v210,
             0LL,
             (__int64)&v206,
             (__int64)v226);
    v103 = 0LL;
    v138 = v200;
    v139 = v200 | v223[7];
    v191 = v137;
    v140 = v210 & (v135 | **(_DWORD **)(a4 + 8));
    v210 &= v195 | **(_DWORD **)(a4 + 8);
    if ( v188 )
      v139 |= v140 & 0x60000;
    v141 = ~v223[8] & v139;
    v142 = v206;
    v204 &= v140;
    if ( !v204 )
      v142 = -1073741790;
    v214 = v142;
    if ( (v196 & (v196 ^ v141)) != 0 )
    {
      AuthzBasepSetAccessReasons(v196 & (v196 ^ v141), 327680, v198, (__int64)v224, 0);
      v196 &= v141;
      v138 = v200;
      v103 = 0LL;
    }
    if ( v193 )
    {
      if ( *((_QWORD *)v207 + 5) )
      {
        v143 = 0;
        v132 = SepBuildCapeSecurityDescriptor(v222);
        if ( v132 < 0 )
        {
          if ( !a2 )
            SeUnlockSubjectContext(SubjectContext);
          v153 = *(_QWORD *)(v203 + 32);
          if ( v153 )
            SepRmDereferenceCapTable(v153, v144, v145);
          v154 = v197;
          **(_DWORD **)(a4 + 8) = 0;
          goto LABEL_255;
        }
        v146 = *(_DWORD *)(a3 + 16);
        if ( (v207[12] & 0x100) != 0 )
        {
          if ( (v146 & 0x2000000) == 0 )
            v146 |= *(_DWORD *)(a3 + 20);
        }
        else
        {
          v143 = *(_DWORD *)(a3 + 20);
        }
        memset(v223, 0, 0x30uLL);
        SepAccessCheckEx(
          (unsigned int)v222,
          v147,
          SubjectContext->PrimaryToken,
          SubjectContext->ClientToken,
          v146,
          0LL,
          0,
          *(_QWORD *)(a3 + 32),
          v143,
          a6,
          (__int64)&v202,
          0LL,
          (__int64)v220,
          (__int64)v226);
        v148 = v200 | v202;
        v199 &= v202;
        v103 = 0LL;
      }
      else
      {
        v148 = v138 | v140;
        v199 &= v140;
      }
      v149 = v198;
      v94[2 * v198] = v148;
      LOBYTE(v94[2 * v149 + 1]) = 1;
    }
    v110 = v197;
    P = v197;
LABEL_236:
    v49 = v203;
    ++v198;
    v109 = *(_DWORD *)(v203 + 60);
    v195 = v109;
    if ( v198 >= v109 )
    {
      v97 = v199;
      goto LABEL_263;
    }
  }
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContext);
  v155 = *(_QWORD *)(v203 + 32);
  if ( v155 )
    SepRmDereferenceCapTable(v155, v131, v133);
  v154 = v110;
  **(_DWORD **)(a4 + 8) = 0;
LABEL_255:
  **(_DWORD **)(a4 + 16) = v132;
  SepFreeResourceInfo(v154);
LABEL_256:
  if ( v94 )
    ExFreePoolWithTag(v94, 0);
  return 0;
}
