/*
 * XREFs of SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140
 * Callers:
 *     SeAccessCheckByType @ 0x14000B010 (SeAccessCheckByType.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x14000C228 (SepFreeResourceInfo.c)
 *     SeCaptureObjectTypeList @ 0x14000C260 (SeCaptureObjectTypeList.c)
 *     SepMandatoryToDiscretionary @ 0x14000C468 (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14000C4A8 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14000C5A8 (SePrivilegePolicyCheck.c)
 *     SepTokenIsOwner @ 0x14000C730 (SepTokenIsOwner.c)
 *     SepReferenceTokenByHandle @ 0x140036B70 (SepReferenceTokenByHandle.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085530 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     RtlpOwnerAcesPresent @ 0x140088390 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByConstraintMask @ 0x140088484 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x1400884C0 (SepConstrainByMandatory.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     SepMandatoryIntegrityCheck @ 0x1400A91E0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x1400A96D0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x1400A9DD0 (SepAccessCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400D0200 (AuthzBasepEvaluateAceCondition.c)
 *     SeLogAccessFailure @ 0x14012777C (SeLogAccessFailure.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402D5980 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14031C5BC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14031C65C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x14031C714 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14031C864 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14031C978 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x14031C9A8 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x14031E824 (SepRmReferenceFindCap.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DD2F0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x140658A6C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140658B6C (SeReleaseSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeAccessCheckByTypeWithAdminlessChecks(
        int a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *Address,
        SIZE_T Length,
        int *a10,
        int *a11,
        int *a12,
        char a13,
        char a14)
{
  int *v16; // r8
  int *v17; // r9
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int8 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // r14d
  _DWORD *v25; // r12
  __int64 result; // rax
  SIZE_T v27; // rdi
  unsigned int v28; // r14d
  int v29; // edi
  unsigned __int64 v30; // rax
  PVOID v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int8 v37; // r13
  int v38; // eax
  int v39; // ecx
  struct _PRIVILEGE_SET *v40; // r15
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v42; // r12
  __int64 v43; // r8
  char IsOwner; // r13
  __int16 *v45; // rdi
  int v46; // edi
  int v47; // eax
  _BYTE *v48; // rcx
  int *v49; // r15
  __int64 v50; // rdi
  int *v51; // r13
  char v52; // r12
  _DWORD *v53; // rdi
  __int64 v54; // rax
  unsigned int v55; // r10d
  __int64 v56; // rcx
  unsigned __int8 v57; // bl
  int v58; // ecx
  unsigned int v59; // ecx
  __int64 v60; // rdx
  int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // edi
  unsigned int v64; // eax
  unsigned int v65; // eax
  struct _KTHREAD *v66; // rax
  int v67; // edx
  int v68; // r8d
  __int64 v69; // r9
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  int *v72; // rdx
  int *v73; // r8
  ULONG PrivilegeCount; // ecx
  ULONG v75; // eax
  unsigned int v76; // edx
  int v77; // eax
  unsigned int v78; // eax
  __int64 v79; // rax
  unsigned int v80; // ecx
  int *v81; // r8
  int *v82; // r9
  __int64 v83; // rcx
  ACL *v84; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v87; // rdx
  __int64 v88; // r15
  _BYTE *PoolWithTag; // rax
  int v90; // r10d
  char *v91; // rax
  int v92; // eax
  __int64 v93; // rcx
  _QWORD *v94; // rax
  __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r9
  int v99; // eax
  int v100; // ecx
  _QWORD *v101; // rax
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r9
  int v106; // ecx
  int v107; // eax
  unsigned int v108; // edi
  __int64 v109; // rcx
  int v110; // [rsp+20h] [rbp-218h]
  int v111; // [rsp+40h] [rbp-1F8h]
  char v112; // [rsp+A0h] [rbp-198h]
  int v113; // [rsp+A4h] [rbp-194h]
  unsigned __int8 v114; // [rsp+A8h] [rbp-190h]
  char v115; // [rsp+A9h] [rbp-18Fh]
  char v116; // [rsp+AAh] [rbp-18Eh]
  char v117; // [rsp+ABh] [rbp-18Dh] BYREF
  char v118; // [rsp+ACh] [rbp-18Ch] BYREF
  char v119[3]; // [rsp+ADh] [rbp-18Bh] BYREF
  int v120; // [rsp+B0h] [rbp-188h]
  int v121; // [rsp+B4h] [rbp-184h]
  PVOID Object; // [rsp+B8h] [rbp-180h] BYREF
  unsigned int v123; // [rsp+C0h] [rbp-178h]
  int v124; // [rsp+C4h] [rbp-174h] BYREF
  int v125; // [rsp+C8h] [rbp-170h]
  __int64 v126; // [rsp+D0h] [rbp-168h] BYREF
  char v127; // [rsp+DAh] [rbp-15Eh]
  PVOID v128; // [rsp+E0h] [rbp-158h]
  __int64 v129; // [rsp+E8h] [rbp-150h]
  int v130; // [rsp+F0h] [rbp-148h]
  PPRIVILEGE_SET Privileges; // [rsp+F8h] [rbp-140h] BYREF
  int *v132; // [rsp+100h] [rbp-138h]
  PVOID v133; // [rsp+108h] [rbp-130h] BYREF
  int v134; // [rsp+110h] [rbp-128h] BYREF
  int v135; // [rsp+114h] [rbp-124h] BYREF
  ACL *v136; // [rsp+118h] [rbp-120h]
  PVOID P; // [rsp+120h] [rbp-118h]
  __int64 v138; // [rsp+128h] [rbp-110h]
  __int64 v139; // [rsp+130h] [rbp-108h] BYREF
  __int64 v140; // [rsp+138h] [rbp-100h] BYREF
  __int64 v141; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v142; // [rsp+148h] [rbp-F0h]
  __int64 v143; // [rsp+150h] [rbp-E8h]
  int v144; // [rsp+158h] [rbp-E0h]
  __int64 v145; // [rsp+160h] [rbp-D8h] BYREF
  PVOID v146; // [rsp+168h] [rbp-D0h] BYREF
  __int64 v147; // [rsp+170h] [rbp-C8h] BYREF
  __int128 v148; // [rsp+178h] [rbp-C0h] BYREF
  __int64 v149; // [rsp+188h] [rbp-B0h] BYREF
  __int64 v150; // [rsp+190h] [rbp-A8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+198h] [rbp-A0h] BYREF
  _BYTE v152[4]; // [rsp+1B8h] [rbp-80h] BYREF
  char v153; // [rsp+1BCh] [rbp-7Ch] BYREF
  char v154; // [rsp+1C0h] [rbp-78h] BYREF
  char v155; // [rsp+1C4h] [rbp-74h] BYREF
  _BYTE SecurityDescriptor[104]; // [rsp+1D0h] [rbp-68h] BYREF
  unsigned int v158; // [rsp+258h] [rbp+20h] BYREF

  v158 = a4;
  P = 0LL;
  v128 = 0LL;
  v132 = 0LL;
  Object = 0LL;
  v126 = 0LL;
  v140 = 0LL;
  v124 = 0;
  v120 = 0;
  v148 = 0uLL;
  v139 = 0LL;
  Privileges = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v149 = 0LL;
  v150 = 0LL;
  v114 = 0;
  v133 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  v144 = 0;
  v136 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v138 = 0LL;
  v116 = 0;
  LOBYTE(v18) = 0;
  v115 = 0;
  LOBYTE(v19) = 0;
  v125 = v19;
  v127 = 0;
  v146 = 0LL;
  v119[0] = 0;
  v117 = 0;
  v118 = 0;
  v147 = 0LL;
  v121 = -1073741790;
  v135 = -1;
  v145 = 0xFFFFFFFFLL;
  v20 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  v112 = v20;
  if ( !v20 )
  {
    *a12 = 0;
    *a11 = v158;
    return 0LL;
  }
  if ( a13 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      v25 = Address;
      goto LABEL_19;
    }
    v27 = 4LL * a6;
    ProbeForWrite(a12, v27, 4u);
    ProbeForWrite(a11, v27, 4u);
  }
  else
  {
    v21 = (__int64)a12;
    if ( (unsigned __int64)a12 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    v22 = (__int64)a11;
    if ( (unsigned __int64)a11 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
  }
  v23 = (__int64)a10;
  if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
    v23 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v23 = *(_DWORD *)v23;
  v24 = Length;
  v25 = Address;
  ProbeForWrite(Address, (unsigned int)Length, 4u);
  if ( v25 && v24 >= 0x14 )
    *v25 = 0;
  if ( (a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v148 = *(_OWORD *)a7;
  result = 0LL;
LABEL_19:
  if ( (int)result < 0 )
    return result;
  v28 = v158;
  if ( (v158 & 0xF0000000) != 0 )
  {
    v29 = -1073741594;
    v31 = Object;
    goto LABEL_171;
  }
  v29 = SepReferenceTokenByHandle(a3, 8, v20, (int)&Object, v119, (__int64)&v147);
  v113 = v29;
  if ( v29 < 0 )
  {
    v31 = 0LL;
    Object = 0LL;
    v57 = v20;
    v52 = a13;
    goto LABEL_80;
  }
  v30 = a3 + 6;
  v31 = Object;
  if ( v30 > 2 )
  {
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      v29 = -1073741732;
      goto LABEL_171;
    }
    if ( *((int *)Object + 49) < 1 )
    {
      v29 = -1073741659;
      goto LABEL_171;
    }
  }
  v29 = SeCaptureObjectTypeList(a5, a6, v20, &v139);
  v113 = v29;
  if ( v29 < 0 )
    goto LABEL_172;
  v29 = SeCaptureSecurityDescriptor(a1, v20, 1, 0, (__int64)&v126);
  v113 = v29;
  if ( v29 < 0 )
    goto LABEL_172;
  if ( !v126 )
    goto LABEL_174;
  v129 = v126 + 2;
  v18 = *(unsigned __int16 *)(v126 + 2);
  if ( (v18 & 0x8000u) == 0LL )
  {
    v33 = *(_QWORD *)(v126 + 8);
  }
  else
  {
    v32 = *(unsigned int *)(v126 + 4);
    if ( !(_DWORD)v32 )
      goto LABEL_174;
    v33 = v126 + v32;
  }
  if ( !v33 )
    goto LABEL_174;
  if ( (v18 & 0x8000u) != 0LL )
  {
    v34 = *(unsigned int *)(v126 + 8);
    if ( (_DWORD)v34 )
    {
      v35 = v126 + v34;
      goto LABEL_35;
    }
LABEL_174:
    v29 = -1073741703;
    goto LABEL_171;
  }
  v35 = *(_QWORD *)(v126 + 16);
LABEL_35:
  if ( !v35 )
    goto LABEL_174;
  if ( v119[0] )
    LODWORD(v36) = v147;
  else
    v36 = *((_QWORD *)v31 + 138);
  v110 = v36;
  v29 = SepTrustLevelCheck(&v135, v126, 0LL, v31);
  v113 = v29;
  if ( v29 < 0 )
    goto LABEL_172;
  if ( (v135 & v28 & 0xFDFFFFFF) != (v28 & 0xFDFFFFFF) )
  {
    v117 = 1;
LABEL_183:
    v39 = -1073741790;
    v37 = a14;
LABEL_47:
    v16 = (int *)v114;
    goto LABEL_48;
  }
  LOBYTE(v17) = 1;
  v29 = SepFilterCheck(v126, (unsigned int)&v133, (_DWORD)v31, (_DWORD)v17, (__int64)&v145);
  v113 = v29;
  if ( v29 < 0 )
  {
LABEL_172:
    v57 = v112;
LABEL_173:
    v52 = a13;
    goto LABEL_80;
  }
  if ( ((unsigned int)v145 & v28 & 0xFDFFFFFF) != (v28 & 0xFDFFFFFF) )
  {
    v118 = 1;
    goto LABEL_183;
  }
  v37 = a14;
  v29 = SepMandatoryIntegrityCheck((unsigned int)&v148, v126, 0, (_DWORD)v31, 1, a14, (__int64)&v149);
  v113 = v29;
  if ( v29 < 0 )
    goto LABEL_172;
  v114 = 0;
  v38 = SepMandatoryToDiscretionary(&v149, v28);
  v39 = v38;
  if ( (v38 < 0 || (v28 & 0x2000000) != 0) && (*((_DWORD *)v31 + 50) & 0x4000) != 0 && HIDWORD(v150) <= 0x2000 )
  {
    LOBYTE(v16) = 1;
    v114 = 1;
  }
  if ( v38 >= 0 || (_BYTE)v16 )
  {
    v39 = SePrivilegePolicyCheck((unsigned int)&v158, (unsigned int)&v124, 0, (_DWORD)v31, (__int64)&Privileges, v112);
    v28 = v158;
    if ( !v158 )
    {
      v18 = (unsigned __int8)v125;
      if ( v124 )
        v18 = 1LL;
      v125 = v18;
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( v39 < 0 && !(_BYTE)v16 )
  {
    v52 = a13;
    if ( a13 )
    {
      v18 = 0LL;
      v123 = 0;
      v16 = a12;
      v17 = a11;
      while ( (unsigned int)v18 < a6 )
      {
        v16[(unsigned int)v18] = v39;
        v17[(unsigned int)v18] = 0;
        v18 = (unsigned int)(v18 + 1);
        v123 = v18;
      }
    }
    else
    {
      *a12 = v39;
      *a11 = 0;
    }
    v121 = v39;
    v29 = 0;
    v113 = 0;
    v57 = v112;
    goto LABEL_80;
  }
  v40 = Privileges;
  if ( Privileges )
  {
    PrivilegeCount = Privileges->PrivilegeCount;
    if ( Privileges->PrivilegeCount )
    {
      v75 = 12 * Privileges->PrivilegeCount;
      v76 = v75 + 8;
    }
    else
    {
      v76 = 8;
      v75 = 12 * Privileges->PrivilegeCount;
    }
    if ( v76 > (unsigned int)Length )
    {
      v77 = v75 + 8;
      if ( !PrivilegeCount )
        v77 = 8;
      *a10 = v77;
      v29 = -1073741789;
      v113 = -1073741789;
      v57 = v112;
      CmSiFreeMemory(v40);
      goto LABEL_173;
    }
    v78 = v75 + 8;
    if ( !PrivilegeCount )
      v78 = 8;
    memmove(v25, Privileges, v78);
    CmSiFreeMemory(v40);
  }
  else
  {
    if ( (unsigned int)Length < 0x14 )
    {
      *a10 = 20;
      v29 = -1073741789;
      v113 = -1073741789;
      v57 = v112;
      v52 = a13;
      goto LABEL_80;
    }
    *(_QWORD *)v25 = Privileges;
  }
  if ( a2 )
  {
    v29 = SeCaptureSid(a2, v110, 1, (__int64)&v140);
    v113 = v29;
    if ( v29 < 0 )
    {
      v140 = 0LL;
      goto LABEL_172;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v31 = Object;
  v42 = (PERESOURCE *)((char *)Object + 48);
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  IsOwner = SepTokenIsOwner(v31, v126, v43, v37);
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v31 + 50) & 0x20) == 0 )
  {
    v79 = *((_QWORD *)v31 + 27);
    if ( v79 )
    {
      if ( (*(_DWORD *)(v79 + 32) & 0x20) != 0 )
      {
        v52 = a13;
        if ( a13 )
        {
          v80 = 0;
          v123 = 0;
          v81 = a12;
          v82 = a11;
          while ( v80 < a6 )
          {
            v81[v80] = -1073741790;
            v82[v80++] = 0;
            v123 = v80;
          }
        }
        else
        {
          *a12 = -1073741790;
          *a11 = 0;
        }
        v121 = -1073741790;
        v29 = 0;
        v113 = 0;
        v57 = v112;
        ExReleaseResourceLite(*((PERESOURCE *)v31 + 6));
        KeLeaveCriticalRegion();
        SeReleaseSubjectContext(&SubjectContext);
        v28 = v158;
        goto LABEL_80;
      }
    }
  }
  v45 = (__int16 *)v129;
  if ( SepRmEnforceCap && (*(_WORD *)v129 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
  {
    if ( *(__int16 *)v129 >= 0 )
    {
      v84 = *(ACL **)(v126 + 24);
    }
    else
    {
      v83 = *(unsigned int *)(v126 + 12);
      if ( !(_DWORD)v83 )
      {
        v136 = 0LL;
        goto LABEL_55;
      }
      v84 = (ACL *)(v126 + v83);
    }
    v136 = v84;
    if ( v84 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid(v84);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid);
        v87 = v138;
        if ( Cap < 0 )
          v87 = SepRmDefaultCap;
        v138 = v87;
        v116 = 1;
      }
    }
  }
LABEL_55:
  v28 = v158;
  if ( (v158 & 0x2060000) != 0
    && IsOwner
    && ((*v45 & 4) == 0
      ? (v60 = 0LL)
      : *v45 >= 0
      ? (v60 = *(_QWORD *)(v126 + 32))
      : (v59 = *(_DWORD *)(v126 + 16)) == 0
      ? (v60 = 0LL)
      : (v60 = v126 + v59),
        !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v60)) )
  {
    if ( (v28 & 0x2000000) != 0 )
      v61 = 393216;
    else
      v61 = v28 & 0x60000;
    v46 = v61 | v124;
    v124 |= v61;
    v120 = v61;
    v28 &= 0xFFF9FFFF;
    v158 = v28;
  }
  else
  {
    v46 = v124;
  }
  if ( v28 || v116 && !(_BYTE)v125 )
  {
    v31 = Object;
    v47 = v120;
  }
  else
  {
    v31 = Object;
    if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 || (v47 = v120) == 0 )
    {
      v52 = a13;
      if ( a13 )
      {
        v71 = 0;
        v123 = 0;
        v72 = a12;
        v73 = a11;
        while ( v71 < a6 )
        {
          if ( v46 )
          {
            v72[v71] = 0;
            v121 = 0;
            v73[v71] = v46;
          }
          else
          {
            v72[v71] = -1073741790;
            v121 = -1073741790;
            v73[v71] = 0;
          }
          v123 = ++v71;
        }
      }
      else if ( v46 )
      {
        *a12 = 0;
        v121 = 0;
        *a11 = v46;
      }
      else
      {
        *a12 = -1073741790;
        v121 = -1073741790;
        *a11 = 0;
      }
      v29 = 0;
      v113 = 0;
      v57 = v112;
      ExReleaseResourceLite(*((PERESOURCE *)v31 + 6));
      KeLeaveCriticalRegion();
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_80;
    }
  }
  if ( a13 )
  {
    v88 = a6;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v48 = PoolWithTag;
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v49 = (int *)&PoolWithTag[4 * v88];
      v47 = v120;
      goto LABEL_61;
    }
    ExReleaseResourceLite(*v42);
    KeLeaveCriticalRegion();
    SeReleaseSubjectContext(&SubjectContext);
    v29 = -1073741670;
LABEL_171:
    v113 = v29;
    goto LABEL_172;
  }
  v48 = v152;
  P = v152;
  v49 = (int *)&v153;
LABEL_61:
  LODWORD(v141) = v47;
  v111 = v46;
  v50 = a6;
  SepAccessCheck(
    v126,
    v140,
    SubjectContext.PrimaryToken,
    (_DWORD)v31,
    v28,
    v139,
    a6,
    (__int64)&v148,
    v111,
    v112,
    (__int64)v48,
    0LL,
    (__int64)v49,
    a13,
    IsOwner,
    (__int64)&v141,
    (__int64)&v133,
    0LL,
    0LL,
    a14);
  if ( SepRmEnforceCap && (v90 = *v49, v125 = v90, v90 >= 0) && v116 )
  {
    if ( a13 )
    {
      v91 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v50, 0x61476553u);
      v128 = v91;
      if ( !v91 )
      {
        ExReleaseResourceLite(*v42);
        KeLeaveCriticalRegion();
        SeReleaseSubjectContext(&SubjectContext);
        v29 = -1073741670;
        v28 = v158;
        v31 = Object;
        goto LABEL_171;
      }
      v132 = (int *)&v91[4 * v50];
      v90 = *v49;
      v125 = *v49;
    }
    else
    {
      v128 = &v154;
      v132 = (int *)&v155;
    }
    v92 = *(_DWORD *)P;
    v120 = *(_DWORD *)P;
    LOBYTE(v50) = 0;
    LODWORD(Privileges) = v50;
    if ( a6 )
    {
      v29 = SepCopyObjectTypeList(v139, a6, &v146);
      v113 = v29;
      if ( v29 < 0 )
      {
        v28 = v158;
        v31 = Object;
        goto LABEL_172;
      }
      v90 = v125;
      v92 = v120;
      LOBYTE(v50) = (_BYTE)Privileges;
    }
    v93 = 0LL;
    v28 = v158;
    v31 = Object;
    while ( 1 )
    {
      v130 = v93;
      if ( (unsigned int)v93 >= *(_DWORD *)(v138 + 60) )
        break;
      v129 = *(_QWORD *)(v138 + 8 * v93 + 64);
      if ( !*(_QWORD *)(v129 + 24) )
        goto LABEL_278;
      if ( !v133 )
      {
        LODWORD(v50) = (unsigned __int8)v50;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl(v136, &v133) < 0 )
          LODWORD(v50) = 1;
        LODWORD(Privileges) = v50;
      }
      v94 = (_QWORD *)*((_QWORD *)v31 + 137);
      v95 = v94 ? v94[75] : 0LL;
      v96 = v94 ? v94[73] : 0LL;
      v97 = v94 ? v94[74] : 0LL;
      if ( v94 )
        v98 = v94[72];
      else
        LODWORD(v98) = 0;
      v99 = AuthzBasepEvaluateAceCondition(
              (_DWORD)v31,
              *((_QWORD *)v31 + 97),
              (_DWORD)v133,
              v98,
              v97,
              v96,
              v95,
              *(_QWORD *)(v129 + 24),
              *(_DWORD *)(v129 + 16),
              1,
              0,
              (__int64)&v134);
      v29 = v99;
      v113 = v99;
      v100 = v134;
      if ( v134 == 1 )
        goto LABEL_278;
      if ( v99 < 0 )
        goto LABEL_296;
      if ( (*((_DWORD *)v31 + 50) & 0x10) != 0 )
      {
        v101 = (_QWORD *)*((_QWORD *)v31 + 137);
        if ( v101 )
          v102 = v101[75];
        else
          v102 = 0LL;
        if ( v101 )
          v103 = v101[73];
        else
          v103 = 0LL;
        if ( v101 )
          v104 = v101[74];
        else
          v104 = 0LL;
        if ( v101 )
          v105 = v101[72];
        else
          LODWORD(v105) = 0;
        v29 = AuthzBasepEvaluateAceCondition(
                (_DWORD)v31,
                *((_QWORD *)v31 + 97),
                (_DWORD)v133,
                v105,
                v104,
                v103,
                v102,
                *(_QWORD *)(v129 + 24),
                *(_DWORD *)(v129 + 16),
                1,
                1,
                (__int64)&v134);
        v113 = v29;
        if ( v29 < 0 )
        {
LABEL_296:
          ExReleaseResourceLite(*v42);
          KeLeaveCriticalRegion();
          SeReleaseSubjectContext(&SubjectContext);
          goto LABEL_172;
        }
        v100 = v134;
      }
      LOBYTE(v50) = (_BYTE)Privileges;
      if ( (_BYTE)Privileges || v100 == 1 )
      {
LABEL_278:
        v29 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        v113 = v29;
        if ( v29 < 0 )
          goto LABEL_296;
        if ( (*(_DWORD *)(v129 + 48) & 1) != 0 )
        {
          if ( (v28 & 0x2000000) != 0 )
            v106 = v28;
          else
            v106 = v28 | v124;
          v107 = 0;
        }
        else
        {
          v106 = v28;
          v107 = v124;
        }
        v108 = a6;
        SepAccessCheck(
          (unsigned int)SecurityDescriptor,
          v140,
          SubjectContext.PrimaryToken,
          (_DWORD)v31,
          v106,
          (__int64)v146,
          a6,
          (__int64)&v148,
          v107,
          v112,
          (__int64)v128,
          0LL,
          (__int64)v132,
          a13,
          IsOwner,
          (__int64)&v141,
          (__int64)&v133,
          0LL,
          0LL,
          a14);
        if ( v115 )
          v92 = *(_DWORD *)v128 & v120;
        else
          v92 = *(_DWORD *)v128;
        v120 = v92;
        if ( v92 )
          v90 = *v132;
        else
          v90 = -1073741790;
        v125 = v90;
        v115 = 1;
        if ( v146 )
        {
          SepMergeObjectTypeListAccesses(v139, v146, v108);
          v92 = v120;
        }
        if ( v90 < 0 )
          break;
        LOBYTE(v50) = (_BYTE)Privileges;
      }
      else
      {
        v90 = v125;
        v92 = v120;
      }
      v93 = (unsigned int)(v130 + 1);
    }
    *v49 = v90;
    v51 = (int *)P;
    *(_DWORD *)P &= v92;
  }
  else
  {
    v28 = v158;
    v31 = Object;
    v51 = (int *)P;
  }
  ExReleaseResourceLite(*v42);
  KeLeaveCriticalRegion();
  SeReleaseSubjectContext(&SubjectContext);
  if ( (v28 & 0x2000000) != 0 )
  {
    if ( !v114 || !*(_WORD *)((char *)&v143 + 5) )
    {
      v52 = a13;
      if ( a13 )
        v62 = a6;
      else
        v62 = 0;
      SepConstrainByMandatory((unsigned int)&v149, v28, (_DWORD)v51, (_DWORD)v49, 0LL, v62);
      goto LABEL_66;
    }
  }
  else if ( v114 && !*(_WORD *)((char *)&v143 + 5) )
  {
    v52 = a13;
    if ( a13 )
    {
      v70 = 0;
      v123 = 0;
      v16 = a12;
      v17 = a11;
      while ( v70 < a6 )
      {
        v16[v70] = -1073741790;
        v17[v70++] = 0;
        v123 = v70;
      }
    }
    else
    {
      *a12 = -1073741790;
      *a11 = 0;
    }
    v121 = -1073741790;
    v29 = 0;
    v113 = 0;
    v57 = v112;
    goto LABEL_80;
  }
  v52 = a13;
LABEL_66:
  if ( (v28 & 0x2000000) != 0 )
  {
    v63 = a6;
    if ( v52 )
      v64 = a6;
    else
      v64 = 0;
    SepConstrainByConstraintMask(v135, v28, (_DWORD)v51, (_DWORD)v49, 0LL, v64, (__int64)&v117);
    if ( v52 )
      v65 = v63;
    else
      v65 = 0;
    SepConstrainByConstraintMask(v145, v28, (_DWORD)v51, (_DWORD)v49, 0LL, v65, (__int64)&v118);
  }
  v18 = (__int64)a12;
  *a12 = *v49;
  v16 = a11;
  *a11 = *v51;
  v121 = *v49;
  v17 = v132;
  v53 = v128;
  if ( SepRmEnforceCap && v115 && *v49 >= 0 )
  {
    *(_DWORD *)v18 = *v132;
    *v16 &= *v53;
    v121 = *v17;
  }
  if ( v52 )
  {
    v54 = 1LL;
    v55 = a6;
    while ( 1 )
    {
      v123 = v54;
      if ( (unsigned int)v54 >= v55 )
        break;
      v56 = v54;
      *(_DWORD *)(v56 * 4 + v18) = v49[v54];
      v16[v56] = v51[v54];
      if ( SepRmEnforceCap && v115 && v49[v56] >= 0 )
      {
        *(_DWORD *)(v56 * 4 + v18) = v17[v56];
        v16[v56] &= v53[v56];
      }
      v54 = v123 + 1;
    }
  }
  v29 = 0;
  v113 = 0;
  v28 = v158;
  v31 = Object;
  v57 = v112;
LABEL_80:
  if ( v126 && v31 )
  {
    if ( v117 || v118 )
    {
LABEL_131:
      v66 = KeGetCurrentThread();
      --v66->KernelApcDisable;
      v31 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      if ( v119[0] )
        LODWORD(v69) = v147;
      else
        v69 = *((_QWORD *)v31 + 138);
      v28 = v158;
      SeLogAccessFailure((_DWORD)v31, v67, v68, v69, v126, v158 | v124, v121 >= 0, 0);
      ExReleaseResourceLite(*((PERESOURCE *)v31 + 6));
      KeLeaveCriticalRegion();
      v29 = v113;
      v58 = HIDWORD(v142);
LABEL_86:
      if ( v29 >= 0 && v121 < 0 && !v58 && (*((_DWORD *)v31 + 50) & 0x4000) != 0 )
      {
        if ( (_BYTE)v144 )
        {
          v109 = v28 & ~(HIDWORD(v141) | (unsigned int)v142 | 0x2000000);
          if ( ((unsigned int)v109 & (unsigned int)v143) == (_DWORD)v109 )
            SepLogLpacAccessFailure(v109, v18, v16, v17);
        }
      }
      goto LABEL_88;
    }
    v58 = HIDWORD(v142);
    if ( HIDWORD(v142) || (*((_DWORD *)v31 + 50) & 0x4000) == 0 )
      goto LABEL_86;
    if ( v29 >= 0 )
    {
      if ( v121 >= 0 && !HIBYTE(v143) )
        goto LABEL_86;
      goto LABEL_131;
    }
  }
LABEL_88:
  if ( v52 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v128 )
      ExFreePoolWithTag(v128, 0);
  }
  if ( v31 )
    ObfDereferenceObject(v31);
  if ( v139 )
    SeFreeCapturedObjectTypeList(v139, v18, v16, v17);
  if ( v140 )
  {
    LOBYTE(v16) = 1;
    SeReleaseSid(v140, v57, v16, v17);
  }
  if ( v126 )
    SeReleaseSecurityDescriptor(v126, v57, 0LL, v17);
  if ( v116 )
    SepRmDereferenceCap(v138, v18, v16, v17);
  if ( v146 )
    ExFreePoolWithTag(v146, 0);
  SepFreeResourceInfo(v133);
  return (unsigned int)v29;
}
