/*
 * XREFs of RtlpNewSecurityObject @ 0x14062E650
 * Callers:
 *     SeAssignSecurityEx2 @ 0x1400A8E70 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x1405AE0F0 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1400133C0 (RtlpOwnerAcesPresent.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     RtlFindAceByType @ 0x1400A8EF0 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8F44 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x1400A8F8C (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x1400A9170 (RtlSidDominates.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     RtlpValidTrustSubjectContext @ 0x14016CBBC (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     SeUnlockSubjectContext @ 0x1405E72C0 (SeUnlockSubjectContext.c)
 *     SePrivilegeCheck @ 0x14062B1F0 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14062DE88 (SePrivilegedServiceAuditAlarm.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x14062FD60 (RtlpInheritAcl2.c)
 *     RtlpApplyAclToObject @ 0x140630650 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x140630720 (RtlpCombineAcls.c)
 *     RtlAddMandatoryAce @ 0x1406318C0 (RtlAddMandatoryAce.c)
 *     SepValidOwnerSubjectContext @ 0x1406A656C (SepValidOwnerSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x140728BD0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x14089573C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140895B60 (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        struct _SECURITY_SUBJECT_CONTEXT *a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  _BYTE *v10; // r11
  char v11; // bl
  PVOID v12; // rdi
  unsigned __int8 *v13; // r14
  char *v14; // r13
  __int16 v15; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 ClientToken; // rdx
  __int64 PrimaryToken; // r8
  unsigned __int8 *v19; // rbx
  unsigned __int16 *v20; // rsi
  unsigned __int8 *v21; // rdi
  unsigned __int8 *v22; // r13
  unsigned __int8 *v23; // r15
  unsigned __int8 **TokenIntegrity; // rax
  unsigned __int8 *v25; // r14
  __int64 TokenTrustLevel; // rax
  unsigned __int8 *v27; // r12
  __int64 v28; // r10
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  PVOID PoolWithTag; // rax
  size_t v33; // r8
  __int64 v34; // rax
  char *v35; // r15
  __int64 v36; // r8
  unsigned int v37; // ecx
  _BYTE *v38; // rax
  char v39; // dl
  void *v40; // rax
  __int64 v41; // r10
  _BYTE *v42; // rax
  unsigned __int8 *v43; // rax
  char v44; // r13
  int v45; // esi
  char v46; // bl
  int v47; // r10d
  __int64 v48; // r14
  int v49; // r9d
  __int64 v50; // r12
  int v51; // edi
  __int16 v52; // cx
  int v53; // edx
  char v54; // r12
  __int16 v55; // dx
  int v56; // r9d
  __int64 v57; // r15
  __int64 v58; // rsi
  int v59; // edi
  _BYTE *v60; // rdi
  __int16 v61; // cx
  void *v62; // r13
  __int16 v63; // ax
  ACL *v64; // rcx
  char *AceByType; // rax
  __int64 v66; // r8
  char *v67; // rbx
  unsigned int v68; // r14d
  int v69; // r15d
  _BYTE *v70; // rsi
  void *v71; // r12
  __int16 v72; // ax
  ACL *v73; // rdi
  _DWORD *v74; // rax
  __int64 v75; // r8
  _DWORD *v76; // rbx
  NTSTATUS v77; // ebx
  int v78; // edx
  int v79; // ebx
  unsigned __int8 v80; // di
  PSECURITY_SUBJECT_CONTEXT v81; // r13
  ULONG v82; // edx
  __int64 v83; // rsi
  ACCESS_MASK AccessMask; // eax
  int v85; // r14d
  ACL *v86; // rax
  ACL *v87; // rdi
  __int64 v88; // r12
  __int16 v89; // si
  ACL *v90; // r14
  NTSTATUS v91; // eax
  int v92; // r15d
  int v93; // eax
  ACL *v94; // rbx
  int v95; // ecx
  int v96; // edx
  __int64 v97; // r9
  char *v98; // rax
  void *v99; // rax
  char v100; // r13
  _BYTE *v101; // rdx
  int v102; // edi
  __int16 v103; // ax
  __int16 v104; // si
  __int64 v105; // r14
  int v106; // esi
  char *v107; // r8
  __int16 v108; // r14
  int v109; // ecx
  int v110; // r14d
  char v111; // r12
  char v112; // bl
  bool v113; // al
  int v114; // edi
  unsigned __int16 *v115; // rcx
  unsigned int v116; // r15d
  unsigned int v117; // r13d
  int v118; // esi
  unsigned int v119; // r12d
  int v120; // r14d
  unsigned int v121; // edi
  _DWORD *v122; // rax
  _DWORD *v123; // rdx
  __int16 v124; // cx
  char *v125; // rbx
  ACL *v126; // rsi
  __int64 AclSize; // rcx
  unsigned __int16 *v128; // rsi
  char v129; // r14
  __int64 v130; // rcx
  _DWORD *v131; // rdi
  char *v132; // rbx
  __int16 v134; // ax
  ACL *v135; // rcx
  char *v136; // rax
  unsigned int v137; // edx
  int v138; // r8d
  int v139; // r15d
  unsigned int v140; // eax
  int v141; // r15d
  ACL *v142; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v143; // r15
  GENERIC_MAPPING *GenericMapping; // r13
  __int16 v145; // cx
  unsigned int v146; // ecx
  char *v147; // rdx
  char v148; // al
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // rax
  __int16 v152; // ax
  __int64 v153; // rax
  __int16 v154; // ax
  __int64 v155; // rax
  __int16 v156; // ax
  __int64 v157; // rax
  __int16 v158; // ax
  __int64 v159; // rax
  unsigned int v160; // eax
  int v161; // r15d
  ACL *v162; // rax
  char v163; // r13
  unsigned int v164; // eax
  unsigned int v165; // r14d
  ACL *v166; // rax
  __int64 v167; // r8
  struct _KTHREAD *v168; // rax
  __int64 v169; // rax
  int v170; // eax
  int v171; // eax
  __int64 v172; // rax
  __int64 v173; // rax
  int v174; // ecx
  int v175; // eax
  __int64 *v176; // r15
  BOOLEAN v177; // bl
  __int64 v178; // rax
  __int64 v179; // rax
  void *v180; // rax
  __int64 v181; // rax
  ACL *v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int16 v185; // ax
  ACL *v186; // rcx
  __int64 v187; // rax
  char *v188; // rax
  unsigned __int8 v189; // cl
  void *v190; // rsi
  ACCESS_MASK v191; // edi
  ULONG v192; // r14d
  int v193; // ecx
  __int64 *v194; // rdi
  BOOLEAN v195; // bl
  int ServerAcl; // eax
  UCHAR AceType; // [rsp+20h] [rbp-F0h]
  PSID LabelSid; // [rsp+28h] [rbp-E8h]
  char v199; // [rsp+90h] [rbp-80h]
  _BYTE AccessMode[15]; // [rsp+91h] [rbp-7Fh] BYREF
  char v201; // [rsp+A0h] [rbp-70h]
  _DWORD *v202; // [rsp+A8h] [rbp-68h]
  int v203; // [rsp+B0h] [rbp-60h] BYREF
  __int16 v204; // [rsp+B4h] [rbp-5Ch] BYREF
  bool v205; // [rsp+B6h] [rbp-5Ah]
  BOOLEAN v206; // [rsp+B7h] [rbp-59h] BYREF
  char v207; // [rsp+B8h] [rbp-58h]
  char v208; // [rsp+B9h] [rbp-57h]
  bool v209; // [rsp+BAh] [rbp-56h]
  char v210; // [rsp+BBh] [rbp-55h] BYREF
  char v211; // [rsp+BCh] [rbp-54h]
  char v212; // [rsp+BDh] [rbp-53h]
  char v213; // [rsp+BEh] [rbp-52h]
  struct _ACE v214; // [rsp+C0h] [rbp-50h] BYREF
  PVOID v215; // [rsp+C8h] [rbp-48h]
  _WORD v216[2]; // [rsp+D0h] [rbp-40h] BYREF
  ULONG v217; // [rsp+D4h] [rbp-3Ch] BYREF
  ACL *v218; // [rsp+D8h] [rbp-38h]
  __int64 v219; // [rsp+E0h] [rbp-30h] BYREF
  void *v220; // [rsp+E8h] [rbp-28h]
  _BYTE *v221; // [rsp+F0h] [rbp-20h]
  int v222; // [rsp+F8h] [rbp-18h] BYREF
  void *v223; // [rsp+100h] [rbp-10h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+108h] [rbp-8h]
  int v225[2]; // [rsp+110h] [rbp+0h]
  __int64 v226; // [rsp+118h] [rbp+8h]
  PGENERIC_MAPPING v227; // [rsp+120h] [rbp+10h]
  int v228; // [rsp+128h] [rbp+18h] BYREF
  ULONG v229; // [rsp+12Ch] [rbp+1Ch] BYREF
  struct _ACE v230; // [rsp+130h] [rbp+20h] BYREF
  unsigned __int8 *v231; // [rsp+138h] [rbp+28h]
  PVOID SecurityDescriptor; // [rsp+140h] [rbp+30h] BYREF
  ULONG MandatoryFlags[2]; // [rsp+148h] [rbp+38h]
  NTSTATUS v234; // [rsp+150h] [rbp+40h] BYREF
  NTSTATUS v235; // [rsp+154h] [rbp+44h] BYREF
  int v236[2]; // [rsp+158h] [rbp+48h]
  PSID Sid1; // [rsp+160h] [rbp+50h]
  __int64 v238; // [rsp+168h] [rbp+58h]
  char *v239; // [rsp+170h] [rbp+60h]
  char *v240; // [rsp+178h] [rbp+68h]
  PVOID v241; // [rsp+180h] [rbp+70h] BYREF
  PVOID P; // [rsp+188h] [rbp+78h]
  PVOID v243; // [rsp+190h] [rbp+80h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+198h] [rbp+88h] BYREF
  NTSTATUS AccessStatus; // [rsp+19Ch] [rbp+8Ch] BYREF
  char *v246; // [rsp+1A0h] [rbp+90h]
  __int64 v247; // [rsp+1A8h] [rbp+98h]
  ACL *v248; // [rsp+1B0h] [rbp+A0h] BYREF
  _QWORD *v249; // [rsp+1B8h] [rbp+A8h]
  _BYTE v250[40]; // [rsp+1C0h] [rbp+B0h] BYREF
  int v251; // [rsp+1E8h] [rbp+D8h]
  unsigned __int16 v252; // [rsp+1ECh] [rbp+DCh]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1F0h] [rbp+E0h] BYREF
  ACL Acl[16]; // [rsp+210h] [rbp+100h] BYREF
  ACL v255; // [rsp+290h] [rbp+180h] BYREF

  v10 = a2;
  v11 = a7;
  v12 = 0LL;
  v227 = a9;
  v13 = 0LL;
  v14 = 0LL;
  v247 = a10;
  *(_QWORD *)v225 = a1;
  *(_QWORD *)v236 = Acl;
  v238 = a4;
  v249 = a3;
  v221 = a2;
  SubjectSecurityContext = a8;
  v218 = 0LL;
  v215 = 0LL;
  v201 = 0;
  v212 = 0;
  v211 = 0;
  v222 = 0;
  *(_QWORD *)&AccessMode[7] = 0LL;
  v241 = 0LL;
  v199 = 0;
  *(_WORD *)AccessMode = 256;
  v216[0] = 0;
  v204 = 0;
  v208 = 0;
  v210 = 0;
  P = 0LL;
  Sid1 = 0LL;
  v246 = 0LL;
  v226 = 0LL;
  v231 = 0LL;
  v240 = 0LL;
  v202 = 0LL;
  v230.Header = 0;
  v239 = 0LL;
  *(_QWORD *)MandatoryFlags = 0LL;
  v248 = 0LL;
  SecurityDescriptor = 0LL;
  v206 = 1;
  v243 = 0LL;
  v213 = 0;
  if ( (a7 & 0x2000) == 0 )
    AccessMode[1] = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v207 = 1;
  }
  else
  {
    v207 = 0;
    memset(v250, 0, sizeof(v250));
    v10 = v250;
    v250[0] = 1;
    v221 = v250;
  }
  v15 = *((_WORD *)v10 + 1);
  AccessMode[2] = (v15 & 0x80u) != 0;
  v209 = (v15 & 0x40) != 0;
  if ( a8 || (v15 & 0x80u) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)a8->PrimaryToken + 6), 1u);
    if ( a8->ClientToken
      && (v168 = KeGetCurrentThread(),
          --v168->KernelApcDisable,
          ExAcquireResourceSharedLite(*((PERESOURCE *)a8->ClientToken + 6), 1u),
          (ClientToken = (__int64)a8->ClientToken) != 0) )
    {
      PrimaryToken = (__int64)a8->PrimaryToken;
    }
    else
    {
      ClientToken = (__int64)a8->PrimaryToken;
      PrimaryToken = ClientToken;
    }
    v19 = *(unsigned __int8 **)(ClientToken + 168);
    v20 = *(unsigned __int16 **)(ClientToken + 184);
    v21 = *(unsigned __int8 **)(PrimaryToken + 168);
    v22 = *(unsigned __int8 **)(*(_QWORD *)(ClientToken + 152) + 16LL * *(unsigned int *)(ClientToken + 144));
    v23 = *(unsigned __int8 **)(*(_QWORD *)(PrimaryToken + 152) + 16LL * *(unsigned int *)(PrimaryToken + 144));
    TokenIntegrity = (unsigned __int8 **)SepLocateTokenIntegrity(ClientToken);
    if ( TokenIntegrity )
      v25 = *TokenIntegrity;
    else
      v25 = (unsigned __int8 *)SepDefaultMandatorySid;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)a8);
    v27 = (unsigned __int8 *)TokenTrustLevel;
    if ( TokenTrustLevel )
      v28 = 4LL * *(unsigned __int8 *)(TokenTrustLevel + 1) + 8;
    else
      v28 = 0LL;
    if ( v19 )
      v29 = 4LL * v19[1] + 8;
    else
      v29 = 0LL;
    if ( v21 )
      v30 = 4LL * v21[1] + 32;
    else
      v30 = 24LL;
    if ( v20 )
      v31 = v20[1];
    else
      v31 = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(
                    PagedPool,
                    v31 + v28 + v29 + v30 + 4 * (v22[1] + v23[1] + (unsigned __int64)v25[1]),
                    0x64536553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(PoolWithTag, v22, 4LL * v22[1] + 8);
    v33 = 4LL * v25[1] + 8;
    Sid1 = (char *)P + 4 * v22[1] + 8;
    memmove(Sid1, v25, v33);
    v14 = (char *)Sid1 + 4 * v25[1] + 8;
    v226 = (__int64)v14;
    if ( v27 )
    {
      v167 = v27[1];
      v246 = v14;
      memmove(v14, v27, 4 * v167 + 8);
      v14 += 4 * v27[1] + 8;
      v226 = (__int64)v14;
      v27 = 0LL;
    }
    else
    {
      v246 = 0LL;
    }
    if ( v19 )
    {
      v13 = (unsigned __int8 *)v14;
      memmove(v14, v19, 4LL * v19[1] + 8);
      v14 += 4 * v19[1] + 8;
      v226 = (__int64)v14;
    }
    else
    {
      v13 = 0LL;
    }
    memmove(v14, v23, 4LL * v23[1] + 8);
    v34 = v23[1];
    v35 = &v14[4 * v34 + 8];
    v240 = v35;
    if ( v21 )
    {
      v36 = v21[1];
      v231 = (unsigned __int8 *)&v14[4 * v34 + 8];
      v27 = v231;
      memmove(v231, v21, 4 * v36 + 8);
      v35 += 4 * v21[1] + 8;
      v240 = v35;
    }
    else
    {
      v231 = 0LL;
    }
    if ( v20 )
      memmove(v35, v20, v20[1]);
    else
      v240 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v10 = v221;
    v11 = a7;
    v12 = P;
  }
  else
  {
    v27 = 0LL;
  }
  v37 = *((unsigned __int16 *)v10 + 1);
  if ( (v37 & 0x8000u) != 0 )
  {
    v150 = *((unsigned int *)v10 + 1);
    if ( !(_DWORD)v150 )
      goto LABEL_33;
    v38 = &v10[v150];
  }
  else
  {
    v38 = (_BYTE *)*((_QWORD *)v10 + 1);
  }
  v220 = v38;
  if ( v38 )
  {
    v41 = *(_QWORD *)v225;
    HIBYTE(v204) = 1;
    goto LABEL_286;
  }
LABEL_33:
  if ( (v11 & 0x20) != 0 )
  {
    v41 = *(_QWORD *)v225;
    if ( !*(_QWORD *)v225 )
    {
      v77 = -1073741734;
      goto LABEL_344;
    }
    if ( *(__int16 *)(*(_QWORD *)v225 + 2LL) >= 0 )
    {
      v180 = *(void **)(*(_QWORD *)v225 + 8LL);
    }
    else
    {
      v179 = *(unsigned int *)(*(_QWORD *)v225 + 4LL);
      if ( !(_DWORD)v179 )
      {
LABEL_368:
        v77 = -1073741734;
        goto LABEL_344;
      }
      v180 = (void *)(*(_QWORD *)v225 + v179);
    }
    v220 = v180;
    HIBYTE(v204) = 1;
    if ( !v180 )
      goto LABEL_368;
LABEL_286:
    v39 = AccessMode[2];
    goto LABEL_38;
  }
  v39 = AccessMode[2];
  v40 = v12;
  if ( AccessMode[2] )
    v40 = v14;
  v220 = v40;
  if ( !v40 )
  {
    v77 = -1073741700;
    goto LABEL_344;
  }
  v41 = *(_QWORD *)v225;
LABEL_38:
  if ( (v37 & 0x8000u) != 0 )
  {
    v151 = *((unsigned int *)v10 + 2);
    if ( !(_DWORD)v151 )
      goto LABEL_41;
    v42 = &v10[v151];
  }
  else
  {
    v42 = (_BYTE *)*((_QWORD *)v10 + 2);
  }
  v223 = v42;
  if ( v42 )
    goto LABEL_45;
LABEL_41:
  if ( (v11 & 0x40) != 0 )
  {
    if ( !v41 )
    {
      v77 = -1073741733;
      goto LABEL_344;
    }
    if ( *(__int16 *)(v41 + 2) >= 0 )
    {
      v43 = *(unsigned __int8 **)(v41 + 16);
    }
    else
    {
      v181 = *(unsigned int *)(v41 + 8);
      if ( !(_DWORD)v181 )
        goto LABEL_343;
      v43 = (unsigned __int8 *)(v41 + v181);
    }
  }
  else
  {
    v43 = v13;
    if ( v39 )
      v43 = v27;
  }
  v223 = v43;
  if ( !v43 )
  {
LABEL_343:
    v77 = -1073741733;
    goto LABEL_344;
  }
LABEL_45:
  LODWORD(v219) = v11 & 4;
  v44 = (v11 & 4) != 0;
  v45 = v11 & 2;
  v46 = v45 != 0;
  v205 = v45 != 0;
  if ( (v37 & 0x20) != 0 )
    v47 = 8;
  else
    v47 = 0;
  v48 = 0LL;
  if ( (v37 & 0x2000) != 0 )
    v49 = 4096;
  else
    v49 = 0;
  if ( (v37 & 0x10) != 0 )
  {
    if ( (v37 & 0x8000u) == 0 )
    {
      v50 = *((_QWORD *)v10 + 3);
    }
    else
    {
      v170 = *((_DWORD *)v10 + 3);
      if ( v170 )
        LODWORD(v50) = (_DWORD)v10 + v170;
      else
        LODWORD(v50) = 0;
    }
  }
  else
  {
    LODWORD(v50) = 0;
  }
  if ( *(_QWORD *)v225 )
  {
    v152 = *(_WORD *)(*(_QWORD *)v225 + 2LL);
    if ( (v152 & 0x10) != 0 )
    {
      if ( v152 >= 0 )
      {
        v48 = *(_QWORD *)(*(_QWORD *)v225 + 24LL);
      }
      else
      {
        v153 = *(unsigned int *)(*(_QWORD *)v225 + 12LL);
        if ( (_DWORD)v153 )
          v48 = *(_QWORD *)v225 + v153;
      }
    }
  }
  v51 = v47 | v49 | ((v37 & 0x10) != 0 ? 4 : 0) | (v37 >> 1) & 0x400;
  if ( v51 || v48 )
  {
    v160 = 200;
    v161 = 0;
    v203 = 200;
    while ( 1 )
    {
      v162 = (ACL *)ExAllocatePoolWithTag(PagedPool, v160, 0x63416553u);
      v218 = v162;
      if ( !v162 )
        goto LABEL_487;
      v77 = RtlpInheritAcl2(
              v48,
              v50,
              v51,
              a6,
              v46,
              v44,
              (__int64)v220,
              (__int64)v223,
              v226,
              (__int64)v231,
              v227,
              2,
              v238,
              a5,
              (__int64)&v203,
              v162,
              (__int64)AccessMode,
              &v214);
      if ( v77 >= 0 )
        break;
      ExFreePoolWithTag(v218, 0);
      v218 = 0LL;
      if ( v77 != -1073741789 )
        goto LABEL_265;
      if ( (unsigned int)++v161 >= 2 )
        goto LABEL_265;
      v160 = v203;
      v46 = v205;
    }
    if ( !v203 )
    {
      ExFreePoolWithTag(v218, 0);
      v218 = 0LL;
    }
LABEL_265:
    if ( v77 >= 0 )
    {
      v201 = 1;
      v174 = 32784;
      if ( (v214.Header.AceType & 8) != 0 )
        v174 = 32816;
      if ( (*(_WORD *)&v214.Header.AceType & 0x1000) != 0 )
        v175 = 0x2000;
      else
        v175 = 0;
      v10 = v221;
      v203 = v174 | v175 | (2 * (*(_WORD *)&v214.Header.AceType & 0x400));
      goto LABEL_58;
    }
    if ( v77 != -2147483637 )
      goto LABEL_344;
    v10 = v221;
  }
  else
  {
    AccessMode[0] = 0;
    v214.Header = v45 != 0 ? (ACE_HEADER)0x400 : 0;
    v218 = 0LL;
  }
  v52 = *((_WORD *)v10 + 1);
  v53 = 34816;
  if ( !v45 )
    v53 = 0x8000;
  v203 = v53;
  if ( (v52 & 0x30) == 0x30 )
  {
    if ( (v52 & 0x10) != 0 )
    {
      if ( v52 >= 0 )
      {
        v182 = (ACL *)*((_QWORD *)v10 + 3);
      }
      else
      {
        v183 = *((unsigned int *)v10 + 3);
        if ( (_DWORD)v183 )
          v182 = (ACL *)&v10[v183];
        else
          v182 = 0LL;
      }
    }
    else
    {
      v182 = 0LL;
    }
    v218 = v182;
    AccessMode[0] = 1;
    v203 = v53 | v52 & 0x2000 | 0x10;
  }
LABEL_58:
  v54 = (_DWORD)v219 != 0;
  v55 = *((_WORD *)v10 + 1);
  if ( (v55 & 0x20) != 0 )
    v56 = 8;
  else
    v56 = 0;
  if ( (v55 & 0x10) != 0 )
  {
    if ( v55 >= 0 )
    {
      v57 = *((_QWORD *)v10 + 3);
    }
    else
    {
      v171 = *((_DWORD *)v10 + 3);
      if ( v171 )
        LODWORD(v57) = (_DWORD)v10 + v171;
      else
        LODWORD(v57) = 0;
    }
  }
  else
  {
    LODWORD(v57) = 0;
  }
  if ( !*(_QWORD *)v225 )
    goto LABEL_63;
  v154 = *(_WORD *)(*(_QWORD *)v225 + 2LL);
  if ( (v154 & 0x10) == 0 )
    goto LABEL_63;
  if ( v154 >= 0 )
  {
    v58 = *(_QWORD *)(*(_QWORD *)v225 + 24LL);
    goto LABEL_64;
  }
  v155 = *(unsigned int *)(*(_QWORD *)v225 + 12LL);
  if ( (_DWORD)v155 )
    v58 = *(_QWORD *)v225 + v155;
  else
LABEL_63:
    v58 = 0LL;
LABEL_64:
  v59 = v56 | ((*((_WORD *)v10 + 1) & 0x10) != 0 ? 4 : 0) | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x400;
  if ( v59 || v58 )
  {
    v163 = v205;
    v164 = 200;
    v228 = 200;
    v165 = 0;
    while ( 1 )
    {
      v166 = (ACL *)ExAllocatePoolWithTag(PagedPool, v164, 0x63416553u);
      v215 = v166;
      if ( !v166 )
        goto LABEL_487;
      v77 = RtlpInheritAcl2(
              v58,
              v57,
              v59,
              a6,
              v163,
              v54,
              (__int64)v220,
              (__int64)v223,
              v226,
              (__int64)v231,
              v227,
              2,
              v238,
              a5,
              (__int64)&v228,
              v166,
              (__int64)v216,
              &v230);
      if ( v77 >= 0 )
        break;
      ExFreePoolWithTag(v215, 0);
      v215 = 0LL;
      if ( v77 != -1073741789 || (++v165, v165 >= 2) )
      {
        v60 = 0LL;
        goto LABEL_273;
      }
      v164 = v228;
    }
    if ( v228 )
    {
      v60 = v215;
    }
    else
    {
      ExFreePoolWithTag(v215, 0);
      v60 = 0LL;
      v215 = 0LL;
    }
LABEL_273:
    v235 = v77;
    if ( v77 >= 0 )
    {
      v10 = v221;
      v212 = 1;
      goto LABEL_68;
    }
    if ( v77 != -2147483637 )
      goto LABEL_344;
    v10 = v221;
  }
  else
  {
    v60 = 0LL;
    v215 = 0LL;
    v235 = -2147483637;
  }
  v61 = *((_WORD *)v10 + 1);
  if ( (v61 & 0x30) != 0x30 )
    goto LABEL_68;
  if ( (v61 & 0x10) == 0 )
  {
    v60 = 0LL;
    v215 = 0LL;
    goto LABEL_68;
  }
  if ( v61 >= 0 )
  {
    v60 = (_BYTE *)*((_QWORD *)v10 + 3);
  }
  else
  {
    v184 = *((unsigned int *)v10 + 3);
    if ( !(_DWORD)v184 )
    {
      v60 = 0LL;
      v215 = 0LL;
      goto LABEL_68;
    }
    v60 = &v10[v184];
  }
  v215 = v60;
LABEL_68:
  v62 = v246;
  v217 = 0;
  while ( 1 )
  {
    v63 = *((_WORD *)v10 + 1);
    if ( (v63 & 0x10) != 0 )
    {
      if ( v63 >= 0 )
      {
        v64 = (ACL *)*((_QWORD *)v10 + 3);
      }
      else
      {
        v169 = *((unsigned int *)v10 + 3);
        if ( (_DWORD)v169 )
          v64 = (ACL *)&v10[v169];
        else
          v64 = 0LL;
      }
    }
    else
    {
      v64 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v64, 0x14u, &v217);
    v67 = AceByType;
    if ( AceByType && AceByType != (char *)-8LL && !RtlpValidTrustSubjectContext(v62, AceByType + 8, v66, &v235) )
    {
LABEL_410:
      v77 = -1073741790;
      goto LABEL_344;
    }
    ++v217;
    if ( !v67 )
      break;
    v10 = v221;
  }
  v68 = a7;
  v69 = 4;
  v70 = v221;
  if ( (a7 & 0x800) != 0 )
  {
    v217 = 0;
    while ( 1 )
    {
      v185 = *((_WORD *)v70 + 1);
      if ( (v185 & 0x10) != 0 )
      {
        if ( v185 >= 0 )
        {
          v186 = (ACL *)*((_QWORD *)v70 + 3);
        }
        else
        {
          v187 = *((unsigned int *)v70 + 3);
          v186 = (_DWORD)v187 ? (ACL *)&v70[v187] : 0LL;
        }
      }
      else
      {
        v186 = 0LL;
      }
      v188 = (char *)RtlFindAceByType(v186, 0x14u, &v217);
      ++v217;
      if ( !v188 )
        break;
      v189 = v188[1];
      if ( (v189 & 8) == 0 )
      {
        v190 = v188 + 8;
        v191 = *((_DWORD *)v188 + 1);
        v192 = v189;
        if ( !v247 || (v191 & *(_DWORD *)(v247 + 4)) != v191 || v188 == (char *)-8LL )
        {
LABEL_424:
          v77 = -1073741811;
          goto LABEL_344;
        }
        goto LABEL_429;
      }
    }
    if ( !v62 )
      goto LABEL_74;
    if ( !v247 )
    {
      v77 = -1073741811;
      goto LABEL_344;
    }
    v191 = *(_DWORD *)(v247 + 4);
    v190 = v62;
    v192 = 0;
LABEL_429:
    v77 = RtlCreateAcl(&v255, 0x58u, 2u);
    if ( v77 < 0 )
      goto LABEL_344;
    v77 = RtlAddProcessTrustLabelAce(&v255, 2u, v192, v190, 0x14u, v191);
    if ( v77 < 0 )
      goto LABEL_344;
    v70 = v221;
    v71 = v223;
    v77 = RtlpComputeMergedAcl(
            (int)v215,
            (*((_WORD *)v221 + 1) & 0x800 | (*((unsigned __int16 *)v221 + 1) >> 1) & 0x18u) >> 1,
            (int)&v255,
            4,
            (__int64)v220,
            (__int64)v223,
            (__int64)v227,
            2,
            (__int64)&v243,
            (__int64)&v214);
    if ( v77 < 0 )
      goto LABEL_344;
    v68 = a7;
    v213 = 1;
  }
  else
  {
LABEL_74:
    v71 = v223;
    v243 = v60;
  }
  v72 = *((_WORD *)v70 + 1);
  if ( (v72 & 0x10) != 0 )
  {
    if ( v72 >= 0 )
    {
      v73 = (ACL *)*((_QWORD *)v70 + 3);
    }
    else
    {
      v172 = *((unsigned int *)v70 + 3);
      if ( (_DWORD)v172 )
        v73 = (ACL *)&v70[v172];
      else
        v73 = 0LL;
    }
  }
  else
  {
    v73 = 0LL;
  }
  v234 = 0;
  v251 = 0;
  v252 = 256;
  v229 = 0;
  while ( 1 )
  {
    v74 = RtlFindAceByType(v73, 0x15u, &v229);
    v76 = v74;
    if ( v74 )
      break;
LABEL_79:
    ++v229;
    if ( !v76 )
    {
      v77 = v234;
      goto LABEL_81;
    }
  }
  if ( (v74[1] & 0xFF000000) != 0 )
    goto LABEL_424;
  if ( (*((_BYTE *)v74 + 1) & 0x40) != 0 )
  {
    if ( !RtlpValidTrustSubjectContext(v62, v74 + 2, v75, &v234) )
      goto LABEL_410;
    goto LABEL_79;
  }
  v193 = *(_DWORD *)((char *)v74 + 10) - v251;
  if ( !v193 )
    v193 = *((unsigned __int16 *)v74 + 7) - v252;
  if ( v193 )
    goto LABEL_424;
  if ( *((_BYTE *)v74 + 9) == 1 && !v74[4] )
    goto LABEL_79;
  v77 = -1073741811;
LABEL_81:
  if ( v77 < 0 )
    goto LABEL_470;
  v78 = (v68 >> 8) & 1 | 2;
  if ( (v68 & 0x200) == 0 )
    v78 = (v68 >> 8) & 1;
  v79 = v78 | 4;
  if ( (v68 & 0x400) == 0 )
    v79 = v78;
  if ( v79
    || ((v134 = *((_WORD *)v70 + 1), (v134 & 0x10) != 0)
      ? (v134 >= 0
       ? (v135 = (ACL *)*((_QWORD *)v70 + 3))
       : (v173 = *((unsigned int *)v70 + 3), !(_DWORD)v173)
       ? (v135 = 0LL)
       : (v135 = (ACL *)&v70[v173]))
      : (v135 = 0LL),
        v136 = (char *)RtlFindAceByType(v135, 0x11u, 0LL),
        (v239 = v136) == 0LL) )
  {
LABEL_87:
    v80 = 0;
  }
  else
  {
    v80 = v136[1];
    v79 = *((_DWORD *)v136 + 1);
    *(_QWORD *)MandatoryFlags = v136 + 8;
    if ( v80 == 8 || (v80 & 0x10) != 0 )
    {
      v239 = 0LL;
      v79 = 0;
      *(_QWORD *)MandatoryFlags = 0LL;
      goto LABEL_87;
    }
  }
  if ( (v80 & 8) != 0 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
  {
    v77 = -1073740730;
    goto LABEL_344;
  }
  if ( !v79 )
  {
    if ( Sid1 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
    {
      v79 = 1;
      goto LABEL_90;
    }
    v81 = SubjectSecurityContext;
LABEL_93:
    if ( *(_QWORD *)MandatoryFlags )
    {
      memset(Acl, 0, sizeof(Acl));
      Acl[0] = (ACL)8388610LL;
      LODWORD(LabelSid) = v79;
      v77 = RtlAddMandatoryAce(Acl, v82, v80, MandatoryFlags[0], AceType, LabelSid);
      if ( v77 < 0 )
        goto LABEL_470;
    }
    else
    {
      *(_QWORD *)v236 = 0LL;
    }
    if ( (v68 & 0x700) == 0 )
    {
      if ( !*(_QWORD *)v236 || v239 )
      {
        v137 = *((unsigned __int16 *)v70 + 1);
        if ( (v137 & 0x20) != 0 )
          v138 = 8;
        else
          v138 = 0;
        if ( (v137 & 0x2000) != 0 )
          v139 = 4096;
        else
          v139 = 0;
        v69 = (*((unsigned __int16 *)v70 + 1) >> 2) & 4 | (v137 >> 1) & 0x400 | v138 | v139;
      }
      else
      {
        v69 = 0;
      }
    }
    if ( *(_QWORD *)v225 )
    {
      v156 = *(_WORD *)(*(_QWORD *)v225 + 2LL);
      if ( (v156 & 0x10) != 0 )
      {
        if ( v156 >= 0 )
        {
          v83 = *(_QWORD *)(*(_QWORD *)v225 + 24LL);
LABEL_98:
          if ( v69 || v83 )
          {
            AccessMask = 200;
            v85 = 0;
            for ( v230.AccessMask = 200; ; AccessMask = v230.AccessMask )
            {
              v86 = (ACL *)ExAllocatePoolWithTag(PagedPool, AccessMask, 0x63416553u);
              v87 = v86;
              if ( !v86 )
                break;
              v77 = RtlpInheritAcl2(
                      v83,
                      v236[0],
                      v69,
                      a6,
                      1,
                      0,
                      (__int64)v220,
                      (__int64)v71,
                      v226,
                      (__int64)v231,
                      v227,
                      3,
                      v238,
                      a5,
                      (__int64)&v230.AccessMask,
                      v86,
                      (__int64)v216 + 1,
                      &v214);
              if ( v77 >= 0 )
              {
                if ( v230.AccessMask )
                {
LABEL_103:
                  LODWORD(v88) = 0;
                }
                else
                {
                  ExFreePoolWithTag(v87, 0);
                  LODWORD(v88) = 0;
                  v87 = 0LL;
                }
                if ( v77 == -2147483637 )
                  goto LABEL_194;
                if ( v77 >= 0 )
                {
                  v89 = *(_WORD *)&v214.Header.AceType;
                  goto LABEL_107;
                }
                goto LABEL_470;
              }
              ExFreePoolWithTag(v87, 0);
              v87 = 0LL;
              if ( v77 != -1073741789 )
                goto LABEL_103;
              if ( (unsigned int)++v85 >= 2 )
                goto LABEL_103;
            }
LABEL_487:
            v77 = -1073741801;
            goto LABEL_344;
          }
          LODWORD(v88) = 0;
LABEL_194:
          v87 = *(ACL **)v236;
          v89 = 0;
          v214.Header = 0;
LABEL_107:
          v90 = v218;
          v91 = RtlpCombineAcls(
                  (_DWORD)v218,
                  (_DWORD)v87,
                  (_DWORD)v215,
                  (_DWORD)v215,
                  (__int64)v243,
                  (__int64)v215,
                  (__int64)&v248,
                  (__int64)&v222);
          v92 = v203;
          v77 = v91;
          if ( (v203 & 0x2000) != 0 )
            v93 = 0x40000000;
          else
            v93 = 0;
          v230.Header = (ACE_HEADER)(v93 | v222);
          if ( v87 && v87 != *(ACL **)v236 )
            ExFreePoolWithTag(v87, 0);
          if ( v77 < 0 )
            goto LABEL_344;
          v94 = v248;
          if ( v248 )
          {
            if ( v201 && v90 )
              ExFreePoolWithTag(v90, 0);
            v218 = v94;
            v90 = v94;
            v211 = 1;
            if ( (v89 & 8) != 0 )
              v95 = 48;
            else
              v95 = 16;
            if ( (v89 & 0x1000) != 0 )
              v96 = 0x2000;
            else
              v96 = 0;
            v92 |= v95 | (2 * (v89 & 0x400)) | v96;
            v203 = v92;
          }
          v97 = a7;
          v222 = a7 & 8;
          if ( (a7 & 8) == 0 )
          {
            v98 = (char *)RtlFindAceByType(v90, 0x11u, 0LL);
            if ( v98 )
              v99 = v98 + 8;
            else
              v99 = *(void **)MandatoryFlags;
            if ( v99 )
            {
              if ( !v81 )
              {
                v77 = -1073741700;
                goto LABEL_344;
              }
              v77 = RtlSidDominates(Sid1, v99, &v206);
              if ( v77 < 0 )
                goto LABEL_470;
              v97 = a7;
              if ( !v206 )
                v208 = 1;
            }
            else
            {
              v97 = a7;
            }
          }
          v100 = (_DWORD)v219 != 0;
          v101 = v221;
          v102 = v97 & 1;
          v103 = *((_WORD *)v221 + 1);
          v104 = v103;
          if ( (v103 & 4) != 0 )
          {
            if ( v103 >= 0 )
            {
              v88 = *((_QWORD *)v221 + 4);
            }
            else
            {
              v149 = *((_DWORD *)v221 + 4);
              if ( v149 )
                LODWORD(v88) = (_DWORD)v221 + v149;
            }
          }
          if ( !*(_QWORD *)v225 )
            goto LABEL_130;
          v158 = *(_WORD *)(*(_QWORD *)v225 + 2LL);
          if ( (v158 & 4) == 0 )
            goto LABEL_130;
          if ( v158 >= 0 )
          {
            v105 = *(_QWORD *)(*(_QWORD *)v225 + 32LL);
            goto LABEL_131;
          }
          v159 = *(unsigned int *)(*(_QWORD *)v225 + 16LL);
          if ( (_DWORD)v159 )
            v105 = *(_QWORD *)v225 + v159;
          else
LABEL_130:
            v105 = 0LL;
LABEL_131:
          v106 = v104 & 0x140C;
          if ( v106 || v105 )
          {
            v140 = 200;
            v141 = 0;
            LODWORD(v219) = 200;
            while ( 1 )
            {
              v142 = (ACL *)ExAllocatePoolWithTag(PagedPool, v140, 0x63416553u);
              *(_QWORD *)&AccessMode[7] = v142;
              if ( !v142 )
              {
                v77 = -1073741801;
                v128 = 0LL;
                v129 = 0;
                goto LABEL_346;
              }
              v77 = RtlpInheritAcl2(
                      v105,
                      v88,
                      v106,
                      a6,
                      v102,
                      v100,
                      (__int64)v220,
                      (__int64)v223,
                      v226,
                      (__int64)v231,
                      v227,
                      1,
                      v238,
                      a5,
                      (__int64)&v219,
                      v142,
                      (__int64)&v204,
                      &v214);
              if ( v77 >= 0 )
                break;
              ExFreePoolWithTag(*(PVOID *)&AccessMode[7], 0);
              *(_QWORD *)&AccessMode[7] = 0LL;
              v107 = 0LL;
              if ( v77 != -1073741789 )
                goto LABEL_222;
              if ( (unsigned int)++v141 >= 2 )
                goto LABEL_222;
              v140 = v219;
            }
            if ( (_DWORD)v219 )
            {
              v107 = *(char **)&AccessMode[7];
            }
            else
            {
              ExFreePoolWithTag(*(PVOID *)&AccessMode[7], 0);
              v107 = 0LL;
              *(_QWORD *)&AccessMode[7] = 0LL;
            }
LABEL_222:
            if ( v77 >= 0 )
            {
              v111 = 1;
              LOBYTE(v106) = v204;
              v97 = a7;
              v110 = *(_WORD *)&v214.Header.AceType & 0x1408 | 4 | v203;
              v199 = 1;
              v203 = v110;
              goto LABEL_141;
            }
            if ( v77 == -2147483637 )
            {
              LOBYTE(v106) = v204;
              v92 = v203;
              v101 = v221;
              v97 = a7;
              goto LABEL_134;
            }
            goto LABEL_344;
          }
          v107 = 0LL;
          *(_QWORD *)&AccessMode[7] = 0LL;
LABEL_134:
          v108 = *((_WORD *)v101 + 1);
          v109 = v92 | 0x400;
          if ( !v102 )
            v109 = v92;
          if ( (*((_WORD *)v101 + 1) & 0xC) == 0xC )
          {
            if ( (v108 & 4) != 0 )
            {
              if ( v108 >= 0 )
              {
                v107 = (char *)*((_QWORD *)v101 + 4);
              }
              else
              {
                v178 = *((unsigned int *)v101 + 4);
                if ( (_DWORD)v178 )
                  v107 = &v101[v178];
                else
                  v107 = 0LL;
              }
            }
            else
            {
              v107 = 0LL;
            }
            *(_QWORD *)&AccessMode[7] = v107;
            v110 = v109 | v108 & 0x1000;
            LOBYTE(v106) = 1;
          }
          else
          {
            v110 = v109;
            v203 = v109;
            if ( !v240 )
            {
LABEL_140:
              v111 = 0;
LABEL_141:
              if ( (v97 & 0x1000) != 0 || !v207 || (v143 = SubjectSecurityContext) == 0LL || !*(_QWORD *)v225 )
              {
                v112 = AccessMode[1];
                goto LABEL_144;
              }
              GenericMapping = v227;
              GrantedAccess = 0;
              AccessStatus = 0;
              v77 = RtlpNewSecurityObject(
                      v225[0],
                      0,
                      (int)&SecurityDescriptor,
                      v238,
                      a5,
                      a6,
                      (unsigned int)v97 | 1,
                      (__int64)SubjectSecurityContext,
                      (__int64)v227,
                      v247);
              if ( v77 >= 0 )
              {
                v145 = *((_WORD *)SecurityDescriptor + 1);
                if ( (v145 & 4) != 0 )
                {
                  if ( v145 >= 0 )
                  {
                    v147 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                  }
                  else
                  {
                    v146 = *((_DWORD *)SecurityDescriptor + 4);
                    if ( v146 )
                      v147 = (char *)SecurityDescriptor + v146;
                    else
                      v147 = 0LL;
                  }
                }
                else
                {
                  v147 = 0LL;
                }
                v148 = RtlpOwnerAcesPresent(0x10u, (__int64)v147);
                v112 = AccessMode[1];
                if ( !v148 )
                {
                  v107 = *(char **)&AccessMode[7];
                  goto LABEL_144;
                }
                if ( SeAccessCheck(
                       SecurityDescriptor,
                       v143,
                       0,
                       0x40000u,
                       0,
                       0LL,
                       GenericMapping,
                       AccessMode[1],
                       &GrantedAccess,
                       &AccessStatus) )
                {
                  v107 = *(char **)&AccessMode[7];
LABEL_144:
                  if ( v102 && !v107 )
                  {
                    v110 |= 0x1000u;
                    v203 = v110;
                  }
                  v113 = !*(_DWORD *)&v230.Header || (*(_WORD *)&v230.Header.AceType & 0x1B0) != *(_DWORD *)&v230.Header;
                  if ( v112 != 1 )
                    goto LABEL_153;
                  v114 = v222;
                  if ( AccessMode[0] && !v222 && v113 )
                  {
                    v176 = (__int64 *)SubjectSecurityContext;
                    if ( !SubjectSecurityContext )
                    {
                      v129 = v199;
                      v77 = -1073741700;
                      goto LABEL_345;
                    }
                    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v177 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
                    SePrivilegedServiceAuditAlarm(0LL, v176, (int *)&RequiredPrivileges, v177);
                    if ( !v177 )
                    {
                      v129 = v199;
                      v77 = -1073741727;
                      goto LABEL_345;
                    }
                  }
                  if ( v208 && !v114 )
                  {
                    v194 = (__int64 *)SubjectSecurityContext;
                    if ( !SubjectSecurityContext )
                    {
                      v129 = v199;
                      v77 = -1073741700;
                      goto LABEL_345;
                    }
                    RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v195 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
                    SePrivilegedServiceAuditAlarm(0LL, v194, (int *)&RequiredPrivileges, v195);
                    if ( !v195 )
                    {
                      v129 = v199;
                      v77 = -1073741727;
                      goto LABEL_345;
                    }
                  }
                  if ( HIBYTE(v204)
                    && (a7 & 0x10) == 0
                    && !(unsigned __int8)SepValidOwnerSubjectContext(SubjectSecurityContext, v220, AccessMode[2], v97) )
                  {
                    v129 = v199;
                    v77 = -1073741734;
                    goto LABEL_345;
                  }
                  if ( (_BYTE)v106 && AccessMode[2] )
                  {
                    v128 = *(unsigned __int16 **)&AccessMode[7];
                    ServerAcl = RtlpCreateServerAcl(
                                  *(_DWORD *)&AccessMode[7],
                                  v209,
                                  v226,
                                  (unsigned int)&v241,
                                  (__int64)&v210);
                    v77 = ServerAcl;
                    if ( ServerAcl < 0 )
                    {
                      v129 = v199;
                      goto LABEL_346;
                    }
                    if ( v111 && v128 )
                      ExFreePoolWithTag(v128, 0);
                    v115 = (unsigned __int16 *)v241;
                    *(_QWORD *)&AccessMode[7] = v241;
                    v241 = 0LL;
                  }
                  else
                  {
LABEL_153:
                    v115 = *(unsigned __int16 **)&AccessMode[7];
                  }
                  v116 = 4 * *((unsigned __int8 *)v220 + 1) + 8;
                  if ( v223 )
                    v117 = 4 * *((unsigned __int8 *)v223 + 1) + 8;
                  else
                    v117 = 0;
                  v118 = v110 & 0x10;
                  if ( (v110 & 0x10) != 0 && v218 )
                    v119 = (v218->AclSize + 3) & 0xFFFFFFFC;
                  else
                    v119 = 0;
                  v120 = v110 & 4;
                  if ( v120 && v115 )
                    v121 = (v115[1] + 3) & 0xFFFFFFFC;
                  else
                    v121 = 0;
                  v122 = ExAllocatePoolWithTag(
                           PagedPool,
                           v119 + v121 + v117 + 4 * *((unsigned __int8 *)v220 + 1) + 28,
                           0x64536553u);
                  v202 = v122;
                  v123 = v122;
                  if ( !v122 )
                  {
                    v129 = v199;
                    v77 = -1073741670;
                    v128 = *(unsigned __int16 **)&AccessMode[7];
                    v131 = 0LL;
                    goto LABEL_180;
                  }
                  v124 = v203;
                  v125 = (char *)(v122 + 5);
                  *(_QWORD *)v122 = 0LL;
                  *((_QWORD *)v122 + 1) = 0LL;
                  v122[4] = 0;
                  *((_WORD *)v122 + 1) |= v124;
                  *(_BYTE *)v122 = 1;
                  if ( v118 )
                  {
                    v126 = v218;
                    if ( v218 )
                    {
                      memmove(v125, v218, v218->AclSize);
                      if ( !v201 )
                        RtlpApplyAclToObject(v125, v227);
                      v123 = v202;
                      v202[3] = (_DWORD)v125 - (_DWORD)v202;
                      AclSize = v126->AclSize;
                      if ( v119 > (unsigned int)AclSize )
                      {
                        memset(&v125[AclSize], 0, v119 - (unsigned int)AclSize);
                        v123 = v202;
                      }
                      v125 += v119;
                    }
                    else
                    {
                      v122[3] = 0;
                    }
                  }
                  v128 = *(unsigned __int16 **)&AccessMode[7];
                  if ( v120 )
                  {
                    if ( *(_QWORD *)&AccessMode[7] )
                    {
                      memmove(
                        v125,
                        *(const void **)&AccessMode[7],
                        *(unsigned __int16 *)(*(_QWORD *)&AccessMode[7] + 2LL));
                      v129 = v199;
                      if ( !v199 )
                        RtlpApplyAclToObject(v125, v227);
                      v202[4] = (_DWORD)v125 - (_DWORD)v202;
                      v130 = v128[1];
                      if ( v121 > (unsigned int)v130 )
                        memset(&v125[v130], 0, v121 - (unsigned int)v130);
                      v125 += v121;
                      goto LABEL_177;
                    }
                    v123[4] = 0;
                  }
                  v129 = v199;
LABEL_177:
                  memmove(v125, v220, v116);
                  v131 = v202;
                  v202[1] = (_DWORD)v125 - (_DWORD)v202;
                  v132 = &v125[v116];
                  if ( v223 )
                  {
                    memmove(v132, v223, v117);
                    v131[2] = (_DWORD)v132 - (_DWORD)v131;
                  }
                  v77 = 0;
                  goto LABEL_180;
                }
                v77 = -1073741790;
              }
LABEL_470:
              v129 = v199;
              goto LABEL_345;
            }
            v107 = v240;
            *(_QWORD *)&AccessMode[7] = v240;
          }
          v110 |= 4u;
          v203 = v110;
          goto LABEL_140;
        }
        v157 = *(unsigned int *)(*(_QWORD *)v225 + 12LL);
        if ( (_DWORD)v157 )
        {
          v83 = *(_QWORD *)v225 + v157;
          goto LABEL_98;
        }
      }
    }
    v83 = 0LL;
    goto LABEL_98;
  }
LABEL_90:
  v81 = SubjectSecurityContext;
  if ( v239 )
    goto LABEL_93;
  if ( SubjectSecurityContext )
  {
    *(_QWORD *)MandatoryFlags = Sid1;
    v80 = 0;
    goto LABEL_93;
  }
  v77 = -1073741700;
LABEL_344:
  v129 = 0;
LABEL_345:
  v128 = *(unsigned __int16 **)&AccessMode[7];
LABEL_346:
  v131 = v202;
LABEL_180:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v210 && v241 )
    ExFreePoolWithTag(v241, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (v211 || v201) && v218 )
    ExFreePoolWithTag(v218, 0);
  if ( v212 && v215 )
    ExFreePoolWithTag(v215, 0);
  if ( v243 && v213 )
    ExFreePoolWithTag(v243, 0);
  if ( v129 )
  {
    if ( v128 )
      ExFreePoolWithTag(v128, 0);
  }
  *v249 = v131;
  return (unsigned int)v77;
}
