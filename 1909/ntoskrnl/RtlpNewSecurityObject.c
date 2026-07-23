/*
 * XREFs of RtlpNewSecurityObject @ 0x1405DA480
 * Callers:
 *     SeAssignSecurityEx2 @ 0x14000ABF0 (SeAssignSecurityEx2.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     SeAssignSecurity @ 0x1406353D0 (SeAssignSecurity.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x14000AC80 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x14000ACD4 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x14000AD1C (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x14000AF00 (RtlSidDominates.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     RtlpOwnerAcesPresent @ 0x140088390 (RtlpOwnerAcesPresent.c)
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x140180564 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     SePrivilegeCheck @ 0x1405CF200 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF8DC (SePrivilegedServiceAuditAlarm.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     RtlpApplyAclToObject @ 0x1405DBCE0 (RtlpApplyAclToObject.c)
 *     RtlpInheritAcl2 @ 0x1405DBDB0 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x1405DC270 (RtlpCombineAcls.c)
 *     RtlValidAcl @ 0x1405DDC30 (RtlValidAcl.c)
 *     SeUnlockSubjectContext @ 0x1405F6E60 (SeUnlockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x1406CC7FC (SepValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1406DDF50 (RtlpCreateServerAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x14075D440 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x1408D1F7C (RtlpComputeMergedAcl.c)
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
  void *v67; // r13
  __int16 v68; // ax
  ACL *v69; // rcx
  char *AceByType; // rax
  __int64 v71; // r8
  char *v72; // rbx
  unsigned int v73; // r14d
  int v74; // r15d
  void *v75; // r12
  __int16 v76; // ax
  ACL *v77; // rdi
  _DWORD *v78; // rax
  __int64 v79; // r8
  _DWORD *v80; // rbx
  NTSTATUS ServerAcl; // ebx
  int v82; // edx
  int v83; // ebx
  char *v84; // r13
  char v85; // di
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
  NTSTATUS v101; // eax
  ACE_HEADER v102; // r15d
  int v103; // eax
  int v104; // r13d
  ACL *v105; // rbx
  int v106; // ecx
  int v107; // edx
  __int64 v108; // r9
  char *v109; // rax
  void *v110; // rax
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
  ACL *v152; // rcx
  char *v153; // rax
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
  ACL *v195; // rcx
  __int64 v196; // rax
  char *v197; // rax
  unsigned __int8 v198; // cl
  void *v199; // rsi
  ACCESS_MASK AccessMask; // edi
  ULONG v201; // r14d
  int v202; // ecx
  BOOLEAN v203; // bl
  BOOLEAN v204; // bl
  __int64 AceType; // [rsp+20h] [rbp-F0h]
  __int64 AceTypea; // [rsp+20h] [rbp-F0h]
  char v207; // [rsp+90h] [rbp-80h]
  KPROCESSOR_MODE AccessMode; // [rsp+91h] [rbp-7Fh]
  bool v209; // [rsp+92h] [rbp-7Eh]
  unsigned __int16 *v210; // [rsp+98h] [rbp-78h]
  ACL *v211; // [rsp+A0h] [rbp-70h]
  BOOLEAN Dominates[8]; // [rsp+A8h] [rbp-68h] BYREF
  _DWORD *v213; // [rsp+B0h] [rbp-60h]
  char v214; // [rsp+B8h] [rbp-58h]
  struct _ACE v215; // [rsp+BCh] [rbp-54h] BYREF
  char v216; // [rsp+C4h] [rbp-4Ch]
  char v217; // [rsp+C5h] [rbp-4Bh]
  bool v218; // [rsp+C6h] [rbp-4Ah]
  char v219; // [rsp+C7h] [rbp-49h] BYREF
  char v220; // [rsp+C8h] [rbp-48h]
  char v221; // [rsp+C9h] [rbp-47h]
  char v222; // [rsp+CAh] [rbp-46h]
  struct _ACE v223; // [rsp+CCh] [rbp-44h] BYREF
  ULONG v224; // [rsp+D4h] [rbp-3Ch] BYREF
  ACL *v225; // [rsp+D8h] [rbp-38h]
  __int64 v226; // [rsp+E0h] [rbp-30h] BYREF
  void *v227; // [rsp+E8h] [rbp-28h]
  int v228; // [rsp+F0h] [rbp-20h] BYREF
  _BYTE *v229; // [rsp+F8h] [rbp-18h]
  void *v230; // [rsp+100h] [rbp-10h]
  PGENERIC_MAPPING GenericMapping; // [rsp+108h] [rbp-8h]
  __int64 v232; // [rsp+110h] [rbp+0h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+118h] [rbp+8h]
  int v234; // [rsp+120h] [rbp+10h] BYREF
  ULONG v235; // [rsp+124h] [rbp+14h] BYREF
  __int64 v236; // [rsp+128h] [rbp+18h] BYREF
  PVOID SecurityDescriptor; // [rsp+130h] [rbp+20h] BYREF
  void *Src; // [rsp+138h] [rbp+28h]
  __int64 v239; // [rsp+140h] [rbp+30h]
  __int64 v240; // [rsp+148h] [rbp+38h]
  NTSTATUS v241; // [rsp+150h] [rbp+40h] BYREF
  NTSTATUS v242; // [rsp+154h] [rbp+44h] BYREF
  PSID Sid1; // [rsp+158h] [rbp+48h]
  __int64 v244; // [rsp+160h] [rbp+50h]
  PVOID P; // [rsp+168h] [rbp+58h]
  ACL *p_Acl; // [rsp+170h] [rbp+60h]
  unsigned __int16 *v247; // [rsp+178h] [rbp+68h]
  PVOID v248; // [rsp+180h] [rbp+70h] BYREF
  PVOID v249; // [rsp+188h] [rbp+78h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+190h] [rbp+80h] BYREF
  NTSTATUS AccessStatus; // [rsp+194h] [rbp+84h] BYREF
  __int64 v252; // [rsp+198h] [rbp+88h] BYREF
  char *v253; // [rsp+1A0h] [rbp+90h]
  __int64 v254; // [rsp+1A8h] [rbp+98h]
  ACL *v255; // [rsp+1B0h] [rbp+A0h] BYREF
  char *v256; // [rsp+1B8h] [rbp+A8h]
  _QWORD *v257; // [rsp+1C0h] [rbp+B0h]
  _BYTE v258[40]; // [rsp+1C8h] [rbp+B8h] BYREF
  int v259; // [rsp+1F0h] [rbp+E0h]
  unsigned __int16 v260; // [rsp+1F4h] [rbp+E4h]
  int v261; // [rsp+1F8h] [rbp+E8h]
  unsigned __int16 v262; // [rsp+1FCh] [rbp+ECh]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+200h] [rbp+F0h] BYREF
  ACL Acl; // [rsp+220h] [rbp+110h] BYREF
  _BYTE v265[120]; // [rsp+228h] [rbp+118h] BYREF
  ACL v266; // [rsp+2A0h] [rbp+190h] BYREF

  v10 = a2;
  v229 = a2;
  GenericMapping = a9;
  v257 = a3;
  v239 = a1;
  v244 = a4;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  v254 = a10;
  memset(v258, 0, sizeof(v258));
  LODWORD(v11) = 0;
  v12 = a7;
  v225 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  p_Acl = &Acl;
  v13 = 0LL;
  v211 = 0LL;
  v14 = 0LL;
  v214 = 0;
  v15 = 0LL;
  v221 = 0;
  v16 = 0LL;
  v220 = 0;
  v228 = 0;
  v210 = 0LL;
  v248 = 0LL;
  v207 = 0;
  *(_WORD *)((char *)&v215.AccessMask + 1) = 0;
  LOWORD(v223.AccessMask) = 0;
  LOBYTE(v215.AccessMask) = 0;
  v217 = 0;
  v219 = 0;
  P = 0LL;
  Sid1 = 0LL;
  v253 = 0LL;
  v232 = 0LL;
  v240 = 0LL;
  v247 = 0LL;
  v213 = 0LL;
  AccessMode = 1;
  LODWORD(v252) = 0;
  v256 = 0LL;
  Src = 0LL;
  v255 = 0LL;
  SecurityDescriptor = 0LL;
  Dominates[0] = 1;
  v249 = 0LL;
  v222 = 0;
  if ( (a7 & 0x2000) == 0 )
    AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( v10 )
  {
    v216 = 1;
  }
  else
  {
    v10 = v258;
    v216 = 0;
    v229 = v258;
    v258[0] = 1;
  }
  v17 = *((_WORD *)v10 + 1);
  v18 = (v17 & 0x80u) != 0;
  v209 = (v17 & 0x80u) != 0;
  v218 = (v17 & 0x40) != 0;
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
        v209 = 1;
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
    Sid1 = (char *)P + 4 * v24[1] + 8;
    memmove(Sid1, v29, v37);
    v15 = (char *)Sid1 + 4 * v29[1] + 8;
    v232 = (__int64)v15;
    if ( v31 )
    {
      v163 = v31[1];
      v253 = v15;
      memmove(v15, v31, 4 * v163 + 8);
      v15 += 4 * v31[1] + 8;
      v232 = (__int64)v15;
    }
    else
    {
      v253 = 0LL;
    }
    if ( v22 )
    {
      v14 = v15;
      memmove(v15, v22, 4LL * v22[1] + 8);
      v15 += 4 * v22[1] + 8;
      v232 = (__int64)v15;
    }
    else
    {
      v14 = 0LL;
    }
    memmove(v15, v27, 4LL * v27[1] + 8);
    v38 = v27[1];
    v39 = &v15[4 * v38 + 8];
    v247 = (unsigned __int16 *)v39;
    if ( v11 )
    {
      v40 = v11[1];
      v240 = (__int64)&v15[4 * v38 + 8];
      v16 = v240;
      memmove((void *)v240, v11, 4 * v40 + 8);
      v39 += 4 * v11[1] + 8;
      v247 = (unsigned __int16 *)v39;
      LODWORD(v11) = 0;
    }
    else
    {
      v16 = 0LL;
      v240 = 0LL;
    }
    if ( v23 )
      memmove(v39, v23, v23[1]);
    else
      v247 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v18 = v209;
    v13 = P;
    v12 = a7;
    v10 = v229;
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
  v227 = v42;
  if ( v42 )
  {
    BYTE2(v215.AccessMask) = 1;
LABEL_37:
    v44 = v239;
    goto LABEL_38;
  }
LABEL_33:
  if ( (v12 & 0x20) == 0 )
  {
    v43 = v15;
    if ( !v18 )
      v43 = v13;
    v227 = v43;
    if ( v43 )
      goto LABEL_37;
    ServerAcl = -1073741700;
LABEL_521:
    v141 = 0LL;
    v146 = 0LL;
    goto LABEL_366;
  }
  v44 = v239;
  if ( !v239 )
  {
    ServerAcl = -1073741734;
    goto LABEL_521;
  }
  if ( *(__int16 *)(v239 + 2) >= 0 )
  {
    v189 = *(void **)(v239 + 8);
  }
  else
  {
    v188 = *(unsigned int *)(v239 + 4);
    if ( !(_DWORD)v188 )
    {
LABEL_394:
      ServerAcl = -1073741734;
      goto LABEL_521;
    }
    v189 = (void *)(v239 + v188);
  }
  v227 = v189;
  BYTE2(v215.AccessMask) = 1;
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
  v230 = v45;
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
  v230 = v46;
  if ( !v46 )
  {
LABEL_402:
    ServerAcl = -1073741733;
    goto LABEL_521;
  }
LABEL_45:
  LODWORD(v226) = v12 & 4;
  v47 = (v12 & 4) != 0;
  v48 = v12 & 2;
  AccessMask_high = v48 != 0;
  HIBYTE(v215.AccessMask) = v48 != 0;
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
    v225 = 0LL;
    v223.Header = v48 != 0 ? (ACE_HEADER)0x400 : 0;
    goto LABEL_56;
  }
  Header = (ACE_HEADER)200;
  v173 = 0;
  v215.Header = (ACE_HEADER)200;
  while ( 1 )
  {
    v174 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&Header, 0x63416553u);
    v225 = v174;
    if ( !v174 )
    {
      ServerAcl = -1073741801;
      goto LABEL_521;
    }
    LOBYTE(AceType) = AccessMask_high;
    ServerAcl = RtlpInheritAcl2(
                  v54,
                  v53,
                  v55,
                  a6,
                  AceType,
                  v47,
                  (int)v227,
                  (__int64)v230,
                  v232,
                  v240,
                  GenericMapping,
                  2,
                  v244,
                  a5,
                  (__int64)&v215,
                  v174,
                  (PACE)((char *)&v215.AccessMask + 1),
                  (__int64)&v223);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(v225, 0);
    v225 = 0LL;
    if ( ServerAcl != -1073741789 )
      goto LABEL_290;
    if ( (unsigned int)++v173 >= 2 )
      goto LABEL_290;
    Header = v215.Header;
    AccessMask_high = HIBYTE(v215.AccessMask);
  }
  if ( !*(_DWORD *)&v215.Header )
  {
    ExFreePoolWithTag(v225, 0);
    v225 = 0LL;
  }
LABEL_290:
  if ( ServerAcl >= 0 )
  {
    v214 = 1;
    v185 = 32784;
    if ( (v223.Header.AceType & 8) != 0 )
      v185 = 32816;
    if ( (*(_WORD *)&v223.Header.AceType & 0x1000) != 0 )
      v186 = 0x2000;
    else
      v186 = 0;
    v10 = v229;
    v215.Header = (ACE_HEADER)((2 * (*(_WORD *)&v223.Header.AceType & 0x400)) | v185 | v186);
    goto LABEL_59;
  }
  if ( ServerAcl != -2147483637 )
    goto LABEL_435;
  v10 = v229;
LABEL_56:
  v56 = *((_WORD *)v10 + 1);
  v57 = (ACE_HEADER)34816;
  if ( !v48 )
    v57 = (ACE_HEADER)0x8000;
  v215.Header = v57;
  if ( (v56 & 0x30) == 0x30 )
  {
    if ( (v56 & 0x10) == 0 )
    {
      v225 = 0LL;
LABEL_418:
      BYTE1(v215.AccessMask) = 1;
      v215.Header = (ACE_HEADER)(*(_DWORD *)&v57 | v56 & 0x2000 | 0x10);
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
        v225 = 0LL;
        goto LABEL_418;
      }
      v192 = (ACL *)&v10[v191];
    }
    v225 = v192;
    goto LABEL_418;
  }
LABEL_59:
  v58 = (_DWORD)v226 != 0;
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
        LODWORD(v61) = (_DWORD)v229 + v182;
      else
        LODWORD(v61) = 0;
    }
  }
  else
  {
    LODWORD(v61) = 0;
  }
  if ( !v239 )
    goto LABEL_64;
  v166 = *(_WORD *)(v239 + 2);
  if ( (v166 & 0x10) == 0 )
    goto LABEL_64;
  if ( v166 >= 0 )
  {
    v62 = *(_QWORD *)(v239 + 24);
    goto LABEL_65;
  }
  v167 = *(unsigned int *)(v239 + 12);
  if ( (_DWORD)v167 )
    v62 = v239 + v167;
  else
LABEL_64:
    v62 = 0LL;
LABEL_65:
  v63 = ((v59 & 0x10) != 0 ? 4 : 0) | (v59 >> 1) & 0x400 | v60;
  if ( !v63 && !v62 )
  {
    v64 = 0LL;
    v211 = 0LL;
    v242 = -2147483637;
    goto LABEL_68;
  }
  v175 = HIBYTE(v215.AccessMask);
  v176 = 200;
  v234 = 200;
  v177 = 0;
  while ( 1 )
  {
    v178 = (ACL *)ExAllocatePoolWithTag(PagedPool, v176, 0x63416553u);
    v211 = v178;
    if ( !v178 )
    {
      v141 = 0LL;
      ServerAcl = -1073741801;
      v146 = 0LL;
      goto LABEL_366;
    }
    LOBYTE(AceType) = v175;
    ServerAcl = RtlpInheritAcl2(
                  v62,
                  v61,
                  v63,
                  a6,
                  AceType,
                  v58,
                  (int)v227,
                  (__int64)v230,
                  v232,
                  v240,
                  GenericMapping,
                  2,
                  v244,
                  a5,
                  (__int64)&v234,
                  v178,
                  (PACE)&v223.AccessMask,
                  (__int64)&v252);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(v211, 0);
    v211 = 0LL;
    if ( ServerAcl != -1073741789 || (++v177, v177 >= 2) )
    {
      v64 = 0LL;
      goto LABEL_298;
    }
    v176 = v234;
  }
  if ( v234 )
  {
    v64 = v211;
  }
  else
  {
    ExFreePoolWithTag(v211, 0);
    v64 = 0LL;
    v211 = 0LL;
  }
LABEL_298:
  v242 = ServerAcl;
  if ( ServerAcl >= 0 )
  {
    v65 = v229;
    v221 = 1;
    goto LABEL_69;
  }
  if ( ServerAcl != -2147483637 )
    goto LABEL_435;
LABEL_68:
  v65 = v229;
  v66 = *((_WORD *)v229 + 1);
  if ( (v66 & 0x30) == 0x30 )
  {
    if ( (v66 & 0x10) == 0 )
    {
      v64 = 0LL;
      v211 = 0LL;
      goto LABEL_69;
    }
    if ( v66 >= 0 )
    {
      v64 = (ACL *)*((_QWORD *)v229 + 3);
    }
    else
    {
      v193 = *((unsigned int *)v229 + 3);
      if ( !(_DWORD)v193 )
      {
        v64 = 0LL;
        v211 = 0LL;
        goto LABEL_69;
      }
      v64 = (ACL *)&v229[v193];
    }
    v211 = v64;
  }
LABEL_69:
  v67 = v253;
  v224 = 0;
  while ( 2 )
  {
    v68 = *((_WORD *)v65 + 1);
    if ( (v68 & 0x10) != 0 )
    {
      if ( v68 >= 0 )
      {
        v69 = (ACL *)*((_QWORD *)v65 + 3);
      }
      else
      {
        v180 = *((unsigned int *)v65 + 3);
        if ( (_DWORD)v180 )
          v69 = (ACL *)&v65[v180];
        else
          v69 = 0LL;
      }
    }
    else
    {
      v69 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v69, 0x14u, &v224);
    v72 = AceByType;
    if ( AceByType && AceByType != (char *)-8LL && !RtlpValidTrustSubjectContext(v67, AceByType + 8, v71, &v242) )
    {
LABEL_434:
      ServerAcl = -1073741790;
      goto LABEL_435;
    }
    ++v224;
    if ( v72 )
      continue;
    break;
  }
  v73 = a7;
  v74 = 4;
  if ( (a7 & 0x800) == 0 )
    goto LABEL_75;
  v224 = 0;
  while ( 1 )
  {
    v194 = *((_WORD *)v65 + 1);
    if ( (v194 & 0x10) != 0 )
    {
      if ( v194 >= 0 )
      {
        v195 = (ACL *)*((_QWORD *)v65 + 3);
      }
      else
      {
        v196 = *((unsigned int *)v65 + 3);
        v195 = (_DWORD)v196 ? (ACL *)&v65[v196] : 0LL;
      }
    }
    else
    {
      v195 = 0LL;
    }
    v197 = (char *)RtlFindAceByType(v195, 0x14u, &v224);
    ++v224;
    if ( !v197 )
      break;
    v198 = v197[1];
    if ( (v198 & 8) == 0 )
    {
      v199 = v197 + 8;
      AccessMask = *((_DWORD *)v197 + 1);
      v201 = v198;
      if ( !v254 || (AccessMask & *(_DWORD *)(v254 + 4)) != AccessMask || v197 == (char *)-8LL )
      {
LABEL_449:
        v141 = 0LL;
        ServerAcl = -1073741811;
        v146 = v211;
        goto LABEL_366;
      }
      goto LABEL_454;
    }
  }
  if ( !v67 )
  {
LABEL_75:
    v75 = v230;
    v249 = v64;
    goto LABEL_76;
  }
  if ( !v254 )
  {
    v141 = 0LL;
    ServerAcl = -1073741811;
    v146 = v211;
    goto LABEL_366;
  }
  AccessMask = *(_DWORD *)(v254 + 4);
  v199 = v67;
  v201 = 0;
LABEL_454:
  ServerAcl = RtlCreateAcl(&v266, 0x58u, 2u);
  if ( ServerAcl < 0
    || (ServerAcl = RtlAddProcessTrustLabelAce(&v266, 2u, v201, v199, 0x14u, AccessMask), ServerAcl < 0) )
  {
LABEL_435:
    v141 = v210;
    v146 = v211;
    goto LABEL_366;
  }
  v65 = v229;
  v75 = v230;
  v146 = v211;
  ServerAcl = RtlpComputeMergedAcl(
                (int)v211,
                (*((_WORD *)v229 + 1) & 0x800 | (*((unsigned __int16 *)v229 + 1) >> 1) & 0x18u) >> 1,
                (int)&v266,
                4,
                (__int64)v227,
                (__int64)v230,
                (__int64)GenericMapping,
                2,
                (__int64)&v249,
                (__int64)&v223);
  if ( ServerAcl < 0 )
  {
    v141 = 0LL;
    goto LABEL_366;
  }
  v73 = a7;
  v222 = 1;
LABEL_76:
  v76 = *((_WORD *)v65 + 1);
  if ( (v76 & 0x10) != 0 )
  {
    if ( v76 >= 0 )
    {
      v77 = (ACL *)*((_QWORD *)v65 + 3);
    }
    else
    {
      v183 = *((unsigned int *)v65 + 3);
      if ( (_DWORD)v183 )
        v77 = (ACL *)&v65[v183];
      else
        v77 = 0LL;
    }
  }
  else
  {
    v77 = 0LL;
  }
  v241 = 0;
  v259 = 0;
  v260 = 256;
  v235 = 0;
  while ( 2 )
  {
    v78 = RtlFindAceByType(v77, 0x15u, &v235);
    v80 = v78;
    if ( !v78 )
      goto LABEL_80;
    if ( (v78[1] & 0xFF000000) != 0 )
      goto LABEL_449;
    if ( (*((_BYTE *)v78 + 1) & 0x40) != 0 )
    {
      if ( !RtlpValidTrustSubjectContext(v67, v78 + 2, v79, &v241) )
        goto LABEL_434;
      goto LABEL_80;
    }
    v202 = *(_DWORD *)((char *)v78 + 10) - v259;
    if ( !v202 )
      v202 = *((unsigned __int16 *)v78 + 7) - v260;
    if ( v202 )
      goto LABEL_449;
    if ( *((_BYTE *)v78 + 9) == 1 && !v78[4] )
    {
LABEL_80:
      ++v235;
      if ( !v80 )
      {
        ServerAcl = v241;
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
    v84 = v256;
    goto LABEL_89;
  }
  v151 = *((_WORD *)v65 + 1);
  if ( (v151 & 0x10) != 0 )
  {
    if ( v151 >= 0 )
    {
      v152 = (ACL *)*((_QWORD *)v65 + 3);
    }
    else
    {
      v184 = *((unsigned int *)v65 + 3);
      if ( (_DWORD)v184 )
        v152 = (ACL *)&v65[v184];
      else
        v152 = 0LL;
    }
  }
  else
  {
    v152 = 0LL;
  }
  v153 = (char *)RtlFindAceByType(v152, 0x11u, 0LL);
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
  if ( (v85 & 8) != 0 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
  {
    v141 = 0LL;
    ServerAcl = -1073740730;
    v146 = v211;
    goto LABEL_366;
  }
  if ( !v83 )
  {
    if ( Sid1 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
    {
      v83 = 1;
      goto LABEL_92;
    }
LABEL_95:
    if ( Src )
    {
      memset(v265, 0, sizeof(v265));
      Acl = (ACL)8388610LL;
      v261 = 0;
      v262 = 4096;
      if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*(_BYTE *)Src & 0xF) != 1 || *((_BYTE *)Src + 1) > 0xFu )
      {
        v141 = 0LL;
        ServerAcl = -1073741704;
        v146 = v211;
        goto LABEL_366;
      }
      v86 = *(_DWORD *)((char *)Src + 2) - v261;
      if ( !v86 )
        v86 = *((unsigned __int16 *)Src + 3) - v262;
      if ( v86 )
      {
        v141 = 0LL;
        ServerAcl = -1073741811;
        v146 = v211;
        goto LABEL_366;
      }
      if ( (v85 & 0xE0) != 0 )
      {
        v141 = 0LL;
        ServerAcl = -1073741811;
        v146 = v211;
        goto LABEL_366;
      }
      if ( (v83 & 0xFFFFFFF8) != 0 )
      {
        v141 = 0LL;
        ServerAcl = -1073741811;
        v146 = v211;
        goto LABEL_366;
      }
      if ( !RtlValidAcl(&Acl) )
      {
        v141 = 0LL;
        ServerAcl = -1073741705;
        v146 = v211;
        goto LABEL_366;
      }
      v87 = v265;
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
        v146 = v211;
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
    if ( v239 )
    {
      v168 = *(_WORD *)(v239 + 2);
      if ( (v168 & 0x10) != 0 )
      {
        if ( v168 >= 0 )
        {
          v93 = *(_QWORD *)(v239 + 24);
LABEL_116:
          if ( v74 || v93 )
          {
            v94 = 200;
            v95 = 0;
            LODWORD(v236) = 200;
            while ( 1 )
            {
              v96 = (ACL *)ExAllocatePoolWithTag(PagedPool, v94, 0x63416553u);
              v97 = v96;
              if ( !v96 )
              {
                v141 = 0LL;
                ServerAcl = -1073741801;
                v146 = v211;
                goto LABEL_366;
              }
              LOBYTE(AceType) = 1;
              ServerAcl = RtlpInheritAcl2(
                            v93,
                            (int)v92,
                            v74,
                            a6,
                            AceType,
                            0,
                            (int)v227,
                            (__int64)v75,
                            v232,
                            v240,
                            GenericMapping,
                            3,
                            v244,
                            a5,
                            (__int64)&v236,
                            v96,
                            (PACE)((char *)&v223.AccessMask + 1),
                            (__int64)&v223);
              if ( ServerAcl >= 0 )
                break;
              ExFreePoolWithTag(v97, 0);
              v97 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_122;
              if ( (unsigned int)++v95 >= 2 )
                goto LABEL_122;
              v94 = v236;
              LODWORD(v92) = (_DWORD)p_Acl;
            }
            if ( !(_DWORD)v236 )
            {
              ExFreePoolWithTag(v97, 0);
              v97 = 0LL;
            }
LABEL_122:
            if ( ServerAcl == -2147483637 )
              goto LABEL_212;
            if ( ServerAcl >= 0 )
            {
              v98 = *(_WORD *)&v223.Header.AceType;
              v99 = p_Acl;
              goto LABEL_125;
            }
            goto LABEL_502;
          }
LABEL_212:
          v99 = p_Acl;
          v98 = 0;
          v97 = p_Acl;
          v223.Header = 0;
LABEL_125:
          v100 = v225;
          v101 = RtlpCombineAcls(
                   (_DWORD)v225,
                   (_DWORD)v97,
                   (_DWORD)v211,
                   (_DWORD)v211,
                   (__int64)v249,
                   (__int64)v211,
                   (__int64)&v255,
                   (__int64)&v228);
          v102 = v215.Header;
          ServerAcl = v101;
          if ( (*(_WORD *)&v215.Header.AceType & 0x2000) != 0 )
            v103 = 0x40000000;
          else
            v103 = 0;
          v104 = v103 | v228;
          if ( v97 && v97 != v99 )
            ExFreePoolWithTag(v97, 0);
          if ( ServerAcl < 0 )
            goto LABEL_435;
          v105 = v255;
          if ( v255 )
          {
            if ( v214 && v100 )
              ExFreePoolWithTag(v100, 0);
            v225 = v105;
            v100 = v105;
            v220 = 1;
            if ( (v98 & 8) != 0 )
              v106 = 48;
            else
              v106 = 16;
            if ( (v98 & 0x1000) != 0 )
              v107 = 0x2000;
            else
              v107 = 0;
            v102 = (ACE_HEADER)((2 * (v98 & 0x400)) | v106 | v107 | *(_DWORD *)&v102);
            v215.Header = v102;
          }
          v108 = a7;
          v228 = a7 & 8;
          if ( (a7 & 8) == 0 )
          {
            v109 = (char *)RtlFindAceByType(v100, 0x11u, 0LL);
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
                v146 = v211;
                goto LABEL_366;
              }
              ServerAcl = RtlSidDominates(Sid1, v110, Dominates);
              if ( ServerAcl < 0 )
                goto LABEL_502;
              v108 = a7;
              if ( !Dominates[0] )
                v217 = 1;
            }
            else
            {
              v108 = a7;
            }
          }
          v111 = (_DWORD)v226 != 0;
          v112 = v229;
          v113 = v108 & 1;
          Dominates[0] = (_DWORD)v226 != 0;
          v114 = *((_WORD *)v229 + 1);
          v115 = v114;
          if ( (v114 & 4) != 0 )
          {
            if ( v114 >= 0 )
            {
              v116 = *((_QWORD *)v229 + 4);
            }
            else
            {
              v162 = *((_DWORD *)v229 + 4);
              if ( v162 )
                LODWORD(v116) = (_DWORD)v229 + v162;
              else
                LODWORD(v116) = 0;
            }
          }
          else
          {
            LODWORD(v116) = 0;
          }
          if ( !v239 )
            goto LABEL_149;
          v170 = *(_WORD *)(v239 + 2);
          if ( (v170 & 4) == 0 )
            goto LABEL_149;
          if ( v170 >= 0 )
          {
            v117 = *(_QWORD *)(v239 + 32);
            goto LABEL_150;
          }
          v171 = *(unsigned int *)(v239 + 16);
          if ( (_DWORD)v171 )
            v117 = v239 + v171;
          else
LABEL_149:
            v117 = 0LL;
LABEL_150:
          v118 = v115 & 0x140C;
          if ( v118 || v117 )
          {
            v148 = 200;
            v149 = 0;
            LODWORD(v226) = 200;
            while ( 1 )
            {
              v150 = (ACL *)ExAllocatePoolWithTag(PagedPool, v148, 0x63416553u);
              v210 = (unsigned __int16 *)v150;
              if ( !v150 )
              {
                v146 = v211;
                ServerAcl = -1073741801;
                v141 = 0LL;
                goto LABEL_366;
              }
              LOBYTE(AceTypea) = v113;
              ServerAcl = RtlpInheritAcl2(
                            v117,
                            v116,
                            v118,
                            a6,
                            AceTypea,
                            v111,
                            (int)v227,
                            (__int64)v230,
                            v232,
                            v240,
                            GenericMapping,
                            1,
                            v244,
                            a5,
                            (__int64)&v226,
                            v150,
                            (PACE)&v215.AccessMask,
                            (__int64)&v223);
              if ( ServerAcl >= 0 )
                break;
              ExFreePoolWithTag(v210, 0);
              v210 = 0LL;
              v119 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_218;
              if ( (unsigned int)++v149 >= 2 )
                goto LABEL_218;
              v148 = v226;
              v111 = Dominates[0];
            }
            if ( (_DWORD)v226 )
            {
              v119 = v210;
            }
            else
            {
              ExFreePoolWithTag(v210, 0);
              v119 = 0LL;
              v210 = 0LL;
            }
LABEL_218:
            if ( ServerAcl >= 0 )
            {
              v123 = 1;
              LOBYTE(v118) = v215.AccessMask;
              v108 = a7;
              v122 = *(_WORD *)&v223.Header.AceType & 0x1408 | 4 | *(_DWORD *)&v215.Header;
              v207 = 1;
              v215.Header = (ACE_HEADER)v122;
              goto LABEL_160;
            }
            if ( ServerAcl == -2147483637 )
            {
              LOBYTE(v118) = v215.AccessMask;
              v102 = v215.Header;
              v112 = v229;
              v108 = a7;
              goto LABEL_153;
            }
            goto LABEL_435;
          }
          v119 = 0LL;
          v210 = 0LL;
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
            v210 = v119;
            v122 = v121 | v120 & 0x1000;
            LOBYTE(v118) = 1;
          }
          else
          {
            v122 = v121;
            v215.Header = (ACE_HEADER)v121;
            if ( !v247 )
            {
LABEL_159:
              v123 = 0;
LABEL_160:
              v124 = SubjectSecurityContext;
              if ( (v108 & 0x1000) == 0 && v216 && SubjectSecurityContext && v239 )
              {
                GrantedAccess = 0;
                AccessStatus = 0;
                ServerAcl = RtlpNewSecurityObject(
                              v239,
                              0,
                              (unsigned int)&SecurityDescriptor,
                              v244,
                              a5,
                              a6,
                              (unsigned int)v108 | 1,
                              (__int64)SubjectSecurityContext,
                              (__int64)GenericMapping,
                              v254);
                if ( ServerAcl < 0 )
                {
LABEL_502:
                  v141 = v210;
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
                v119 = v210;
                v108 = a7;
              }
              else
              {
                v125 = AccessMode;
              }
              if ( v113 && !v119 )
              {
                v122 |= 0x1000u;
                v215.Header = (ACE_HEADER)v122;
              }
              v126 = !v104 || (v104 & 0x1B0) != v104;
              if ( v125 != 1 )
                goto LABEL_172;
              v127 = v228;
              if ( BYTE1(v215.AccessMask) && !v228 && v126 )
              {
                if ( !v124 )
                  goto LABEL_507;
                RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                v203 = SePrivilegeCheck(&RequiredPrivileges, v124, 1);
                SePrivilegedServiceAuditAlarm(0, (__int64 *)v124, (__int64)&RequiredPrivileges, v203);
                if ( !v203 )
                {
                  v141 = v210;
                  ServerAcl = -1073741727;
                  v146 = v211;
                  v142 = v207;
                  goto LABEL_367;
                }
                v108 = a7;
              }
              if ( !v217 || v127 )
                goto LABEL_170;
              if ( v124 )
              {
                RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v204 = SePrivilegeCheck(&RequiredPrivileges, v124, 1);
                SePrivilegedServiceAuditAlarm(0, (__int64 *)v124, (__int64)&RequiredPrivileges, v204);
                if ( !v204 )
                {
                  ServerAcl = -1073741727;
                  goto LABEL_509;
                }
                v108 = a7;
LABEL_170:
                if ( BYTE2(v215.AccessMask)
                  && (v108 & 0x10) == 0
                  && !(unsigned __int8)SepValidOwnerSubjectContext(v124, v227, v209, v108) )
                {
                  ServerAcl = -1073741734;
                  goto LABEL_509;
                }
                if ( (_BYTE)v118 && v209 )
                {
                  v141 = v210;
                  ServerAcl = RtlpCreateServerAcl((_DWORD)v210, v218, v232, (unsigned int)&v248, (__int64)&v219);
                  if ( ServerAcl < 0 )
                  {
LABEL_503:
                    v146 = v211;
                    v142 = v207;
                    goto LABEL_367;
                  }
                  if ( v123 && v210 )
                    ExFreePoolWithTag(v210, 0);
                  v128 = (unsigned __int16 *)v248;
                  v210 = (unsigned __int16 *)v248;
                  v248 = 0LL;
                  goto LABEL_173;
                }
LABEL_172:
                v128 = v210;
LABEL_173:
                v129 = 4 * *((unsigned __int8 *)v227 + 1) + 8;
                if ( v230 )
                  v130 = 4 * *((unsigned __int8 *)v230 + 1) + 8;
                else
                  v130 = 0;
                v131 = v122 & 0x10;
                if ( (v122 & 0x10) != 0 && v225 )
                  v132 = (v225->AclSize + 3) & 0xFFFFFFFC;
                else
                  v132 = 0;
                v133 = v122 & 4;
                if ( v133 && v128 )
                  v134 = (v128[1] + 3) & 0xFFFFFFFC;
                else
                  v134 = 0;
                v135 = ExAllocatePoolWithTag(
                         PagedPool,
                         v132 + v134 + v130 + 4 * *((unsigned __int8 *)v227 + 1) + 28,
                         0x64536553u);
                v213 = v135;
                v136 = v135;
                if ( v135 )
                {
                  v137 = *(_WORD *)&v215.Header.AceType;
                  v138 = (char *)(v135 + 5);
                  *(_QWORD *)v135 = 0LL;
                  *((_QWORD *)v135 + 1) = 0LL;
                  v135[4] = 0;
                  *((_WORD *)v135 + 1) |= v137;
                  *(_BYTE *)v135 = 1;
                  if ( v131 )
                  {
                    v139 = v225;
                    if ( v225 )
                    {
                      memmove(v138, v225, v225->AclSize);
                      if ( !v214 )
                        RtlpApplyAclToObject(v138, GenericMapping);
                      v136 = v213;
                      v213[3] = (_DWORD)v138 - (_DWORD)v213;
                      AclSize = v139->AclSize;
                      if ( v132 > (unsigned int)AclSize )
                      {
                        memset(&v138[AclSize], 0, v132 - (unsigned int)AclSize);
                        v136 = v213;
                      }
                      v138 += v132;
                    }
                  }
                  v141 = v210;
                  if ( v133 )
                  {
                    if ( v210 )
                    {
                      memmove(v138, v210, v210[1]);
                      v142 = v207;
                      if ( !v207 )
                        RtlpApplyAclToObject(v138, GenericMapping);
                      v213[4] = (_DWORD)v138 - (_DWORD)v213;
                      v143 = v210[1];
                      if ( v134 > (unsigned int)v143 )
                        memset(&v138[v143], 0, v134 - (unsigned int)v143);
                      v138 += v134;
                    }
                    else
                    {
                      v142 = v207;
                      v136[4] = 0;
                    }
                  }
                  else
                  {
                    v142 = v207;
                  }
                  memmove(v138, v227, v129);
                  v144 = v213;
                  v213[1] = (_DWORD)v138 - (_DWORD)v213;
                  v145 = &v138[v129];
                  if ( v230 )
                  {
                    memmove(v145, v230, v130);
                    v144[2] = (_DWORD)v145 - (_DWORD)v144;
                  }
                  ServerAcl = 0;
                  v146 = v211;
                  goto LABEL_199;
                }
                ServerAcl = -1073741670;
LABEL_509:
                v141 = v210;
                v146 = v211;
                v142 = v207;
                goto LABEL_367;
              }
LABEL_507:
              ServerAcl = -1073741700;
              goto LABEL_509;
            }
            v119 = v247;
            v210 = v247;
          }
          v122 |= 4u;
          v215.Header = (ACE_HEADER)v122;
          goto LABEL_159;
        }
        v169 = *(unsigned int *)(v239 + 12);
        if ( (_DWORD)v169 )
        {
          v93 = v239 + v169;
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
    Src = Sid1;
    v85 = 0;
    goto LABEL_95;
  }
  v141 = 0LL;
  ServerAcl = -1073741700;
  v146 = v211;
LABEL_366:
  v142 = 0;
LABEL_367:
  v144 = v213;
LABEL_199:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v219 && v248 )
    ExFreePoolWithTag(v248, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (v220 || v214) && v225 )
    ExFreePoolWithTag(v225, 0);
  if ( v221 && v146 )
    ExFreePoolWithTag(v146, 0);
  if ( v249 && v222 )
    ExFreePoolWithTag(v249, 0);
  if ( v142 )
  {
    if ( v141 )
      ExFreePoolWithTag(v141, 0);
  }
  *v257 = v144;
  return (unsigned int)ServerAcl;
}
