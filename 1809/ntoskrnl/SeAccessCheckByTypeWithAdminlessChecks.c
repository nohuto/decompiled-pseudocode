/*
 * XREFs of SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0
 * Callers:
 *     SeAccessCheckByType @ 0x1400A9280 (SeAccessCheckByType.c)
 * Callees:
 *     SepConstrainByConstraintMask @ 0x1400132D4 (SepConstrainByConstraintMask.c)
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     RtlpOwnerAcesPresent @ 0x1400133C0 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x1400134B4 (SepConstrainByMandatory.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x1400528F0 (SepAccessCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A8D50 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCaptureObjectTypeList @ 0x1400AA604 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x1400AA818 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x1400AA918 (SePrivilegePolicyCheck.c)
 *     SepSidInTokenSidHash @ 0x1400AAAA0 (SepSidInTokenSidHash.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400AAC70 (ExpReleaseResourceForThreadLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SeLogAccessFailure @ 0x140118F70 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     ExpFastResourceLegacyRelease @ 0x140164C28 (ExpFastResourceLegacyRelease.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166464 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FEB4C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x1402FEBEC (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x1402FECA4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1402FEDF0 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x1402FEF04 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1402FEF34 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140300D50 (SepRmReferenceFindCap.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeAccessCheckByTypeWithAdminlessChecks(
        int a1,
        void *a2,
        void *a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        volatile void *Address,
        SIZE_T Length,
        int *a10,
        volatile void *a11,
        volatile void *a12,
        char a13,
        char a14)
{
  _DWORD *v16; // r12
  _DWORD *v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  int v20; // ecx
  unsigned __int8 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r12d
  _DWORD *v26; // r14
  __int64 result; // rax
  SIZE_T v28; // rbx
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // esi
  char v36; // r15
  char v37; // cl
  PVOID v38; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v40; // rsi
  ULONG_PTR v41; // rbx
  __int64 v42; // rcx
  __int16 *v43; // r14
  __int64 v44; // rcx
  __int64 v45; // rbx
  char v46; // r12
  __int64 v47; // r13
  unsigned int v48; // ebx
  unsigned int v49; // r15d
  PERESOURCE *v50; // r14
  int v51; // eax
  unsigned int *v52; // rcx
  int *v53; // rsi
  char v54; // r15
  char *v55; // r14
  __int16 v56; // cx
  bool v57; // zf
  PERESOURCE v58; // rcx
  int v59; // ebx
  _DWORD *v60; // r11
  unsigned int m; // eax
  __int64 v62; // rcx
  PVOID v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // ebx
  unsigned int v69; // eax
  unsigned int v70; // eax
  int v71; // eax
  struct _KTHREAD *v72; // rax
  PVOID v73; // rbx
  int v74; // edx
  int v75; // r8d
  __int64 v76; // r9
  unsigned int k; // ecx
  _DWORD *v78; // r9
  unsigned int v79; // ecx
  _DWORD *v80; // rdx
  _DWORD *v81; // r8
  unsigned int i; // ecx
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v84; // r8
  unsigned __int8 v85; // al
  struct _KTHREAD *v86; // rdx
  int v87; // ecx
  int v88; // ecx
  int v89; // eax
  unsigned int v90; // edx
  int v91; // eax
  unsigned int v92; // eax
  void *OwnerEntryForLegacyShim; // r14
  __int64 v94; // rax
  _DWORD *v95; // r8
  _DWORD *v96; // r9
  unsigned int j; // ecx
  __int64 v98; // rax
  ACL *v99; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v102; // rdx
  __int64 v103; // rsi
  unsigned int *PoolWithTag; // rax
  int v105; // r14d
  __int64 v106; // rbx
  char *v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // r13
  PVOID v110; // r15
  __int64 v111; // rbx
  int v112; // eax
  int v113; // ecx
  _QWORD *v114; // rax
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r9
  int v119; // eax
  int v120; // ecx
  _QWORD *v121; // rax
  __int64 v122; // r8
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r9
  unsigned int v126; // eax
  unsigned int v127; // ecx
  int *v128; // r14
  PVOID v129; // rbx
  int v130; // edx
  __int64 v131; // rcx
  __int64 v132; // rcx
  int Object; // [rsp+20h] [rbp-228h]
  char v134; // [rsp+A0h] [rbp-1A8h]
  int v135; // [rsp+A4h] [rbp-1A4h]
  char v136; // [rsp+A8h] [rbp-1A0h]
  char v137; // [rsp+AAh] [rbp-19Eh]
  char v138; // [rsp+ABh] [rbp-19Dh] BYREF
  char v139; // [rsp+ACh] [rbp-19Ch]
  char v140; // [rsp+ADh] [rbp-19Bh] BYREF
  char v141[2]; // [rsp+AEh] [rbp-19Ah] BYREF
  int v142; // [rsp+B0h] [rbp-198h]
  PVOID v143; // [rsp+B8h] [rbp-190h] BYREF
  unsigned int v144; // [rsp+C0h] [rbp-188h]
  int v145; // [rsp+C4h] [rbp-184h]
  unsigned int v146; // [rsp+C8h] [rbp-180h] BYREF
  int v147; // [rsp+CCh] [rbp-17Ch]
  __int64 v148; // [rsp+D0h] [rbp-178h] BYREF
  char v149; // [rsp+DAh] [rbp-16Eh]
  int v150; // [rsp+DCh] [rbp-16Ch]
  PVOID v151; // [rsp+E0h] [rbp-168h]
  PVOID v152; // [rsp+E8h] [rbp-160h]
  char *v153; // [rsp+F0h] [rbp-158h]
  PVOID P; // [rsp+F8h] [rbp-150h] BYREF
  PERESOURCE *v155; // [rsp+100h] [rbp-148h]
  int v156; // [rsp+108h] [rbp-140h] BYREF
  int v157; // [rsp+10Ch] [rbp-13Ch] BYREF
  ACL *v158; // [rsp+110h] [rbp-138h]
  PVOID v159; // [rsp+118h] [rbp-130h] BYREF
  __int64 v160; // [rsp+120h] [rbp-128h] BYREF
  __int64 v161; // [rsp+128h] [rbp-120h]
  __int64 v162; // [rsp+130h] [rbp-118h] BYREF
  __int64 v163; // [rsp+138h] [rbp-110h]
  __int64 v164; // [rsp+140h] [rbp-108h]
  int v165; // [rsp+148h] [rbp-100h]
  PVOID Src; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v167; // [rsp+158h] [rbp-F0h] BYREF
  __int64 v168; // [rsp+160h] [rbp-E8h] BYREF
  PVOID v169; // [rsp+168h] [rbp-E0h] BYREF
  __int16 *v170; // [rsp+170h] [rbp-D8h]
  __int64 v171; // [rsp+178h] [rbp-D0h] BYREF
  __int64 v172; // [rsp+180h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+188h] [rbp-C0h] BYREF
  char v174; // [rsp+1A8h] [rbp-A0h] BYREF
  _BYTE v175[4]; // [rsp+1ACh] [rbp-9Ch] BYREF
  char v176; // [rsp+1B0h] [rbp-98h] BYREF
  char v177; // [rsp+1B4h] [rbp-94h] BYREF
  PVOID v178; // [rsp+1B8h] [rbp-90h] BYREF
  _DWORD *v179; // [rsp+1C0h] [rbp-88h]
  _DWORD *v180; // [rsp+1C8h] [rbp-80h]
  __int128 v181; // [rsp+1D0h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[104]; // [rsp+1E0h] [rbp-68h] BYREF
  unsigned int v184; // [rsp+268h] [rbp+20h] BYREF

  v184 = a4;
  v16 = a11;
  v179 = a11;
  v180 = a12;
  v152 = 0LL;
  v151 = 0LL;
  v153 = 0LL;
  v143 = 0LL;
  v148 = 0LL;
  v160 = 0LL;
  v146 = 0;
  v145 = 0;
  v159 = 0LL;
  Src = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  v136 = 0;
  P = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  v165 = 0;
  v158 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v161 = 0LL;
  v139 = 0;
  LOBYTE(v19) = 0;
  v137 = 0;
  LOBYTE(v20) = 0;
  v147 = v20;
  v149 = 0;
  v169 = 0LL;
  v138 = 0;
  v140 = 0;
  v141[0] = 0;
  v168 = 0LL;
  v142 = -1073741790;
  v157 = -1;
  v167 = 0xFFFFFFFFLL;
  v21 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v134 = v21;
  if ( !v21 )
  {
    *(_DWORD *)a12 = 0;
    *v16 = v184;
    return 0LL;
  }
  if ( a13 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      v25 = Length;
      v26 = Address;
      goto LABEL_19;
    }
    v28 = 4LL * a6;
    ProbeForWrite(a12, v28, 4u);
    ProbeForWrite(v16, v28, 4u);
  }
  else
  {
    v22 = (__int64)a12;
    if ( (unsigned __int64)a12 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    v23 = (__int64)v16;
    if ( (unsigned __int64)v16 >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
  }
  v24 = (__int64)a10;
  if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
    v24 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v24 = *(_DWORD *)v24;
  v25 = Length;
  v26 = Address;
  ProbeForWrite(Address, (unsigned int)Length, 4u);
  if ( v26 && v25 >= 0x14 )
    *v26 = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v181 = *a7;
  result = 0LL;
LABEL_19:
  if ( (int)result < 0 )
    return result;
  if ( (v184 & 0xF0000000) != 0 )
  {
    v29 = -1073741594;
    goto LABEL_208;
  }
  v138 = 0;
  v168 = 0LL;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    v29 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v21, &v178, 0LL);
    v143 = v178;
LABEL_23:
    v135 = v29;
    goto LABEL_24;
  }
  v71 = SepReferenceTokenUsingPseudoHandle((__int64)a3, &v143, &v138, &v168);
  v29 = v71;
  if ( v71 >= 0 )
    goto LABEL_23;
  v135 = v71;
LABEL_24:
  if ( v29 < 0 )
  {
    v143 = 0LL;
    goto LABEL_186;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v143 + 48) != 2 )
    {
      v29 = -1073741732;
      goto LABEL_208;
    }
    if ( *((int *)v143 + 49) < 1 )
    {
      v29 = -1073741659;
      goto LABEL_208;
    }
  }
  v29 = SeCaptureObjectTypeList(a5, a6, v21, &v159);
  v135 = v29;
  if ( v29 < 0 || (v29 = SeCaptureSecurityDescriptor(a1, v21, 1, 0, (__int64)&v148), v135 = v29, v29 < 0) )
  {
LABEL_186:
    v54 = a13;
    goto LABEL_96;
  }
  if ( !v148 )
    goto LABEL_212;
  v170 = (__int16 *)(v148 + 2);
  v19 = *(unsigned __int16 *)(v148 + 2);
  if ( (v19 & 0x8000u) == 0LL )
  {
    v31 = *(_QWORD *)(v148 + 8);
  }
  else
  {
    v30 = *(unsigned int *)(v148 + 4);
    if ( !(_DWORD)v30 )
      goto LABEL_212;
    v31 = v148 + v30;
  }
  if ( !v31 )
    goto LABEL_212;
  if ( (v19 & 0x8000u) != 0LL )
  {
    v32 = *(unsigned int *)(v148 + 8);
    if ( (_DWORD)v32 )
    {
      v33 = v148 + v32;
      goto LABEL_38;
    }
LABEL_212:
    v29 = -1073741703;
    goto LABEL_208;
  }
  v33 = *(_QWORD *)(v148 + 16);
LABEL_38:
  if ( !v33 )
    goto LABEL_212;
  if ( v138 )
    LODWORD(v34) = v168;
  else
    v34 = *((_QWORD *)v143 + 138);
  Object = v34;
  v29 = SepTrustLevelCheck(&v157, v148, 0LL, v143);
  v135 = v29;
  if ( v29 < 0 )
    goto LABEL_186;
  v35 = v184 & 0xFDFFFFFF;
  if ( (v157 & v184 & 0xFDFFFFFF) != (v184 & 0xFDFFFFFF) )
  {
    v140 = 1;
LABEL_221:
    v19 = 3221225506LL;
    v36 = a14;
LABEL_51:
    v37 = v136;
    goto LABEL_52;
  }
  v29 = SepFilterCheck(v148, &P, (__int64)v143, 1, (int *)&v167);
  v135 = v29;
  if ( v29 < 0 )
    goto LABEL_186;
  if ( ((unsigned int)v167 & v35) != v35 )
  {
    v141[0] = 1;
    goto LABEL_221;
  }
  v36 = a14;
  v29 = SepMandatoryIntegrityCheck((int *)&v181, v148, 0, (__int64)v143, 1, a14, (__int64)&v171);
  v135 = v29;
  if ( v29 < 0 )
    goto LABEL_186;
  v37 = 0;
  v136 = 0;
  if ( (_DWORD)v172 && (v35 & (unsigned int)v171) != v35 )
  {
    v19 = 3221225506LL;
  }
  else
  {
    v19 = 0LL;
    if ( (v184 & 0x2000000) == 0 )
      goto LABEL_49;
  }
  if ( (*((_DWORD *)v143 + 50) & 0x4000) != 0 && HIDWORD(v172) <= 0x2000 )
  {
    v37 = 1;
    v136 = 1;
  }
  else
  {
    v37 = 0;
  }
LABEL_49:
  if ( (int)v19 >= 0 || v37 )
  {
    v19 = (unsigned int)SePrivilegePolicyCheck(
                          (unsigned int)&v184,
                          (unsigned int)&v146,
                          0,
                          (_DWORD)v143,
                          (__int64)&Src,
                          v21);
    if ( !v184 )
    {
      v87 = (unsigned __int8)v147;
      if ( v146 )
        v87 = 1;
      v147 = v87;
    }
    goto LABEL_51;
  }
LABEL_52:
  if ( (int)v19 < 0 && !v37 )
  {
    v54 = a13;
    v17 = a12;
    v18 = a11;
    if ( a13 )
    {
      for ( i = 0; ; ++i )
      {
        v144 = i;
        if ( i >= a6 )
          break;
        v17[i] = v19;
        v18[i] = 0;
      }
    }
    else
    {
      *(_DWORD *)a12 = v19;
      *v18 = 0;
    }
    v142 = v19;
    v29 = 0;
    v135 = 0;
    goto LABEL_96;
  }
  v38 = Src;
  if ( Src )
  {
    v88 = *(_DWORD *)Src;
    v89 = 12 * *(_DWORD *)Src;
    v90 = v89 + 8;
    if ( !*(_DWORD *)Src )
      v90 = 8;
    if ( v90 > v25 )
    {
      v91 = v89 + 8;
      if ( !v88 )
        v91 = 8;
      *a10 = v91;
      v29 = -1073741789;
      v135 = -1073741789;
      ExFreePoolWithTag(v38, 0);
      goto LABEL_186;
    }
    v92 = v89 + 8;
    if ( !v88 )
      v92 = 8;
    memmove(v26, Src, v92);
    ExFreePoolWithTag(v38, 0);
  }
  else
  {
    if ( v25 < 0x14 )
    {
      *a10 = 20;
      v29 = -1073741789;
      v135 = -1073741789;
      v54 = a13;
      goto LABEL_96;
    }
    *(_QWORD *)v26 = Src;
  }
  if ( a2 )
  {
    v29 = SeCaptureSid(a2, Object, 1, (__int64)&v160);
    v135 = v29;
    if ( v29 < 0 )
    {
      v160 = 0LL;
      goto LABEL_186;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v40 = (char *)v143;
  v155 = (PERESOURCE *)((char *)v143 + 48);
  v41 = *((_QWORD *)v143 + 6);
  v42 = *(unsigned __int16 *)(v41 + 26);
  if ( (v42 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v41, 0LL, 0LL);
  LOWORD(v42) = *(_WORD *)(v41 + 26) & 1;
  if ( (_WORD)v42 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v84 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v84->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (v84->MiscFlags & 0x400) == 0 && !v84->WaitBlock[3].SpareLong )
      goto LABEL_339;
    v40 = (char *)v143;
  }
  if ( (_WORD)v42 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v42);
    if ( !(unsigned __int8)ExAcquireFastResourceShared(v41, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    ExpAcquireResourceSharedLite(*((_QWORD *)v143 + 6), 1);
  }
  v43 = v170;
  if ( *v170 >= 0 )
  {
    v45 = *(_QWORD *)(v148 + 8);
  }
  else
  {
    v44 = *(unsigned int *)(v148 + 4);
    if ( (_DWORD)v44 )
      v45 = v148 + v44;
    else
      v45 = 0LL;
  }
  v46 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v40 + 232), 0, 0, v36);
  if ( v46 && *((_DWORD *)v40 + 32) )
    v46 = SepSidInToken((__int64)v40, 0LL, v45, 0LL, 1, 0, v36);
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v40 + 50) & 0x20) == 0 )
  {
    v94 = *((_QWORD *)v40 + 27);
    if ( v94 )
    {
      if ( (*(_DWORD *)(v94 + 32) & 0x20) != 0 )
      {
        v54 = a13;
        v95 = a12;
        v96 = a11;
        if ( a13 )
        {
          for ( j = 0; ; ++j )
          {
            v144 = j;
            if ( j >= a6 )
              break;
            v95[j] = -1073741790;
            v96[j] = 0;
          }
        }
        else
        {
          *(_DWORD *)a12 = -1073741790;
          *v96 = 0;
        }
        v142 = -1073741790;
        v135 = 0;
        ExReleaseResourceLite(*((PERESOURCE *)v40 + 6));
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v29 = 0;
        goto LABEL_96;
      }
    }
  }
  if ( !SepRmEnforceCap || (*v43 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
    v47 = v148;
    goto LABEL_68;
  }
  v47 = v148;
  if ( *v43 >= 0 )
  {
    v99 = *(ACL **)(v148 + 24);
  }
  else
  {
    v98 = *(unsigned int *)(v148 + 12);
    if ( !(_DWORD)v98 )
    {
      v158 = 0LL;
      goto LABEL_68;
    }
    v99 = (ACL *)(v148 + v98);
  }
  v158 = v99;
  if ( v99 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v99);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v102 = v161;
      if ( Cap < 0 )
        v102 = SepRmDefaultCap;
      v161 = v102;
      v139 = 1;
    }
  }
LABEL_68:
  v48 = v184;
  if ( (v184 & 0x2060000) != 0
    && v46
    && ((*v43 & 4) == 0
      ? (v65 = 0LL)
      : *v43 >= 0
      ? (v65 = *(_QWORD *)(v47 + 32))
      : (v64 = *(unsigned int *)(v47 + 16), !(_DWORD)v64)
      ? (v65 = 0LL)
      : (v65 = v64 + v47),
        !RtlpOwnerAcesPresent(0, v65)) )
  {
    if ( (v48 & 0x2000000) != 0 )
    {
      v66 = 393216;
      v49 = v146 | 0x60000;
    }
    else
    {
      v66 = v48 & 0x60000;
      v49 = v146 | v48 & 0x60000;
    }
    v145 = v66;
    v146 = v49;
    v48 &= 0xFFF9FFFF;
    v184 = v48;
  }
  else
  {
    v49 = v146;
  }
  if ( v48 || v139 && !(_BYTE)v147 )
  {
    v50 = (PERESOURCE *)v143;
    v51 = v145;
  }
  else
  {
    v50 = (PERESOURCE *)v143;
    if ( (*((_DWORD *)v143 + 50) & 0x2000) != 0 || (v51 = v145) == 0 )
    {
      if ( a13 )
      {
        v79 = 0;
        v80 = v179;
        v81 = v180;
        while ( 1 )
        {
          v144 = v79;
          if ( v79 >= a6 )
            break;
          if ( v49 )
          {
            v81[v79] = 0;
            v142 = 0;
            v80[v79] = v49;
          }
          else
          {
            v81[v79] = -1073741790;
            v142 = -1073741790;
            v80[v79] = 0;
          }
          ++v79;
        }
      }
      else
      {
        v78 = a11;
        if ( v49 )
        {
          *(_DWORD *)a12 = 0;
          v142 = 0;
          *v78 = v49;
        }
        else
        {
          *(_DWORD *)a12 = -1073741790;
          v142 = -1073741790;
          *v78 = 0;
        }
      }
      v135 = 0;
      v21 = v134;
      ExReleaseResourceLite(v50[6]);
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v29 = 0;
      goto LABEL_186;
    }
  }
  if ( a13 )
  {
    v103 = a6;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v52 = PoolWithTag;
    v152 = PoolWithTag;
    if ( PoolWithTag )
    {
      v53 = (int *)&PoolWithTag[v103];
      v51 = v145;
      goto LABEL_74;
    }
    ExReleaseResourceLite(*v155);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    SeReleaseSubjectContext(&SubjectContext);
    v29 = -1073741670;
    v21 = v134;
LABEL_208:
    v135 = v29;
    goto LABEL_186;
  }
  v52 = (unsigned int *)v175;
  v152 = v175;
  v53 = (int *)&v174;
LABEL_74:
  LODWORD(v162) = v51;
  SepAccessCheck(
    v47,
    v160,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v50,
    v48,
    v159,
    a6,
    &v181,
    v49,
    v134,
    v52,
    0LL,
    v53,
    a13,
    v46,
    (int *)&v162,
    (__int64)&P,
    0LL,
    0LL,
    a14);
  v54 = a13;
  if ( SepRmEnforceCap && (v105 = *v53, *v53 >= 0) && v139 )
  {
    if ( a13 )
    {
      v106 = a6;
      v107 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
      v151 = v107;
      if ( !v107 )
      {
        ExReleaseResourceLite(*v155);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v29 = -1073741670;
        v135 = -1073741670;
        v21 = v134;
        goto LABEL_96;
      }
      v153 = &v107[4 * v106];
      v105 = *v53;
    }
    else
    {
      v151 = &v177;
      v153 = &v176;
    }
    v145 = *(_DWORD *)v152;
    LOBYTE(v147) = 0;
    if ( a6 )
    {
      v29 = SepCopyObjectTypeList(v159, a6, &v169);
      v135 = v29;
      if ( v29 < 0 )
      {
        v21 = v134;
        goto LABEL_96;
      }
    }
    v108 = 0LL;
    v109 = v143;
    v110 = P;
    while ( 1 )
    {
      v150 = v108;
      if ( (unsigned int)v108 >= *(_DWORD *)(v161 + 60) )
        break;
      v111 = *(_QWORD *)(v161 + 8 * v108 + 64);
      if ( !*(_QWORD *)(v111 + 24) )
        goto LABEL_318;
      if ( !v110 )
      {
        v112 = AuthzBasepInitializeResourceClaimsFromSacl(v158, &P);
        v113 = (unsigned __int8)v147;
        if ( v112 < 0 )
          v113 = 1;
        v147 = v113;
        v110 = P;
      }
      v114 = (_QWORD *)v109[137];
      v115 = v114 ? v114[75] : 0LL;
      v116 = v114 ? v114[73] : 0LL;
      v117 = v114 ? v114[74] : 0LL;
      v118 = v114 ? v114[72] : 0LL;
      v119 = AuthzBasepEvaluateAceCondition(
               (__int64)v109,
               v109[97],
               (__int64)v110,
               v118,
               v117,
               v116,
               v115,
               *(_DWORD **)(v111 + 24),
               *(_DWORD *)(v111 + 16),
               1u,
               0,
               &v156);
      v135 = v119;
      v120 = v156;
      if ( v156 == 1 )
        goto LABEL_318;
      if ( v119 < 0 )
        goto LABEL_335;
      if ( (v109[25] & 0x10) != 0 )
      {
        v121 = (_QWORD *)v109[137];
        if ( v121 )
          v122 = v121[75];
        else
          v122 = 0LL;
        if ( v121 )
          v123 = v121[73];
        else
          v123 = 0LL;
        if ( v121 )
          v124 = v121[74];
        else
          v124 = 0LL;
        if ( v121 )
          v125 = v121[72];
        else
          v125 = 0LL;
        v135 = AuthzBasepEvaluateAceCondition(
                 (__int64)v109,
                 v109[97],
                 (__int64)v110,
                 v125,
                 v124,
                 v123,
                 v122,
                 *(_DWORD **)(v111 + 24),
                 *(_DWORD *)(v111 + 16),
                 1u,
                 1u,
                 &v156);
        if ( v135 < 0 )
        {
LABEL_335:
          ExReleaseResourceLite(*v155);
          KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v29 = v135;
          v21 = v134;
          goto LABEL_186;
        }
        v120 = v156;
      }
      if ( (_BYTE)v147 || v120 == 1 )
      {
LABEL_318:
        v135 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v135 < 0 )
          goto LABEL_335;
        if ( (*(_DWORD *)(v111 + 48) & 1) != 0 )
        {
          if ( (v184 & 0x2000000) != 0 )
            v126 = v184;
          else
            v126 = v184 | v146;
          v127 = 0;
        }
        else
        {
          v126 = v184;
          v127 = v146;
        }
        v54 = a13;
        v128 = (int *)v153;
        v129 = v169;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v160,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)v109,
          v126,
          v169,
          a6,
          &v181,
          v127,
          v134,
          (unsigned int *)v151,
          0LL,
          (int *)v153,
          a13,
          v46,
          (int *)&v162,
          (__int64)&P,
          0LL,
          0LL,
          a14);
        v130 = *(_DWORD *)v151;
        if ( v137 )
          v130 = v145 & *(_DWORD *)v151;
        v145 = v130;
        if ( v130 )
          v105 = *v128;
        else
          v105 = -1073741790;
        v137 = 1;
        if ( v129 )
          SepMergeObjectTypeListAccesses(v159, v129, a6);
        if ( v105 < 0 )
          goto LABEL_337;
        v110 = P;
      }
      v108 = (unsigned int)(v150 + 1);
    }
    v54 = a13;
LABEL_337:
    *v53 = v105;
    v55 = (char *)v152;
    *(_DWORD *)v152 &= v145;
  }
  else
  {
    v55 = (char *)v152;
  }
  if ( ((*v155)->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)*v155, 0LL, 0LL);
  v56 = (*v155)->Flag & 1;
  if ( v56 )
  {
    v85 = KeGetCurrentIrql();
    v86 = KeGetCurrentThread();
    if ( v85 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v85, 2uLL, 0LL);
    if ( !v85 && (v86->MiscFlags & 0x400) == 0 && !v86->WaitBlock[3].SpareLong )
LABEL_339:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  v57 = v56 == 0;
  v58 = *v155;
  if ( v57 )
    ExpReleaseResourceForThreadLite((ULONG_PTR)v58, (ULONG_PTR)KeGetCurrentThread());
  else
    ExpFastResourceLegacyRelease((ULONG_PTR)v58);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v59 = v184 & 0x2000000;
  if ( (v184 & 0x2000000) != 0 )
  {
    if ( !v136 || !BYTE6(v164) && !BYTE5(v164) )
    {
      if ( v54 )
        v67 = a6;
      else
        v67 = 0;
      SepConstrainByMandatory((__int64)&v171, v184, v55, (char *)v53, 0LL, v67);
    }
  }
  else if ( v136 && !BYTE6(v164) && !BYTE5(v164) )
  {
    v17 = a12;
    v18 = a11;
    if ( v54 )
    {
      for ( k = 0; ; ++k )
      {
        v144 = k;
        if ( k >= a6 )
          break;
        v17[k] = -1073741790;
        v18[k] = 0;
      }
    }
    else
    {
      *(_DWORD *)a12 = -1073741790;
      *v18 = 0;
    }
    v142 = -1073741790;
    v29 = 0;
    v135 = 0;
    v21 = v134;
    goto LABEL_96;
  }
  if ( v59 )
  {
    v68 = a6;
    if ( v54 )
      v69 = a6;
    else
      v69 = 0;
    SepConstrainByConstraintMask(v157, v184, v55, (char *)v53, 0LL, v69, &v140);
    if ( v54 )
      v70 = v68;
    else
      v70 = 0;
    SepConstrainByConstraintMask(v167, v184, v55, (char *)v53, 0LL, v70, v141);
  }
  v17 = a12;
  *(_DWORD *)a12 = *v53;
  v18 = a11;
  *(_DWORD *)a11 = *(_DWORD *)v55;
  v142 = *v53;
  v19 = (__int64)v153;
  v60 = v151;
  if ( SepRmEnforceCap && v137 && *v53 >= 0 )
  {
    *v17 = *(_DWORD *)v153;
    *v18 &= *v60;
    v142 = *(_DWORD *)v19;
  }
  if ( v54 )
  {
    for ( m = 1; ; m = v144 + 1 )
    {
      v144 = m;
      if ( m >= a6 )
        break;
      v62 = m;
      v17[v62] = v53[v62];
      v18[v62] = *(_DWORD *)&v55[v62 * 4];
      if ( SepRmEnforceCap && v137 && v53[v62] >= 0 )
      {
        v17[v62] = *(_DWORD *)(v62 * 4 + v19);
        v18[v62] &= v60[v62];
      }
    }
  }
  v29 = 0;
  v135 = 0;
  v21 = v134;
LABEL_96:
  if ( v148 && v143 )
  {
    if ( v140 || v141[0] )
    {
LABEL_152:
      v72 = KeGetCurrentThread();
      --v72->KernelApcDisable;
      v73 = v143;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v143 + 6), 1u);
      if ( v138 )
        LODWORD(v76) = v168;
      else
        v76 = *((_QWORD *)v73 + 138);
      SeLogAccessFailure((_DWORD)v73, v74, v75, v76, v148, v184 | v146, v142 >= 0, 0);
      ExReleaseResourceLite(*((PERESOURCE *)v73 + 6));
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      v29 = v135;
      v19 = HIDWORD(v163);
LABEL_102:
      if ( v29 >= 0 && v142 < 0 && !(_DWORD)v19 && (*((_DWORD *)v143 + 50) & 0x4000) != 0 )
      {
        if ( (_BYTE)v165 )
        {
          v131 = v184 & ~(HIDWORD(v162) | (unsigned int)v163 | 0x2000000);
          if ( ((unsigned int)v131 & (unsigned int)v164) == (_DWORD)v131 )
            SepLogLpacAccessFailure(v131, v19, v17);
        }
      }
      goto LABEL_104;
    }
    v19 = HIDWORD(v163);
    if ( HIDWORD(v163) || (*((_DWORD *)v143 + 50) & 0x4000) == 0 )
      goto LABEL_102;
    if ( v29 >= 0 )
    {
      if ( v142 >= 0 && !HIBYTE(v164) )
        goto LABEL_102;
      goto LABEL_152;
    }
  }
LABEL_104:
  if ( v54 )
  {
    if ( v152 )
      ExFreePoolWithTag(v152, 0);
    if ( v151 )
      ExFreePoolWithTag(v151, 0);
  }
  if ( v143 )
    ObfDereferenceObjectWithTag(v143, 0x746C6644u);
  if ( v159 )
    ExFreePoolWithTag(v159, 0);
  if ( v160 )
  {
    LOBYTE(v17) = 1;
    SeReleaseSid(v160, v21, v17);
  }
  if ( v148 )
    SeReleaseSecurityDescriptor(v148, v21, 0LL);
  if ( v139 )
  {
    v132 = *(_QWORD *)(v161 + 32);
    if ( v132 )
      SepRmDereferenceCapTable(v132, v19, v17, v18);
  }
  if ( v169 )
    ExFreePoolWithTag(v169, 0);
  v63 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v63, 0);
  }
  return (unsigned int)v29;
}
