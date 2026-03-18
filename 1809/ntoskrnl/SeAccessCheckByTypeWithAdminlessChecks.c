/*
 * XREFs of SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450
 * Callers:
 *     SeAccessCheckByType @ 0x1400A9320 (SeAccessCheckByType.c)
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
 *     AuthzBasepEvaluateAceCondition @ 0x1400A62E0 (AuthzBasepEvaluateAceCondition.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A8DF0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCaptureObjectTypeList @ 0x1400AA6A4 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x1400AA8B8 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x1400AA9B8 (SePrivilegePolicyCheck.c)
 *     SepSidInTokenSidHash @ 0x1400AAB40 (SepSidInTokenSidHash.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400AAD10 (ExpReleaseResourceForThreadLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     SeLogAccessFailure @ 0x140118EE0 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401214DC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     ExpFastResourceLegacyRelease @ 0x140164B08 (ExpFastResourceLegacyRelease.c)
 *     ExAcquireFastResourceShared @ 0x140165B40 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166344 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FE85C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x1402FE8FC (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x1402FE9B4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1402FEB00 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x1402FEC14 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1402FEC44 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140300A60 (SepRmReferenceFindCap.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     SeReleaseSid @ 0x1406112AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406112D4 (SeCaptureSid.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x140630CC0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140631850 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v46; // rdx
  __int64 v47; // r8
  char v48; // r12
  __int64 v49; // r13
  unsigned int v50; // ebx
  unsigned int v51; // r15d
  PERESOURCE *v52; // r14
  int v53; // eax
  unsigned int *v54; // rcx
  int *v55; // rsi
  char v56; // r15
  char *v57; // r14
  __int16 v58; // cx
  bool v59; // zf
  PERESOURCE v60; // rcx
  int v61; // ebx
  _DWORD *v62; // r11
  unsigned int m; // eax
  __int64 v64; // rcx
  PVOID v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // ebx
  unsigned int v71; // eax
  unsigned int v72; // eax
  int v73; // eax
  struct _KTHREAD *v74; // rax
  PVOID v75; // rbx
  int v76; // edx
  int v77; // r8d
  __int64 v78; // r9
  unsigned int k; // ecx
  _DWORD *v80; // r9
  unsigned int v81; // ecx
  _DWORD *v82; // rdx
  _DWORD *v83; // r8
  unsigned int i; // ecx
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v86; // r8
  unsigned __int8 v87; // al
  struct _KTHREAD *v88; // rdx
  int v89; // ecx
  int v90; // ecx
  int v91; // eax
  unsigned int v92; // edx
  int v93; // eax
  unsigned int v94; // eax
  void *OwnerEntryForLegacyShim; // r14
  __int64 v96; // rax
  _DWORD *v97; // r8
  _DWORD *v98; // r9
  unsigned int j; // ecx
  __int64 v100; // rax
  __int64 v101; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v104; // rdx
  __int64 v105; // rsi
  unsigned int *PoolWithTag; // rax
  int v107; // r14d
  __int64 v108; // rbx
  char *v109; // rax
  __int64 v110; // rax
  _QWORD *v111; // r13
  PVOID v112; // r15
  __int64 v113; // rbx
  int v114; // eax
  int v115; // ecx
  _QWORD *v116; // rax
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r9
  int v121; // eax
  int v122; // ecx
  _QWORD *v123; // rax
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r9
  unsigned int v128; // eax
  unsigned int v129; // ecx
  int *v130; // r14
  PVOID v131; // rbx
  int v132; // edx
  __int64 v133; // rcx
  __int64 v134; // rcx
  int Object; // [rsp+20h] [rbp-228h]
  int HandleInformation; // [rsp+28h] [rbp-220h]
  int *v137; // [rsp+30h] [rbp-218h]
  char v138; // [rsp+A0h] [rbp-1A8h]
  int v139; // [rsp+A4h] [rbp-1A4h]
  char v140; // [rsp+A8h] [rbp-1A0h]
  char v141; // [rsp+AAh] [rbp-19Eh]
  char v142; // [rsp+ABh] [rbp-19Dh] BYREF
  char v143; // [rsp+ACh] [rbp-19Ch]
  char v144; // [rsp+ADh] [rbp-19Bh] BYREF
  char v145[2]; // [rsp+AEh] [rbp-19Ah] BYREF
  int v146; // [rsp+B0h] [rbp-198h]
  PVOID v147; // [rsp+B8h] [rbp-190h] BYREF
  unsigned int v148; // [rsp+C0h] [rbp-188h]
  int v149; // [rsp+C4h] [rbp-184h]
  unsigned int v150; // [rsp+C8h] [rbp-180h] BYREF
  int v151; // [rsp+CCh] [rbp-17Ch]
  __int64 v152; // [rsp+D0h] [rbp-178h] BYREF
  char v153; // [rsp+DAh] [rbp-16Eh]
  int v154; // [rsp+DCh] [rbp-16Ch]
  PVOID v155; // [rsp+E0h] [rbp-168h]
  PVOID v156; // [rsp+E8h] [rbp-160h]
  char *v157; // [rsp+F0h] [rbp-158h]
  PVOID P; // [rsp+F8h] [rbp-150h] BYREF
  PERESOURCE *v159; // [rsp+100h] [rbp-148h]
  int v160; // [rsp+108h] [rbp-140h] BYREF
  int v161; // [rsp+10Ch] [rbp-13Ch] BYREF
  __int64 v162; // [rsp+110h] [rbp-138h]
  PVOID v163; // [rsp+118h] [rbp-130h] BYREF
  __int64 v164; // [rsp+120h] [rbp-128h] BYREF
  __int64 v165; // [rsp+128h] [rbp-120h]
  __int64 v166; // [rsp+130h] [rbp-118h] BYREF
  __int64 v167; // [rsp+138h] [rbp-110h]
  __int64 v168; // [rsp+140h] [rbp-108h]
  int v169; // [rsp+148h] [rbp-100h]
  PVOID Src; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v171; // [rsp+158h] [rbp-F0h] BYREF
  __int64 v172; // [rsp+160h] [rbp-E8h] BYREF
  PVOID v173; // [rsp+168h] [rbp-E0h] BYREF
  __int16 *v174; // [rsp+170h] [rbp-D8h]
  __int64 v175; // [rsp+178h] [rbp-D0h] BYREF
  __int64 v176; // [rsp+180h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+188h] [rbp-C0h] BYREF
  char v178; // [rsp+1A8h] [rbp-A0h] BYREF
  _BYTE v179[4]; // [rsp+1ACh] [rbp-9Ch] BYREF
  char v180; // [rsp+1B0h] [rbp-98h] BYREF
  char v181; // [rsp+1B4h] [rbp-94h] BYREF
  PVOID v182; // [rsp+1B8h] [rbp-90h] BYREF
  _DWORD *v183; // [rsp+1C0h] [rbp-88h]
  _DWORD *v184; // [rsp+1C8h] [rbp-80h]
  __int128 v185; // [rsp+1D0h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[104]; // [rsp+1E0h] [rbp-68h] BYREF
  unsigned int v188; // [rsp+268h] [rbp+20h] BYREF

  v188 = a4;
  v16 = a11;
  v183 = a11;
  v184 = a12;
  v156 = 0LL;
  v155 = 0LL;
  v157 = 0LL;
  v147 = 0LL;
  v152 = 0LL;
  v164 = 0LL;
  v150 = 0;
  v149 = 0;
  v163 = 0LL;
  Src = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  v140 = 0;
  P = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v169 = 0;
  v162 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v165 = 0LL;
  v143 = 0;
  LOBYTE(v19) = 0;
  v141 = 0;
  LOBYTE(v20) = 0;
  v151 = v20;
  v153 = 0;
  v173 = 0LL;
  v142 = 0;
  v144 = 0;
  v145[0] = 0;
  v172 = 0LL;
  v146 = -1073741790;
  v161 = -1;
  v171 = 0xFFFFFFFFLL;
  v21 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v138 = v21;
  if ( !v21 )
  {
    *(_DWORD *)a12 = 0;
    *v16 = v188;
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
  v185 = *a7;
  result = 0LL;
LABEL_19:
  if ( (int)result < 0 )
    return result;
  if ( (v188 & 0xF0000000) != 0 )
  {
    v29 = -1073741594;
    goto LABEL_208;
  }
  v142 = 0;
  v172 = 0LL;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    v29 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v21, &v182, 0LL);
    v147 = v182;
LABEL_23:
    v139 = v29;
    goto LABEL_24;
  }
  v73 = SepReferenceTokenUsingPseudoHandle((__int64)a3, &v147, &v142, &v172);
  v29 = v73;
  if ( v73 >= 0 )
    goto LABEL_23;
  v139 = v73;
LABEL_24:
  if ( v29 < 0 )
  {
    v147 = 0LL;
    goto LABEL_186;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v147 + 48) != 2 )
    {
      v29 = -1073741732;
      goto LABEL_208;
    }
    if ( *((int *)v147 + 49) < 1 )
    {
      v29 = -1073741659;
      goto LABEL_208;
    }
  }
  v29 = SeCaptureObjectTypeList(a5, a6, v21, &v163);
  v139 = v29;
  if ( v29 < 0 || (v29 = SeCaptureSecurityDescriptor(a1, v21, 1, 0, (__int64)&v152), v139 = v29, v29 < 0) )
  {
LABEL_186:
    v56 = a13;
    goto LABEL_96;
  }
  if ( !v152 )
    goto LABEL_212;
  v174 = (__int16 *)(v152 + 2);
  v19 = *(unsigned __int16 *)(v152 + 2);
  if ( (v19 & 0x8000u) == 0LL )
  {
    v31 = *(_QWORD *)(v152 + 8);
  }
  else
  {
    v30 = *(unsigned int *)(v152 + 4);
    if ( !(_DWORD)v30 )
      goto LABEL_212;
    v31 = v152 + v30;
  }
  if ( !v31 )
    goto LABEL_212;
  if ( (v19 & 0x8000u) != 0LL )
  {
    v32 = *(unsigned int *)(v152 + 8);
    if ( (_DWORD)v32 )
    {
      v33 = v152 + v32;
      goto LABEL_38;
    }
LABEL_212:
    v29 = -1073741703;
    goto LABEL_208;
  }
  v33 = *(_QWORD *)(v152 + 16);
LABEL_38:
  if ( !v33 )
    goto LABEL_212;
  if ( v142 )
    LODWORD(v34) = v172;
  else
    v34 = *((_QWORD *)v147 + 138);
  v137 = &v161;
  Object = v34;
  v29 = SepTrustLevelCheck(&v161, v152, 0LL, v147);
  v139 = v29;
  if ( v29 < 0 )
    goto LABEL_186;
  v35 = v188 & 0xFDFFFFFF;
  if ( (v161 & v188 & 0xFDFFFFFF) != (v188 & 0xFDFFFFFF) )
  {
    v144 = 1;
LABEL_221:
    v19 = 3221225506LL;
    v36 = a14;
LABEL_51:
    v37 = v140;
    goto LABEL_52;
  }
  v29 = SepFilterCheck(v152, &P, (__int64)v147, 1, (int *)&v171);
  v139 = v29;
  if ( v29 < 0 )
    goto LABEL_186;
  if ( ((unsigned int)v171 & v35) != v35 )
  {
    v145[0] = 1;
    goto LABEL_221;
  }
  v36 = a14;
  v29 = SepMandatoryIntegrityCheck((int *)&v185, v152, 0, (__int64)v147, 1, a14, (__int64)&v175);
  v139 = v29;
  if ( v29 < 0 )
    goto LABEL_186;
  v37 = 0;
  v140 = 0;
  if ( (_DWORD)v176 && (v35 & (unsigned int)v175) != v35 )
  {
    v19 = 3221225506LL;
  }
  else
  {
    v19 = 0LL;
    if ( (v188 & 0x2000000) == 0 )
      goto LABEL_49;
  }
  if ( (*((_DWORD *)v147 + 50) & 0x4000) != 0 && HIDWORD(v176) <= 0x2000 )
  {
    v37 = 1;
    v140 = 1;
  }
  else
  {
    v37 = 0;
  }
LABEL_49:
  if ( (int)v19 >= 0 || v37 )
  {
    v19 = (unsigned int)SePrivilegePolicyCheck(
                          (unsigned int)&v188,
                          (unsigned int)&v150,
                          0,
                          (_DWORD)v147,
                          (__int64)&Src,
                          v21);
    if ( !v188 )
    {
      v89 = (unsigned __int8)v151;
      if ( v150 )
        v89 = 1;
      v151 = v89;
    }
    goto LABEL_51;
  }
LABEL_52:
  if ( (int)v19 < 0 && !v37 )
  {
    v56 = a13;
    v17 = a12;
    v18 = a11;
    if ( a13 )
    {
      for ( i = 0; ; ++i )
      {
        v148 = i;
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
    v146 = v19;
    v29 = 0;
    v139 = 0;
    goto LABEL_96;
  }
  v38 = Src;
  if ( Src )
  {
    v90 = *(_DWORD *)Src;
    v91 = 12 * *(_DWORD *)Src;
    v92 = v91 + 8;
    if ( !*(_DWORD *)Src )
      v92 = 8;
    if ( v92 > v25 )
    {
      v93 = v91 + 8;
      if ( !v90 )
        v93 = 8;
      *a10 = v93;
      v29 = -1073741789;
      v139 = -1073741789;
      ExFreePoolWithTag(v38, 0);
      goto LABEL_186;
    }
    v94 = v91 + 8;
    if ( !v90 )
      v94 = 8;
    memmove(v26, Src, v94);
    ExFreePoolWithTag(v38, 0);
  }
  else
  {
    if ( v25 < 0x14 )
    {
      *a10 = 20;
      v29 = -1073741789;
      v139 = -1073741789;
      v56 = a13;
      goto LABEL_96;
    }
    *(_QWORD *)v26 = Src;
  }
  if ( a2 )
  {
    v29 = SeCaptureSid(a2, Object, 1, (__int64)&v164);
    v139 = v29;
    if ( v29 < 0 )
    {
      v164 = 0LL;
      goto LABEL_186;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v40 = (char *)v147;
  v159 = (PERESOURCE *)((char *)v147 + 48);
  v41 = *((_QWORD *)v147 + 6);
  v42 = *(unsigned __int16 *)(v41 + 26);
  if ( (v42 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v41, 0LL, 0LL);
  LOWORD(v42) = *(_WORD *)(v41 + 26) & 1;
  if ( (_WORD)v42 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v86 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v86->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (v86->MiscFlags & 0x400) == 0 && !v86->WaitBlock[3].SpareLong )
      goto LABEL_339;
    v40 = (char *)v147;
  }
  if ( (_WORD)v42 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v42);
    if ( !(unsigned __int8)ExAcquireFastResourceShared(v41, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    ExpAcquireResourceSharedLite(*((_QWORD *)v147 + 6), 1);
  }
  v43 = v174;
  if ( *v174 >= 0 )
  {
    v45 = *(_QWORD *)(v152 + 8);
  }
  else
  {
    v44 = *(unsigned int *)(v152 + 4);
    if ( (_DWORD)v44 )
      v45 = v152 + v44;
    else
      v45 = 0LL;
  }
  LOBYTE(v137) = v36;
  LOBYTE(HandleInformation) = 0;
  LOBYTE(Object) = 0;
  v48 = SepSidInTokenSidHash(v40 + 232, 0LL, v45, 0LL, Object, HandleInformation, (_DWORD)v137);
  if ( v48 && *((_DWORD *)v40 + 32) )
    v48 = SepSidInToken((__int64)v40, 0LL, v45, 0LL, 1, 0, v36);
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v40 + 50) & 0x20) == 0 )
  {
    v96 = *((_QWORD *)v40 + 27);
    if ( v96 )
    {
      if ( (*(_DWORD *)(v96 + 32) & 0x20) != 0 )
      {
        v56 = a13;
        v97 = a12;
        v98 = a11;
        if ( a13 )
        {
          for ( j = 0; ; ++j )
          {
            v148 = j;
            if ( j >= a6 )
              break;
            v97[j] = -1073741790;
            v98[j] = 0;
          }
        }
        else
        {
          *(_DWORD *)a12 = -1073741790;
          *v98 = 0;
        }
        v146 = -1073741790;
        v139 = 0;
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
    v49 = v152;
    goto LABEL_68;
  }
  v49 = v152;
  if ( *v43 >= 0 )
  {
    v101 = *(_QWORD *)(v152 + 24);
  }
  else
  {
    v100 = *(unsigned int *)(v152 + 12);
    if ( !(_DWORD)v100 )
    {
      v162 = 0LL;
      goto LABEL_68;
    }
    v101 = v152 + v100;
  }
  v162 = v101;
  if ( v101 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v101, v46, v47);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v104 = v165;
      if ( Cap < 0 )
        v104 = SepRmDefaultCap;
      v165 = v104;
      v143 = 1;
    }
  }
LABEL_68:
  v50 = v188;
  if ( (v188 & 0x2060000) != 0
    && v48
    && ((*v43 & 4) == 0
      ? (v67 = 0LL)
      : *v43 >= 0
      ? (v67 = *(_QWORD *)(v49 + 32))
      : (v66 = *(unsigned int *)(v49 + 16), !(_DWORD)v66)
      ? (v67 = 0LL)
      : (v67 = v66 + v49),
        !RtlpOwnerAcesPresent(0, v67)) )
  {
    if ( (v50 & 0x2000000) != 0 )
    {
      v68 = 393216;
      v51 = v150 | 0x60000;
    }
    else
    {
      v68 = v50 & 0x60000;
      v51 = v150 | v50 & 0x60000;
    }
    v149 = v68;
    v150 = v51;
    v50 &= 0xFFF9FFFF;
    v188 = v50;
  }
  else
  {
    v51 = v150;
  }
  if ( v50 || v143 && !(_BYTE)v151 )
  {
    v52 = (PERESOURCE *)v147;
    v53 = v149;
  }
  else
  {
    v52 = (PERESOURCE *)v147;
    if ( (*((_DWORD *)v147 + 50) & 0x2000) != 0 || (v53 = v149) == 0 )
    {
      if ( a13 )
      {
        v81 = 0;
        v82 = v183;
        v83 = v184;
        while ( 1 )
        {
          v148 = v81;
          if ( v81 >= a6 )
            break;
          if ( v51 )
          {
            v83[v81] = 0;
            v146 = 0;
            v82[v81] = v51;
          }
          else
          {
            v83[v81] = -1073741790;
            v146 = -1073741790;
            v82[v81] = 0;
          }
          ++v81;
        }
      }
      else
      {
        v80 = a11;
        if ( v51 )
        {
          *(_DWORD *)a12 = 0;
          v146 = 0;
          *v80 = v51;
        }
        else
        {
          *(_DWORD *)a12 = -1073741790;
          v146 = -1073741790;
          *v80 = 0;
        }
      }
      v139 = 0;
      v21 = v138;
      ExReleaseResourceLite(v52[6]);
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v29 = 0;
      goto LABEL_186;
    }
  }
  if ( a13 )
  {
    v105 = a6;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v54 = PoolWithTag;
    v156 = PoolWithTag;
    if ( PoolWithTag )
    {
      v55 = (int *)&PoolWithTag[v105];
      v53 = v149;
      goto LABEL_74;
    }
    ExReleaseResourceLite(*v159);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    SeReleaseSubjectContext(&SubjectContext);
    v29 = -1073741670;
    v21 = v138;
LABEL_208:
    v139 = v29;
    goto LABEL_186;
  }
  v54 = (unsigned int *)v179;
  v156 = v179;
  v55 = (int *)&v178;
LABEL_74:
  LODWORD(v166) = v53;
  SepAccessCheck(
    v49,
    v164,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v52,
    v50,
    v163,
    a6,
    &v185,
    v51,
    v138,
    v54,
    0LL,
    v55,
    a13,
    v48,
    (int *)&v166,
    (__int64)&P,
    0LL,
    0LL,
    a14);
  v56 = a13;
  if ( SepRmEnforceCap && (v107 = *v55, *v55 >= 0) && v143 )
  {
    if ( a13 )
    {
      v108 = a6;
      v109 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
      v155 = v109;
      if ( !v109 )
      {
        ExReleaseResourceLite(*v159);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v29 = -1073741670;
        v139 = -1073741670;
        v21 = v138;
        goto LABEL_96;
      }
      v157 = &v109[4 * v108];
      v107 = *v55;
    }
    else
    {
      v155 = &v181;
      v157 = &v180;
    }
    v149 = *(_DWORD *)v156;
    LOBYTE(v151) = 0;
    if ( a6 )
    {
      v29 = SepCopyObjectTypeList(v163, a6, &v173);
      v139 = v29;
      if ( v29 < 0 )
      {
        v21 = v138;
        goto LABEL_96;
      }
    }
    v110 = 0LL;
    v111 = v147;
    v112 = P;
    while ( 1 )
    {
      v154 = v110;
      if ( (unsigned int)v110 >= *(_DWORD *)(v165 + 60) )
        break;
      v113 = *(_QWORD *)(v165 + 8 * v110 + 64);
      if ( !*(_QWORD *)(v113 + 24) )
        goto LABEL_318;
      if ( !v112 )
      {
        v114 = AuthzBasepInitializeResourceClaimsFromSacl(v162, &P);
        v115 = (unsigned __int8)v151;
        if ( v114 < 0 )
          v115 = 1;
        v151 = v115;
        v112 = P;
      }
      v116 = (_QWORD *)v111[137];
      v117 = v116 ? v116[75] : 0LL;
      v118 = v116 ? v116[73] : 0LL;
      v119 = v116 ? v116[74] : 0LL;
      v120 = v116 ? v116[72] : 0LL;
      v121 = AuthzBasepEvaluateAceCondition(
               (__int64)v111,
               v111[97],
               (__int64)v112,
               v120,
               v119,
               v118,
               v117,
               *(_DWORD **)(v113 + 24),
               *(_DWORD *)(v113 + 16),
               1u,
               0,
               &v160);
      v139 = v121;
      v122 = v160;
      if ( v160 == 1 )
        goto LABEL_318;
      if ( v121 < 0 )
        goto LABEL_335;
      if ( (v111[25] & 0x10) != 0 )
      {
        v123 = (_QWORD *)v111[137];
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
        v139 = AuthzBasepEvaluateAceCondition(
                 (__int64)v111,
                 v111[97],
                 (__int64)v112,
                 v127,
                 v126,
                 v125,
                 v124,
                 *(_DWORD **)(v113 + 24),
                 *(_DWORD *)(v113 + 16),
                 1u,
                 1u,
                 &v160);
        if ( v139 < 0 )
        {
LABEL_335:
          ExReleaseResourceLite(*v159);
          KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v29 = v139;
          v21 = v138;
          goto LABEL_186;
        }
        v122 = v160;
      }
      if ( (_BYTE)v151 || v122 == 1 )
      {
LABEL_318:
        v139 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v139 < 0 )
          goto LABEL_335;
        if ( (*(_DWORD *)(v113 + 48) & 1) != 0 )
        {
          if ( (v188 & 0x2000000) != 0 )
            v128 = v188;
          else
            v128 = v188 | v150;
          v129 = 0;
        }
        else
        {
          v128 = v188;
          v129 = v150;
        }
        v56 = a13;
        v130 = (int *)v157;
        v131 = v173;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v164,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)v111,
          v128,
          v173,
          a6,
          &v185,
          v129,
          v138,
          (unsigned int *)v155,
          0LL,
          (int *)v157,
          a13,
          v48,
          (int *)&v166,
          (__int64)&P,
          0LL,
          0LL,
          a14);
        v132 = *(_DWORD *)v155;
        if ( v141 )
          v132 = v149 & *(_DWORD *)v155;
        v149 = v132;
        if ( v132 )
          v107 = *v130;
        else
          v107 = -1073741790;
        v141 = 1;
        if ( v131 )
          SepMergeObjectTypeListAccesses(v163, v131, a6);
        if ( v107 < 0 )
          goto LABEL_337;
        v112 = P;
      }
      v110 = (unsigned int)(v154 + 1);
    }
    v56 = a13;
LABEL_337:
    *v55 = v107;
    v57 = (char *)v156;
    *(_DWORD *)v156 &= v149;
  }
  else
  {
    v57 = (char *)v156;
  }
  if ( ((*v159)->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)*v159, 0LL, 0LL);
  v58 = (*v159)->Flag & 1;
  if ( v58 )
  {
    v87 = KeGetCurrentIrql();
    v88 = KeGetCurrentThread();
    if ( v87 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v87, 2uLL, 0LL);
    if ( !v87 && (v88->MiscFlags & 0x400) == 0 && !v88->WaitBlock[3].SpareLong )
LABEL_339:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  v59 = v58 == 0;
  v60 = *v159;
  if ( v59 )
    ExpReleaseResourceForThreadLite((ULONG_PTR)v60, (ULONG_PTR)KeGetCurrentThread());
  else
    ExpFastResourceLegacyRelease((ULONG_PTR)v60);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v61 = v188 & 0x2000000;
  if ( (v188 & 0x2000000) != 0 )
  {
    if ( !v140 || !BYTE6(v168) && !BYTE5(v168) )
    {
      if ( v56 )
        v69 = a6;
      else
        v69 = 0;
      SepConstrainByMandatory((__int64)&v175, v188, v57, (char *)v55, 0LL, v69);
    }
  }
  else if ( v140 && !BYTE6(v168) && !BYTE5(v168) )
  {
    v17 = a12;
    v18 = a11;
    if ( v56 )
    {
      for ( k = 0; ; ++k )
      {
        v148 = k;
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
    v146 = -1073741790;
    v29 = 0;
    v139 = 0;
    v21 = v138;
    goto LABEL_96;
  }
  if ( v61 )
  {
    v70 = a6;
    if ( v56 )
      v71 = a6;
    else
      v71 = 0;
    SepConstrainByConstraintMask(v161, v188, v57, (char *)v55, 0LL, v71, &v144);
    if ( v56 )
      v72 = v70;
    else
      v72 = 0;
    SepConstrainByConstraintMask(v171, v188, v57, (char *)v55, 0LL, v72, v145);
  }
  v17 = a12;
  *(_DWORD *)a12 = *v55;
  v18 = a11;
  *(_DWORD *)a11 = *(_DWORD *)v57;
  v146 = *v55;
  v19 = (__int64)v157;
  v62 = v155;
  if ( SepRmEnforceCap && v141 && *v55 >= 0 )
  {
    *v17 = *(_DWORD *)v157;
    *v18 &= *v62;
    v146 = *(_DWORD *)v19;
  }
  if ( v56 )
  {
    for ( m = 1; ; m = v148 + 1 )
    {
      v148 = m;
      if ( m >= a6 )
        break;
      v64 = m;
      v17[v64] = v55[v64];
      v18[v64] = *(_DWORD *)&v57[v64 * 4];
      if ( SepRmEnforceCap && v141 && v55[v64] >= 0 )
      {
        v17[v64] = *(_DWORD *)(v64 * 4 + v19);
        v18[v64] &= v62[v64];
      }
    }
  }
  v29 = 0;
  v139 = 0;
  v21 = v138;
LABEL_96:
  if ( v152 && v147 )
  {
    if ( v144 || v145[0] )
    {
LABEL_152:
      v74 = KeGetCurrentThread();
      --v74->KernelApcDisable;
      v75 = v147;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v147 + 6), 1u);
      if ( v142 )
        LODWORD(v78) = v172;
      else
        v78 = *((_QWORD *)v75 + 138);
      SeLogAccessFailure((_DWORD)v75, v76, v77, v78, v152, v188 | v150, v146 >= 0, 0);
      ExReleaseResourceLite(*((PERESOURCE *)v75 + 6));
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      v29 = v139;
      v19 = HIDWORD(v167);
LABEL_102:
      if ( v29 >= 0 && v146 < 0 && !(_DWORD)v19 && (*((_DWORD *)v147 + 50) & 0x4000) != 0 )
      {
        if ( (_BYTE)v169 )
        {
          v133 = v188 & ~(HIDWORD(v166) | (unsigned int)v167 | 0x2000000);
          if ( ((unsigned int)v133 & (unsigned int)v168) == (_DWORD)v133 )
            SepLogLpacAccessFailure(v133, v19, v17);
        }
      }
      goto LABEL_104;
    }
    v19 = HIDWORD(v167);
    if ( HIDWORD(v167) || (*((_DWORD *)v147 + 50) & 0x4000) == 0 )
      goto LABEL_102;
    if ( v29 >= 0 )
    {
      if ( v146 >= 0 && !HIBYTE(v168) )
        goto LABEL_102;
      goto LABEL_152;
    }
  }
LABEL_104:
  if ( v56 )
  {
    if ( v156 )
      ExFreePoolWithTag(v156, 0);
    if ( v155 )
      ExFreePoolWithTag(v155, 0);
  }
  if ( v147 )
    ObfDereferenceObjectWithTag(v147, 0x746C6644u);
  if ( v163 )
    ExFreePoolWithTag(v163, 0);
  if ( v164 )
  {
    LOBYTE(v17) = 1;
    SeReleaseSid(v164, v21, v17);
  }
  if ( v152 )
    SeReleaseSecurityDescriptor(v152, v21, 0LL);
  if ( v143 )
  {
    v134 = *(_QWORD *)(v165 + 32);
    if ( v134 )
      SepRmDereferenceCapTable(v134, v19, v17, v18);
  }
  if ( v173 )
    ExFreePoolWithTag(v173, 0);
  v65 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v65, 0);
  }
  return (unsigned int)v29;
}
