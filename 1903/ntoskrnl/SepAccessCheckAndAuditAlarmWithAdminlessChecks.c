/*
 * XREFs of SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14062047C (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14000A310 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SepLocateTokenTrustLevel @ 0x14000AC44 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x14000C198 (SepFreeResourceInfo.c)
 *     SeCaptureObjectTypeList @ 0x14000C1D0 (SeCaptureObjectTypeList.c)
 *     SepMandatoryToDiscretionary @ 0x14000C3D8 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x14000C3FC (SepFilterToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14000C418 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14000C518 (SePrivilegePolicyCheck.c)
 *     SepTokenIsOwner @ 0x14000C6A0 (SepTokenIsOwner.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085130 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeTokenIsRestricted @ 0x140086BB0 (SeTokenIsRestricted.c)
 *     RtlOwnerAcesPresent @ 0x140087F50 (RtlOwnerAcesPresent.c)
 *     SepConstrainByConstraintMask @ 0x140088064 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x1400880A0 (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140092EE0 (AuthzBasepEvaluateAceCondition.c)
 *     SepMandatoryIntegrityCheck @ 0x1400C9360 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x1400C9850 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x1400C9F50 (SepAccessCheck.c)
 *     SeLogAccessFailure @ 0x140126C7C (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x1401343CC (SepLpacCausedAccessFailure.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402D5C20 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14031CB6C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14031CC0C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x14031CCC4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14031CE14 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14031CF28 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x14031CF78 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x14031DF18 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x14031EDD4 (SepRmReferenceFindCap.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DCB50 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405F5DB0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F5E10 (SeUnlockSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x140621690 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406217BC (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406218EC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140621A90 (SepAdtAuditThisEventWithContext.c)
 *     SeCheckAuditPrivilege @ 0x140621B98 (SeCheckAuditPrivilege.c)
 *     SeCaptureSid @ 0x140644F1C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14064501C (SeReleaseSid.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DD148 (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x1408DF8A0 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  int v47; // r12d
  unsigned __int8 v48; // r13
  unsigned __int8 v49; // cl
  char *v50; // r10
  unsigned int v51; // r9d
  char v52; // al
  char v53; // r8
  char v54; // dl
  unsigned int v55; // r14d
  char v56; // di
  char v57; // r14
  unsigned int v58; // r13d
  int *v59; // rcx
  int *v60; // rdx
  char *v61; // r12
  char *v62; // r8
  unsigned int v63; // ecx
  int *v64; // r9
  int *v65; // r10
  char v66; // r11
  unsigned __int64 v67; // rdx
  int *v68; // r8
  int *v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int16 v73; // ax
  __int64 v74; // rax
  ACL *v75; // rcx
  int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  char *v79; // rsi
  unsigned int v80; // eax
  void *v81; // rcx
  int v82; // ecx
  char *PoolWithTag; // r10
  unsigned int v84; // r9d
  char *v85; // r8
  unsigned int i; // edx
  __int64 v87; // rcx
  __int16 v88; // dx
  __int64 v89; // rax
  ACL *v90; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v93; // rdx
  char *v94; // r10
  unsigned int v95; // r9d
  char *v96; // r8
  unsigned int j; // edx
  __int64 v98; // rcx
  __int64 v99; // rdi
  unsigned int *v100; // rax
  _DWORD *v101; // rax
  _DWORD *v102; // r10
  int *v103; // r9
  __int64 v104; // rcx
  int v105; // edx
  int v106; // eax
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
  unsigned int v120; // esi
  unsigned int v121; // r13d
  unsigned int v122; // r13d
  int v123; // edx
  unsigned int v124; // ecx
  char *v125; // r8
  struct _KTHREAD *CurrentThread; // rax
  char v127; // di
  char v128; // si
  ULONGLONG TokenTrustLevel; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  ULONG v132; // ecx
  int PrimaryToken; // r10d
  __int16 v134; // ax
  __int64 v135; // rdx
  unsigned int v136; // ecx
  __int64 v137; // rcx
  unsigned int v138; // eax
  int v139; // edi
  char *v140; // r14
  char v141; // r15
  int v142; // r8d
  __int16 v143; // ax
  __int64 v144; // rdx
  unsigned int v145; // eax
  int v146; // r9d
  PVOID v147; // r8
  __int64 *v148; // r10
  int v149; // r14d
  __int64 v150; // rdx
  __int64 *v151; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int Object; // [rsp+20h] [rbp-248h]
  int HandleInformation; // [rsp+28h] [rbp-240h]
  __int64 v155; // [rsp+38h] [rbp-230h]
  unsigned int v156; // [rsp+40h] [rbp-228h]
  unsigned int v157; // [rsp+40h] [rbp-228h]
  int v158; // [rsp+78h] [rbp-1F0h]
  char v159; // [rsp+A0h] [rbp-1C8h]
  char v160; // [rsp+A1h] [rbp-1C7h] BYREF
  unsigned __int8 v161; // [rsp+A2h] [rbp-1C6h] BYREF
  char v162; // [rsp+A3h] [rbp-1C5h]
  char v163; // [rsp+A4h] [rbp-1C4h]
  char v164; // [rsp+A5h] [rbp-1C3h]
  char v165; // [rsp+A6h] [rbp-1C2h]
  char v166; // [rsp+A7h] [rbp-1C1h]
  int v167; // [rsp+A8h] [rbp-1C0h]
  int v168; // [rsp+ACh] [rbp-1BCh] BYREF
  PVOID v169; // [rsp+B0h] [rbp-1B8h]
  char v170; // [rsp+B8h] [rbp-1B0h] BYREF
  char v171; // [rsp+B9h] [rbp-1AFh]
  char v172; // [rsp+BAh] [rbp-1AEh]
  char v173; // [rsp+BBh] [rbp-1ADh] BYREF
  char v174; // [rsp+BCh] [rbp-1ACh] BYREF
  char v175[3]; // [rsp+BDh] [rbp-1ABh] BYREF
  PVOID v176; // [rsp+C0h] [rbp-1A8h]
  PVOID v177; // [rsp+C8h] [rbp-1A0h] BYREF
  _WORD v178[2]; // [rsp+D0h] [rbp-198h] BYREF
  int v179; // [rsp+D4h] [rbp-194h] BYREF
  int v180; // [rsp+D8h] [rbp-190h] BYREF
  char v181; // [rsp+DCh] [rbp-18Ch]
  char v182; // [rsp+E2h] [rbp-186h]
  unsigned __int8 v183; // [rsp+E3h] [rbp-185h] BYREF
  char v184; // [rsp+E4h] [rbp-184h] BYREF
  char v185; // [rsp+E5h] [rbp-183h]
  char v186; // [rsp+E6h] [rbp-182h]
  char v187; // [rsp+E7h] [rbp-181h]
  int v188; // [rsp+E8h] [rbp-180h]
  int v189; // [rsp+ECh] [rbp-17Ch]
  int v190; // [rsp+F0h] [rbp-178h]
  char *v191; // [rsp+F8h] [rbp-170h]
  int v192; // [rsp+100h] [rbp-168h]
  int v193; // [rsp+104h] [rbp-164h]
  __int64 v194; // [rsp+108h] [rbp-160h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+110h] [rbp-158h] BYREF
  int *v196; // [rsp+130h] [rbp-138h]
  PVOID v197; // [rsp+138h] [rbp-130h] BYREF
  PVOID v198; // [rsp+140h] [rbp-128h] BYREF
  int v199; // [rsp+148h] [rbp-120h] BYREF
  int v200; // [rsp+14Ch] [rbp-11Ch] BYREF
  unsigned int v201; // [rsp+150h] [rbp-118h]
  ACL *v202; // [rsp+158h] [rbp-110h]
  __int64 v203; // [rsp+160h] [rbp-108h] BYREF
  PVOID v204; // [rsp+168h] [rbp-100h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v205; // [rsp+170h] [rbp-F8h] BYREF
  PVOID P; // [rsp+178h] [rbp-F0h] BYREF
  PVOID v207; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v208; // [rsp+188h] [rbp-E0h] BYREF
  PVOID v209; // [rsp+190h] [rbp-D8h] BYREF
  __int64 v210; // [rsp+198h] [rbp-D0h] BYREF
  __int64 v211; // [rsp+1A0h] [rbp-C8h]
  __int64 v212; // [rsp+1A8h] [rbp-C0h]
  int v213; // [rsp+1B0h] [rbp-B8h]
  PVOID v214; // [rsp+1B8h] [rbp-B0h]
  PVOID v215[3]; // [rsp+1C0h] [rbp-A8h] BYREF
  void *v216; // [rsp+1D8h] [rbp-90h]
  __int128 v217; // [rsp+1E0h] [rbp-88h] BYREF
  __int64 v218; // [rsp+1F0h] [rbp-78h] BYREF
  __int64 v219; // [rsp+1F8h] [rbp-70h]
  _BYTE v220[4]; // [rsp+200h] [rbp-68h] BYREF
  char v221; // [rsp+204h] [rbp-64h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+208h] [rbp-60h] BYREF
  __int64 v223; // [rsp+278h] [rbp+10h] BYREF
  void **v224; // [rsp+280h] [rbp+18h]
  __int64 v225; // [rsp+288h] [rbp+20h]

  v225 = a4;
  v224 = a3;
  v223 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v167 = 0;
  v180 = 0;
  v21 = 0LL;
  v169 = 0LL;
  v171 = 0;
  v168 = -1073741823;
  v176 = 0LL;
  v196 = 0LL;
  v190 = 0;
  v181 = 0;
  P = 0LL;
  v197 = 0LL;
  v207 = 0LL;
  v177 = 0LL;
  v203 = 0LL;
  v194 = 0LL;
  v179 = 0;
  v217 = 0uLL;
  v204 = 0LL;
  v175[0] = 0;
  v170 = 0;
  v185 = 0;
  v166 = 0;
  v163 = 0;
  v183 = 1;
  v184 = 0;
  v214 = 0LL;
  v216 = 0LL;
  v186 = 0;
  v218 = 0LL;
  v219 = 0LL;
  v202 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v205 = 0LL;
  v172 = 0;
  v165 = 0;
  v162 = 0;
  v187 = 0;
  v178[0] = 999;
  v210 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0;
  v164 = 0;
  v189 = 0;
  v198 = 0LL;
  v188 = 0;
  v182 = 0;
  v173 = 0;
  v174 = 0;
  v209 = 0LL;
  v200 = -1;
  v208 = 0xFFFFFFFFLL;
  v22 = KeGetCurrentThread()->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  v159 = v22;
  v175[1] = v22;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v26 = -1073741811;
      goto LABEL_379;
    }
    v193 = 7;
  }
  else
  {
    v193 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v26 = -1073741732;
    v21 = 0LL;
LABEL_379:
    v61 = 0LL;
    goto LABEL_380;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v26 = -1073741659;
    v21 = 0LL;
    goto LABEL_379;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !a12 || a12 > 0x1000 )
    {
      v26 = -1073741811;
      v167 = -1073741811;
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
  v217 = *(_OWORD *)a13;
  ClientToken = SubjectContext.ClientToken;
  v26 = v167;
LABEL_19:
  if ( v26 < 0 )
    goto LABEL_189;
  if ( a3 )
  {
    v81 = *a3;
    v28 = v22;
    v26 = ObReferenceObjectByHandle(v81, 8u, (POBJECT_TYPE)SeTokenObjectType, v22, v215, 0LL);
    v214 = v215[0];
    if ( v26 < 0 )
    {
      v214 = 0LL;
      v29 = (unsigned int *)v177;
      v21 = (char *)v169;
      v61 = (char *)v169;
      if ( v26 != -1073741816 )
        v187 = 1;
      goto LABEL_118;
    }
    v216 = ClientToken;
    ClientToken = v215[0];
    SubjectContext.ClientToken = v215[0];
    v186 = 1;
  }
  else
  {
    v28 = v22;
  }
  if ( !ClientToken )
    ClientToken = SubjectContext.PrimaryToken;
  v215[2] = ClientToken;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v28) )
  {
    if ( (a10 & 1) != 0 )
    {
      v185 = 1;
      goto LABEL_25;
    }
    v26 = -1073741727;
LABEL_189:
    v21 = (char *)v169;
    v61 = (char *)v169;
LABEL_380:
    v29 = (unsigned int *)v177;
    goto LABEL_118;
  }
LABEL_25:
  if ( (a8 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    v21 = (char *)v169;
    v61 = (char *)v169;
    goto LABEL_380;
  }
  v26 = SeCaptureSecurityDescriptor(a6, v28, PagedPool, 0, &v177);
  v167 = v26;
  if ( v26 < 0 )
  {
    v29 = 0LL;
    goto LABEL_192;
  }
  v29 = (unsigned int *)v177;
  if ( !v177 )
    goto LABEL_194;
  v30 = *((_WORD *)v177 + 1);
  if ( v30 >= 0 )
  {
    v32 = (char *)*((_QWORD *)v177 + 1);
  }
  else
  {
    v31 = *((unsigned int *)v177 + 1);
    if ( !(_DWORD)v31 )
      goto LABEL_194;
    v32 = (char *)v177 + v31;
  }
  if ( !v32 )
    goto LABEL_194;
  if ( v30 < 0 )
  {
    v33 = *((unsigned int *)v177 + 2);
    if ( (_DWORD)v33 )
    {
      v34 = (char *)v177 + v33;
      goto LABEL_35;
    }
LABEL_194:
    v26 = -1073741703;
    v21 = (char *)v169;
    v61 = (char *)v169;
    goto LABEL_118;
  }
  v34 = (char *)*((_QWORD *)v177 + 2);
LABEL_35:
  if ( !v34 )
    goto LABEL_194;
  v35 = (__int64)a16;
  if ( (unsigned __int64)a16 >= 0x7FFFFFFF0000LL )
    v35 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v35 = *(_BYTE *)v35;
  v26 = SepProbeAndCaptureString_U(a1, &P);
  v167 = v26;
  if ( v26 >= 0 )
  {
    v26 = SepProbeAndCaptureString_U(a4, &v197);
    v167 = v26;
    if ( v26 >= 0 )
    {
      v26 = SepProbeAndCaptureString_U(a5, &v207);
      v167 = v26;
    }
  }
  v36 = v164;
  if ( v26 < 0 )
    goto LABEL_189;
  if ( Src )
  {
    v26 = SeCaptureSid(Src, Object, 1, (__int64)&v203);
    if ( v26 < 0 )
    {
      v203 = 0LL;
      v21 = (char *)v169;
      v61 = (char *)v169;
      goto LABEL_380;
    }
  }
  v26 = SeCaptureObjectTypeList(a11, a12, v22, &v194);
  if ( v26 < 0 )
    goto LABEL_189;
  v29 = (unsigned int *)v177;
  v26 = SepTrustLevelCheck(v37, (__int64)v177, &SubjectContext, 0LL, 0LL, 1, &v200);
  if ( v26 < 0 )
  {
LABEL_193:
    v21 = (char *)v169;
    v61 = (char *)v169;
    goto LABEL_118;
  }
  v38 = a8;
  v26 = SepFilterToDiscretionary(&v200, a8);
  v167 = v26;
  if ( v26 < 0 )
  {
    v173 = 1;
    goto LABEL_49;
  }
  v26 = SepFilterCheck((__int64)v29, &v198, (__int64)ClientToken, 1, (int *)&v208);
  if ( v26 < 0 )
  {
LABEL_192:
    v22 = v159;
    goto LABEL_193;
  }
  v26 = SepFilterToDiscretionary(&v208, v38);
  v167 = v26;
  if ( v26 < 0 )
    v174 = 1;
LABEL_49:
  v39 = a18;
  if ( v26 < 0 )
  {
    a9 = v179;
    goto LABEL_56;
  }
  v26 = SepMandatoryIntegrityCheck((int *)&v217, (__int64)v29, 0LL, (__int64)ClientToken, 1, a18, (__int64)&v218);
  if ( v26 < 0 )
    goto LABEL_192;
  v26 = SepMandatoryToDiscretionary(&v218, v38);
  v167 = v26;
  if ( (v26 < 0 || (v38 & 0x2000000) != 0) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && HIDWORD(v219) <= 0x2000 )
  {
    v36 = 1;
    v164 = 1;
  }
  if ( (v26 >= 0 || v36)
    && (v26 = SePrivilegePolicyCheck(&a8, &v179, (__int64 *)&SubjectContext, 0LL, (__int64)&v204, v159),
        v167 = v26,
        (v38 = a8) == 0) )
  {
    v82 = (unsigned __int8)v188;
    a9 = v179;
    if ( v179 )
      v82 = 1;
    v188 = v82;
  }
  else
  {
    a9 = v179;
  }
LABEL_56:
  SeLockSubjectContext(&SubjectContext);
  if ( v26 < 0 && !v164 )
  {
    v48 = 0;
    v161 = 0;
    v49 = 1;
    v160 = 1;
    v47 = v26;
    v168 = v26;
    if ( !a17 )
    {
      v169 = &v180;
      v191 = (char *)&v168;
      goto LABEL_73;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v169 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext(&SubjectContext);
      v26 = -1073741670;
      v22 = v159;
      v21 = 0LL;
      v61 = (char *)v176;
      goto LABEL_118;
    }
    v171 = 1;
    v84 = a12;
    v85 = &PoolWithTag[4 * a12];
    v191 = v85;
    for ( i = 0; i < v84; ++i )
    {
      v87 = 4LL * i;
      *(_DWORD *)&PoolWithTag[v87] = v180;
      *(_DWORD *)&v85[v87] = v26;
    }
LABEL_213:
    v49 = v160;
    goto LABEL_73;
  }
  IsOwner = SepTokenIsOwner((__int64)ClientToken, (__int64)v29, v40, v39);
  v162 = IsOwner;
  v29 = (unsigned int *)v177;
  if ( !SepRmEnforceCap )
    goto LABEL_58;
  v88 = *((_WORD *)v177 + 1);
  if ( (v88 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_58;
  if ( v88 >= 0 )
  {
    v90 = (ACL *)*((_QWORD *)v177 + 3);
    goto LABEL_223;
  }
  v89 = *((unsigned int *)v177 + 3);
  if ( (_DWORD)v89 )
  {
    v90 = (ACL *)((char *)v177 + v89);
LABEL_223:
    v202 = v90;
    if ( v90 )
    {
      ScopedPolicySid = SepGetScopedPolicySid(v90);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid, &v205);
        v93 = v205;
        if ( Cap < 0 )
          v93 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
        v205 = v93;
        v26 = 0;
        v167 = 0;
        v172 = 1;
        IsOwner = v162;
        goto LABEL_59;
      }
    }
    goto LABEL_220;
  }
  v202 = 0LL;
LABEL_220:
  IsOwner = v162;
LABEL_58:
  v26 = v167;
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
      v76 = 393216;
    else
      v76 = v38 & 0x60000;
    v42 = v76 | v179;
    v179 |= v76;
    v189 = v76;
    v38 &= 0xFFF9FFFF;
    a8 = v38;
  }
  else
  {
    v42 = v179;
  }
  a9 = v42;
  if ( !v38 && (!v172 || (_BYTE)v188) && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v189) )
  {
    v180 = v42;
    if ( v42 )
    {
      v48 = 1;
      v49 = 0;
      v47 = 0;
      v168 = 0;
    }
    else
    {
      v48 = 0;
      v49 = 1;
      v47 = -1073741790;
      v168 = -1073741790;
    }
    v160 = v49;
    v161 = v48;
    if ( !a17 )
    {
      v169 = &v180;
      v191 = (char *)&v168;
      goto LABEL_73;
    }
    v94 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v169 = v94;
    if ( v94 )
    {
      v171 = 1;
      v95 = a12;
      v96 = &v94[4 * a12];
      v191 = v96;
      for ( j = 0; j < v95; ++j )
      {
        v98 = 4LL * j;
        *(_DWORD *)&v94[v98] = v180;
        *(_DWORD *)&v96[v98] = v47;
      }
      goto LABEL_213;
    }
LABEL_240:
    v26 = -1073741670;
    SeUnlockSubjectContext(&SubjectContext);
    v22 = v159;
    v21 = (char *)v169;
    v61 = (char *)v176;
    goto LABEL_118;
  }
  v43 = a17;
  if ( a17 )
  {
    v99 = a12;
    v100 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v44 = v100;
    v169 = v100;
    if ( !v100 )
      goto LABEL_240;
    v171 = 1;
    v45 = (char *)&v100[v99];
    v43 = a17;
  }
  else
  {
    v44 = (unsigned int *)&v180;
    v169 = &v180;
    v45 = (char *)&v168;
  }
  v191 = v45;
  LODWORD(v210) = v189;
  v156 = v42;
  v46 = a12;
  SepAccessCheck(
    (__int64)v29,
    (unsigned __int8 *)v203,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)ClientToken,
    v38,
    (_QWORD *)v194,
    a12,
    &v217,
    v156,
    v159,
    v44,
    0LL,
    (int *)v45,
    v43,
    v162,
    (int *)&v210,
    (__int64 *)&v198,
    (char *)&v161,
    &v160,
    v39);
  if ( !SepRmEnforceCap || *(int *)v45 < 0 || !v172 )
  {
    v47 = -1073741790;
    v38 = a8;
    v26 = v167;
    a9 = v179;
    v48 = v161;
    goto LABEL_66;
  }
  if ( a17 )
  {
    v101 = ExAllocatePoolWithTag(PagedPool, 8 * v46, 0x61476553u);
    v102 = v101;
    v176 = v101;
    if ( !v101 )
    {
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v26 = -1073741670;
LABEL_248:
      v22 = v159;
      v21 = (char *)v169;
      v61 = (char *)v176;
      goto LABEL_380;
    }
    v103 = &v101[v46];
  }
  else
  {
    v102 = v220;
    v176 = v220;
    v103 = (int *)&v221;
  }
  v196 = v103;
  if ( (_DWORD)v46 )
  {
    v26 = SepCopyObjectTypeList(v194, v46, &v209);
    v167 = v26;
    if ( v26 < 0 )
    {
      v22 = v159;
      v21 = (char *)v169;
      v61 = (char *)v176;
      goto LABEL_380;
    }
    v102 = v176;
  }
  else
  {
    v26 = v167;
  }
  LOBYTE(v29) = 0;
  v189 = (int)v29;
  v104 = 0LL;
  v38 = a8;
  v105 = v179;
  a9 = v179;
  v106 = v188;
  while ( 1 )
  {
    v192 = v104;
    if ( (unsigned int)v104 >= HIDWORD(v205[2].Linkage.Blink) )
      break;
    v107 = *(&v205[2].Signature + v104);
    v215[0] = (PVOID)v107;
    if ( *(_QWORD *)(v107 + 24) )
    {
      if ( !v198 )
      {
        LODWORD(v29) = (unsigned __int8)v29;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v202, &v198) < 0 )
          LODWORD(v29) = 1;
        v189 = (int)v29;
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
               (__int64)v198,
               v112,
               v111,
               v110,
               v109,
               *(_DWORD **)(v107 + 24),
               *(_DWORD *)(v107 + 16),
               1u,
               0,
               &v199);
      v26 = v113;
      v167 = v113;
      v114 = v199;
      if ( v199 != 1 )
      {
        if ( v113 < 0 )
          goto LABEL_248;
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
                  (__int64)v198,
                  v119,
                  v118,
                  v117,
                  v116,
                  *(_DWORD **)(v107 + 24),
                  *(_DWORD *)(v107 + 16),
                  1u,
                  1u,
                  &v199);
          v167 = v26;
          if ( v26 < 0 )
            goto LABEL_248;
          v114 = v199;
        }
        if ( !(_BYTE)v189 && v114 != 1 )
        {
          v106 = v188;
          v102 = v176;
          goto LABEL_309;
        }
      }
      v105 = a9;
    }
    if ( (*(_DWORD *)(v107 + 48) & 1) != 0 )
    {
      if ( (v38 & 0x2000000) != 0 )
        v120 = v38;
      else
        v120 = v38 | v105;
      v121 = 0;
    }
    else
    {
      v120 = v38;
      v121 = v105;
    }
    v26 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *((unsigned __int8 **)v215[0] + 4), v202);
    v167 = v26;
    if ( v26 < 0 )
      goto LABEL_248;
    v157 = v121;
    v122 = a12;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      (unsigned __int8 *)v203,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)SubjectContext.ClientToken,
      v120,
      v209,
      a12,
      &v217,
      v157,
      v159,
      (unsigned int *)v176,
      0LL,
      v196,
      a17,
      v162,
      (int *)&v210,
      (__int64 *)&v198,
      (char *)&v183,
      &v184,
      v39);
    v102 = v176;
    if ( v165 )
      v106 = *(_DWORD *)v176 & v188;
    else
      v106 = *(_DWORD *)v176;
    v188 = v106;
    if ( v209 )
    {
      SepMergeObjectTypeListAccesses(v194, (__int64)v209, v122);
      v106 = v188;
    }
    v165 = 1;
LABEL_309:
    v104 = (unsigned int)(v192 + 1);
    v105 = a9;
    LOBYTE(v29) = v189;
  }
  v48 = v183;
  v161 = v183;
  v160 = v184;
  *v102 &= v106;
  v47 = -1073741790;
  if ( !v106 )
  {
    *v196 = -1073741790;
    v48 = 0;
    v161 = 0;
    v160 = 1;
  }
LABEL_66:
  if ( (v38 & 0x2000000) != 0 )
  {
    if ( !v164 || !*(_WORD *)((char *)&v212 + 5) && !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
    {
      if ( a17 )
        v77 = a12;
      else
        v77 = 0;
      SepConstrainByMandatory((__int64)&v218, v38, (char *)v169, v191, 0LL, v77);
    }
    goto LABEL_68;
  }
  if ( !v164 || *(_WORD *)((char *)&v212 + 5) )
  {
LABEL_68:
    v49 = v160;
    v47 = v168;
    goto LABEL_69;
  }
  if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() || HIDWORD(v211) )
  {
    v48 = 0;
    v161 = 0;
    v49 = 1;
    v160 = 1;
    v123 = 0;
    v180 = 0;
    v168 = -1073741790;
    v52 = a17;
    v50 = (char *)v169;
    v51 = a12;
    if ( a17 )
    {
      v124 = 0;
      v125 = v191;
      while ( v124 < v51 )
      {
        *(_DWORD *)&v50[4 * v124] = v123;
        *(_DWORD *)&v125[4 * v124++] = v47;
        v123 = v180;
        v47 = v168;
      }
      v49 = v160;
      goto LABEL_70;
    }
  }
  else
  {
    HIBYTE(v212) = 1;
    v48 = 1;
    v161 = 1;
    v49 = 0;
    v160 = 0;
    v180 = v38;
    v47 = 0;
    v168 = 0;
LABEL_69:
    v50 = (char *)v169;
    v51 = a12;
LABEL_70:
    v52 = a17;
  }
  if ( (v38 & 0x2000000) != 0 )
  {
    if ( v52 )
      v78 = v51;
    else
      v78 = 0;
    v79 = v191;
    SepConstrainByConstraintMask(v200, v38, v50, v191, 0LL, v78, &v173);
    if ( a17 )
      v80 = a12;
    else
      v80 = 0;
    SepConstrainByConstraintMask(v208, v38, (char *)v169, v79, 0LL, v80, &v174);
    v47 = v168;
    v49 = v160;
  }
  v29 = (unsigned int *)v177;
LABEL_73:
  if ( ClientToken )
  {
    if ( v173 || v174 )
    {
LABEL_326:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
      v127 = v168 >= 0;
      v128 = a8 | v179;
      TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
      SeLogAccessFailure((__int64)ClientToken, v130, v131, TokenTrustLevel, (ULONGLONG)v177, v128, v127, 0);
      ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v38 = a8;
      v26 = v167;
      v47 = v168;
      v29 = (unsigned int *)v177;
      a9 = v179;
      v48 = v161;
      v49 = v160;
      goto LABEL_78;
    }
    if ( HIDWORD(v211) || (*((_DWORD *)ClientToken + 50) & 0x4000) == 0 )
      goto LABEL_78;
    if ( v26 >= 0 )
    {
      if ( v47 < 0 || HIBYTE(v212) )
        goto LABEL_326;
LABEL_78:
      if ( v26 >= 0 && v47 < 0 && !HIDWORD(v211) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
      {
        if ( SepLpacCausedAccessFailure((__int64)&v210, v38) )
          SepLogLpacAccessFailure(v132);
        v49 = v160;
      }
    }
  }
  if ( v185 )
    goto LABEL_92;
  if ( v193 == 2 )
  {
    if ( v48 )
    {
      LOBYTE(HandleInformation) = 0;
      v166 = SepAdtAuditObjectAccessWithContext(0LL, v197, v48, 0LL, &SubjectContext, HandleInformation, v178);
      v49 = v160;
    }
    if ( !v49 )
      goto LABEL_85;
    LOBYTE(HandleInformation) = 0;
    v53 = SepAdtAuditObjectAccessWithContext(0LL, v197, 0LL, v49, &SubjectContext, HandleInformation, v178);
    v163 = v53;
  }
  else
  {
    if ( v48 )
    {
      v178[0] = 151;
      v166 = SepAdtAuditThisEventWithContext(151LL, v48, 0LL, &SubjectContext);
      v49 = v160;
    }
    if ( v49 )
    {
      v178[0] = 151;
      v53 = SepAdtAuditThisEventWithContext(151LL, 0LL, v49, &SubjectContext);
      v163 = v53;
    }
    else
    {
LABEL_85:
      v53 = v163;
    }
  }
  v54 = v166;
  if ( v166 || v53 )
  {
    PrimaryToken = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (int)SubjectContext.ClientToken;
    v134 = *((_WORD *)v29 + 1);
    if ( (v134 & 0x10) != 0 )
    {
      if ( v134 >= 0 )
      {
        v135 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v136 = v29[3];
        if ( v136 )
          LODWORD(v135) = (_DWORD)v29 + v136;
        else
          LODWORD(v135) = 0;
      }
    }
    else
    {
      LODWORD(v135) = 0;
    }
    if ( (v134 & 0x10) != 0 )
    {
      if ( v134 >= 0 )
      {
        v137 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v138 = v29[3];
        if ( v138 )
          LODWORD(v137) = (_DWORD)v29 + v138;
        else
          LODWORD(v137) = 0;
      }
    }
    else
    {
      LODWORD(v137) = 0;
    }
    v139 = v38 | a9;
    v140 = v191;
    v141 = a17;
    SepExamineSaclEx(
      v137,
      v135,
      PrimaryToken,
      v139,
      v194,
      a12,
      a17,
      (__int64)v191,
      (__int64)v169,
      v203,
      v162,
      (__int64)v175,
      (__int64)&v170);
    v142 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v142 = (int)SubjectContext.ClientToken;
    v143 = *((_WORD *)v29 + 1);
    if ( (v143 & 0x10) != 0 )
    {
      if ( v143 >= 0 )
      {
        v144 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v145 = v29[3];
        if ( v145 )
          LODWORD(v144) = (_DWORD)v29 + v145;
        else
          LODWORD(v144) = 0;
      }
    }
    else
    {
      LODWORD(v144) = 0;
    }
    v155 = (__int64)v140;
    v55 = a12;
    SepExamineGlobalSaclEx(
      (__int64)v197,
      v144,
      v142,
      v139,
      v194,
      a12,
      v141,
      v155,
      (__int64)v169,
      v203,
      v162,
      v175,
      &v170);
    v54 = v166;
    v53 = v163;
  }
  else
  {
    v55 = a12;
  }
  if ( v175[0] || v170 )
  {
    v146 = (unsigned __int8)v190;
    if ( v48 )
      v146 = 1;
    v190 = v146;
    v21 = (char *)v169;
    v56 = a17;
    if ( v175[0] && v54 )
    {
      v147 = v169;
      if ( !a17 )
        v147 = 0LL;
      v148 = &v223;
      if ( !v48 )
        LODWORD(v148) = 0;
      v158 = v55;
      v149 = v193;
      v29 = (unsigned int *)v177;
      SepAdtOpenObjectAuditAlarm(
        v178[0],
        (int)P,
        (int)v148,
        (int)v197,
        (__int64)v207,
        v177,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        *(_DWORD *)v169,
        *(_DWORD *)v169,
        (__int64)v204,
        1,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v193,
        v194,
        v158,
        (__int64)v147,
        0LL,
        0LL);
      v47 = v168;
      v48 = v161;
      v53 = v163;
    }
    else
    {
      v149 = v193;
    }
    if ( v170 && v53 )
    {
      v150 = (__int64)v21;
      if ( !v56 )
        v150 = 0LL;
      v151 = &v223;
      if ( !v48 )
        LODWORD(v151) = 0;
      v58 = a12;
      v29 = (unsigned int *)v177;
      SepAdtOpenObjectAuditAlarm(
        v178[0],
        (int)P,
        (int)v151,
        (int)v197,
        (__int64)v207,
        v177,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        a8,
        a8,
        (__int64)v204,
        0,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v149,
        v194,
        a12,
        v150,
        0LL,
        0LL);
      v47 = v168;
      v57 = v190;
      goto LABEL_95;
    }
LABEL_93:
    v57 = v190;
    goto LABEL_94;
  }
  if ( !v204 || !v48 )
  {
LABEL_92:
    v21 = (char *)v169;
    v56 = a17;
    goto LABEL_93;
  }
  SepAdtPrivilegeObjectAuditAlarm(
    (_DWORD)P,
    (_DWORD)v197,
    (_DWORD)v207,
    (unsigned int)&v223,
    (__int64)SubjectContext.ClientToken,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
    a8,
    (__int64)v204,
    v161);
  v57 = 0;
  v47 = v168;
  v29 = (unsigned int *)v177;
  v56 = a17;
  v21 = (char *)v169;
LABEL_94:
  v58 = a12;
LABEL_95:
  SeUnlockSubjectContext(&SubjectContext);
  if ( !v56 )
  {
    v59 = Address;
    *Address = v47;
    v60 = a14;
    *a14 = v180;
    if ( SepRmEnforceCap && v165 && v168 >= 0 )
    {
      *v59 = *v196;
      v61 = (char *)v176;
      *v60 &= *(_DWORD *)v176;
      v29 = (unsigned int *)v177;
      goto LABEL_117;
    }
    v29 = (unsigned int *)v177;
LABEL_98:
    v61 = (char *)v176;
    goto LABEL_117;
  }
  v62 = v191;
  v63 = 0;
  v201 = 0;
  v64 = Address;
  v65 = a14;
  v66 = v165;
  if ( !v191 )
  {
    while ( v63 < v58 )
    {
      v68 = &v64[v63];
      *v68 = v47;
      v69 = &v65[v63];
      *v69 = v180;
      if ( SepRmEnforceCap && v66 )
      {
        v47 = v168;
        if ( v168 >= 0 )
        {
          *v68 = v168;
          *v69 &= v180;
        }
      }
      else
      {
        v47 = v168;
      }
      v201 = ++v63;
      v29 = (unsigned int *)v177;
    }
    goto LABEL_98;
  }
  v61 = (char *)v176;
  while ( v63 < v58 )
  {
    v67 = v63;
    v64[v67] = *(_DWORD *)&v62[v67 * 4];
    v65[v67] = *(_DWORD *)&v21[v67 * 4];
    if ( SepRmEnforceCap && v66 && *(int *)&v62[v67 * 4] >= 0 )
    {
      v64[v67] = v196[v67];
      v65[v67] &= *(_DWORD *)&v61[v67 * 4];
    }
    v201 = ++v63;
    v29 = (unsigned int *)v177;
  }
LABEL_117:
  *a16 = v57;
  v26 = 0;
  v167 = 0;
  v22 = v159;
LABEL_118:
  if ( v186 )
  {
    ObfDereferenceObject(v214);
    SubjectContext.ClientToken = v216;
  }
  if ( v204 )
    ExFreePoolWithTag(v204, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v29, v22, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v197 )
    ExFreePoolWithTag(v197, 0);
  if ( v207 )
    ExFreePoolWithTag(v207, 0);
  if ( v203 )
  {
    LOBYTE(v70) = 1;
    SeReleaseSid(v203, v22, v70, v71);
  }
  if ( v194 )
    SeFreeCapturedObjectTypeList((void *)v194);
  if ( v171 )
  {
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v61 )
      ExFreePoolWithTag(v61, 0);
  }
  if ( v172 )
  {
    Blink = v205[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v209 )
    ExFreePoolWithTag(v209, 0);
  SepFreeResourceInfo(v198);
  if ( v26 == -1073741670 || v187 )
    SepAuditFailed((unsigned int)v26);
  return (unsigned int)v26;
}
