/*
 * XREFs of SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4
 * Callers:
 *     SepCommonAccessCheckEx @ 0x14015B78C (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x14001311C (SepFreeResourceInfo.c)
 *     SepTokenIsOwner @ 0x1400131F0 (SepTokenIsOwner.c)
 *     SepMandatoryToDiscretionary @ 0x140013294 (SepMandatoryToDiscretionary.c)
 *     RtlpOwnerAcesPresent @ 0x1400133C0 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x1400134B4 (SepConstrainByMandatory.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8F44 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x1400AA818 (SepTrustLevelCheck.c)
 *     AuthzBasepSetAccessReasons @ 0x140114820 (AuthzBasepSetAccessReasons.c)
 *     SeLogAccessFailure @ 0x140118F70 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepAccessCheckEx @ 0x14015BED8 (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FEB4C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x1402FECA4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1402FEDF0 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x1402FEF34 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140300D50 (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x1403250F0 (AuthzBasepMergeAccessReasons.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 *     SeUnlockSubjectContext @ 0x1405E72C0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405E7300 (SeLockSubjectContext.c)
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
  char v17; // si
  unsigned int v18; // r13d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // r8
  __int64 v24; // r9
  int *v25; // rdx
  int v26; // ebx
  int *v27; // rax
  _QWORD *ClientToken; // rdi
  __int64 v29; // rcx
  int v30; // eax
  int *v31; // rdx
  __int64 v32; // rdx
  char v33; // bl
  int v34; // eax
  char v35; // cl
  int v36; // eax
  char v37; // al
  char IsOwner; // al
  int v39; // ebx
  unsigned int v40; // edi
  char v41; // al
  _QWORD *v42; // r13
  __int64 v43; // rcx
  PACCESS_TOKEN v44; // r8
  __int64 v45; // rcx
  PACCESS_TOKEN v46; // r9
  char v47; // al
  __int64 v48; // rdx
  char *v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbx
  PVOID v52; // rbx
  bool v53; // r13
  int v54; // edx
  int v55; // edi
  int *v56; // r8
  _DWORD *v57; // rcx
  int v58; // edx
  int *v59; // rdx
  _DWORD *v60; // r9
  int v61; // ecx
  int v62; // r8d
  _DWORD *v63; // rcx
  __int64 v65; // rcx
  __int16 v66; // ax
  __int64 v67; // rax
  __int64 v68; // rdx
  char v69; // al
  int v70; // ecx
  int v71; // edx
  int v72; // eax
  int v73; // edx
  int v74; // r13d
  int v75; // eax
  int *v76; // rcx
  int v77; // ecx
  _QWORD *v78; // rax
  bool v79; // zf
  int v80; // esi
  __int64 v81; // rdi
  ULONGLONG TokenTrustLevel; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rax
  int v86; // ecx
  __int64 v87; // rcx
  __int64 v88; // rax
  ACL *v89; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  bool v92; // sf
  int *v93; // rcx
  int *v94; // rdi
  int v95; // r9d
  int v96; // r10d
  unsigned int **v97; // rcx
  unsigned int *v98; // rcx
  unsigned int v99; // eax
  _DWORD *v100; // rcx
  char v101; // r9
  int *PoolWithTag; // rax
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  PVOID v107; // rcx
  unsigned int v108; // ecx
  unsigned int v109; // edx
  __int64 v110; // rax
  int v111; // eax
  int v112; // ecx
  _QWORD *v113; // rax
  __int64 v114; // r8
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r9
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // ecx
  _QWORD *v123; // rax
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  int v131; // ebx
  int v132; // edx
  char v133; // al
  int v134; // r8d
  int v135; // ebx
  int v136; // edx
  int v137; // ebx
  int v138; // eax
  __int64 v139; // rdx
  int v140; // ebx
  __int64 v141; // r8
  __int64 v142; // r9
  int v143; // ebx
  int v144; // edx
  unsigned __int64 v145; // rcx
  int v146; // r8d
  int v147; // eax
  int v148; // r13d
  int v149; // eax
  unsigned int v150; // edx
  unsigned int v151; // r8d
  int *v152; // rcx
  int v153; // ecx
  int v154; // r8d
  int v155; // ebx
  int v156; // ebx
  __int64 v157; // rcx
  unsigned __int64 v158; // rcx
  __int64 v159; // rcx
  int v160; // ecx
  __int64 v161; // rcx
  PVOID v162; // rcx
  int v163; // ecx
  __int64 v164; // rcx
  int v165; // eax
  int v166; // eax
  int v167; // edi
  __int64 v168; // rbx
  char v169; // si
  ULONGLONG v170; // rax
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // [rsp+28h] [rbp-108h]
  int v176; // [rsp+30h] [rbp-100h]
  __int64 v177; // [rsp+38h] [rbp-F8h]
  int v178; // [rsp+40h] [rbp-F0h]
  __int64 v179; // [rsp+50h] [rbp-E0h]
  __int64 v180; // [rsp+58h] [rbp-D8h]
  __int64 v181; // [rsp+60h] [rbp-D0h]
  __int64 v182; // [rsp+68h] [rbp-C8h]
  char v183; // [rsp+B0h] [rbp-80h]
  char v185; // [rsp+B2h] [rbp-7Eh]
  bool v186; // [rsp+B3h] [rbp-7Dh] BYREF
  char v187; // [rsp+B4h] [rbp-7Ch]
  char v188; // [rsp+B5h] [rbp-7Bh]
  int v189; // [rsp+B8h] [rbp-78h]
  char v190; // [rsp+BCh] [rbp-74h]
  char v191; // [rsp+BDh] [rbp-73h]
  char v192; // [rsp+BEh] [rbp-72h]
  int v193; // [rsp+C0h] [rbp-70h]
  PVOID P; // [rsp+C8h] [rbp-68h] BYREF
  int v195; // [rsp+D0h] [rbp-60h]
  int v196; // [rsp+D4h] [rbp-5Ch]
  int v197; // [rsp+D8h] [rbp-58h]
  unsigned int v198; // [rsp+DCh] [rbp-54h] BYREF
  __int64 v199; // [rsp+E0h] [rbp-50h]
  int v200; // [rsp+E8h] [rbp-48h]
  int v201; // [rsp+ECh] [rbp-44h] BYREF
  int v202; // [rsp+F0h] [rbp-40h] BYREF
  int v203; // [rsp+F4h] [rbp-3Ch]
  _QWORD *PrimaryToken; // [rsp+F8h] [rbp-38h]
  PVOID v205; // [rsp+100h] [rbp-30h]
  int v206; // [rsp+10Ch] [rbp-24h] BYREF
  int v207; // [rsp+110h] [rbp-20h]
  int v208; // [rsp+114h] [rbp-1Ch] BYREF
  int v209; // [rsp+118h] [rbp-18h]
  __int64 v210; // [rsp+120h] [rbp-10h]
  __int64 v211; // [rsp+128h] [rbp-8h]
  int v212; // [rsp+130h] [rbp+0h] BYREF
  unsigned __int64 v213; // [rsp+138h] [rbp+8h]
  __int64 v214; // [rsp+140h] [rbp+10h]
  __int64 v215; // [rsp+148h] [rbp+18h]
  __int64 v216; // [rsp+150h] [rbp+20h]
  int v217; // [rsp+158h] [rbp+28h]
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
  v211 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v222, 0, sizeof(v222));
  v199 = 0LL;
  v183 = 0;
  P = 0LL;
  memset(v224, 0, sizeof(v224));
  memset(v225, 0, sizeof(v225));
  memset(v226, 0, sizeof(v226));
  v190 = 0;
  v191 = 0;
  v201 = -1;
  v212 = -1;
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
  v208 = 0;
  v202 = -1073741790;
  *v15 = -1073741790;
  v16 = *(_QWORD **)(a4 + 32);
  if ( v16 )
    *v16 = 0LL;
  v17 = 1;
  v18 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20) & 0xFDFFFFFF;
  AuthzBasepSetAccessReasons(v18, 0, 0, *(_QWORD *)(a4 + 24), 1);
  if ( !a6 )
  {
    v75 = *(_DWORD *)(a3 + 16);
    v76 = *(int **)(a4 + 8);
    if ( (v75 & 0x2000000) != 0 )
    {
      *v76 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      *v76 = *(_DWORD *)(a3 + 20) | v75;
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
    v77 = *(_DWORD *)(a3 + 20);
    if ( !v77 )
    {
      **(_DWORD **)(a4 + 16) = -1073741790;
      return 0;
    }
    **(_DWORD **)(a4 + 8) = v77;
    **(_DWORD **)(a4 + 16) = 0;
    v78 = *(_QWORD **)(a4 + 32);
    if ( v78 )
      *v78 = 0LL;
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
  v22 = SepTrustLevelCheck(v19, *(_QWORD *)(v20 + 8), SubjectContext, 0LL, 0LL, 0, &v201);
  v24 = 0LL;
  **(_DWORD **)(a4 + 16) = v22;
  v25 = *(int **)(a4 + 16);
  if ( *v25 < 0 )
  {
    v79 = a2 == 0;
    goto LABEL_115;
  }
  v26 = v201;
  *v25 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v201 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
  v27 = *(int **)(a4 + 16);
  ClientToken = SubjectContext->ClientToken;
  PrimaryToken = SubjectContext->ClientToken;
  if ( *v27 < 0 )
  {
    if ( !ClientToken )
      PrimaryToken = SubjectContext->PrimaryToken;
    v80 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
    v81 = *(_QWORD *)(a3 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)SubjectContext);
    SeLogAccessFailure((__int64)PrimaryToken, v83, v84, TokenTrustLevel, *(_QWORD *)(v81 + 8), v80, 0, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    AuthzBasepSetAccessReasons(v18 & ~v26, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  if ( !ClientToken )
  {
    ClientToken = SubjectContext->PrimaryToken;
    PrimaryToken = ClientToken;
  }
  v29 = *(_QWORD *)(a3 + 8);
  if ( (*(_DWORD *)(v29 + 4) & 4) == 0 )
  {
    v30 = SepFilterCheck(*(_QWORD *)(v29 + 8), &P, (__int64)ClientToken, 0, &v212);
    v24 = 0LL;
    **(_DWORD **)(a4 + 16) = v30;
    v31 = *(int **)(a4 + 16);
    if ( *v31 < 0 )
      goto LABEL_114;
    *v31 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v212 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
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
      AuthzBasepSetAccessReasons(v212 & v18, 10485760, 0, *(_QWORD *)(a4 + 24), 0);
      return 0;
    }
  }
  v32 = *(_QWORD *)(a3 + 8);
  v33 = *(_DWORD *)(v32 + 4) & 1;
  v79 = (*(_DWORD *)(v32 + 4) & 2) == 0;
  v34 = *(_DWORD *)(v32 + 4) & 2;
  v188 = v33;
  LOBYTE(v23) = !v79;
  if ( !v34 || (v35 = 1, (ClientToken[25] & 0x2000) == 0) )
    v35 = 0;
  v192 = v35;
  if ( !SepAllowAccessUponLogoff && (ClientToken[25] & 0x20) == 0 )
  {
    v85 = ClientToken[27];
    if ( v85 )
    {
      if ( (*(_DWORD *)(v85 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        goto LABEL_114;
      }
    }
  }
  LOBYTE(v197) = 0;
  if ( !v35 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *(int **)(a3 + 32),
                               *(_QWORD *)(v32 + 8),
                               (char)v23,
                               (__int64)ClientToken,
                               0,
                               a8,
                               (__int64)&v218);
    if ( **(int **)(a4 + 16) >= 0 )
    {
      v36 = SepMandatoryToDiscretionary(&v218, *(_DWORD *)(a3 + 16));
      *v23 = v36;
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
        LOBYTE(v197) = 1;
      }
      else if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 && (ClientToken[25] & 0x4000) != 0 )
      {
        v86 = (unsigned __int8)v197;
        if ( HIDWORD(v219) <= 0x2000 )
          v86 = 1;
        v197 = v86;
      }
      goto LABEL_39;
    }
LABEL_114:
    v79 = a2 == 0;
LABEL_115:
    if ( v79 )
      SeUnlockSubjectContext(SubjectContext);
    return 0;
  }
LABEL_39:
  if ( !SepRmEnforceCap )
    goto LABEL_40;
  v87 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  LODWORD(v32) = *(unsigned __int16 *)(v87 + 2);
  if ( (v32 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_40;
  if ( (v32 & 0x8000u) == 0LL )
  {
    v89 = *(ACL **)(v87 + 24);
  }
  else
  {
    v88 = *(unsigned int *)(v87 + 12);
    if ( !(_DWORD)v88 )
    {
      v211 = v24;
LABEL_40:
      v37 = 0;
      goto LABEL_41;
    }
    v89 = (ACL *)(v87 + v88);
  }
  v211 = (__int64)v89;
  if ( !v89 )
    goto LABEL_40;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v89);
  v24 = 0LL;
  if ( ScopedPolicySid )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v32 = v199;
    v24 = 0LL;
    v92 = Cap < 0;
    v37 = 1;
    v183 = 1;
    if ( v92 )
      v32 = SepRmDefaultCap;
    v199 = v32;
  }
  else
  {
    v37 = 0;
  }
LABEL_41:
  if ( !v33 || (v39 = *(_DWORD *)(a3 + 16), (v39 & 0x2060000) != 0) || v37 )
  {
    IsOwner = SepTokenIsOwner((__int64)ClientToken, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), (__int64)v23, a8);
    v39 = *(_DWORD *)(a3 + 16);
    v24 = 0LL;
  }
  else
  {
    IsOwner = v24;
  }
  v185 = IsOwner;
  v40 = v39;
  if ( !IsOwner || (v39 & 0x2060000) == 0 )
    goto LABEL_44;
  if ( v188 )
    goto LABEL_76;
  v65 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v66 = *(_WORD *)(v65 + 2);
  if ( (v66 & 4) == 0 )
  {
LABEL_141:
    v68 = v24;
    goto LABEL_75;
  }
  if ( v66 < 0 )
  {
    v67 = *(unsigned int *)(v65 + 16);
    if ( (_DWORD)v67 )
    {
      v68 = v65 + v67;
      goto LABEL_75;
    }
    goto LABEL_141;
  }
  v68 = *(_QWORD *)(v65 + 32);
LABEL_75:
  v69 = RtlpOwnerAcesPresent(0, v68);
  v24 = 0LL;
  if ( v69 )
  {
LABEL_44:
    v41 = v183;
    goto LABEL_45;
  }
LABEL_76:
  v70 = 393216;
  v71 = *(_DWORD *)(a3 + 16);
  v72 = v71 & 0x60000;
  v39 = 393216;
  v73 = v71 & 0x2000000;
  if ( !v73 )
    v39 = v72;
  v74 = v18 & 0x60000;
  *(_DWORD *)(a3 + 20) |= v39;
  if ( !v73 )
    v70 = v74;
  AuthzBasepSetAccessReasons(v70, 0x400000, 0, *(_QWORD *)(a4 + 24), v24);
  v24 = 0LL;
  v41 = v183;
  v40 = *(_DWORD *)(a3 + 16) & 0xFFF9FFFF;
  *(_DWORD *)(a3 + 16) = v40;
  if ( !v183 )
  {
    LOBYTE(v32) = 0;
    v185 = 0;
    goto LABEL_46;
  }
LABEL_45:
  LOBYTE(v32) = v185;
LABEL_46:
  v42 = PrimaryToken;
  if ( !v40 )
  {
    v40 = v24;
    if ( !v41 && ((PrimaryToken[25] & 0x2000) != 0 || !v39) )
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
  v43 = *(_QWORD *)(a3 + 8);
  v44 = SubjectContext->PrimaryToken;
  v214 = 0LL;
  v215 = 0LL;
  v45 = *(_QWORD *)(v43 + 8);
  v216 = 0LL;
  v217 = 0;
  v182 = *(_QWORD *)(a4 + 24);
  v181 = *(_QWORD *)(a4 + 16);
  v180 = *(_QWORD *)(a4 + 32);
  v179 = *(_QWORD *)(a4 + 8);
  v178 = *(_DWORD *)(a3 + 20);
  v177 = *(_QWORD *)(a3 + 32);
  v176 = v24;
  v175 = v24;
  v46 = SubjectContext->ClientToken;
  LODWORD(v214) = v39;
  v47 = SepAccessCheckEx(v45, v32, (_DWORD)v44, (_DWORD)v46, v40, v175, v176, v177, v178, a6, v179, v180, v181, v182);
  v51 = v199;
  v210 = v199;
  v188 = v47;
  if ( !SepRmEnforceCap || (v203 = **(_DWORD **)(a4 + 16), v203 < 0) || !v183 )
  {
    v52 = P;
    v53 = v186;
    v205 = P;
LABEL_49:
    if ( v192 || (v54 = *(_DWORD *)(a3 + 16), (v54 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v197 && !*(_WORD *)((char *)&v216 + 5) )
      {
        v53 = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        **(_DWORD **)(a4 + 8) = 0;
        AuthzBasepSetAccessReasons(~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
      }
    }
    else
    {
      v49 = *(char **)(a4 + 8);
      v55 = *(_DWORD *)v49;
      if ( !(_BYTE)v197 || !*(_WORD *)((char *)&v216 + 5) )
      {
        SepConstrainByMandatory((__int64)&v218, v54, v49, *(char **)(a4 + 16), &v186, 0);
        AuthzBasepSetAccessReasons(v55 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        v53 = v186;
      }
    }
    if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 )
    {
      v56 = *(int **)(a4 + 8);
      v57 = *(_DWORD **)(a4 + 16);
      v190 = 0;
      v58 = *v56;
      if ( v201 != -1 )
      {
        v165 = v201 & v58;
        if ( (v201 & v58) != v58 )
        {
          v190 = 1;
          *v56 = v165;
          if ( v165 )
          {
            *v57 = 0;
            v53 = 1;
          }
          else
          {
            v53 = 0;
            *v57 = -1073741790;
          }
        }
      }
      AuthzBasepSetAccessReasons(v58 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
      v59 = *(int **)(a4 + 8);
      v60 = *(_DWORD **)(a4 + 16);
      v61 = *(_DWORD *)(a3 + 16);
      v62 = *v59;
      v191 = 0;
      if ( v212 != -1 )
      {
        v166 = v212 & v62;
        if ( (v212 & v62) != v62 )
        {
          v191 = 1;
          *v59 = v166;
          if ( (v61 & 0x2000000) != 0 )
          {
            v53 = v166 != 0;
            *v60 = v166 == 0 ? 0xC0000022 : 0;
          }
          else
          {
            *v60 = -1073741790;
            v53 = *v59 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v62 & ~**(_DWORD **)(a4 + 8), 10485760, 0, *(_QWORD *)(a4 + 24), 0);
    }
    v63 = PrimaryToken;
    if ( PrimaryToken )
    {
      if ( v190
        || v191
        || !HIDWORD(v215) && (PrimaryToken[25] & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || HIBYTE(v216)) )
      {
        v167 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
        v168 = *(_QWORD *)(a3 + 8);
        v169 = **(_DWORD **)(a4 + 16) >= 0;
        v170 = SepLocateTokenTrustLevel((__int64 *)SubjectContext);
        SeLogAccessFailure((__int64)PrimaryToken, v171, v172, v170, *(_QWORD *)(v168 + 8), v167, v169, 0);
        v63 = PrimaryToken;
        v52 = v205;
        v17 = 1;
      }
      if ( **(int **)(a4 + 16) < 0 && !HIDWORD(v215) && (v63[50] & 0x4000) != 0 )
      {
        if ( (_BYTE)v217 )
        {
          v173 = *(_DWORD *)(a3 + 16) & ~(HIDWORD(v214) | (unsigned int)v215 | 0x2000000);
          if ( ((unsigned int)v173 & (unsigned int)v216) == (_DWORD)v173 )
            SepLogLpacAccessFailure(v173, 0LL, v49);
        }
      }
    }
    if ( v183 )
    {
      v174 = *(_QWORD *)(v210 + 32);
      if ( v174 )
        SepRmDereferenceCapTable(v174, 0LL, v49, v50);
    }
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    SepFreeResourceInfo(v52);
    if ( !v188 || !v53 )
      return 0;
    return v17;
  }
  v93 = *(int **)(a4 + 8);
  v94 = 0LL;
  LOBYTE(v207) = 0;
  v95 = 0;
  v195 = 0;
  v96 = *v93;
  v97 = *(unsigned int ***)(a4 + 32);
  v200 = v96;
  v196 = v96;
  if ( v97 )
  {
    v98 = *v97;
    if ( v98 )
    {
      v99 = *v98;
      if ( *v98 )
      {
        v100 = v98 + 3;
        v49 = (char *)v99;
        do
        {
          if ( (int)v100[1] < 0 )
          {
            v48 = (unsigned int)*(v100 - 1);
            if ( *(_QWORD *)(v100 - 1) == SeSecurityPrivilege )
            {
              v95 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v100 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v100 - 1) == SeRelabelPrivilege )
            {
              v95 |= 0x80000u;
            }
          }
          v100 += 3;
          --v49;
        }
        while ( v49 );
        v195 = v95;
      }
    }
  }
  v209 = v96;
  LOBYTE(v49) = 1;
  LOBYTE(v48) = 1;
  v187 = SepAdtAuditThisEventWithContext(130LL, v48, v49, SubjectContext);
  v101 = v187;
  if ( v187 )
  {
    PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v51 + 60), 0x41536553u);
    v94 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v106 = *(_QWORD *)(v51 + 32);
      if ( v106 )
        SepRmDereferenceCapTable(v106, v103, v104, v105);
      v107 = P;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(v107);
      return 0;
    }
    memset(PoolWithTag, 0, 8LL * *(unsigned int *)(v51 + 60));
    v101 = v187;
  }
  v108 = *(_DWORD *)(v51 + 60);
  v109 = 0;
  v52 = P;
  v205 = P;
  v193 = 0;
  v189 = v108;
  if ( !v108 )
  {
LABEL_233:
    if ( v101 )
    {
      if ( v196 != v200 )
      {
        v148 = v196 & (v200 ^ v196);
        v149 = v200 & (v200 ^ v196);
        v150 = 0;
        v193 = v149;
        v198 = 0;
        if ( v108 )
        {
          v151 = v189;
          v152 = v94;
          v213 = (unsigned __int64)v94;
          do
          {
            if ( !v148 && !v149 )
              break;
            if ( *((_BYTE *)v152 + 4) )
            {
              v153 = *v152;
              v202 = v153;
              v154 = v150 << 24;
              v155 = v149 & (v153 ^ v149);
              if ( v155 )
              {
                AuthzBasepSetAccessReasons(v155, 0x80000000, v154, (__int64)v225, 0);
                v149 = v193;
                v153 = v202;
              }
              v193 = ~v155 & v149;
              v156 = v153 & v148;
              if ( (v153 & v148) != 0 )
                AuthzBasepSetAccessReasons(v156, 0x80000000, v154, (__int64)v225, 0);
              v148 &= ~v156;
              AuthzBasepMergeAccessReasons(v224, v225, 4278190080LL);
              v149 = v193;
              v152 = (int *)v213;
              v150 = v198;
              v151 = v189;
            }
            ++v150;
            v152 += 2;
            v198 = v150;
            v213 = (unsigned __int64)v152;
          }
          while ( v150 < v151 );
          v52 = v205;
        }
      }
    }
    if ( v94 )
      ExFreePoolWithTag(v94, 0);
    v53 = v186;
    **(_DWORD **)(a4 + 16) = v203;
    **(_DWORD **)(a4 + 8) &= v200;
    v157 = *(_QWORD *)(a4 + 24);
    if ( **(int **)(a4 + 16) < 0 )
      v53 = 0;
    v186 = v53;
    AuthzBasepMergeAccessReasons(v157, v224, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v224, 4278190080LL);
    goto LABEL_49;
  }
  v110 = v210;
  while ( 1 )
  {
    v213 = v109;
    v199 = *(_QWORD *)(v110 + 8LL * v109 + 64);
    if ( *(_QWORD *)(v199 + 24) )
    {
      if ( !v52 )
      {
        v111 = AuthzBasepInitializeResourceClaimsFromSacl(v211, &P);
        v52 = P;
        v112 = (unsigned __int8)v207;
        if ( v111 < 0 )
          v112 = 1;
        v205 = P;
        v207 = v112;
      }
      v113 = (_QWORD *)v42[137];
      v114 = v113 ? v113[75] : 0LL;
      v115 = v113 ? v113[73] : 0LL;
      v116 = v113 ? v113[74] : 0LL;
      v117 = v113 ? v113[72] : 0LL;
      v118 = AuthzBasepEvaluateAceCondition(
               (__int64)v42,
               v42[97],
               (__int64)v52,
               v117,
               v116,
               v115,
               v114,
               *(_DWORD **)(v199 + 24),
               *(_DWORD *)(v199 + 16),
               1u,
               0,
               &v206);
      v122 = v206;
      v189 = v118;
      if ( v206 != 1 )
        break;
    }
LABEL_210:
    v203 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v203 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v164 = *(_QWORD *)(v210 + 32);
      if ( v164 )
        SepRmDereferenceCapTable(v164, v128, v129, v130);
      v163 = v203;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v163;
      v162 = v52;
      goto LABEL_265;
    }
    v131 = *(_DWORD *)(a3 + 16);
    if ( (*(_DWORD *)(v199 + 48) & 1) != 0 )
    {
      if ( (v131 & 0x2000000) == 0 )
        v131 |= *(_DWORD *)(a3 + 20);
      v189 = 0;
    }
    else
    {
      v189 = *(_DWORD *)(a3 + 20);
    }
    memset(v223, 0, 0x30uLL);
    v133 = SepAccessCheckEx(
             (unsigned int)SecurityDescriptor,
             v132,
             SubjectContext->PrimaryToken,
             SubjectContext->ClientToken,
             v131 | 0x2000000u,
             (__int64)v223,
             1,
             *(_QWORD *)(a3 + 32),
             v189,
             a6,
             (__int64)&v208,
             0LL,
             (__int64)&v202,
             (__int64)v226);
    v134 = v195;
    v135 = v195 | v223[7];
    v188 = v133;
    v136 = v208 & (v189 | **(_DWORD **)(a4 + 8));
    v189 = v136;
    v208 = v136;
    if ( v185 )
      v135 |= v136 & 0x60000;
    v137 = ~v223[8] & v135;
    v138 = v202;
    v200 &= v136;
    if ( !v200 )
      v138 = -1073741790;
    v203 = v138;
    if ( (v209 & (v209 ^ v137)) != 0 )
    {
      AuthzBasepSetAccessReasons(v209 & (v209 ^ v137), 327680, v193, (__int64)v224, 0);
      v209 &= v137;
      v136 = v189;
      v134 = v195;
    }
    v101 = v187;
    if ( !v187 )
      goto LABEL_253;
    if ( !*(_QWORD *)(v199 + 40) )
    {
      v158 = v213;
      v196 &= v136;
      LOBYTE(v94[2 * v213 + 1]) = 1;
      v94[2 * v158] = v134 | v136;
LABEL_253:
      v52 = P;
      v205 = P;
      goto LABEL_232;
    }
    v140 = SepBuildCapeSecurityDescriptor(v222);
    if ( v140 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v161 = *(_QWORD *)(v210 + 32);
      if ( v161 )
        SepRmDereferenceCapTable(v161, v139, v141, v142);
      v162 = P;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v140;
LABEL_265:
      SepFreeResourceInfo(v162);
      goto LABEL_266;
    }
    v143 = *(_DWORD *)(a3 + 16);
    if ( (*(_DWORD *)(v199 + 48) & 0x100) != 0 )
    {
      if ( (v143 & 0x2000000) == 0 )
        v143 |= *(_DWORD *)(a3 + 20);
      v189 = 0;
    }
    else
    {
      v189 = *(_DWORD *)(a3 + 20);
    }
    memset(v223, 0, 0x30uLL);
    SepAccessCheckEx(
      (unsigned int)v222,
      v144,
      SubjectContext->PrimaryToken,
      SubjectContext->ClientToken,
      v143,
      0LL,
      0,
      *(_QWORD *)(a3 + 32),
      v189,
      a6,
      (__int64)&v198,
      0LL,
      (__int64)v220,
      (__int64)v226);
    v145 = v213;
    v146 = v198 & v196;
    v147 = v195 | v198;
    v52 = P;
    LOBYTE(v94[2 * v213 + 1]) = 1;
    v94[2 * v145] = v147;
    v196 = v146;
    v205 = v52;
LABEL_231:
    v101 = v187;
LABEL_232:
    v110 = v210;
    v109 = v193 + 1;
    v193 = v109;
    v108 = *(_DWORD *)(v210 + 60);
    v189 = v108;
    if ( v109 >= v108 )
      goto LABEL_233;
  }
  if ( v118 < 0 )
    goto LABEL_254;
  if ( (v42[25] & 0x10) == 0 )
  {
LABEL_208:
    if ( !(_BYTE)v207 && v122 != 1 )
      goto LABEL_231;
    goto LABEL_210;
  }
  v123 = (_QWORD *)v42[137];
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
    v127 = v123[72];
  else
    v127 = 0LL;
  v189 = AuthzBasepEvaluateAceCondition(
           (__int64)v42,
           v42[97],
           (__int64)v52,
           v127,
           v126,
           v125,
           v124,
           *(_DWORD **)(v199 + 24),
           *(_DWORD *)(v199 + 16),
           1u,
           1u,
           &v206);
  if ( v189 >= 0 )
  {
    v122 = v206;
    goto LABEL_208;
  }
LABEL_254:
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContext);
  v159 = *(_QWORD *)(v210 + 32);
  if ( v159 )
    SepRmDereferenceCapTable(v159, v119, v120, v121);
  v160 = v189;
  **(_DWORD **)(a4 + 8) = 0;
  **(_DWORD **)(a4 + 16) = v160;
  SepFreeResourceInfo(v52);
LABEL_266:
  if ( v94 )
    ExFreePoolWithTag(v94, 0);
  return 0;
}
