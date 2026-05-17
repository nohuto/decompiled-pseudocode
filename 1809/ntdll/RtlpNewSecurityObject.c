/*
 * XREFs of RtlpNewSecurityObject @ 0x1800428C0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x1800460D0 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObject @ 0x18008AB50 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18008B370 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlCreateUserSecurityObject @ 0x1800D8E40 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D8EE0 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x180043CA8 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x180044270 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x180044F10 (RtlFindAceByType.c)
 *     RtlCreateSecurityDescriptor @ 0x180045030 (RtlCreateSecurityDescriptor.c)
 *     RtlpValidFilterAclSubjectContext @ 0x180045530 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800455AC (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180045B8C (RtlpGetDefaultsSubjectContext.c)
 *     RtlpOwnerAcesPresent @ 0x180048658 (RtlpOwnerAcesPresent.c)
 *     RtlpValidOwnerSubjectContext @ 0x18006E2FC (RtlpValidOwnerSubjectContext.c)
 *     RtlSidDominates @ 0x18006E4C0 (RtlSidDominates.c)
 *     RtlAddMandatoryAce @ 0x180072970 (RtlAddMandatoryAce.c)
 *     RtlpApplyAclToObject @ 0x18007CE50 (RtlpApplyAclToObject.c)
 *     RtlAddProcessTrustLabelAce @ 0x180088390 (RtlAddProcessTrustLabelAce.c)
 *     RtlpValidTrustSubjectContext @ 0x180089098 (RtlpValidTrustSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x18008B75C (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A02E0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A0700 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1800A0B20 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A28F0 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E8D94 (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // edx
  __int64 v12; // r14
  _BYTE *v13; // rbx
  _BYTE *v14; // rdi
  __int64 v15; // rsi
  void *ProcessHeap; // r13
  __int64 result; // rax
  int v18; // eax
  __int16 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // edx
  _BYTE *v22; // r12
  _BYTE *v23; // r11
  int v24; // ebx
  int v25; // edi
  int v26; // eax
  int v27; // r9d
  int v28; // r8d
  int v29; // r10d
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // r8d
  int v33; // r9d
  int v34; // eax
  int v35; // ebx
  __int16 v36; // cx
  int v37; // r13d
  unsigned __int16 *v38; // r12
  unsigned int v39; // edx
  __int16 v40; // cx
  int v41; // eax
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // r8d
  int v47; // eax
  __int16 v48; // cx
  _BYTE *v49; // rcx
  __int64 AceByType; // rbx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rdi
  _BYTE *v54; // rcx
  int v55; // r9d
  int v56; // edx
  int v57; // edi
  _BYTE *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rcx
  unsigned __int8 v62; // al
  _BYTE *v63; // rdi
  unsigned int v64; // r8d
  __int64 v65; // rcx
  int v66; // eax
  __int16 v67; // si
  int v68; // r9d
  int v69; // r14d
  __int64 v70; // rdi
  void *v71; // rbx
  __int16 v72; // ax
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // r8
  int v77; // edx
  int v78; // r13d
  __int64 v79; // r15
  __int64 v80; // rdx
  bool v81; // al
  unsigned __int8 *v82; // rsi
  int v83; // ecx
  unsigned int v84; // r13d
  __int16 v85; // bx
  int v86; // r15d
  unsigned int v87; // esi
  int v88; // r12d
  unsigned int v89; // r14d
  __int64 Heap; // rax
  __int64 v91; // rdx
  char *v92; // rbx
  unsigned __int16 *v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rdi
  int v96; // eax
  char *v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rax
  int v100; // eax
  unsigned __int16 *v101; // rdi
  __int64 v102; // rcx
  unsigned __int64 v103; // r8
  int v104; // ecx
  __int16 v105; // r13
  _BYTE *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  _BYTE *v109; // rcx
  __int64 v110; // rax
  int v111; // edi
  int v112; // esi
  int v113; // r14d
  void *v114; // rdi
  int ServerAcl; // eax
  int Acl; // [rsp+90h] [rbp-80h] BYREF
  char v117; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v118; // [rsp+95h] [rbp-7Bh]
  char v119; // [rsp+96h] [rbp-7Ah]
  char v120; // [rsp+97h] [rbp-79h]
  char v121; // [rsp+98h] [rbp-78h] BYREF
  char v122; // [rsp+99h] [rbp-77h]
  char v123[6]; // [rsp+9Ah] [rbp-76h] BYREF
  __int64 v124; // [rsp+A0h] [rbp-70h]
  void *v125; // [rsp+A8h] [rbp-68h]
  char v126; // [rsp+B0h] [rbp-60h] BYREF
  char v127; // [rsp+B1h] [rbp-5Fh]
  char v128; // [rsp+B2h] [rbp-5Eh] BYREF
  char v129; // [rsp+B3h] [rbp-5Dh]
  char v130; // [rsp+B4h] [rbp-5Ch]
  char v131; // [rsp+B5h] [rbp-5Bh]
  int v132; // [rsp+B8h] [rbp-58h]
  char v133; // [rsp+BCh] [rbp-54h] BYREF
  char v134[3]; // [rsp+BDh] [rbp-53h] BYREF
  int v135; // [rsp+C0h] [rbp-50h] BYREF
  int v136; // [rsp+C4h] [rbp-4Ch] BYREF
  __int16 v137; // [rsp+C8h] [rbp-48h]
  bool v138; // [rsp+CAh] [rbp-46h]
  unsigned __int16 *v139; // [rsp+D0h] [rbp-40h] BYREF
  void *v140; // [rsp+D8h] [rbp-38h]
  int v141; // [rsp+E0h] [rbp-30h] BYREF
  void *v142; // [rsp+E8h] [rbp-28h]
  void *v143; // [rsp+F0h] [rbp-20h]
  __int64 v144; // [rsp+F8h] [rbp-18h]
  void *Src; // [rsp+100h] [rbp-10h] BYREF
  size_t Size; // [rsp+108h] [rbp-8h] BYREF
  __int64 v147; // [rsp+110h] [rbp+0h] BYREF
  _BYTE *v148; // [rsp+118h] [rbp+8h]
  __int64 v149; // [rsp+120h] [rbp+10h]
  int v150; // [rsp+128h] [rbp+18h]
  __int64 v151; // [rsp+130h] [rbp+20h]
  __int64 v152; // [rsp+138h] [rbp+28h]
  int v153; // [rsp+140h] [rbp+30h] BYREF
  int v154; // [rsp+144h] [rbp+34h]
  __int64 v155; // [rsp+148h] [rbp+38h]
  __int64 v156; // [rsp+150h] [rbp+40h]
  unsigned __int64 v157; // [rsp+158h] [rbp+48h] BYREF
  void *v158; // [rsp+160h] [rbp+50h] BYREF
  __int64 v159; // [rsp+168h] [rbp+58h]
  __int64 v160; // [rsp+170h] [rbp+60h]
  __int64 v161; // [rsp+178h] [rbp+68h] BYREF
  int v162; // [rsp+180h] [rbp+70h] BYREF
  int v163; // [rsp+184h] [rbp+74h] BYREF
  int v164; // [rsp+188h] [rbp+78h] BYREF
  __int64 v165; // [rsp+190h] [rbp+80h]
  __int64 v166; // [rsp+198h] [rbp+88h]
  HANDLE Handle; // [rsp+1A0h] [rbp+90h] BYREF
  void **v168; // [rsp+1A8h] [rbp+98h] BYREF
  int v169; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 *v170; // [rsp+1B8h] [rbp+A8h] BYREF
  void **v171; // [rsp+1C0h] [rbp+B0h] BYREF
  __int64 *v172; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 *v173; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 *v174; // [rsp+1D8h] [rbp+C8h] BYREF
  __int64 *v175; // [rsp+1E0h] [rbp+D0h] BYREF
  _BYTE *v176; // [rsp+1E8h] [rbp+D8h] BYREF
  _BYTE *v177; // [rsp+1F0h] [rbp+E0h]
  void *v178; // [rsp+1F8h] [rbp+E8h] BYREF
  __int64 *v179; // [rsp+208h] [rbp+F8h]
  int v180; // [rsp+210h] [rbp+100h] BYREF
  __int64 v181; // [rsp+218h] [rbp+108h]
  __int64 v182; // [rsp+220h] [rbp+110h]
  int v183; // [rsp+228h] [rbp+118h]
  __int64 v184; // [rsp+230h] [rbp+120h]
  _DWORD *v185; // [rsp+238h] [rbp+128h]
  _BYTE v186[40]; // [rsp+240h] [rbp+130h] BYREF
  int v187; // [rsp+268h] [rbp+158h] BYREF
  int v188; // [rsp+26Ch] [rbp+15Ch]
  __int64 v189; // [rsp+270h] [rbp+160h]
  int v190; // [rsp+278h] [rbp+168h]
  _DWORD v191[2]; // [rsp+280h] [rbp+170h] BYREF
  __int16 v192; // [rsp+288h] [rbp+178h]
  char v193[24]; // [rsp+290h] [rbp+180h] BYREF
  int v194; // [rsp+2A8h] [rbp+198h]
  int v195; // [rsp+2ACh] [rbp+19Ch]
  _BYTE v196[96]; // [rsp+2D0h] [rbp+1C0h] BYREF
  _BYTE v197[128]; // [rsp+330h] [rbp+220h] BYREF

  v144 = a9;
  v11 = 0;
  v12 = a1;
  v166 = a10;
  v157 = 0LL;
  v13 = 0LL;
  v177 = v197;
  v14 = 0LL;
  v15 = 0LL;
  v155 = a4;
  v179 = a3;
  v165 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v125 = ProcessHeap;
  v156 = a8;
  v142 = 0LL;
  v139 = 0LL;
  v147 = 0LL;
  v119 = 0;
  v130 = 0;
  v129 = 0;
  v153 = 0;
  Src = 0LL;
  v158 = 0LL;
  v120 = 0;
  v122 = 0;
  v117 = 0;
  v133 = 0;
  v134[0] = 0;
  v123[0] = 0;
  LOBYTE(v150) = 0;
  v128 = 0;
  v160 = 0LL;
  v159 = 0LL;
  v148 = 0LL;
  v152 = 0LL;
  v149 = 0LL;
  v124 = 0LL;
  v169 = 0;
  v151 = 0LL;
  v176 = 0LL;
  v178 = 0LL;
  v118 = 0;
  v126 = 1;
  v161 = 0LL;
  v131 = 0;
  LOBYTE(v154) = 1;
  v168 = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  v175 = 0LL;
  v170 = 0LL;
  v173 = 0LL;
  v174 = 0LL;
  if ( a8 )
  {
    result = NtQueryInformationToken(a8, 10LL, v193, 56LL, &Size);
    if ( (int)result < 0 )
      return result;
    v154 = v194;
    if ( v194 == 2 && v195 < 1 )
      return 3221225637LL;
  }
  if ( a2 )
  {
    v127 = 1;
  }
  else
  {
    v127 = 0;
    RtlCreateSecurityDescriptor(v186, 1LL);
    a2 = v186;
  }
  v18 = *((unsigned __int16 *)a2 + 1);
  v137 = *((_WORD *)a2 + 1) & 0x80;
  v19 = v137;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v138 = v137 != 0;
  LODWORD(Size) = v18;
  if ( a8 || v137 )
  {
    LOBYTE(v11) = v137 != 0;
    result = RtlpGetDefaultsSubjectContext(
               a8,
               v11,
               (unsigned int)&v168,
               (unsigned int)&v171,
               (__int64)&v172,
               (__int64)&v173,
               (__int64)&v175,
               (__int64)&v170,
               (__int64)&v174);
    if ( (int)result < 0 )
      return result;
    v13 = *v168;
    v14 = *v171;
    v149 = *v172;
    v160 = *v175;
    v159 = *v170;
    if ( v173 )
      v148 = (_BYTE *)*v173;
    else
      v148 = 0LL;
    v19 = v137;
    if ( v174 )
      v20 = *v174;
    else
      v20 = 0LL;
    v152 = v20;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = *((unsigned __int16 *)a2 + 1);
  if ( (v21 & 0x8000u) == 0 )
  {
    v22 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_160;
    v22 = &a2[*((unsigned int *)a2 + 1)];
  }
  v140 = v22;
  if ( v22 )
  {
    v122 = 1;
    goto LABEL_18;
  }
LABEL_160:
  if ( (a7 & 0x20) != 0 )
  {
    if ( v12 )
    {
      if ( *(__int16 *)(v12 + 2) >= 0 )
      {
        v22 = *(_BYTE **)(v12 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(v12 + 4) )
          goto LABEL_287;
        v22 = (_BYTE *)(v12 + *(unsigned int *)(v12 + 4));
      }
      v140 = v22;
      v122 = 1;
      if ( v22 )
        goto LABEL_18;
    }
LABEL_287:
    v35 = -1073741734;
    goto LABEL_289;
  }
  v22 = v148;
  if ( !v19 )
    v22 = v13;
  v140 = v22;
  if ( !v22 )
  {
    v35 = -1073741700;
LABEL_289:
    Acl = v35;
LABEL_363:
    v38 = v139;
    goto LABEL_144;
  }
LABEL_18:
  if ( (v21 & 0x8000u) == 0 )
  {
    v23 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_22;
    v23 = &a2[*((unsigned int *)a2 + 2)];
  }
  v143 = v23;
  if ( v23 )
    goto LABEL_26;
LABEL_22:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !v12 )
      goto LABEL_288;
    if ( *(__int16 *)(v12 + 2) >= 0 )
    {
      v23 = *(_BYTE **)(v12 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(v12 + 8) )
        goto LABEL_288;
      v23 = (_BYTE *)(v12 + *(unsigned int *)(v12 + 8));
    }
  }
  else
  {
    v23 = v14;
    if ( v19 )
      v23 = (_BYTE *)v20;
  }
  v143 = v23;
  if ( !v23 )
  {
LABEL_288:
    v35 = -1073741733;
    goto LABEL_289;
  }
LABEL_26:
  v24 = a7 >> 2;
  LOBYTE(v24) = (a7 & 4) != 0;
  v25 = a7 & 2;
  v141 = v24;
  v26 = (v21 >> 2) & 8;
  v27 = (v21 >> 1) & 0x400;
  v28 = (v21 >> 1) & 0x1000;
  v29 = (v21 & 0x10) != 0 ? 4 : 0;
  if ( (v21 & 0x10) == (_WORD)v142 )
  {
    LODWORD(v30) = 0;
  }
  else
  {
    LODWORD(v30) = 0;
    if ( (v21 & 0x8000u) == 0 )
    {
      v31 = *((_QWORD *)a2 + 3);
      goto LABEL_29;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      LODWORD(v31) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
      goto LABEL_29;
    }
  }
  LODWORD(v31) = 0;
LABEL_29:
  if ( v12 && (*(_BYTE *)(v12 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(v12 + 2) >= 0 )
    {
      v30 = *(_QWORD *)(v12 + 24);
    }
    else if ( *(_DWORD *)(v12 + 12) )
    {
      LODWORD(v30) = v12 + *(_DWORD *)(v12 + 12);
    }
  }
  v32 = v27 | v28;
  v33 = v144;
  LOBYTE(v33) = a6;
  v34 = RtlpInheritAcl(
          v30,
          v31,
          v29 | v26 | (unsigned int)v32,
          v33,
          v25 != 0,
          v24,
          (__int64)v22,
          (__int64)v23,
          (__int64)v148,
          v152,
          v144,
          2,
          v155,
          a5,
          (__int64)&v139,
          (__int64)&v117,
          (__int64)&v136);
  Acl = v34;
  v35 = v34;
  if ( v34 >= 0 )
  {
    v36 = *((_WORD *)a2 + 1);
    v119 = 1;
    v37 = 2 * (v136 & 0x1400 | (2 * (v136 & 8 | 0x2004)));
    v132 = v37;
    goto LABEL_37;
  }
  if ( v34 != -2147483637 )
  {
    v15 = v124;
    goto LABEL_363;
  }
  v36 = *((_WORD *)a2 + 1);
  v37 = v25 != 0 ? 34816 : 0x8000;
  v132 = v37;
  if ( (v36 & 0x30) != 0x30 )
  {
LABEL_37:
    v38 = v139;
    v142 = v139;
    goto LABEL_38;
  }
  if ( (v36 & 0x10) != 0 )
  {
    if ( v36 >= 0 )
    {
      v38 = (unsigned __int16 *)*((_QWORD *)a2 + 3);
      goto LABEL_299;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      v38 = (unsigned __int16 *)&a2[*((unsigned int *)a2 + 3)];
LABEL_299:
      v142 = v38;
      goto LABEL_300;
    }
  }
  v38 = 0LL;
  v142 = 0LL;
LABEL_300:
  v139 = v38;
  v117 = 1;
  v37 |= v36 & 0x2000 | 0x10;
  v132 = v37;
LABEL_38:
  v39 = (unsigned __int16)v36;
  v40 = v36 & 0x10;
  v41 = (v39 >> 2) & 8;
  v42 = (v39 >> 1) & 0x400;
  v43 = v40 != 0 ? 4 : 0;
  if ( !v40 )
  {
LABEL_39:
    LODWORD(v44) = 0;
    goto LABEL_40;
  }
  if ( (v39 & 0x8000u) == 0 )
  {
    v44 = *((_QWORD *)a2 + 3);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 3) )
      goto LABEL_39;
    LODWORD(v44) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
  }
LABEL_40:
  if ( !v12 || (*(_BYTE *)(v12 + 2) & 0x10) == 0 )
    goto LABEL_169;
  if ( *(__int16 *)(v12 + 2) >= 0 )
  {
    v45 = *(_QWORD *)(v12 + 24);
    goto LABEL_45;
  }
  if ( *(_DWORD *)(v12 + 12) )
    LODWORD(v45) = v12 + *(_DWORD *)(v12 + 12);
  else
LABEL_169:
    LODWORD(v45) = 0;
LABEL_45:
  v46 = v43 | v41 | v42;
  LOBYTE(v43) = a6;
  v47 = RtlpInheritAcl(
          v45,
          v44,
          v46,
          v43,
          v25 != 0,
          v141,
          (__int64)v140,
          (__int64)v143,
          (__int64)v148,
          v152,
          v144,
          2,
          v155,
          a5,
          (__int64)&v147,
          (__int64)&v133,
          (__int64)&v169);
  Acl = v47;
  v35 = v47;
  if ( v47 >= 0 )
  {
    v130 = 1;
  }
  else
  {
    if ( v47 != -2147483637 )
      goto LABEL_266;
    v48 = *((_WORD *)a2 + 1);
    if ( (v48 & 0x30) == 0x30 )
    {
      if ( (v48 & 0x10) != 0 )
      {
        if ( v48 >= 0 )
        {
          v108 = *((_QWORD *)a2 + 3);
        }
        else if ( *((_DWORD *)a2 + 3) )
        {
          v108 = (__int64)&a2[*((unsigned int *)a2 + 3)];
        }
        else
        {
          v108 = 0LL;
        }
        v147 = v108;
      }
      else
      {
        v147 = 0LL;
      }
    }
  }
  v135 = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
    {
LABEL_50:
      v49 = 0LL;
      goto LABEL_51;
    }
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v49 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_50;
      v49 = &a2[*((unsigned int *)a2 + 3)];
    }
LABEL_51:
    AceByType = RtlFindAceByType(v49, 20LL, &v135);
    v52 = AceByType + 8;
    if ( !AceByType )
      v52 = 0LL;
    v53 = v159;
    if ( v52 && !(unsigned __int8)RtlpValidTrustSubjectContext(v159, v52, v51, &Acl) )
    {
      v35 = -1073741790;
      goto LABEL_311;
    }
    ++v135;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_56:
    v161 = v147;
    goto LABEL_57;
  }
  v135 = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_317;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v109 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v109 = &a2[*((unsigned int *)a2 + 3)];
        goto LABEL_319;
      }
LABEL_317:
      v109 = 0LL;
    }
LABEL_319:
    v110 = RtlFindAceByType(v109, 20LL, &v135);
    ++v135;
    if ( v110 )
    {
      if ( (*(_BYTE *)(v110 + 1) & 8) == 0 )
      {
        v111 = *(_DWORD *)(v110 + 4);
        v112 = v110 + 8;
        v113 = *(unsigned __int8 *)(v110 + 1);
        if ( !v166 || (v111 & *(_DWORD *)(v166 + 4)) != v111 || v110 == -8 )
          goto LABEL_324;
        goto LABEL_328;
      }
      continue;
    }
    break;
  }
  if ( !v53 )
    goto LABEL_56;
  if ( !v166 )
  {
LABEL_324:
    v35 = -1073741811;
    goto LABEL_311;
  }
  v112 = v53;
  v113 = 0;
  v111 = *(_DWORD *)(v166 + 4);
LABEL_328:
  Acl = RtlCreateAcl(v196, 88LL, 2LL);
  v35 = Acl;
  if ( Acl < 0 )
    goto LABEL_266;
  Acl = RtlAddProcessTrustLabelAce((unsigned int)v196, 2, v113, v112, 20, v111);
  v35 = Acl;
  if ( Acl < 0 )
    goto LABEL_266;
  Acl = RtlpComputeMergedAcl(
          v147,
          (*((_WORD *)a2 + 1) & 0x800 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x18u) >> 1,
          (unsigned int)v196,
          4,
          (__int64)v140,
          (__int64)v143,
          v144,
          2,
          (__int64)&v161,
          (__int64)&v136);
  v35 = Acl;
  if ( Acl < 0 )
    goto LABEL_266;
  v12 = v165;
  v131 = 1;
LABEL_57:
  if ( (a2[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v54 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_58;
      v54 = &a2[*((unsigned int *)a2 + 3)];
    }
  }
  else
  {
LABEL_58:
    v54 = 0LL;
  }
  Acl = RtlpValidFilterAclSubjectContext(v54, v159);
  v35 = Acl;
  if ( Acl < 0 )
    goto LABEL_266;
  v56 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v56 = (a7 >> 8) & 1;
  v57 = v56 | 4;
  if ( (a7 & 0x400) == 0 )
    v57 = v56;
  if ( v57 )
  {
    v60 = 0LL;
    goto LABEL_68;
  }
  if ( (a2[2] & 0x10) == 0 )
    goto LABEL_66;
  if ( *((__int16 *)a2 + 1) >= 0 )
  {
    v58 = (_BYTE *)*((_QWORD *)a2 + 3);
  }
  else if ( *((_DWORD *)a2 + 3) )
  {
    v58 = &a2[*((unsigned int *)a2 + 3)];
  }
  else
  {
LABEL_66:
    v58 = 0LL;
  }
  v59 = RtlFindAceByType(v58, 17LL, 0LL);
  v60 = v59;
  if ( v59 )
  {
    v57 = *(_DWORD *)(v59 + 4);
    v61 = v59 + 8;
    v62 = *(_BYTE *)(v59 + 1);
    v151 = v61;
    v118 = v62;
    if ( v62 == 8 || (v62 & 0x10) != 0 )
    {
      v61 = 0LL;
      v62 = 0;
      v151 = 0LL;
      v60 = 0LL;
      v118 = 0;
      v57 = 0;
    }
  }
  else
  {
LABEL_68:
    v61 = 0LL;
    v62 = 0;
  }
  if ( (v62 & 8) != 0 && *(_DWORD *)(v160 + 8) < 0x2000u )
  {
    v35 = -1073740730;
    goto LABEL_311;
  }
  if ( v57 )
  {
LABEL_204:
    if ( v60 )
      goto LABEL_73;
    if ( v156 )
    {
      v61 = v160;
      v151 = v160;
      v118 = 0;
      goto LABEL_73;
    }
    goto LABEL_335;
  }
  if ( v160 && *(_DWORD *)(v160 + 8) < 0x2000u )
  {
    v57 = 1;
    goto LABEL_204;
  }
LABEL_73:
  if ( !v61 )
  {
    v63 = 0LL;
    v177 = 0LL;
    goto LABEL_75;
  }
  Acl = RtlCreateAcl(v197, 128LL, 2LL);
  v35 = Acl;
  if ( Acl < 0 )
    goto LABEL_266;
  Acl = RtlAddMandatoryAce((unsigned int)v197, 2, v118, v151, 17, v57);
  v35 = Acl;
  if ( Acl < 0 )
    goto LABEL_266;
  v63 = v197;
LABEL_75:
  if ( (a7 & 0x700) != 0 )
  {
    v64 = 4;
  }
  else if ( !v60 && v63 )
  {
    v64 = 0;
  }
  else
  {
    v64 = (*((_WORD *)a2 + 1) & 0x2800 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !v12 || (*(_BYTE *)(v12 + 2) & 0x10) == 0 )
    goto LABEL_170;
  if ( *(__int16 *)(v12 + 2) >= 0 )
  {
    v65 = *(_QWORD *)(v12 + 24);
  }
  else
  {
    if ( *(_DWORD *)(v12 + 12) )
    {
      LODWORD(v65) = v12 + *(_DWORD *)(v12 + 12);
      goto LABEL_84;
    }
LABEL_170:
    LODWORD(v65) = 0;
  }
LABEL_84:
  LOBYTE(v55) = a6;
  v66 = RtlpInheritAcl(
          v65,
          (_DWORD)v63,
          v64,
          v55,
          1,
          0,
          (__int64)v140,
          (__int64)v143,
          (__int64)v148,
          v152,
          v144,
          3,
          v155,
          a5,
          (__int64)&v176,
          (__int64)v134,
          (__int64)&v136);
  Acl = v66;
  v35 = v66;
  if ( v66 != -2147483637 )
  {
    if ( v66 >= 0 )
    {
      v63 = v176;
      v67 = v136;
      goto LABEL_86;
    }
    goto LABEL_266;
  }
  v67 = 0;
  v136 = 0;
LABEL_86:
  v35 = RtlpCombineAcls((_DWORD)v38, (_DWORD)v63, v147, v147, v161, v147, (__int64)&v178, (__int64)&v153);
  Acl = v35;
  v69 = ((v37 & 0x2000) << 17) | v153;
  if ( !v63 || v63 == v177 )
  {
    v70 = (__int64)v125;
  }
  else
  {
    v103 = (unsigned __int64)v63;
    v70 = (__int64)v125;
    RtlFreeHeap((__int64)v125, 0, v103);
  }
  if ( v35 < 0 )
    goto LABEL_266;
  v71 = v178;
  if ( v178 )
  {
    if ( v119 && v38 )
      RtlFreeHeap(v70, 0, (unsigned __int64)v38);
    v142 = v71;
    v139 = (unsigned __int16 *)v71;
    v38 = (unsigned __int16 *)v71;
    v129 = 1;
    v37 |= 2 * (v67 & 0x1400 | (2 * (v67 & 8 | 4)));
    v132 = v37;
  }
  if ( (a7 & 8) == 0 )
  {
    v98 = RtlFindAceByType(v38, 17LL, 0LL);
    v99 = v98 ? v98 + 8 : v151;
    if ( v99 )
    {
      if ( v156 )
      {
        Acl = RtlSidDominates(v160, v99, &v126);
        v35 = Acl;
        if ( Acl >= 0 )
        {
          v100 = (unsigned __int8)v150;
          if ( !v126 )
            v100 = 1;
          v150 = v100;
          goto LABEL_91;
        }
        goto LABEL_266;
      }
LABEL_335:
      v35 = -1073741700;
LABEL_311:
      Acl = v35;
      goto LABEL_266;
    }
  }
LABEL_91:
  v72 = *((_WORD *)a2 + 1);
  if ( (v72 & 4) == 0 )
    goto LABEL_179;
  if ( v72 >= 0 )
  {
    v73 = *((_QWORD *)a2 + 4);
    goto LABEL_95;
  }
  if ( *((_DWORD *)a2 + 4) )
    LODWORD(v73) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
  else
LABEL_179:
    LODWORD(v73) = 0;
LABEL_95:
  if ( !v165 || (*(_BYTE *)(v165 + 2) & 4) == 0 )
    goto LABEL_254;
  if ( *(__int16 *)(v165 + 2) >= 0 )
  {
    v74 = *(_QWORD *)(v165 + 32);
  }
  else
  {
    if ( *(_DWORD *)(v165 + 16) )
    {
      LODWORD(v74) = v165 + *(_DWORD *)(v165 + 16);
      goto LABEL_100;
    }
LABEL_254:
    LODWORD(v74) = 0;
  }
LABEL_100:
  LOBYTE(v68) = a6;
  v75 = RtlpInheritAcl(
          v74,
          v73,
          v72 & 0x140C,
          v68,
          a7 & 1,
          v141,
          (__int64)v140,
          (__int64)v143,
          (__int64)v148,
          v152,
          v144,
          1,
          v155,
          a5,
          (__int64)&Src,
          (__int64)v123,
          (__int64)&v136);
  Acl = v75;
  v35 = v75;
  if ( v75 >= 0 )
  {
    v77 = 1;
    v120 = 1;
    v78 = v136 & 0x1408 | 4 | v37;
    goto LABEL_102;
  }
  if ( v75 != -2147483637 )
    goto LABEL_266;
  v104 = v37 | 0x400;
  if ( (a7 & 1) == 0 )
    v104 = v37;
  v105 = *((_WORD *)a2 + 1);
  if ( (v105 & 0xC) == 0xC )
  {
    if ( (v105 & 4) != 0 )
    {
      if ( v105 >= 0 )
      {
        v106 = (_BYTE *)*((_QWORD *)a2 + 4);
LABEL_274:
        v77 = 1;
        v78 = v104 | v105 & 0x1000;
        v123[0] = 1;
        goto LABEL_247;
      }
      if ( *((_DWORD *)a2 + 4) )
      {
        v106 = &a2[*((unsigned int *)a2 + 4)];
        goto LABEL_274;
      }
    }
    v106 = 0LL;
    goto LABEL_274;
  }
  v106 = (_BYTE *)v149;
  v78 = v104;
  v132 = v104;
  v77 = 1;
  if ( v149 )
  {
LABEL_247:
    v78 |= 4u;
    Src = v106;
LABEL_102:
    v132 = v78;
  }
  v79 = v156;
  if ( (a7 & 0x1000) == 0 && v127 && v156 && v165 )
  {
    v163 = 0;
    v141 = 0;
    Acl = RtlpNewSecurityObject(v165, 0, (unsigned int)&v157, v155, a5, a6, a7 | 1, v156, v144, v166);
    v35 = Acl;
    if ( Acl < 0 )
      goto LABEL_266;
    if ( (*(_BYTE *)(v157 + 2) & 4) == 0 )
      goto LABEL_342;
    if ( *(__int16 *)(v157 + 2) >= 0 )
    {
      v80 = *(_QWORD *)(v157 + 32);
      goto LABEL_112;
    }
    if ( *(_DWORD *)(v157 + 16) )
      v80 = v157 + *(unsigned int *)(v157 + 16);
    else
LABEL_342:
      v80 = 0LL;
LABEL_112:
    if ( (unsigned __int8)RtlpOwnerAcesPresent(16LL, v80) )
    {
      Handle = 0LL;
      v164 = 20;
      if ( (_BYTE)v154 != 1 )
        goto LABEL_261;
      v192 = 1;
      v191[1] = 2;
      v185 = v191;
      v191[0] = 12;
      v180 = 48;
      v181 = 0LL;
      v183 = 0;
      v182 = 0LL;
      v184 = 0LL;
      Acl = NtDuplicateToken(v79, 8LL, &v180, 0LL, 2, &Handle);
      v35 = Acl;
      if ( Acl < 0 )
        goto LABEL_266;
      v107 = (__int64)Handle;
      if ( !Handle )
LABEL_261:
        v107 = v79;
      Acl = ZwAccessCheck(v157, v107, 0x40000LL, v144, &v187, &v164, &v163, &v141);
      v35 = Acl;
      if ( Handle )
        NtClose(Handle);
      if ( v35 < 0 || (v35 = v141, Acl = v141, v141 < 0) )
      {
LABEL_266:
        v15 = v124;
        goto LABEL_143;
      }
    }
  }
  if ( (a7 & 1) != 0 && !Src )
    v132 = v78 | 0x1000;
  v81 = !v69 || (v69 & 0x1B0) != v69;
  if ( v117 && (a7 & 8) == 0 && v81 )
  {
    if ( !v79 )
      goto LABEL_335;
    v149 = 8LL;
    v189 = 8LL;
    v187 = 1;
    v188 = 1;
    v190 = 0;
    Acl = ZwPrivilegeCheck(v79, &v187, &v121);
    v35 = Acl;
    if ( Acl < 0 )
      goto LABEL_266;
    if ( !v121 )
      goto LABEL_347;
  }
  if ( (_BYTE)v150 && (a7 & 8) == 0 )
  {
    if ( !v79 )
      goto LABEL_335;
    v149 = 32LL;
    v189 = 32LL;
    v187 = 1;
    v188 = 1;
    v190 = 0;
    Acl = ZwPrivilegeCheck(v79, &v187, &v121);
    v35 = Acl;
    if ( Acl < 0 )
      goto LABEL_266;
    if ( !v121 )
    {
LABEL_347:
      v35 = -1073741727;
      goto LABEL_311;
    }
  }
  if ( v122 && (a7 & 0x10) == 0 )
  {
    if ( !v79 )
      goto LABEL_335;
    v82 = (unsigned __int8 *)v140;
    LOBYTE(v76) = v138;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v79, v140, v76, &v162) )
    {
      v35 = v162;
      goto LABEL_311;
    }
  }
  else
  {
    v82 = (unsigned __int8 *)v140;
  }
  if ( v137 && v123[0] )
  {
    v114 = Src;
    LOBYTE(v77) = Size;
    ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v77, (_DWORD)v148, (unsigned int)&v158, (__int64)&v128);
    Acl = ServerAcl;
    v35 = ServerAcl;
    if ( ServerAcl < 0 )
      goto LABEL_266;
    if ( v120 && v114 )
      RtlFreeHeap((__int64)v125, 0, (unsigned __int64)v114);
    Src = v158;
    v158 = 0LL;
  }
  v83 = 4 * v82[1] + 8;
  LODWORD(Size) = v83;
  if ( v143 )
    v84 = 4 * *((unsigned __int8 *)v143 + 1) + 8;
  else
    v84 = 0;
  v85 = v132;
  v86 = v132 & 0x10;
  if ( (v132 & 0x10) != 0 && v38 )
    v87 = (v38[1] + 3) & 0xFFFFFFFC;
  else
    v87 = 0;
  v88 = v132 & 4;
  if ( (v132 & 4) != 0 && Src )
    v89 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
  else
    v89 = 0;
  Heap = RtlAllocateHeap((__int64)v125, NtdllBaseTag + 1310720, v84 + v83 + 20 + v89 + v87);
  v124 = Heap;
  v91 = Heap;
  if ( !Heap )
  {
    v38 = (unsigned __int16 *)v142;
    v35 = -1073741801;
    goto LABEL_311;
  }
  *(_QWORD *)Heap = 0LL;
  *(_QWORD *)(Heap + 8) = 0LL;
  *(_DWORD *)(Heap + 16) = 0;
  *(_WORD *)(Heap + 2) |= v85;
  v92 = (char *)(Heap + 20);
  *(_BYTE *)Heap = 1;
  if ( v86 )
  {
    v101 = (unsigned __int16 *)v142;
    if ( v142 )
    {
      memmove(v92, v142, *((unsigned __int16 *)v142 + 1));
      if ( !v119 )
        RtlpApplyAclToObject(v92, v144);
      v91 = v124;
      *(_DWORD *)(v124 + 12) = (_DWORD)v92 - v124;
      v102 = v101[1];
      if ( v87 > (unsigned int)v102 )
      {
        memset(&v92[v102], 0, v87 - (unsigned int)v102);
        v91 = v124;
      }
      v92 += v87;
    }
    else
    {
      *(_DWORD *)(Heap + 12) = 0;
    }
  }
  if ( v88 )
  {
    v93 = (unsigned __int16 *)Src;
    if ( Src )
    {
      memmove(v92, Src, *((unsigned __int16 *)Src + 1));
      if ( !v120 )
        RtlpApplyAclToObject(v92, v144);
      v15 = v124;
      *(_DWORD *)(v124 + 16) = (_DWORD)v92 - v124;
      v94 = v93[1];
      if ( v89 > (unsigned int)v94 )
        memset(&v92[v94], 0, v89 - (unsigned int)v94);
      v92 += v89;
      goto LABEL_140;
    }
    *(_DWORD *)(v91 + 16) = 0;
  }
  v15 = v124;
LABEL_140:
  v95 = (unsigned int)Size;
  memmove(v92, v140, (unsigned int)Size);
  v96 = (_DWORD)v92 - v15;
  v97 = &v92[v95];
  *(_DWORD *)(v15 + 4) = v96;
  if ( v143 )
  {
    memmove(v97, v143, v84);
    *(_DWORD *)(v15 + 8) = (_DWORD)v97 - v15;
  }
  v38 = (unsigned __int16 *)v142;
  v35 = 0;
  Acl = 0;
LABEL_143:
  ProcessHeap = v125;
LABEL_144:
  if ( v157 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v157);
    v38 = v139;
    v35 = Acl;
  }
  if ( v128 && v158 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v158);
    v38 = v139;
    v35 = Acl;
  }
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v168);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v175);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v170);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v171);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v172);
  if ( v173 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v173);
  if ( v174 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v174);
  if ( (v129 || v119) && v38 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v38);
  if ( v130 && v147 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v147);
  if ( v161 && v131 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v161);
  if ( v120 )
  {
    if ( Src )
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Src);
  }
  *v179 = v15;
  return (unsigned int)v35;
}
