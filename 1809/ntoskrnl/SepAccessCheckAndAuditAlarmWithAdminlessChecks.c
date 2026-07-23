/*
 * XREFs of SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1405BB46C (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x14001311C (SepFreeResourceInfo.c)
 *     SepTokenIsOwner @ 0x1400131F0 (SepTokenIsOwner.c)
 *     SepMandatoryToDiscretionary @ 0x140013294 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x1400132B8 (SepFilterToDiscretionary.c)
 *     SepConstrainByConstraintMask @ 0x1400132D4 (SepConstrainByConstraintMask.c)
 *     SeTokenIsRestricted @ 0x140013360 (SeTokenIsRestricted.c)
 *     RtlOwnerAcesPresent @ 0x1400133A0 (RtlOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x1400134B4 (SepConstrainByMandatory.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14004D510 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x1400528F0 (SepAccessCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8F44 (SepLocateTokenTrustLevel.c)
 *     SeCaptureObjectTypeList @ 0x1400AA604 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x1400AA818 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x1400AA918 (SePrivilegePolicyCheck.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SeLogAccessFailure @ 0x140118F70 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepLpacCausedAccessFailure @ 0x1401348AC (SepLpacCausedAccessFailure.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402B06EC (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FEB4C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x1402FEBEC (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x1402FECA4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1402FEDF0 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x1402FEF04 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x1402FEF34 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x1402FFEB8 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x140300D50 (SepRmReferenceFindCap.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepProbeAndCaptureString_U @ 0x1405BC684 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405BC7A8 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1405BCB28 (SeCheckAuditPrivilege.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405E72C0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405E7300 (SeLockSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x1408A2220 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarmWithAdminlessChecks(
        __int64 a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *Src,
        int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        unsigned int a12,
        __int64 a13,
        int *a14,
        int *Address,
        _BYTE *a16,
        char a17,
        char a18)
{
  char *v21; // r15
  unsigned __int8 v22; // r14
  PACCESS_TOKEN ClientToken; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  SIZE_T v27; // rdi
  unsigned __int8 v28; // si
  unsigned int *v29; // rsi
  __int16 v30; // cx
  __int64 v31; // rax
  char *v32; // rax
  __int64 v33; // rax
  char *v34; // rax
  __int64 v35; // rcx
  char v36; // r13
  __int64 v37; // rcx
  int v38; // r14d
  char v39; // r12
  __int64 v40; // r8
  char IsOwner; // al
  int v42; // r13d
  char v43; // al
  unsigned int *v44; // rdx
  char *v45; // rdi
  __int64 v46; // r13
  unsigned __int8 v47; // r13
  char v48; // al
  unsigned int v49; // r11d
  unsigned __int8 v50; // r12
  char *v51; // r10
  char v52; // al
  char v53; // r15
  char v54; // dl
  int v55; // r12d
  char v56; // di
  char v57; // r14
  int *v58; // rcx
  int *v59; // rdx
  char *v60; // r12
  char *v61; // r8
  char v62; // r11
  unsigned int v63; // edx
  int *v64; // r8
  int *v65; // r9
  __int64 v66; // rcx
  unsigned int v67; // ecx
  int *v68; // r9
  int *v69; // r10
  unsigned __int64 v70; // rdx
  __int64 v71; // r8
  __int16 v73; // ax
  __int64 v74; // rax
  ACL *v75; // rcx
  int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  char *v79; // rsi
  unsigned int v80; // eax
  int v81; // r12d
  char v82; // al
  void *v83; // rcx
  int v84; // ecx
  char *PoolWithTag; // r10
  unsigned int v86; // r14d
  char *v87; // r8
  unsigned int i; // edx
  __int64 v89; // rcx
  __int16 v90; // dx
  __int64 v91; // rax
  ACL *v92; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v95; // rdx
  char *v96; // r10
  unsigned int v97; // r13d
  char *v98; // r8
  unsigned int j; // edx
  __int64 v100; // rcx
  __int64 v101; // rdi
  unsigned int *v102; // rax
  char *v103; // rax
  int *v104; // r8
  unsigned int v105; // eax
  unsigned int v106; // edx
  __int64 v107; // r13
  _QWORD *v108; // rax
  __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r9
  int v113; // eax
  int v114; // esi
  _QWORD *v115; // rax
  __int64 v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r9
  unsigned int v120; // r13d
  unsigned int v121; // esi
  PVOID v122; // rsi
  int v123; // r8d
  int v124; // edx
  char IsKTMCommitCoordinator; // al
  unsigned int v126; // r11d
  int v127; // r8d
  unsigned int v128; // edx
  char *v129; // r9
  __int64 v130; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v132; // di
  char v133; // si
  ULONGLONG TokenTrustLevel; // rax
  __int64 v135; // rdx
  __int64 v136; // r8
  ULONG v137; // ecx
  int PrimaryToken; // r10d
  __int16 v139; // ax
  __int64 v140; // rdx
  unsigned int v141; // ecx
  __int64 v142; // rcx
  unsigned int v143; // eax
  int v144; // edi
  PVOID v145; // r12
  char *v146; // r14
  char v147; // r15
  int v148; // r8d
  __int16 v149; // ax
  __int64 v150; // rdx
  unsigned int v151; // eax
  int v152; // r8d
  int v153; // r14d
  bool v154; // zf
  PVOID v155; // r8
  __int64 *v156; // r10
  __int64 v157; // rdx
  __int64 *v158; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int Object; // [rsp+20h] [rbp-258h]
  int HandleInformation; // [rsp+28h] [rbp-250h]
  unsigned int v162; // [rsp+40h] [rbp-238h]
  unsigned int v163; // [rsp+40h] [rbp-238h]
  __int64 v164; // [rsp+40h] [rbp-238h]
  char v165; // [rsp+A0h] [rbp-1D8h]
  char v166; // [rsp+A1h] [rbp-1D7h]
  unsigned __int8 v167; // [rsp+A2h] [rbp-1D6h] BYREF
  char v168; // [rsp+A3h] [rbp-1D5h] BYREF
  char v169; // [rsp+A4h] [rbp-1D4h]
  char v170; // [rsp+A5h] [rbp-1D3h]
  char v171; // [rsp+A6h] [rbp-1D2h]
  char v172; // [rsp+A7h] [rbp-1D1h]
  int v173; // [rsp+A8h] [rbp-1D0h]
  unsigned __int8 v174; // [rsp+ACh] [rbp-1CCh]
  PVOID v175; // [rsp+B0h] [rbp-1C8h]
  char v176; // [rsp+B8h] [rbp-1C0h] BYREF
  char v177; // [rsp+B9h] [rbp-1BFh]
  char v178; // [rsp+BAh] [rbp-1BEh]
  int v179; // [rsp+BCh] [rbp-1BCh]
  char v180; // [rsp+C0h] [rbp-1B8h] BYREF
  char v181; // [rsp+C1h] [rbp-1B7h] BYREF
  char v182[2]; // [rsp+C2h] [rbp-1B6h] BYREF
  int v183; // [rsp+C4h] [rbp-1B4h] BYREF
  PVOID v184; // [rsp+C8h] [rbp-1B0h] BYREF
  PVOID v185; // [rsp+D0h] [rbp-1A8h]
  _WORD v186[2]; // [rsp+D8h] [rbp-1A0h] BYREF
  int v187; // [rsp+DCh] [rbp-19Ch] BYREF
  int v188; // [rsp+E0h] [rbp-198h] BYREF
  unsigned __int8 v189; // [rsp+E9h] [rbp-18Fh] BYREF
  char v190; // [rsp+EAh] [rbp-18Eh] BYREF
  char v191; // [rsp+EBh] [rbp-18Dh]
  char v192; // [rsp+ECh] [rbp-18Ch]
  char v193; // [rsp+EDh] [rbp-18Bh]
  char v194; // [rsp+EEh] [rbp-18Ah]
  int v195; // [rsp+F0h] [rbp-188h]
  int v196; // [rsp+F4h] [rbp-184h]
  int v197; // [rsp+F8h] [rbp-180h]
  char *v198; // [rsp+100h] [rbp-178h]
  int v199; // [rsp+108h] [rbp-170h]
  __int64 v200; // [rsp+110h] [rbp-168h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+118h] [rbp-160h] BYREF
  int *v202; // [rsp+138h] [rbp-140h]
  PVOID v203; // [rsp+140h] [rbp-138h] BYREF
  PVOID v204; // [rsp+148h] [rbp-130h] BYREF
  int v205; // [rsp+150h] [rbp-128h] BYREF
  int v206; // [rsp+154h] [rbp-124h] BYREF
  unsigned int v207; // [rsp+158h] [rbp-120h]
  ACL *v208; // [rsp+160h] [rbp-118h]
  __int64 v209; // [rsp+168h] [rbp-110h] BYREF
  PVOID v210; // [rsp+170h] [rbp-108h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v211; // [rsp+178h] [rbp-100h] BYREF
  PVOID P; // [rsp+180h] [rbp-F8h] BYREF
  PVOID v213; // [rsp+188h] [rbp-F0h] BYREF
  int v214[2]; // [rsp+190h] [rbp-E8h] BYREF
  __int64 v215; // [rsp+198h] [rbp-E0h] BYREF
  __int64 v216; // [rsp+1A0h] [rbp-D8h]
  __int64 v217; // [rsp+1A8h] [rbp-D0h]
  int v218; // [rsp+1B0h] [rbp-C8h]
  PVOID v219; // [rsp+1B8h] [rbp-C0h]
  PVOID v220; // [rsp+1C0h] [rbp-B8h] BYREF
  PVOID v221[3]; // [rsp+1C8h] [rbp-B0h] BYREF
  void *v222; // [rsp+1E0h] [rbp-98h]
  __int64 v223; // [rsp+1E8h] [rbp-90h] BYREF
  __int64 v224; // [rsp+1F0h] [rbp-88h]
  char v225; // [rsp+1F8h] [rbp-80h] BYREF
  char v226; // [rsp+1FCh] [rbp-7Ch] BYREF
  __int128 v227; // [rsp+200h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[104]; // [rsp+210h] [rbp-68h] BYREF
  __int64 v229; // [rsp+288h] [rbp+10h] BYREF
  void **v230; // [rsp+290h] [rbp+18h]
  __int64 v231; // [rsp+298h] [rbp+20h]

  v231 = a4;
  v230 = a3;
  v229 = a2;
  v173 = 0;
  v187 = 0;
  v21 = 0LL;
  v175 = 0LL;
  v177 = 0;
  v183 = -1073741823;
  v185 = 0LL;
  v202 = 0LL;
  v196 = 0;
  v194 = 0;
  P = 0LL;
  v203 = 0LL;
  v213 = 0LL;
  v184 = 0LL;
  v209 = 0LL;
  v200 = 0LL;
  v188 = 0;
  v210 = 0LL;
  v182[0] = 0;
  v176 = 0;
  v191 = 0;
  v171 = 0;
  v169 = 0;
  v189 = 1;
  v190 = 0;
  v219 = 0LL;
  v222 = 0LL;
  v192 = 0;
  v223 = 0LL;
  v224 = 0LL;
  v214[1] = 0;
  v208 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v211 = 0LL;
  v178 = 0;
  v172 = 0;
  v166 = 0;
  v193 = 0;
  v186[0] = 999;
  v215 = 0LL;
  v216 = 0LL;
  v217 = 0LL;
  v218 = 0;
  v170 = 0;
  v195 = 0;
  v204 = 0LL;
  v197 = 0;
  v174 = 0;
  v180 = 0;
  v181 = 0;
  v220 = 0LL;
  v206 = -1;
  v214[0] = -1;
  v22 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v165 = v22;
  v182[1] = v22;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v26 = -1073741811;
      goto LABEL_381;
    }
    v199 = 7;
  }
  else
  {
    v199 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v26 = -1073741732;
    v21 = 0LL;
LABEL_381:
    v60 = 0LL;
    goto LABEL_382;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v26 = -1073741659;
    v21 = 0LL;
    goto LABEL_381;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !a12 || a12 > 0x1000 )
    {
      v26 = -1073741811;
      v173 = -1073741811;
      goto LABEL_19;
    }
    v27 = 4LL * a12;
    ProbeForWrite(Address, v27, 4u);
    ProbeForWrite(a14, v27, 4u);
  }
  else
  {
    v24 = (__int64)Address;
    if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
      v24 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v24 = *(_DWORD *)v24;
    v25 = (__int64)a14;
    if ( (unsigned __int64)a14 >= 0x7FFFFFFF0000LL )
      v25 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v25 = *(_DWORD *)v25;
  }
  if ( (a13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v227 = *(_OWORD *)a13;
  v26 = v173;
  ClientToken = SubjectContext.ClientToken;
LABEL_19:
  if ( v26 < 0 )
    goto LABEL_190;
  if ( a3 )
  {
    v83 = *a3;
    v28 = v22;
    v26 = ObReferenceObjectByHandle(v83, 8u, (POBJECT_TYPE)SeTokenObjectType, v22, v221, 0LL);
    v219 = v221[0];
    if ( v26 < 0 )
    {
      v219 = 0LL;
      v29 = (unsigned int *)v184;
      v21 = (char *)v175;
      v60 = (char *)v175;
      if ( v26 != -1073741816 )
        v193 = 1;
      goto LABEL_118;
    }
    v222 = ClientToken;
    ClientToken = v221[0];
    SubjectContext.ClientToken = v221[0];
    v192 = 1;
  }
  else
  {
    v28 = v22;
  }
  if ( !ClientToken )
    ClientToken = SubjectContext.PrimaryToken;
  v221[2] = ClientToken;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v28) )
  {
    if ( (a10 & 1) != 0 )
    {
      v191 = 1;
      goto LABEL_25;
    }
    v26 = -1073741727;
LABEL_190:
    v21 = (char *)v175;
    v60 = (char *)v175;
LABEL_382:
    v29 = (unsigned int *)v184;
    goto LABEL_118;
  }
LABEL_25:
  if ( (a8 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    v21 = (char *)v175;
    v60 = (char *)v175;
    goto LABEL_382;
  }
  v26 = SeCaptureSecurityDescriptor(a6, v28, 1, 0, (__int64)&v184);
  v173 = v26;
  if ( v26 < 0 )
  {
    v29 = 0LL;
    goto LABEL_193;
  }
  v29 = (unsigned int *)v184;
  if ( !v184 )
    goto LABEL_195;
  v30 = *((_WORD *)v184 + 1);
  if ( v30 >= 0 )
  {
    v32 = (char *)*((_QWORD *)v184 + 1);
  }
  else
  {
    v31 = *((unsigned int *)v184 + 1);
    if ( !(_DWORD)v31 )
      goto LABEL_195;
    v32 = (char *)v184 + v31;
  }
  if ( !v32 )
    goto LABEL_195;
  if ( v30 < 0 )
  {
    v33 = *((unsigned int *)v184 + 2);
    if ( (_DWORD)v33 )
    {
      v34 = (char *)v184 + v33;
      goto LABEL_35;
    }
LABEL_195:
    v26 = -1073741703;
    v21 = (char *)v175;
    v60 = (char *)v175;
    goto LABEL_118;
  }
  v34 = (char *)*((_QWORD *)v184 + 2);
LABEL_35:
  if ( !v34 )
    goto LABEL_195;
  v35 = (__int64)a16;
  if ( (unsigned __int64)a16 >= 0x7FFFFFFF0000LL )
    v35 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v35 = *(_BYTE *)v35;
  v26 = SepProbeAndCaptureString_U(a1, &P);
  v173 = v26;
  if ( v26 >= 0 )
  {
    v26 = SepProbeAndCaptureString_U(a4, &v203);
    v173 = v26;
    if ( v26 >= 0 )
    {
      v26 = SepProbeAndCaptureString_U(a5, &v213);
      v173 = v26;
    }
  }
  v36 = v170;
  if ( v26 < 0 )
    goto LABEL_190;
  if ( Src )
  {
    v26 = SeCaptureSid(Src, Object, 1, (__int64)&v209);
    if ( v26 < 0 )
    {
      v209 = 0LL;
      v21 = (char *)v175;
      v60 = (char *)v175;
      goto LABEL_382;
    }
  }
  v26 = SeCaptureObjectTypeList(a11, a12, v22, &v200);
  if ( v26 < 0 )
    goto LABEL_190;
  v29 = (unsigned int *)v184;
  v26 = SepTrustLevelCheck(v37, (__int64)v184, &SubjectContext, 0LL, 0LL, 1, &v206);
  if ( v26 < 0 )
  {
LABEL_194:
    v21 = (char *)v175;
    v60 = (char *)v175;
    goto LABEL_118;
  }
  v38 = a8;
  v26 = SepFilterToDiscretionary(&v206, a8);
  v173 = v26;
  if ( v26 < 0 )
  {
    v180 = 1;
    goto LABEL_49;
  }
  v26 = SepFilterCheck((__int64)v29, &v204, (__int64)ClientToken, 1, v214);
  if ( v26 < 0 )
  {
LABEL_193:
    v22 = v165;
    goto LABEL_194;
  }
  v26 = SepFilterToDiscretionary(v214, v38);
  v173 = v26;
  if ( v26 < 0 )
    v181 = 1;
LABEL_49:
  v39 = a18;
  if ( v26 < 0 )
  {
    v179 = v188;
    goto LABEL_56;
  }
  v26 = SepMandatoryIntegrityCheck((int *)&v227, (__int64)v29, 0, (__int64)ClientToken, 1, a18, (__int64)&v223);
  if ( v26 < 0 )
    goto LABEL_193;
  v26 = SepMandatoryToDiscretionary(&v223, v38);
  v173 = v26;
  if ( (v26 < 0 || (v38 & 0x2000000) != 0) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && HIDWORD(v224) <= 0x2000 )
  {
    v36 = 1;
    v170 = 1;
  }
  if ( (v26 >= 0 || v36)
    && (v26 = SePrivilegePolicyCheck(&a8, &v188, (__int64 *)&SubjectContext, 0LL, (__int64)&v210, v165),
        v173 = v26,
        (v38 = a8) == 0) )
  {
    v84 = (unsigned __int8)v197;
    v179 = v188;
    if ( v188 )
      v84 = 1;
    v197 = v84;
  }
  else
  {
    v179 = v188;
  }
LABEL_56:
  SeLockSubjectContext(&SubjectContext);
  if ( v26 < 0 && !v170 )
  {
    v47 = 0;
    v167 = 0;
    v50 = 1;
    v168 = 1;
    v183 = v26;
    if ( !a17 )
    {
      v175 = &v187;
      v198 = (char *)&v183;
      goto LABEL_74;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v175 = PoolWithTag;
    if ( PoolWithTag )
    {
      v177 = 1;
      v86 = a12;
      v87 = &PoolWithTag[4 * a12];
      v198 = v87;
      for ( i = 0; i < v86; ++i )
      {
        v89 = 4LL * i;
        *(_DWORD *)&PoolWithTag[v89] = v187;
        *(_DWORD *)&v87[v89] = v26;
      }
      v38 = a8;
      goto LABEL_74;
    }
    SeUnlockSubjectContext(&SubjectContext);
    v26 = -1073741670;
    v22 = v165;
    v21 = 0LL;
    v60 = (char *)v185;
    goto LABEL_118;
  }
  IsOwner = SepTokenIsOwner((__int64)ClientToken, (__int64)v29, v40, v39);
  v166 = IsOwner;
  v29 = (unsigned int *)v184;
  if ( !SepRmEnforceCap )
    goto LABEL_58;
  v90 = *((_WORD *)v184 + 1);
  if ( (v90 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_58;
  if ( v90 >= 0 )
  {
    v92 = (ACL *)*((_QWORD *)v184 + 3);
    goto LABEL_224;
  }
  v91 = *((unsigned int *)v184 + 3);
  if ( (_DWORD)v91 )
  {
    v92 = (ACL *)((char *)v184 + v91);
LABEL_224:
    v208 = v92;
    if ( v92 )
    {
      ScopedPolicySid = SepGetScopedPolicySid(v92);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid, &v211);
        v95 = v211;
        if ( Cap < 0 )
          v95 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
        v211 = v95;
        v26 = 0;
        v173 = 0;
        v178 = 1;
        IsOwner = v166;
        goto LABEL_59;
      }
    }
    goto LABEL_221;
  }
  v208 = 0LL;
LABEL_221:
  IsOwner = v166;
LABEL_58:
  v26 = v173;
LABEL_59:
  v38 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v73 = *((_WORD *)v29 + 1), (v73 & 4) == 0)
      ? (v75 = 0LL)
      : v73 >= 0
      ? (v75 = (ACL *)*((_QWORD *)v29 + 4))
      : (v74 = v29[4], !(_DWORD)v74)
      ? (v75 = 0LL)
      : (v75 = (ACL *)((char *)v29 + v74)),
        !RtlOwnerAcesPresent(v75)) )
  {
    if ( (v38 & 0x2000000) != 0 )
    {
      v76 = 393216;
      v42 = v188 | 0x60000;
    }
    else
    {
      v76 = v38 & 0x60000;
      v42 = v188 | v38 & 0x60000;
    }
    v195 = v76;
    v188 = v42;
    v38 &= 0xFFF9FFFF;
    a8 = v38;
  }
  else
  {
    v42 = v188;
  }
  v179 = v42;
  if ( !v38 && (!v178 || (_BYTE)v197) && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v195) )
  {
    v187 = v42;
    if ( v42 )
    {
      v81 = 0;
      v82 = 0;
      v47 = 1;
    }
    else
    {
      v81 = -1073741790;
      v82 = 1;
      v47 = 0;
    }
    v174 = v47;
    LOBYTE(a9) = v82;
    v167 = v47;
    v168 = v82;
    v183 = v81;
    if ( !a17 )
    {
      v175 = &v187;
      v198 = (char *)&v183;
      v50 = a9;
      goto LABEL_74;
    }
    v96 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v175 = v96;
    if ( v96 )
    {
      v177 = 1;
      v97 = a12;
      v98 = &v96[4 * a12];
      v198 = v98;
      for ( j = 0; j < v97; ++j )
      {
        v100 = 4LL * j;
        *(_DWORD *)&v96[v100] = v187;
        *(_DWORD *)&v98[v100] = v81;
      }
      v47 = v174;
      v50 = a9;
      goto LABEL_74;
    }
    goto LABEL_241;
  }
  v43 = a17;
  if ( a17 )
  {
    v101 = a12;
    v102 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v44 = v102;
    v175 = v102;
    if ( !v102 )
    {
LABEL_241:
      v26 = -1073741670;
      SeUnlockSubjectContext(&SubjectContext);
      v22 = v165;
      v21 = (char *)v175;
      v60 = (char *)v185;
      goto LABEL_118;
    }
    v177 = 1;
    v45 = (char *)&v102[v101];
    v43 = a17;
  }
  else
  {
    v44 = (unsigned int *)&v187;
    v175 = &v187;
    v45 = (char *)&v183;
  }
  v198 = v45;
  LODWORD(v215) = v195;
  v162 = v42;
  v46 = a12;
  SepAccessCheck(
    (__int64)v29,
    v209,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)ClientToken,
    v38,
    (_QWORD *)v200,
    a12,
    &v227,
    v162,
    v165,
    v44,
    0LL,
    (int *)v45,
    v43,
    v166,
    (int *)&v215,
    (__int64)&v204,
    (char *)&v167,
    &v168,
    v39);
  if ( !SepRmEnforceCap || *(int *)v45 < 0 || !v178 )
  {
    v38 = a8;
    v26 = v173;
    v179 = v188;
    v47 = v167;
    v48 = v168;
    v49 = a12;
    goto LABEL_66;
  }
  if ( a17 )
  {
    v103 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v46, 0x61476553u);
    v185 = v103;
    if ( !v103 )
    {
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v26 = -1073741670;
LABEL_250:
      v22 = v165;
      v21 = (char *)v175;
      v60 = (char *)v185;
      goto LABEL_382;
    }
    v104 = (int *)&v103[4 * v46];
  }
  else
  {
    v185 = &v225;
    v104 = (int *)&v226;
  }
  v202 = v104;
  v49 = a12;
  if ( a12 )
  {
    v26 = SepCopyObjectTypeList(v200, a12, &v220);
    v173 = v26;
    if ( v26 < 0 )
    {
      v22 = v165;
      v21 = (char *)v175;
      v60 = (char *)v185;
      goto LABEL_382;
    }
    v49 = a12;
  }
  else
  {
    v26 = v173;
  }
  LOBYTE(v29) = 0;
  a9 = (int)v29;
  v105 = 0;
  v38 = a8;
  v106 = v188;
  v179 = v188;
  while ( 1 )
  {
    v197 = v105;
    if ( v105 >= HIDWORD(v211[2].Linkage.Blink) )
      break;
    v107 = *(&v211[2].Signature + v105);
    v221[0] = (PVOID)v107;
    if ( *(_QWORD *)(v107 + 24) )
    {
      if ( !v204 )
      {
        LODWORD(v29) = (unsigned __int8)v29;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v208, &v204) < 0 )
          LODWORD(v29) = 1;
        a9 = (int)v29;
      }
      v108 = (_QWORD *)*((_QWORD *)ClientToken + 137);
      if ( v108 )
        v109 = v108[75];
      else
        v109 = 0LL;
      if ( v108 )
        v110 = v108[73];
      else
        v110 = 0LL;
      if ( v108 )
        v111 = v108[74];
      else
        v111 = 0LL;
      if ( v108 )
        v112 = v108[72];
      else
        v112 = 0LL;
      v113 = AuthzBasepEvaluateAceCondition(
               (__int64)ClientToken,
               *((_QWORD *)ClientToken + 97),
               (__int64)v204,
               v112,
               v111,
               v110,
               v109,
               *(_DWORD **)(v107 + 24),
               *(_DWORD *)(v107 + 16),
               1u,
               0,
               &v205);
      v26 = v113;
      v173 = v113;
      v114 = v205;
      if ( v205 != 1 )
      {
        if ( v113 < 0 )
          goto LABEL_250;
        if ( SeTokenIsRestricted(ClientToken) )
        {
          v115 = (_QWORD *)*((_QWORD *)ClientToken + 137);
          if ( v115 )
            v116 = v115[75];
          else
            v116 = 0LL;
          if ( v115 )
            v117 = v115[73];
          else
            v117 = 0LL;
          if ( v115 )
            v118 = v115[74];
          else
            v118 = 0LL;
          if ( v115 )
            v119 = v115[72];
          else
            v119 = 0LL;
          v26 = AuthzBasepEvaluateAceCondition(
                  (__int64)ClientToken,
                  *((_QWORD *)ClientToken + 97),
                  (__int64)v204,
                  v119,
                  v118,
                  v117,
                  v116,
                  *(_DWORD **)(v107 + 24),
                  *(_DWORD *)(v107 + 16),
                  1u,
                  1u,
                  &v205);
          v173 = v26;
          if ( v26 < 0 )
            goto LABEL_250;
          v114 = v205;
        }
        if ( !(_BYTE)a9 && v114 != 1 )
        {
          v49 = a12;
          goto LABEL_310;
        }
      }
      v106 = v179;
    }
    if ( (*(_DWORD *)(v107 + 48) & 1) != 0 )
    {
      if ( (v38 & 0x2000000) != 0 )
        v120 = v38;
      else
        v120 = v38 | v106;
      v121 = 0;
    }
    else
    {
      v120 = v38;
      v121 = v106;
    }
    v26 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *((unsigned __int8 **)v221[0] + 4), v208);
    v173 = v26;
    if ( v26 < 0 )
      goto LABEL_250;
    v163 = v121;
    v122 = v220;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      v209,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)SubjectContext.ClientToken,
      v120,
      v220,
      a12,
      &v227,
      v163,
      v165,
      (unsigned int *)v185,
      0LL,
      v202,
      a17,
      v166,
      (int *)&v215,
      (__int64)&v204,
      (char *)&v189,
      &v190,
      v39);
    v123 = *(_DWORD *)v185;
    if ( v172 )
      v123 = v195 & *(_DWORD *)v185;
    v195 = v123;
    v49 = a12;
    if ( v122 )
      SepMergeObjectTypeListAccesses(v200, (__int64)v122, a12);
    v172 = 1;
LABEL_310:
    v105 = v197 + 1;
    v106 = v179;
    LOBYTE(v29) = a9;
  }
  v47 = v189;
  v167 = v189;
  LOBYTE(a9) = v190;
  v168 = v190;
  v124 = v195;
  *(_DWORD *)v185 &= v195;
  if ( !v124 )
  {
    *v202 = -1073741790;
    v47 = 0;
    v167 = 0;
    v48 = 1;
    v168 = 1;
LABEL_66:
    LOBYTE(a9) = v48;
  }
  if ( (v38 & 0x2000000) != 0 )
  {
    if ( !v170
      || !*(_WORD *)((char *)&v217 + 5)
      && (IsKTMCommitCoordinator = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator()) == 0 )
    {
      if ( a17 )
        v77 = v49;
      else
        v77 = 0;
      SepConstrainByMandatory((__int64)&v223, v38, (char *)v175, v198, 0LL, v77);
    }
    goto LABEL_69;
  }
  if ( !v170 || *(_WORD *)((char *)&v217 + 5) )
  {
LABEL_69:
    v50 = a9;
    goto LABEL_70;
  }
  if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() || HIDWORD(v216) )
  {
    v47 = 0;
    v167 = 0;
    LOBYTE(a9) = 1;
    v168 = 1;
    v127 = 0;
    v187 = 0;
    v183 = -1073741790;
    v52 = a17;
    v51 = (char *)v175;
    if ( a17 )
    {
      v128 = 0;
      v129 = v198;
      while ( v128 < v126 )
      {
        v130 = 4LL * v128;
        *(_DWORD *)&v51[v130] = v127;
        *(_DWORD *)&v129[v130] = v183;
        ++v128;
        v127 = v187;
      }
      v50 = a9;
      goto LABEL_71;
    }
    v50 = 1;
  }
  else
  {
    HIBYTE(v217) = 1;
    v47 = 1;
    v167 = 1;
    v50 = 0;
    v168 = 0;
    v187 = v38;
    v183 = 0;
LABEL_70:
    v51 = (char *)v175;
LABEL_71:
    v52 = a17;
  }
  if ( (v38 & 0x2000000) != 0 )
  {
    if ( v52 )
      v78 = a12;
    else
      v78 = 0;
    v79 = v198;
    SepConstrainByConstraintMask(v206, v38, v51, v198, 0LL, v78, &v180);
    if ( a17 )
      v80 = a12;
    else
      v80 = 0;
    SepConstrainByConstraintMask(v214[0], v38, (char *)v175, v79, 0LL, v80, &v181);
  }
  v29 = (unsigned int *)v184;
LABEL_74:
  if ( ClientToken )
  {
    if ( v180 || v181 )
    {
LABEL_328:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
      v132 = v183 >= 0;
      v133 = a8 | v188;
      TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
      SeLogAccessFailure((__int64)ClientToken, v135, v136, TokenTrustLevel, (ULONGLONG)v184, v133, v132, 0);
      ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v38 = a8;
      v26 = v173;
      v29 = (unsigned int *)v184;
      v179 = v188;
      v47 = v167;
      v50 = v168;
      goto LABEL_79;
    }
    if ( HIDWORD(v216) || (*((_DWORD *)ClientToken + 50) & 0x4000) == 0 )
      goto LABEL_79;
    if ( v26 >= 0 )
    {
      if ( v183 < 0 || HIBYTE(v217) )
        goto LABEL_328;
LABEL_79:
      if ( v26 >= 0
        && v183 < 0
        && !HIDWORD(v216)
        && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v215, v38) )
      {
        SepLogLpacAccessFailure(v137);
      }
    }
  }
  if ( v191 )
    goto LABEL_93;
  if ( v199 == 2 )
  {
    if ( v47 )
    {
      LOBYTE(HandleInformation) = 0;
      v53 = SepAdtAuditObjectAccessWithContext(0LL, v203, v47, 0LL, &SubjectContext, HandleInformation, v186);
      v171 = v53;
    }
    else
    {
      v53 = v171;
    }
    if ( !v50 )
      goto LABEL_86;
    LOBYTE(HandleInformation) = 0;
    v54 = SepAdtAuditObjectAccessWithContext(0LL, v203, 0LL, v50, &SubjectContext, HandleInformation, v186);
    v169 = v54;
  }
  else
  {
    if ( v47 )
    {
      v186[0] = 152;
      v53 = SepAdtAuditThisEventWithContext(152LL, v47, 0LL, &SubjectContext);
      v171 = v53;
    }
    else
    {
      v53 = v171;
    }
    if ( v50 )
    {
      v186[0] = 152;
      v54 = SepAdtAuditThisEventWithContext(152LL, 0LL, v50, &SubjectContext);
      v169 = v54;
    }
    else
    {
LABEL_86:
      v54 = v169;
    }
  }
  if ( v53 || v54 )
  {
    PrimaryToken = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (int)SubjectContext.ClientToken;
    v139 = *((_WORD *)v29 + 1);
    if ( (v139 & 0x10) != 0 )
    {
      if ( v139 >= 0 )
      {
        v140 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v141 = v29[3];
        if ( v141 )
          LODWORD(v140) = (_DWORD)v29 + v141;
        else
          LODWORD(v140) = 0;
      }
    }
    else
    {
      LODWORD(v140) = 0;
    }
    if ( (v139 & 0x10) != 0 )
    {
      if ( v139 >= 0 )
      {
        v142 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v143 = v29[3];
        if ( v143 )
          LODWORD(v142) = (_DWORD)v29 + v143;
        else
          LODWORD(v142) = 0;
      }
    }
    else
    {
      LODWORD(v142) = 0;
    }
    v144 = v38 | v179;
    v145 = v175;
    v146 = v198;
    v147 = a17;
    SepExamineSaclEx(
      v142,
      v140,
      PrimaryToken,
      v144,
      v200,
      a12,
      a17,
      (__int64)v198,
      (__int64)v175,
      v209,
      v166,
      (__int64)v182,
      (__int64)&v176);
    v148 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v148 = (int)SubjectContext.ClientToken;
    v149 = *((_WORD *)v29 + 1);
    if ( (v149 & 0x10) != 0 )
    {
      if ( v149 >= 0 )
      {
        v150 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v151 = v29[3];
        if ( v151 )
          LODWORD(v150) = (_DWORD)v29 + v151;
        else
          LODWORD(v150) = 0;
      }
    }
    else
    {
      LODWORD(v150) = 0;
    }
    v164 = (__int64)v145;
    v55 = a12;
    SepExamineGlobalSaclEx(
      (__int64)v203,
      v150,
      v148,
      v144,
      v200,
      a12,
      v147,
      (__int64)v146,
      v164,
      v209,
      v166,
      v182,
      &v176);
    v53 = v171;
    v54 = v169;
  }
  else
  {
    v55 = a12;
  }
  if ( v182[0] || v176 )
  {
    v152 = (unsigned __int8)v196;
    if ( v47 )
      v152 = 1;
    v196 = v152;
    v56 = a17;
    v153 = v199;
    if ( v182[0] )
    {
      v154 = v53 == 0;
      v21 = (char *)v175;
      if ( !v154 )
      {
        v155 = v175;
        if ( !a17 )
          v155 = 0LL;
        v156 = &v229;
        if ( !v47 )
          LODWORD(v156) = 0;
        v29 = (unsigned int *)v184;
        SepAdtOpenObjectAuditAlarm(
          v186[0],
          (int)P,
          (int)v156,
          (int)v203,
          (__int64)v213,
          v184,
          (__int64)SubjectContext.ClientToken,
          (__int64)SubjectContext.PrimaryToken,
          *(_DWORD *)v175,
          *(_DWORD *)v175,
          (__int64)v210,
          1,
          (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
          v199,
          v200,
          v55,
          (__int64)v155,
          0LL,
          0LL);
        v47 = v167;
        v54 = v169;
      }
    }
    else
    {
      v21 = (char *)v175;
    }
    if ( v176 && v54 )
    {
      v157 = (__int64)v21;
      if ( !v56 )
        v157 = 0LL;
      v158 = &v229;
      if ( !v47 )
        LODWORD(v158) = 0;
      v29 = (unsigned int *)v184;
      SepAdtOpenObjectAuditAlarm(
        v186[0],
        (int)P,
        (int)v158,
        (int)v203,
        (__int64)v213,
        v184,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        a8,
        a8,
        (__int64)v210,
        0,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v153,
        v200,
        v55,
        v157,
        0LL,
        0LL);
    }
    goto LABEL_94;
  }
  if ( !v210 || !v47 )
  {
LABEL_93:
    v21 = (char *)v175;
    v56 = a17;
LABEL_94:
    v57 = v196;
    goto LABEL_95;
  }
  SepAdtPrivilegeObjectAuditAlarm(
    (_DWORD)P,
    (_DWORD)v203,
    (_DWORD)v213,
    (unsigned int)&v229,
    (__int64)SubjectContext.ClientToken,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
    a8,
    (__int64)v210,
    v167);
  v57 = 0;
  v29 = (unsigned int *)v184;
  v56 = a17;
  v21 = (char *)v175;
LABEL_95:
  SeUnlockSubjectContext(&SubjectContext);
  if ( !v56 )
  {
    v58 = Address;
    *Address = v183;
    v59 = a14;
    *a14 = v187;
    if ( SepRmEnforceCap && v172 && v183 >= 0 )
    {
      *v58 = *v202;
      v60 = (char *)v185;
      *v59 &= *(_DWORD *)v185;
      v29 = (unsigned int *)v184;
      goto LABEL_117;
    }
    v29 = (unsigned int *)v184;
LABEL_98:
    v60 = (char *)v185;
    goto LABEL_117;
  }
  v61 = v198;
  v207 = 0;
  v62 = v172;
  if ( !v198 )
  {
    v63 = 0;
    v64 = Address;
    v65 = a14;
    while ( v63 < a12 )
    {
      v66 = v63;
      v64[v66] = v183;
      v65[v66] = v187;
      if ( SepRmEnforceCap && v62 && v183 >= 0 )
      {
        v64[v66] = v183;
        v65[v66] &= v187;
      }
      v207 = ++v63;
      v29 = (unsigned int *)v184;
    }
    goto LABEL_98;
  }
  v67 = 0;
  v68 = Address;
  v69 = a14;
  v60 = (char *)v185;
  while ( v67 < a12 )
  {
    v70 = v67;
    v68[v70] = *(_DWORD *)&v61[v70 * 4];
    v69[v70] = *(_DWORD *)&v21[v70 * 4];
    if ( SepRmEnforceCap && v62 && *(int *)&v61[v70 * 4] >= 0 )
    {
      v68[v70] = v202[v70];
      v69[v70] &= *(_DWORD *)&v60[v70 * 4];
    }
    v207 = ++v67;
    v29 = (unsigned int *)v184;
  }
LABEL_117:
  *a16 = v57;
  v26 = 0;
  v173 = 0;
  v22 = v165;
LABEL_118:
  if ( v192 )
  {
    ObfDereferenceObject(v219);
    SubjectContext.ClientToken = v222;
  }
  if ( v210 )
    ExFreePoolWithTag(v210, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v29, v22, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v203 )
    ExFreePoolWithTag(v203, 0);
  if ( v213 )
    ExFreePoolWithTag(v213, 0);
  if ( v209 )
  {
    LOBYTE(v71) = 1;
    SeReleaseSid(v209, v22, v71);
  }
  if ( v200 )
    SeFreeCapturedObjectTypeList((void *)v200);
  if ( v177 )
  {
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v60 )
      ExFreePoolWithTag(v60, 0);
  }
  if ( v178 )
  {
    Blink = v211[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v220 )
    ExFreePoolWithTag(v220, 0);
  SepFreeResourceInfo(v204);
  if ( v26 == -1073741670 || v193 )
    SepAuditFailed((unsigned int)v26);
  return (unsigned int)v26;
}
