/*
 * XREFs of RtlpNewSecurityObject @ 0x1405D9CE0
 * Callers:
 *     SeAssignSecurityEx2 @ 0x14000AB60 (SeAssignSecurityEx2.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     SeAssignSecurity @ 0x140631550 (SeAssignSecurity.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x14000ABF0 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x14000AC44 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x14000AC8C (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x14000AE70 (RtlSidDominates.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     RtlpOwnerAcesPresent @ 0x140087F70 (RtlpOwnerAcesPresent.c)
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x14017FE74 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     SePrivilegeCheck @ 0x1405CED00 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF3DC (SePrivilegedServiceAuditAlarm.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     RtlpApplyAclToObject @ 0x1405DB540 (RtlpApplyAclToObject.c)
 *     RtlpInheritAcl2 @ 0x1405DB610 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x1405DBAD0 (RtlpCombineAcls.c)
 *     RtlValidAcl @ 0x1405DD490 (RtlValidAcl.c)
 *     SeUnlockSubjectContext @ 0x1405F5E10 (SeUnlockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x1406CDA50 (SepValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1406DD2D0 (RtlpCreateServerAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x140758BB0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x1408D267C (RtlpComputeMergedAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        __int64 a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  _BYTE *v10; // r15
  unsigned __int8 *v11; // rdi
  char v12; // dl
  PVOID v13; // r8
  char *v14; // r14
  char *v15; // r13
  __int64 v16; // r12
  __int16 v17; // ax
  bool v18; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned __int8 *v22; // rbx
  unsigned __int16 *v23; // rsi
  unsigned __int8 *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 *v27; // r12
  unsigned __int8 **TokenIntegrity; // rax
  unsigned __int8 *v29; // r15
  __int64 TokenTrustLevel; // rax
  unsigned __int8 *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // r8
  PVOID PoolWithTag; // rax
  size_t v37; // r8
  __int64 v38; // rax
  char *v39; // rbx
  __int64 v40; // r8
  unsigned int v41; // ecx
  _BYTE *v42; // rax
  void *v43; // rax
  __int64 v44; // r11
  _BYTE *v45; // rax
  void *v46; // rax
  char v47; // r13
  int v48; // esi
  char AccessMask_high; // bl
  int v50; // r8d
  int v51; // r9d
  int v52; // eax
  __int64 v53; // r12
  __int64 v54; // r14
  int v55; // edi
  __int16 v56; // cx
  ACE_HEADER v57; // r8d
  char v58; // r12
  unsigned int v59; // edx
  int v60; // esi
  __int64 v61; // r15
  __int64 v62; // rdi
  int v63; // esi
  ACL *v64; // rdi
  _BYTE *v65; // rsi
  __int16 v66; // cx
  __int64 v67; // r13
  __int16 v68; // ax
  __int64 v69; // rcx
  unsigned __int8 *AceByType; // rax
  __int64 v71; // r8
  unsigned __int8 *v72; // rbx
  unsigned int v73; // r14d
  int v74; // r15d
  void *v75; // r12
  __int16 v76; // ax
  __int64 v77; // rdi
  unsigned __int8 *v78; // rax
  __int64 v79; // r8
  unsigned __int8 *v80; // rbx
  int ServerAcl; // ebx
  int v82; // edx
  int v83; // ebx
  unsigned __int8 *v84; // r13
  unsigned __int8 v85; // di
  int v86; // ecx
  char *v87; // rcx
  unsigned int v88; // r9d
  unsigned __int8 *v89; // r9
  char *v90; // r8
  unsigned __int16 v91; // dx
  ACL *v92; // rbx
  __int64 v93; // rsi
  unsigned int v94; // eax
  int v95; // r14d
  ACL *v96; // rax
  ACL *v97; // rdi
  __int16 v98; // si
  ACL *v99; // r12
  ACL *v100; // r14
  int v101; // eax
  ACE_HEADER v102; // r15d
  int v103; // eax
  int v104; // r13d
  ACL *v105; // rbx
  int v106; // ecx
  int v107; // edx
  __int64 v108; // r9
  unsigned __int8 *v109; // rax
  _DWORD *v110; // rax
  char v111; // bl
  _BYTE *v112; // rdx
  int v113; // edi
  __int16 v114; // ax
  __int16 v115; // si
  __int64 v116; // r12
  __int64 v117; // r14
  int v118; // esi
  unsigned __int16 *v119; // r8
  __int16 v120; // r14
  int v121; // ecx
  int v122; // r14d
  char v123; // r12
  struct _SECURITY_SUBJECT_CONTEXT *v124; // r15
  KPROCESSOR_MODE v125; // bl
  bool v126; // al
  int v127; // edi
  unsigned __int16 *v128; // rcx
  unsigned int v129; // r15d
  unsigned int v130; // r13d
  int v131; // esi
  unsigned int v132; // r12d
  int v133; // r14d
  unsigned int v134; // edi
  _DWORD *v135; // rax
  _DWORD *v136; // rdx
  __int16 v137; // cx
  char *v138; // rbx
  ACL *v139; // rsi
  __int64 AclSize; // rcx
  unsigned __int16 *v141; // rsi
  char v142; // r12
  __int64 v143; // rcx
  _DWORD *v144; // rdi
  char *v145; // rbx
  ACL *v146; // r14
  unsigned int v148; // eax
  int v149; // r15d
  ACL *v150; // rax
  __int16 v151; // ax
  __int64 v152; // rcx
  unsigned __int8 *v153; // rax
  unsigned int v154; // edx
  int v155; // r8d
  int v156; // r15d
  __int16 v157; // cx
  unsigned int v158; // ecx
  char *v159; // rdx
  __int64 v160; // rax
  __int64 v161; // rax
  int v162; // eax
  __int64 v163; // r8
  __int16 v164; // cx
  __int64 v165; // rcx
  __int16 v166; // cx
  __int64 v167; // rcx
  __int16 v168; // ax
  __int64 v169; // rax
  __int16 v170; // ax
  __int64 v171; // rax
  ACE_HEADER Header; // eax
  int v173; // r15d
  ACL *v174; // rax
  char v175; // r13
  unsigned int v176; // eax
  unsigned int v177; // r14d
  ACL *v178; // rax
  struct _KTHREAD *v179; // rax
  __int64 v180; // rax
  int v181; // ecx
  int v182; // ecx
  __int64 v183; // rax
  __int64 v184; // rax
  int v185; // edx
  int v186; // r8d
  __int64 v187; // rax
  __int64 v188; // rax
  void *v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  ACL *v192; // rax
  __int64 v193; // rax
  __int16 v194; // ax
  __int64 v195; // rcx
  __int64 v196; // rax
  unsigned __int8 *v197; // rax
  int v198; // edi
  int v199; // ecx
  BOOLEAN v200; // bl
  BOOLEAN v201; // bl
  __int64 PreviouslyGrantedAccess; // [rsp+20h] [rbp-F0h]
  __int64 PreviouslyGrantedAccessa; // [rsp+20h] [rbp-F0h]
  char v204; // [rsp+90h] [rbp-80h]
  KPROCESSOR_MODE AccessMode; // [rsp+91h] [rbp-7Fh]
  bool v206; // [rsp+92h] [rbp-7Eh]
  unsigned __int16 *v207; // [rsp+98h] [rbp-78h]
  ACL *v208; // [rsp+A0h] [rbp-70h]
  char v209; // [rsp+A8h] [rbp-68h] BYREF
  _DWORD *v210; // [rsp+B0h] [rbp-60h]
  char v211; // [rsp+B8h] [rbp-58h]
  struct _ACE v212; // [rsp+BCh] [rbp-54h] BYREF
  char v213; // [rsp+C4h] [rbp-4Ch]
  char v214; // [rsp+C5h] [rbp-4Bh]
  bool v215; // [rsp+C6h] [rbp-4Ah]
  char v216; // [rsp+C7h] [rbp-49h] BYREF
  char v217; // [rsp+C8h] [rbp-48h]
  char v218; // [rsp+C9h] [rbp-47h]
  char v219; // [rsp+CAh] [rbp-46h]
  struct _ACE v220; // [rsp+CCh] [rbp-44h] BYREF
  unsigned int v221; // [rsp+D4h] [rbp-3Ch] BYREF
  ACL *v222; // [rsp+D8h] [rbp-38h]
  __int64 v223; // [rsp+E0h] [rbp-30h] BYREF
  void *v224; // [rsp+E8h] [rbp-28h]
  int v225; // [rsp+F0h] [rbp-20h] BYREF
  _BYTE *v226; // [rsp+F8h] [rbp-18h]
  void *v227; // [rsp+100h] [rbp-10h]
  PGENERIC_MAPPING GenericMapping; // [rsp+108h] [rbp-8h]
  __int64 v229; // [rsp+110h] [rbp+0h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+118h] [rbp+8h]
  int v231; // [rsp+120h] [rbp+10h] BYREF
  unsigned int v232; // [rsp+124h] [rbp+14h] BYREF
  __int64 v233; // [rsp+128h] [rbp+18h] BYREF
  PVOID SecurityDescriptor; // [rsp+130h] [rbp+20h] BYREF
  void *Src; // [rsp+138h] [rbp+28h]
  __int64 v236; // [rsp+140h] [rbp+30h]
  __int64 v237; // [rsp+148h] [rbp+38h]
  int v238; // [rsp+150h] [rbp+40h] BYREF
  int v239; // [rsp+154h] [rbp+44h] BYREF
  PSID Sid; // [rsp+158h] [rbp+48h]
  __int64 v241; // [rsp+160h] [rbp+50h]
  PVOID P; // [rsp+168h] [rbp+58h]
  ACL *p_Acl; // [rsp+170h] [rbp+60h]
  unsigned __int16 *v244; // [rsp+178h] [rbp+68h]
  PVOID v245; // [rsp+180h] [rbp+70h] BYREF
  PVOID v246; // [rsp+188h] [rbp+78h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+190h] [rbp+80h] BYREF
  NTSTATUS AccessStatus; // [rsp+194h] [rbp+84h] BYREF
  __int64 v249; // [rsp+198h] [rbp+88h] BYREF
  char *v250; // [rsp+1A0h] [rbp+90h]
  __int64 v251; // [rsp+1A8h] [rbp+98h]
  ACL *v252; // [rsp+1B0h] [rbp+A0h] BYREF
  unsigned __int8 *v253; // [rsp+1B8h] [rbp+A8h]
  _QWORD *v254; // [rsp+1C0h] [rbp+B0h]
  _BYTE v255[40]; // [rsp+1C8h] [rbp+B8h] BYREF
  int v256; // [rsp+1F0h] [rbp+E0h]
  unsigned __int16 v257; // [rsp+1F4h] [rbp+E4h]
  int v258; // [rsp+1F8h] [rbp+E8h]
  unsigned __int16 v259; // [rsp+1FCh] [rbp+ECh]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+200h] [rbp+F0h] BYREF
  ACL Acl; // [rsp+220h] [rbp+110h] BYREF
  _BYTE v262[120]; // [rsp+228h] [rbp+118h] BYREF
  ACL v263; // [rsp+2A0h] [rbp+190h] BYREF

  v10 = a2;
  v226 = a2;
  GenericMapping = a9;
  v254 = a3;
  v236 = a1;
  v241 = a4;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  v251 = a10;
  memset(v255, 0, sizeof(v255));
  LODWORD(v11) = 0;
  v12 = a7;
  v222 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  p_Acl = &Acl;
  v13 = 0LL;
  v208 = 0LL;
  v14 = 0LL;
  v211 = 0;
  v15 = 0LL;
  v218 = 0;
  v16 = 0LL;
  v217 = 0;
  v225 = 0;
  v207 = 0LL;
  v245 = 0LL;
  v204 = 0;
  *(_WORD *)((char *)&v212.AccessMask + 1) = 0;
  LOWORD(v220.AccessMask) = 0;
  LOBYTE(v212.AccessMask) = 0;
  v214 = 0;
  v216 = 0;
  P = 0LL;
  Sid = 0LL;
  v250 = 0LL;
  v229 = 0LL;
  v237 = 0LL;
  v244 = 0LL;
  v210 = 0LL;
  AccessMode = 1;
  LODWORD(v249) = 0;
  v253 = 0LL;
  Src = 0LL;
  v252 = 0LL;
  SecurityDescriptor = 0LL;
  v209 = 1;
  v246 = 0LL;
  v219 = 0;
  if ( (a7 & 0x2000) == 0 )
    AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( v10 )
  {
    v213 = 1;
  }
  else
  {
    v10 = v255;
    v213 = 0;
    v226 = v255;
    v255[0] = 1;
  }
  v17 = *((_WORD *)v10 + 1);
  v18 = (v17 & 0x80u) != 0;
  v206 = (v17 & 0x80u) != 0;
  v215 = (v17 & 0x40) != 0;
  if ( a8 || (v17 & 0x80u) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a8 + 16) + 48LL), 1u);
    if ( *(_QWORD *)a8
      && (v179 = KeGetCurrentThread(),
          --v179->KernelApcDisable,
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)a8 + 48LL), 1u),
          (v20 = *(_QWORD *)a8) != 0) )
    {
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v206 = 1;
      v21 = *(_QWORD *)(a8 + 16);
    }
    else
    {
      v20 = *(_QWORD *)(a8 + 16);
      v21 = v20;
    }
    v22 = *(unsigned __int8 **)(v20 + 168);
    v23 = *(unsigned __int16 **)(v20 + 184);
    v24 = *(unsigned __int8 **)(*(_QWORD *)(v20 + 152) + 16LL * *(unsigned int *)(v20 + 144));
    v25 = *(_QWORD *)(v21 + 152);
    v26 = *(unsigned int *)(v21 + 144);
    v11 = *(unsigned __int8 **)(v21 + 168);
    v27 = *(unsigned __int8 **)(v25 + 16 * v26);
    TokenIntegrity = (unsigned __int8 **)SepLocateTokenIntegrity(v20);
    if ( TokenIntegrity )
      v29 = *TokenIntegrity;
    else
      v29 = (unsigned __int8 *)SepDefaultMandatorySid;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)SubjectSecurityContext);
    v31 = (unsigned __int8 *)TokenTrustLevel;
    if ( TokenTrustLevel )
      v32 = 4LL * *(unsigned __int8 *)(TokenTrustLevel + 1) + 8;
    else
      v32 = 0LL;
    if ( v22 )
      v33 = 4LL * v22[1] + 8;
    else
      v33 = 0LL;
    if ( v11 )
      v34 = 4LL * v11[1] + 32;
    else
      v34 = 24LL;
    if ( v23 )
      v35 = v23[1];
    else
      v35 = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(
                    PagedPool,
                    v35 + v34 + v33 + v32 + 4 * (v29[1] + v27[1] + (unsigned __int64)v24[1]),
                    0x64536553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(PoolWithTag, v24, 4LL * v24[1] + 8);
    v37 = 4LL * v29[1] + 8;
    Sid = (char *)P + 4 * v24[1] + 8;
    memmove(Sid, v29, v37);
    v15 = (char *)Sid + 4 * v29[1] + 8;
    v229 = (__int64)v15;
    if ( v31 )
    {
      v163 = v31[1];
      v250 = v15;
      memmove(v15, v31, 4 * v163 + 8);
      v15 += 4 * v31[1] + 8;
      v229 = (__int64)v15;
    }
    else
    {
      v250 = 0LL;
    }
    if ( v22 )
    {
      v14 = v15;
      memmove(v15, v22, 4LL * v22[1] + 8);
      v15 += 4 * v22[1] + 8;
      v229 = (__int64)v15;
    }
    else
    {
      v14 = 0LL;
    }
    memmove(v15, v27, 4LL * v27[1] + 8);
    v38 = v27[1];
    v39 = &v15[4 * v38 + 8];
    v244 = (unsigned __int16 *)v39;
    if ( v11 )
    {
      v40 = v11[1];
      v237 = (__int64)&v15[4 * v38 + 8];
      v16 = v237;
      memmove((void *)v237, v11, 4 * v40 + 8);
      v39 += 4 * v11[1] + 8;
      v244 = (unsigned __int16 *)v39;
      LODWORD(v11) = 0;
    }
    else
    {
      v16 = 0LL;
      v237 = 0LL;
    }
    if ( v23 )
      memmove(v39, v23, v23[1]);
    else
      v244 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v18 = v206;
    v13 = P;
    v12 = a7;
    v10 = v226;
  }
  v41 = *((unsigned __int16 *)v10 + 1);
  if ( (v41 & 0x8000u) != 0 )
  {
    v160 = *((unsigned int *)v10 + 1);
    if ( !(_DWORD)v160 )
      goto LABEL_33;
    v42 = &v10[v160];
  }
  else
  {
    v42 = (_BYTE *)*((_QWORD *)v10 + 1);
  }
  v224 = v42;
  if ( v42 )
  {
    BYTE2(v212.AccessMask) = 1;
LABEL_37:
    v44 = v236;
    goto LABEL_38;
  }
LABEL_33:
  if ( (v12 & 0x20) == 0 )
  {
    v43 = v15;
    if ( !v18 )
      v43 = v13;
    v224 = v43;
    if ( v43 )
      goto LABEL_37;
    ServerAcl = -1073741700;
LABEL_521:
    v141 = 0LL;
    v146 = 0LL;
    goto LABEL_366;
  }
  v44 = v236;
  if ( !v236 )
  {
    ServerAcl = -1073741734;
    goto LABEL_521;
  }
  if ( *(__int16 *)(v236 + 2) >= 0 )
  {
    v189 = *(void **)(v236 + 8);
  }
  else
  {
    v188 = *(unsigned int *)(v236 + 4);
    if ( !(_DWORD)v188 )
    {
LABEL_394:
      ServerAcl = -1073741734;
      goto LABEL_521;
    }
    v189 = (void *)(v236 + v188);
  }
  v224 = v189;
  BYTE2(v212.AccessMask) = 1;
  if ( !v189 )
    goto LABEL_394;
LABEL_38:
  if ( (v41 & 0x8000u) != 0 )
  {
    v161 = *((unsigned int *)v10 + 2);
    if ( !(_DWORD)v161 )
      goto LABEL_41;
    v45 = &v10[v161];
  }
  else
  {
    v45 = (_BYTE *)*((_QWORD *)v10 + 2);
  }
  v227 = v45;
  if ( v45 )
    goto LABEL_45;
LABEL_41:
  if ( (v12 & 0x40) == 0 )
  {
    v46 = v14;
    if ( v18 )
      v46 = (void *)v16;
    goto LABEL_44;
  }
  if ( !v44 )
  {
    ServerAcl = -1073741733;
    goto LABEL_521;
  }
  if ( *(__int16 *)(v44 + 2) >= 0 )
  {
    v46 = *(void **)(v44 + 16);
  }
  else
  {
    v190 = *(unsigned int *)(v44 + 8);
    if ( !(_DWORD)v190 )
      goto LABEL_402;
    v46 = (void *)(v44 + v190);
  }
LABEL_44:
  v227 = v46;
  if ( !v46 )
  {
LABEL_402:
    ServerAcl = -1073741733;
    goto LABEL_521;
  }
LABEL_45:
  LODWORD(v223) = v12 & 4;
  v47 = (v12 & 4) != 0;
  v48 = v12 & 2;
  AccessMask_high = v48 != 0;
  HIBYTE(v212.AccessMask) = v48 != 0;
  v50 = (v41 & 0x10) != 0 ? 4 : 0;
  if ( (v41 & 0x20) != 0 )
    v51 = 8;
  else
    v51 = (int)v11;
  v52 = (v41 >> 1) & 0x400;
  if ( (v41 & 0x2000) != 0 )
    LODWORD(v11) = 4096;
  if ( (v41 & 0x10) != 0 )
  {
    if ( (v41 & 0x8000u) == 0 )
    {
      v53 = *((_QWORD *)v10 + 3);
    }
    else
    {
      v181 = *((_DWORD *)v10 + 3);
      if ( v181 )
        LODWORD(v53) = (_DWORD)v10 + v181;
      else
        LODWORD(v53) = 0;
    }
  }
  else
  {
    LODWORD(v53) = 0;
  }
  if ( !v44 )
    goto LABEL_52;
  v164 = *(_WORD *)(v44 + 2);
  if ( (v164 & 0x10) == 0 )
    goto LABEL_52;
  if ( v164 < 0 )
  {
    v165 = *(unsigned int *)(v44 + 12);
    if ( (_DWORD)v165 )
    {
      v54 = v44 + v165;
      goto LABEL_53;
    }
LABEL_52:
    v54 = 0LL;
    goto LABEL_53;
  }
  v54 = *(_QWORD *)(v44 + 24);
LABEL_53:
  v55 = v50 | v52 | v51 | (unsigned int)v11;
  if ( !v55 && !v54 )
  {
    v222 = 0LL;
    v220.Header = v48 != 0 ? (ACE_HEADER)0x400 : 0;
    goto LABEL_56;
  }
  Header = (ACE_HEADER)200;
  v173 = 0;
  v212.Header = (ACE_HEADER)200;
  while ( 1 )
  {
    v174 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&Header, 0x63416553u);
    v222 = v174;
    if ( !v174 )
    {
      ServerAcl = -1073741801;
      goto LABEL_521;
    }
    LOBYTE(PreviouslyGrantedAccess) = AccessMask_high;
    ServerAcl = RtlpInheritAcl2(
                  v54,
                  v53,
                  v55,
                  a6,
                  PreviouslyGrantedAccess,
                  v47,
                  (int)v224,
                  (__int64)v227,
                  v229,
                  v237,
                  GenericMapping,
                  2,
                  v241,
                  a5,
                  (__int64)&v212,
                  v174,
                  (PACE)((char *)&v212.AccessMask + 1),
                  (__int64)&v220);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(v222, 0);
    v222 = 0LL;
    if ( ServerAcl != -1073741789 )
      goto LABEL_290;
    if ( (unsigned int)++v173 >= 2 )
      goto LABEL_290;
    Header = v212.Header;
    AccessMask_high = HIBYTE(v212.AccessMask);
  }
  if ( !*(_DWORD *)&v212.Header )
  {
    ExFreePoolWithTag(v222, 0);
    v222 = 0LL;
  }
LABEL_290:
  if ( ServerAcl >= 0 )
  {
    v211 = 1;
    v185 = 32784;
    if ( (v220.Header.AceType & 8) != 0 )
      v185 = 32816;
    if ( (*(_WORD *)&v220.Header.AceType & 0x1000) != 0 )
      v186 = 0x2000;
    else
      v186 = 0;
    v10 = v226;
    v212.Header = (ACE_HEADER)((2 * (*(_WORD *)&v220.Header.AceType & 0x400)) | v185 | v186);
    goto LABEL_59;
  }
  if ( ServerAcl != -2147483637 )
    goto LABEL_435;
  v10 = v226;
LABEL_56:
  v56 = *((_WORD *)v10 + 1);
  v57 = (ACE_HEADER)34816;
  if ( !v48 )
    v57 = (ACE_HEADER)0x8000;
  v212.Header = v57;
  if ( (v56 & 0x30) == 0x30 )
  {
    if ( (v56 & 0x10) == 0 )
    {
      v222 = 0LL;
LABEL_418:
      BYTE1(v212.AccessMask) = 1;
      v212.Header = (ACE_HEADER)(*(_DWORD *)&v57 | v56 & 0x2000 | 0x10);
      goto LABEL_59;
    }
    if ( v56 >= 0 )
    {
      v192 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      v191 = *((unsigned int *)v10 + 3);
      if ( !(_DWORD)v191 )
      {
        v222 = 0LL;
        goto LABEL_418;
      }
      v192 = (ACL *)&v10[v191];
    }
    v222 = v192;
    goto LABEL_418;
  }
LABEL_59:
  v58 = (_DWORD)v223 != 0;
  v59 = *((unsigned __int16 *)v10 + 1);
  if ( (v59 & 0x20) != 0 )
    v60 = 8;
  else
    v60 = 0;
  if ( (v59 & 0x10) != 0 )
  {
    if ( (v59 & 0x8000u) == 0 )
    {
      v61 = *((_QWORD *)v10 + 3);
    }
    else
    {
      v182 = *((_DWORD *)v10 + 3);
      if ( v182 )
        LODWORD(v61) = (_DWORD)v226 + v182;
      else
        LODWORD(v61) = 0;
    }
  }
  else
  {
    LODWORD(v61) = 0;
  }
  if ( !v236 )
    goto LABEL_64;
  v166 = *(_WORD *)(v236 + 2);
  if ( (v166 & 0x10) == 0 )
    goto LABEL_64;
  if ( v166 >= 0 )
  {
    v62 = *(_QWORD *)(v236 + 24);
    goto LABEL_65;
  }
  v167 = *(unsigned int *)(v236 + 12);
  if ( (_DWORD)v167 )
    v62 = v236 + v167;
  else
LABEL_64:
    v62 = 0LL;
LABEL_65:
  v63 = ((v59 & 0x10) != 0 ? 4 : 0) | (v59 >> 1) & 0x400 | v60;
  if ( !v63 && !v62 )
  {
    v64 = 0LL;
    v208 = 0LL;
    v239 = -2147483637;
    goto LABEL_68;
  }
  v175 = HIBYTE(v212.AccessMask);
  v176 = 200;
  v231 = 200;
  v177 = 0;
  while ( 1 )
  {
    v178 = (ACL *)ExAllocatePoolWithTag(PagedPool, v176, 0x63416553u);
    v208 = v178;
    if ( !v178 )
    {
      v141 = 0LL;
      ServerAcl = -1073741801;
      v146 = 0LL;
      goto LABEL_366;
    }
    LOBYTE(PreviouslyGrantedAccess) = v175;
    ServerAcl = RtlpInheritAcl2(
                  v62,
                  v61,
                  v63,
                  a6,
                  PreviouslyGrantedAccess,
                  v58,
                  (int)v224,
                  (__int64)v227,
                  v229,
                  v237,
                  GenericMapping,
                  2,
                  v241,
                  a5,
                  (__int64)&v231,
                  v178,
                  (PACE)&v220.AccessMask,
                  (__int64)&v249);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(v208, 0);
    v208 = 0LL;
    if ( ServerAcl != -1073741789 || (++v177, v177 >= 2) )
    {
      v64 = 0LL;
      goto LABEL_298;
    }
    v176 = v231;
  }
  if ( v231 )
  {
    v64 = v208;
  }
  else
  {
    ExFreePoolWithTag(v208, 0);
    v64 = 0LL;
    v208 = 0LL;
  }
LABEL_298:
  v239 = ServerAcl;
  if ( ServerAcl >= 0 )
  {
    v65 = v226;
    v218 = 1;
    goto LABEL_69;
  }
  if ( ServerAcl != -2147483637 )
    goto LABEL_435;
LABEL_68:
  v65 = v226;
  v66 = *((_WORD *)v226 + 1);
  if ( (v66 & 0x30) == 0x30 )
  {
    if ( (v66 & 0x10) == 0 )
    {
      v64 = 0LL;
      v208 = 0LL;
      goto LABEL_69;
    }
    if ( v66 >= 0 )
    {
      v64 = (ACL *)*((_QWORD *)v226 + 3);
    }
    else
    {
      v193 = *((unsigned int *)v226 + 3);
      if ( !(_DWORD)v193 )
      {
        v64 = 0LL;
        v208 = 0LL;
        goto LABEL_69;
      }
      v64 = (ACL *)&v226[v193];
    }
    v208 = v64;
  }
LABEL_69:
  v67 = (__int64)v250;
  v221 = 0;
  while ( 2 )
  {
    v68 = *((_WORD *)v65 + 1);
    if ( (v68 & 0x10) != 0 )
    {
      if ( v68 >= 0 )
      {
        v69 = *((_QWORD *)v65 + 3);
      }
      else
      {
        v180 = *((unsigned int *)v65 + 3);
        if ( (_DWORD)v180 )
          v69 = (__int64)&v65[v180];
        else
          v69 = 0LL;
      }
    }
    else
    {
      v69 = 0LL;
    }
    AceByType = RtlFindAceByType(v69, 20, &v221);
    v72 = AceByType;
    if ( AceByType
      && AceByType != (unsigned __int8 *)-8LL
      && !RtlpValidTrustSubjectContext(v67, (__int64)(AceByType + 8), v71, &v239) )
    {
LABEL_434:
      ServerAcl = -1073741790;
      goto LABEL_435;
    }
    ++v221;
    if ( v72 )
      continue;
    break;
  }
  v73 = a7;
  v74 = 4;
  if ( (a7 & 0x800) == 0 )
    goto LABEL_75;
  v221 = 0;
  while ( 1 )
  {
    v194 = *((_WORD *)v65 + 1);
    if ( (v194 & 0x10) != 0 )
    {
      if ( v194 >= 0 )
      {
        v195 = *((_QWORD *)v65 + 3);
      }
      else
      {
        v196 = *((unsigned int *)v65 + 3);
        v195 = (_DWORD)v196 ? (__int64)&v65[v196] : 0LL;
      }
    }
    else
    {
      v195 = 0LL;
    }
    v197 = RtlFindAceByType(v195, 20, &v221);
    ++v221;
    if ( !v197 )
      break;
    if ( (v197[1] & 8) == 0 )
    {
      v198 = *((_DWORD *)v197 + 1);
      if ( !v251 || (v198 & *(_DWORD *)(v251 + 4)) != v198 || v197 == (unsigned __int8 *)-8LL )
      {
LABEL_449:
        v141 = 0LL;
        ServerAcl = -1073741811;
        v146 = v208;
        goto LABEL_366;
      }
      goto LABEL_454;
    }
  }
  if ( !v67 )
  {
LABEL_75:
    v75 = v227;
    v246 = v64;
    goto LABEL_76;
  }
  if ( !v251 )
  {
    v141 = 0LL;
    ServerAcl = -1073741811;
    v146 = v208;
    goto LABEL_366;
  }
  v198 = *(_DWORD *)(v251 + 4);
LABEL_454:
  ServerAcl = RtlCreateAcl(&v263, 0x58u, 2u);
  if ( ServerAcl < 0 || (ServerAcl = RtlAddProcessTrustLabelAce(&v263, 20, v198), ServerAcl < 0) )
  {
LABEL_435:
    v141 = v207;
    v146 = v208;
    goto LABEL_366;
  }
  v65 = v226;
  v75 = v227;
  v146 = v208;
  ServerAcl = RtlpComputeMergedAcl(
                (int)v208,
                (*((_WORD *)v226 + 1) & 0x800 | (*((unsigned __int16 *)v226 + 1) >> 1) & 0x18u) >> 1,
                (int)&v263,
                4,
                (__int64)v224,
                (__int64)v227,
                (__int64)GenericMapping,
                2,
                (__int64)&v246,
                (__int64)&v220);
  if ( ServerAcl < 0 )
  {
    v141 = 0LL;
    goto LABEL_366;
  }
  v73 = a7;
  v219 = 1;
LABEL_76:
  v76 = *((_WORD *)v65 + 1);
  if ( (v76 & 0x10) != 0 )
  {
    if ( v76 >= 0 )
    {
      v77 = *((_QWORD *)v65 + 3);
    }
    else
    {
      v183 = *((unsigned int *)v65 + 3);
      if ( (_DWORD)v183 )
        v77 = (__int64)&v65[v183];
      else
        v77 = 0LL;
    }
  }
  else
  {
    v77 = 0LL;
  }
  v238 = 0;
  v256 = 0;
  v257 = 256;
  v232 = 0;
  while ( 2 )
  {
    v78 = RtlFindAceByType(v77, 21, &v232);
    v80 = v78;
    if ( !v78 )
      goto LABEL_80;
    if ( (*((_DWORD *)v78 + 1) & 0xFF000000) != 0 )
      goto LABEL_449;
    if ( (v78[1] & 0x40) != 0 )
    {
      if ( !RtlpValidTrustSubjectContext(v67, (__int64)(v78 + 8), v79, &v238) )
        goto LABEL_434;
      goto LABEL_80;
    }
    v199 = *(_DWORD *)(v78 + 10) - v256;
    if ( !v199 )
      v199 = *((unsigned __int16 *)v78 + 7) - v257;
    if ( v199 )
      goto LABEL_449;
    if ( v78[9] == 1 && !*((_DWORD *)v78 + 4) )
    {
LABEL_80:
      ++v232;
      if ( !v80 )
      {
        ServerAcl = v238;
        goto LABEL_82;
      }
      continue;
    }
    break;
  }
  ServerAcl = -1073741811;
LABEL_82:
  if ( ServerAcl < 0 )
    goto LABEL_502;
  v82 = (v73 >> 8) & 1 | 2;
  if ( (v73 & 0x200) == 0 )
    v82 = (v73 >> 8) & 1;
  v83 = v82 | 4;
  if ( (v73 & 0x400) == 0 )
    v83 = v82;
  if ( v83 )
  {
    v84 = v253;
    goto LABEL_89;
  }
  v151 = *((_WORD *)v65 + 1);
  if ( (v151 & 0x10) != 0 )
  {
    if ( v151 >= 0 )
    {
      v152 = *((_QWORD *)v65 + 3);
    }
    else
    {
      v184 = *((unsigned int *)v65 + 3);
      if ( (_DWORD)v184 )
        v152 = (__int64)&v65[v184];
      else
        v152 = 0LL;
    }
  }
  else
  {
    v152 = 0LL;
  }
  v153 = RtlFindAceByType(v152, 17, 0LL);
  v84 = v153;
  if ( v153 )
  {
    v85 = v153[1];
    v83 = *((_DWORD *)v153 + 1);
    Src = v153 + 8;
    if ( v85 == 8 || (v85 & 0x10) != 0 )
    {
      v84 = 0LL;
      Src = 0LL;
      v83 = 0;
      goto LABEL_89;
    }
  }
  else
  {
LABEL_89:
    v85 = 0;
  }
  if ( (v85 & 8) != 0 && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
  {
    v141 = 0LL;
    ServerAcl = -1073740730;
    v146 = v208;
    goto LABEL_366;
  }
  if ( !v83 )
  {
    if ( Sid && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
    {
      v83 = 1;
      goto LABEL_92;
    }
LABEL_95:
    if ( Src )
    {
      memset(v262, 0, sizeof(v262));
      Acl = (ACL)8388610LL;
      v258 = 0;
      v259 = 4096;
      if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*(_BYTE *)Src & 0xF) != 1 || *((_BYTE *)Src + 1) > 0xFu )
      {
        v141 = 0LL;
        ServerAcl = -1073741704;
        v146 = v208;
        goto LABEL_366;
      }
      v86 = *(_DWORD *)((char *)Src + 2) - v258;
      if ( !v86 )
        v86 = *((unsigned __int16 *)Src + 3) - v259;
      if ( v86 )
      {
        v141 = 0LL;
        ServerAcl = -1073741811;
        v146 = v208;
        goto LABEL_366;
      }
      if ( (v85 & 0xE0) != 0 )
      {
        v141 = 0LL;
        ServerAcl = -1073741811;
        v146 = v208;
        goto LABEL_366;
      }
      if ( (v83 & 0xFFFFFFF8) != 0 )
      {
        v141 = 0LL;
        ServerAcl = -1073741811;
        v146 = v208;
        goto LABEL_366;
      }
      if ( !RtlValidAcl(&Acl) )
      {
        v141 = 0LL;
        ServerAcl = -1073741705;
        v146 = v208;
        goto LABEL_366;
      }
      v87 = v262;
      v88 = 0;
      if ( Acl.AceCount )
      {
        while ( v87 < (char *)&Acl + Acl.AclSize )
        {
          ++v88;
          v87 += *((unsigned __int16 *)v87 + 1);
          if ( v88 >= Acl.AceCount )
            goto LABEL_106;
        }
        v146 = v208;
        ServerAcl = -1073741705;
        v141 = 0LL;
        goto LABEL_366;
      }
LABEL_106:
      v89 = (unsigned __int8 *)Src;
      v90 = (char *)&Acl + Acl.AclSize;
      if ( v87 > v90 )
        v87 = 0LL;
      v91 = 4 * (*((unsigned __int8 *)Src + 1) + 4);
      if ( v87 && &v87[v91] <= v90 )
      {
        *((_WORD *)v87 + 1) = v91;
        v87[1] = v85;
        *v87 = 17;
        *((_DWORD *)v87 + 1) = v83;
        memmove(v87 + 8, v89, 4LL * v89[1] + 8);
        ++Acl.AceCount;
        Acl.AclRevision = 2;
        ServerAcl = 0;
      }
      else
      {
        ServerAcl = -1073741671;
      }
      if ( ServerAcl < 0 )
        goto LABEL_502;
      v92 = &Acl;
    }
    else
    {
      v92 = 0LL;
      p_Acl = 0LL;
    }
    if ( (v73 & 0x700) == 0 )
    {
      if ( !v84 && v92 )
      {
        v74 = 0;
      }
      else
      {
        v154 = *((unsigned __int16 *)v65 + 1);
        if ( (v154 & 0x20) != 0 )
          v155 = 8;
        else
          v155 = 0;
        if ( (v154 & 0x2000) != 0 )
          v156 = 4096;
        else
          v156 = 0;
        v74 = (*((unsigned __int16 *)v65 + 1) >> 2) & 4 | (v154 >> 1) & 0x400 | v155 | v156;
      }
    }
    if ( v236 )
    {
      v168 = *(_WORD *)(v236 + 2);
      if ( (v168 & 0x10) != 0 )
      {
        if ( v168 >= 0 )
        {
          v93 = *(_QWORD *)(v236 + 24);
LABEL_116:
          if ( v74 || v93 )
          {
            v94 = 200;
            v95 = 0;
            LODWORD(v233) = 200;
            while ( 1 )
            {
              v96 = (ACL *)ExAllocatePoolWithTag(PagedPool, v94, 0x63416553u);
              v97 = v96;
              if ( !v96 )
              {
                v141 = 0LL;
                ServerAcl = -1073741801;
                v146 = v208;
                goto LABEL_366;
              }
              LOBYTE(PreviouslyGrantedAccess) = 1;
              ServerAcl = RtlpInheritAcl2(
                            v93,
                            (int)v92,
                            v74,
                            a6,
                            PreviouslyGrantedAccess,
                            0,
                            (int)v224,
                            (__int64)v75,
                            v229,
                            v237,
                            GenericMapping,
                            3,
                            v241,
                            a5,
                            (__int64)&v233,
                            v96,
                            (PACE)((char *)&v220.AccessMask + 1),
                            (__int64)&v220);
              if ( ServerAcl >= 0 )
                break;
              ExFreePoolWithTag(v97, 0);
              v97 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_122;
              if ( (unsigned int)++v95 >= 2 )
                goto LABEL_122;
              v94 = v233;
              LODWORD(v92) = (_DWORD)p_Acl;
            }
            if ( !(_DWORD)v233 )
            {
              ExFreePoolWithTag(v97, 0);
              v97 = 0LL;
            }
LABEL_122:
            if ( ServerAcl == -2147483637 )
              goto LABEL_212;
            if ( ServerAcl >= 0 )
            {
              v98 = *(_WORD *)&v220.Header.AceType;
              v99 = p_Acl;
              goto LABEL_125;
            }
            goto LABEL_502;
          }
LABEL_212:
          v99 = p_Acl;
          v98 = 0;
          v97 = p_Acl;
          v220.Header = 0;
LABEL_125:
          v100 = v222;
          v101 = RtlpCombineAcls(
                   (_DWORD)v222,
                   (_DWORD)v97,
                   (_DWORD)v208,
                   (_DWORD)v208,
                   (__int64)v246,
                   (__int64)v208,
                   (__int64)&v252,
                   (__int64)&v225);
          v102 = v212.Header;
          ServerAcl = v101;
          if ( (*(_WORD *)&v212.Header.AceType & 0x2000) != 0 )
            v103 = 0x40000000;
          else
            v103 = 0;
          v104 = v103 | v225;
          if ( v97 && v97 != v99 )
            ExFreePoolWithTag(v97, 0);
          if ( ServerAcl < 0 )
            goto LABEL_435;
          v105 = v252;
          if ( v252 )
          {
            if ( v211 && v100 )
              ExFreePoolWithTag(v100, 0);
            v222 = v105;
            v100 = v105;
            v217 = 1;
            if ( (v98 & 8) != 0 )
              v106 = 48;
            else
              v106 = 16;
            if ( (v98 & 0x1000) != 0 )
              v107 = 0x2000;
            else
              v107 = 0;
            v102 = (ACE_HEADER)((2 * (v98 & 0x400)) | v106 | v107 | *(_DWORD *)&v102);
            v212.Header = v102;
          }
          v108 = a7;
          v225 = a7 & 8;
          if ( (a7 & 8) == 0 )
          {
            v109 = RtlFindAceByType((__int64)v100, 17, 0LL);
            if ( v109 )
              v110 = v109 + 8;
            else
              v110 = Src;
            if ( v110 )
            {
              if ( !SubjectSecurityContext )
              {
                v141 = 0LL;
                ServerAcl = -1073741700;
                v146 = v208;
                goto LABEL_366;
              }
              ServerAcl = RtlSidDominates(Sid, v110, (bool *)&v209);
              if ( ServerAcl < 0 )
                goto LABEL_502;
              v108 = a7;
              if ( !v209 )
                v214 = 1;
            }
            else
            {
              v108 = a7;
            }
          }
          v111 = (_DWORD)v223 != 0;
          v112 = v226;
          v113 = v108 & 1;
          v209 = (_DWORD)v223 != 0;
          v114 = *((_WORD *)v226 + 1);
          v115 = v114;
          if ( (v114 & 4) != 0 )
          {
            if ( v114 >= 0 )
            {
              v116 = *((_QWORD *)v226 + 4);
            }
            else
            {
              v162 = *((_DWORD *)v226 + 4);
              if ( v162 )
                LODWORD(v116) = (_DWORD)v226 + v162;
              else
                LODWORD(v116) = 0;
            }
          }
          else
          {
            LODWORD(v116) = 0;
          }
          if ( !v236 )
            goto LABEL_149;
          v170 = *(_WORD *)(v236 + 2);
          if ( (v170 & 4) == 0 )
            goto LABEL_149;
          if ( v170 >= 0 )
          {
            v117 = *(_QWORD *)(v236 + 32);
            goto LABEL_150;
          }
          v171 = *(unsigned int *)(v236 + 16);
          if ( (_DWORD)v171 )
            v117 = v236 + v171;
          else
LABEL_149:
            v117 = 0LL;
LABEL_150:
          v118 = v115 & 0x140C;
          if ( v118 || v117 )
          {
            v148 = 200;
            v149 = 0;
            LODWORD(v223) = 200;
            while ( 1 )
            {
              v150 = (ACL *)ExAllocatePoolWithTag(PagedPool, v148, 0x63416553u);
              v207 = (unsigned __int16 *)v150;
              if ( !v150 )
              {
                v146 = v208;
                ServerAcl = -1073741801;
                v141 = 0LL;
                goto LABEL_366;
              }
              LOBYTE(PreviouslyGrantedAccessa) = v113;
              ServerAcl = RtlpInheritAcl2(
                            v117,
                            v116,
                            v118,
                            a6,
                            PreviouslyGrantedAccessa,
                            v111,
                            (int)v224,
                            (__int64)v227,
                            v229,
                            v237,
                            GenericMapping,
                            1,
                            v241,
                            a5,
                            (__int64)&v223,
                            v150,
                            (PACE)&v212.AccessMask,
                            (__int64)&v220);
              if ( ServerAcl >= 0 )
                break;
              ExFreePoolWithTag(v207, 0);
              v207 = 0LL;
              v119 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_218;
              if ( (unsigned int)++v149 >= 2 )
                goto LABEL_218;
              v148 = v223;
              v111 = v209;
            }
            if ( (_DWORD)v223 )
            {
              v119 = v207;
            }
            else
            {
              ExFreePoolWithTag(v207, 0);
              v119 = 0LL;
              v207 = 0LL;
            }
LABEL_218:
            if ( ServerAcl >= 0 )
            {
              v123 = 1;
              LOBYTE(v118) = v212.AccessMask;
              v108 = a7;
              v122 = *(_WORD *)&v220.Header.AceType & 0x1408 | 4 | *(_DWORD *)&v212.Header;
              v204 = 1;
              v212.Header = (ACE_HEADER)v122;
              goto LABEL_160;
            }
            if ( ServerAcl == -2147483637 )
            {
              LOBYTE(v118) = v212.AccessMask;
              v102 = v212.Header;
              v112 = v226;
              v108 = a7;
              goto LABEL_153;
            }
            goto LABEL_435;
          }
          v119 = 0LL;
          v207 = 0LL;
LABEL_153:
          v120 = *((_WORD *)v112 + 1);
          v121 = *(_DWORD *)&v102 | 0x400;
          if ( !v113 )
            v121 = (int)v102;
          if ( (*((_WORD *)v112 + 1) & 0xC) == 0xC )
          {
            if ( (v120 & 4) != 0 )
            {
              if ( v120 >= 0 )
              {
                v119 = (unsigned __int16 *)*((_QWORD *)v112 + 4);
              }
              else
              {
                v187 = *((unsigned int *)v112 + 4);
                if ( (_DWORD)v187 )
                  v119 = (unsigned __int16 *)&v112[v187];
                else
                  v119 = 0LL;
              }
            }
            else
            {
              v119 = 0LL;
            }
            v207 = v119;
            v122 = v121 | v120 & 0x1000;
            LOBYTE(v118) = 1;
          }
          else
          {
            v122 = v121;
            v212.Header = (ACE_HEADER)v121;
            if ( !v244 )
            {
LABEL_159:
              v123 = 0;
LABEL_160:
              v124 = SubjectSecurityContext;
              if ( (v108 & 0x1000) == 0 && v213 && SubjectSecurityContext && v236 )
              {
                GrantedAccess = 0;
                AccessStatus = 0;
                ServerAcl = RtlpNewSecurityObject(
                              v236,
                              0,
                              (unsigned int)&SecurityDescriptor,
                              v241,
                              a5,
                              a6,
                              (unsigned int)v108 | 1,
                              (__int64)SubjectSecurityContext,
                              (__int64)GenericMapping,
                              v251);
                if ( ServerAcl < 0 )
                {
LABEL_502:
                  v141 = v207;
                  goto LABEL_503;
                }
                v157 = *((_WORD *)SecurityDescriptor + 1);
                if ( (v157 & 4) != 0 )
                {
                  if ( v157 >= 0 )
                  {
                    v159 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                  }
                  else
                  {
                    v158 = *((_DWORD *)SecurityDescriptor + 4);
                    if ( v158 )
                      v159 = (char *)SecurityDescriptor + v158;
                    else
                      v159 = 0LL;
                  }
                }
                else
                {
                  v159 = 0LL;
                }
                v125 = AccessMode;
                if ( RtlpOwnerAcesPresent(0x10u, (__int64)v159)
                  && !SeAccessCheck(
                        SecurityDescriptor,
                        v124,
                        0,
                        0x40000u,
                        0,
                        0LL,
                        GenericMapping,
                        AccessMode,
                        &GrantedAccess,
                        &AccessStatus) )
                {
                  ServerAcl = -1073741790;
                  goto LABEL_502;
                }
                v119 = v207;
                v108 = a7;
              }
              else
              {
                v125 = AccessMode;
              }
              if ( v113 && !v119 )
              {
                v122 |= 0x1000u;
                v212.Header = (ACE_HEADER)v122;
              }
              v126 = !v104 || (v104 & 0x1B0) != v104;
              if ( v125 != 1 )
                goto LABEL_172;
              v127 = v225;
              if ( BYTE1(v212.AccessMask) && !v225 && v126 )
              {
                if ( !v124 )
                  goto LABEL_507;
                RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                v200 = SePrivilegeCheck(&RequiredPrivileges, v124, 1);
                SePrivilegedServiceAuditAlarm(0, (__int64 *)v124, (__int64)&RequiredPrivileges, v200);
                if ( !v200 )
                {
                  v141 = v207;
                  ServerAcl = -1073741727;
                  v146 = v208;
                  v142 = v204;
                  goto LABEL_367;
                }
                v108 = a7;
              }
              if ( !v214 || v127 )
                goto LABEL_170;
              if ( v124 )
              {
                RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v201 = SePrivilegeCheck(&RequiredPrivileges, v124, 1);
                SePrivilegedServiceAuditAlarm(0, (__int64 *)v124, (__int64)&RequiredPrivileges, v201);
                if ( !v201 )
                {
                  ServerAcl = -1073741727;
                  goto LABEL_509;
                }
                v108 = a7;
LABEL_170:
                if ( BYTE2(v212.AccessMask)
                  && (v108 & 0x10) == 0
                  && !(unsigned __int8)SepValidOwnerSubjectContext(v124, v224, v206, v108) )
                {
                  ServerAcl = -1073741734;
                  goto LABEL_509;
                }
                if ( (_BYTE)v118 && v206 )
                {
                  v141 = v207;
                  ServerAcl = RtlpCreateServerAcl((_DWORD)v207, v215, v229, (unsigned int)&v245, (__int64)&v216);
                  if ( ServerAcl < 0 )
                  {
LABEL_503:
                    v146 = v208;
                    v142 = v204;
                    goto LABEL_367;
                  }
                  if ( v123 && v207 )
                    ExFreePoolWithTag(v207, 0);
                  v128 = (unsigned __int16 *)v245;
                  v207 = (unsigned __int16 *)v245;
                  v245 = 0LL;
                  goto LABEL_173;
                }
LABEL_172:
                v128 = v207;
LABEL_173:
                v129 = 4 * *((unsigned __int8 *)v224 + 1) + 8;
                if ( v227 )
                  v130 = 4 * *((unsigned __int8 *)v227 + 1) + 8;
                else
                  v130 = 0;
                v131 = v122 & 0x10;
                if ( (v122 & 0x10) != 0 && v222 )
                  v132 = (v222->AclSize + 3) & 0xFFFFFFFC;
                else
                  v132 = 0;
                v133 = v122 & 4;
                if ( v133 && v128 )
                  v134 = (v128[1] + 3) & 0xFFFFFFFC;
                else
                  v134 = 0;
                v135 = ExAllocatePoolWithTag(
                         PagedPool,
                         v132 + v134 + v130 + 4 * *((unsigned __int8 *)v224 + 1) + 28,
                         0x64536553u);
                v210 = v135;
                v136 = v135;
                if ( v135 )
                {
                  v137 = *(_WORD *)&v212.Header.AceType;
                  v138 = (char *)(v135 + 5);
                  *(_QWORD *)v135 = 0LL;
                  *((_QWORD *)v135 + 1) = 0LL;
                  v135[4] = 0;
                  *((_WORD *)v135 + 1) |= v137;
                  *(_BYTE *)v135 = 1;
                  if ( v131 )
                  {
                    v139 = v222;
                    if ( v222 )
                    {
                      memmove(v138, v222, v222->AclSize);
                      if ( !v211 )
                        RtlpApplyAclToObject(v138, GenericMapping);
                      v136 = v210;
                      v210[3] = (_DWORD)v138 - (_DWORD)v210;
                      AclSize = v139->AclSize;
                      if ( v132 > (unsigned int)AclSize )
                      {
                        memset(&v138[AclSize], 0, v132 - (unsigned int)AclSize);
                        v136 = v210;
                      }
                      v138 += v132;
                    }
                  }
                  v141 = v207;
                  if ( v133 )
                  {
                    if ( v207 )
                    {
                      memmove(v138, v207, v207[1]);
                      v142 = v204;
                      if ( !v204 )
                        RtlpApplyAclToObject(v138, GenericMapping);
                      v210[4] = (_DWORD)v138 - (_DWORD)v210;
                      v143 = v207[1];
                      if ( v134 > (unsigned int)v143 )
                        memset(&v138[v143], 0, v134 - (unsigned int)v143);
                      v138 += v134;
                    }
                    else
                    {
                      v142 = v204;
                      v136[4] = 0;
                    }
                  }
                  else
                  {
                    v142 = v204;
                  }
                  memmove(v138, v224, v129);
                  v144 = v210;
                  v210[1] = (_DWORD)v138 - (_DWORD)v210;
                  v145 = &v138[v129];
                  if ( v227 )
                  {
                    memmove(v145, v227, v130);
                    v144[2] = (_DWORD)v145 - (_DWORD)v144;
                  }
                  ServerAcl = 0;
                  v146 = v208;
                  goto LABEL_199;
                }
                ServerAcl = -1073741670;
LABEL_509:
                v141 = v207;
                v146 = v208;
                v142 = v204;
                goto LABEL_367;
              }
LABEL_507:
              ServerAcl = -1073741700;
              goto LABEL_509;
            }
            v119 = v244;
            v207 = v244;
          }
          v122 |= 4u;
          v212.Header = (ACE_HEADER)v122;
          goto LABEL_159;
        }
        v169 = *(unsigned int *)(v236 + 12);
        if ( (_DWORD)v169 )
        {
          v93 = v236 + v169;
          goto LABEL_116;
        }
      }
    }
    v93 = 0LL;
    goto LABEL_116;
  }
LABEL_92:
  if ( v84 )
    goto LABEL_95;
  if ( SubjectSecurityContext )
  {
    Src = Sid;
    v85 = 0;
    goto LABEL_95;
  }
  v141 = 0LL;
  ServerAcl = -1073741700;
  v146 = v208;
LABEL_366:
  v142 = 0;
LABEL_367:
  v144 = v210;
LABEL_199:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v216 && v245 )
    ExFreePoolWithTag(v245, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (v217 || v211) && v222 )
    ExFreePoolWithTag(v222, 0);
  if ( v218 && v146 )
    ExFreePoolWithTag(v146, 0);
  if ( v246 && v219 )
    ExFreePoolWithTag(v246, 0);
  if ( v142 )
  {
    if ( v141 )
      ExFreePoolWithTag(v141, 0);
  }
  *v254 = v144;
  return (unsigned int)ServerAcl;
}
