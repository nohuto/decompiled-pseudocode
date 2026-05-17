/*
 * XREFs of RtlpNewSecurityObject @ 0x1800100C4
 * Callers:
 *     RtlNewSecurityObjectEx @ 0x18000EBF0 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x1800889B0 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObject @ 0x18008A160 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x1800D6DA0 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D6E30 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlAddMandatoryAce @ 0x18000E5A0 (RtlAddMandatoryAce.c)
 *     RtlpApplyAclToObject @ 0x18000E718 (RtlpApplyAclToObject.c)
 *     RtlpOwnerAcesPresent @ 0x18000E7C0 (RtlpOwnerAcesPresent.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18000F170 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpCombineAcls @ 0x18000F5AC (RtlpCombineAcls.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18000FB00 (RtlpValidFilterAclSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x180011488 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x1800126F0 (RtlFindAceByType.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpValidOwnerSubjectContext @ 0x180066FB8 (RtlpValidOwnerSubjectContext.c)
 *     RtlSidDominates @ 0x180067180 (RtlSidDominates.c)
 *     RtlpValidTrustSubjectContext @ 0x18008C074 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009CE90 (ZwAccessCheck.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009D2B0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x18009D6D0 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x18009F4C0 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E6188 (RtlpCreateServerAcl.c)
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
        __int64 a9)
{
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi
  __int64 v13; // rsi
  void *ProcessHeap; // r13
  __int64 result; // rax
  int v16; // eax
  __int16 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  _BYTE *v20; // r15
  _BYTE *v21; // r11
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // r10d
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  int v33; // ebx
  __int16 v34; // cx
  int v35; // r13d
  unsigned __int16 *v36; // r15
  __int16 v37; // dx
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // eax
  __int16 v43; // cx
  _BYTE *v44; // rcx
  __int64 AceByType; // rbx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rcx
  int v50; // r9d
  int v51; // edx
  int v52; // edi
  _BYTE *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rcx
  unsigned __int8 v57; // al
  unsigned __int8 *v58; // rdi
  unsigned int v59; // r8d
  __int64 v60; // rcx
  int v61; // eax
  __int16 v62; // si
  int v63; // r9d
  int v64; // r12d
  void *v65; // rdi
  void *v66; // rbx
  __int16 v67; // ax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // r8
  int v72; // edx
  int v73; // r13d
  __int64 v74; // r14
  __int64 v75; // rdx
  bool v76; // al
  unsigned __int8 *v77; // rsi
  int v78; // ecx
  unsigned int v79; // r13d
  __int16 v80; // bx
  int v81; // r15d
  unsigned int v82; // esi
  int v83; // r12d
  unsigned int v84; // r14d
  __int64 Heap; // rax
  __int64 v86; // rdx
  char *v87; // rbx
  bool v88; // zf
  unsigned __int16 *v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rdi
  int v92; // eax
  char *v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // eax
  __int64 v97; // rcx
  unsigned __int8 *v98; // r8
  int v99; // ecx
  __int16 v100; // r13
  _BYTE *v101; // rax
  __int64 v102; // rdx
  unsigned __int8 *v103; // rax
  _BYTE *v104; // rcx
  __int64 v105; // rax
  void *v106; // rdi
  int ServerAcl; // eax
  int valid; // [rsp+90h] [rbp-80h] BYREF
  char v109; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v110; // [rsp+95h] [rbp-7Bh]
  char v111; // [rsp+96h] [rbp-7Ah]
  char v112; // [rsp+97h] [rbp-79h]
  char v113; // [rsp+98h] [rbp-78h] BYREF
  char v114; // [rsp+99h] [rbp-77h]
  char v115[6]; // [rsp+9Ah] [rbp-76h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-70h]
  char v117; // [rsp+A8h] [rbp-68h] BYREF
  char v118; // [rsp+A9h] [rbp-67h] BYREF
  char v119; // [rsp+AAh] [rbp-66h]
  char v120; // [rsp+ABh] [rbp-65h]
  char v121; // [rsp+ACh] [rbp-64h]
  void *v122; // [rsp+B0h] [rbp-60h]
  int v123; // [rsp+B8h] [rbp-58h]
  bool v124; // [rsp+BCh] [rbp-54h]
  __int16 v125; // [rsp+BEh] [rbp-52h]
  int v126; // [rsp+C0h] [rbp-50h] BYREF
  char v127; // [rsp+C4h] [rbp-4Ch] BYREF
  char v128[3]; // [rsp+C5h] [rbp-4Bh] BYREF
  int v129; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int16 *v130; // [rsp+D0h] [rbp-40h] BYREF
  void *v131; // [rsp+D8h] [rbp-38h]
  void *v132; // [rsp+E0h] [rbp-30h]
  int v133; // [rsp+E8h] [rbp-28h] BYREF
  void *v134; // [rsp+F0h] [rbp-20h]
  void *Src; // [rsp+F8h] [rbp-18h] BYREF
  size_t Size; // [rsp+100h] [rbp-10h] BYREF
  __int64 v137; // [rsp+108h] [rbp-8h]
  _BYTE *v138; // [rsp+110h] [rbp+0h]
  __int64 v139; // [rsp+118h] [rbp+8h]
  int v140; // [rsp+120h] [rbp+10h]
  __int64 v141; // [rsp+128h] [rbp+18h]
  __int64 v142; // [rsp+130h] [rbp+20h]
  unsigned __int8 *v143; // [rsp+138h] [rbp+28h] BYREF
  int v144; // [rsp+140h] [rbp+30h]
  __int64 v145; // [rsp+148h] [rbp+38h]
  __int64 v146; // [rsp+150h] [rbp+40h]
  __int64 v147; // [rsp+158h] [rbp+48h] BYREF
  void *v148; // [rsp+160h] [rbp+50h] BYREF
  int v149; // [rsp+168h] [rbp+58h] BYREF
  __int64 v150; // [rsp+170h] [rbp+60h]
  int v151; // [rsp+178h] [rbp+68h] BYREF
  int v152; // [rsp+17Ch] [rbp+6Ch] BYREF
  int v153; // [rsp+180h] [rbp+70h] BYREF
  __int64 v154; // [rsp+188h] [rbp+78h]
  HANDLE Handle; // [rsp+190h] [rbp+80h]
  void **v156; // [rsp+198h] [rbp+88h] BYREF
  __int64 *v157; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 *v158; // [rsp+1A8h] [rbp+98h] BYREF
  int v159; // [rsp+1B0h] [rbp+A0h] BYREF
  void **v160; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 *v161; // [rsp+1C0h] [rbp+B0h] BYREF
  __int64 *v162; // [rsp+1C8h] [rbp+B8h] BYREF
  void **v163; // [rsp+1D0h] [rbp+C0h] BYREF
  unsigned __int8 *v164; // [rsp+1D8h] [rbp+C8h] BYREF
  unsigned __int8 *v165; // [rsp+1E0h] [rbp+D0h]
  void *v166; // [rsp+1E8h] [rbp+D8h] BYREF
  _BYTE *v167; // [rsp+1F0h] [rbp+E0h]
  __int64 *v168; // [rsp+200h] [rbp+F0h]
  int v169; // [rsp+208h] [rbp+F8h] BYREF
  __int64 v170; // [rsp+210h] [rbp+100h]
  __int64 v171; // [rsp+218h] [rbp+108h]
  int v172; // [rsp+220h] [rbp+110h]
  __int64 v173; // [rsp+228h] [rbp+118h]
  _DWORD *v174; // [rsp+230h] [rbp+120h]
  _BYTE v175[40]; // [rsp+238h] [rbp+128h] BYREF
  int v176; // [rsp+260h] [rbp+150h] BYREF
  int v177; // [rsp+264h] [rbp+154h]
  __int64 v178; // [rsp+268h] [rbp+158h]
  int v179; // [rsp+270h] [rbp+160h]
  _DWORD v180[2]; // [rsp+278h] [rbp+168h] BYREF
  __int16 v181; // [rsp+280h] [rbp+170h]
  char v182[24]; // [rsp+288h] [rbp+178h] BYREF
  int v183; // [rsp+2A0h] [rbp+190h]
  int v184; // [rsp+2A4h] [rbp+194h]
  _BYTE v185[128]; // [rsp+2C0h] [rbp+1B0h] BYREF

  v137 = a9;
  v147 = 0LL;
  v165 = v185;
  v11 = 0LL;
  v12 = 0LL;
  v146 = a4;
  v168 = a3;
  v13 = 0LL;
  v139 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v122 = ProcessHeap;
  v145 = a8;
  v131 = 0LL;
  v130 = 0LL;
  v143 = 0LL;
  v111 = 0;
  v120 = 0;
  v119 = 0;
  v149 = 0;
  Src = 0LL;
  v148 = 0LL;
  v112 = 0;
  v114 = 0;
  v109 = 0;
  v127 = 0;
  v128[0] = 0;
  v115[0] = 0;
  LOBYTE(v140) = 0;
  v118 = 0;
  v150 = 0LL;
  v154 = 0LL;
  v138 = 0LL;
  v142 = 0LL;
  v167 = 0LL;
  v116 = 0LL;
  v153 = 0;
  v141 = 0LL;
  v164 = 0LL;
  v166 = 0LL;
  v110 = 0;
  v117 = 1;
  LOBYTE(v144) = 1;
  v156 = 0LL;
  v163 = 0LL;
  v160 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  if ( a8 )
  {
    result = NtQueryInformationToken(a8, 10LL, v182, 56LL, &Size);
    if ( (int)result < 0 )
      return result;
    v144 = v183;
    if ( v183 == 2 && v184 < 1 )
      return 3221225637LL;
  }
  if ( a2 )
  {
    v121 = 1;
  }
  else
  {
    v121 = 0;
    RtlCreateSecurityDescriptor(v175, 1);
    a2 = v175;
  }
  v16 = *((unsigned __int16 *)a2 + 1);
  v125 = *((_WORD *)a2 + 1) & 0x80;
  v17 = v125;
  LOBYTE(v16) = (v16 & 0x40) != 0;
  v124 = v125 != 0;
  LODWORD(Size) = v16;
  if ( a8 || v125 )
  {
    result = RtlpGetDefaultsSubjectContext(
               a8,
               v125 != 0,
               (__int64 *)&v156,
               (__int64 *)&v163,
               (__int64 *)&v160,
               (__int64 *)&v161,
               (__int64 *)&v157,
               &v158,
               (__int64 *)&v162);
    if ( (int)result < 0 )
      return result;
    v11 = *v156;
    v12 = *v163;
    v167 = *v160;
    v150 = *v157;
    v154 = *v158;
    if ( v161 )
      v138 = (_BYTE *)*v161;
    else
      v138 = 0LL;
    v17 = v125;
    if ( v162 )
      v18 = *v162;
    else
      v18 = 0LL;
    v142 = v18;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = *((unsigned __int16 *)a2 + 1);
  if ( (v19 & 0x8000u) == 0 )
  {
    v20 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_159;
    v20 = &a2[*((unsigned int *)a2 + 1)];
  }
  v132 = v20;
  if ( v20 )
  {
    v114 = 1;
    goto LABEL_18;
  }
LABEL_159:
  if ( (a7 & 0x20) != 0 )
  {
    if ( a1 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v20 = *(_BYTE **)(a1 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 4) )
          goto LABEL_284;
        v20 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 4));
      }
      v132 = v20;
      v114 = 1;
      if ( v20 )
        goto LABEL_18;
    }
LABEL_284:
    v33 = -1073741734;
    goto LABEL_286;
  }
  v20 = v138;
  if ( !v17 )
    v20 = v11;
  v132 = v20;
  if ( !v20 )
  {
    v33 = -1073741700;
LABEL_286:
    valid = v33;
    goto LABEL_352;
  }
LABEL_18:
  if ( (v19 & 0x8000u) == 0 )
  {
    v21 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_154;
    v21 = &a2[*((unsigned int *)a2 + 2)];
  }
  v134 = v21;
  if ( v21 )
    goto LABEL_22;
LABEL_154:
  if ( (a7 & 0x40) != 0 )
  {
    if ( a1 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v21 = *(_BYTE **)(a1 + 16);
        goto LABEL_157;
      }
      if ( *(_DWORD *)(a1 + 8) )
      {
        v21 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 8));
        goto LABEL_157;
      }
    }
LABEL_285:
    v33 = -1073741733;
    goto LABEL_286;
  }
  v21 = v12;
  if ( v17 )
    v21 = (_BYTE *)v18;
LABEL_157:
  v134 = v21;
  if ( !v21 )
    goto LABEL_285;
LABEL_22:
  v22 = a7 >> 2;
  LOBYTE(v22) = (a7 & 4) != 0;
  v23 = a7 & 2;
  v133 = v22;
  v24 = (v19 >> 2) & 8;
  v25 = (v19 >> 1) & 0x400;
  v26 = (v19 >> 1) & 0x1000;
  v27 = (v19 & 0x10) != 0 ? 4 : 0;
  if ( (v19 & 0x10) == (_WORD)v131 )
  {
    LODWORD(v28) = 0;
  }
  else
  {
    LODWORD(v28) = 0;
    if ( (v19 & 0x8000u) == 0 )
    {
      v29 = *((_QWORD *)a2 + 3);
      goto LABEL_25;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      LODWORD(v29) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
      goto LABEL_25;
    }
  }
  LODWORD(v29) = 0;
LABEL_25:
  if ( a1 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v28 = *(_QWORD *)(a1 + 24);
    }
    else if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v28) = a1 + *(_DWORD *)(a1 + 12);
    }
  }
  v30 = v25 | v26;
  v31 = v137;
  LOBYTE(v31) = a6;
  v32 = RtlpInheritAcl(
          v28,
          v29,
          v27 | v24 | (unsigned int)v30,
          v31,
          v23 != 0,
          v22,
          (__int64)v20,
          (__int64)v21,
          (__int64)v138,
          v142,
          v137,
          2,
          v146,
          a5,
          (__int64)&v130,
          (__int64)&v109,
          (__int64)&v129);
  valid = v32;
  v33 = v32;
  if ( v32 < 0 )
  {
    if ( v32 == -2147483637 )
    {
      v34 = *((_WORD *)a2 + 1);
      v35 = v23 != 0 ? 34816 : 0x8000;
      v123 = v35;
      if ( (v34 & 0x30) != 0x30 )
      {
        v36 = v130;
        v131 = v130;
        goto LABEL_34;
      }
      if ( (v34 & 0x10) != 0 )
      {
        if ( v34 >= 0 )
        {
          v36 = (unsigned __int16 *)*((_QWORD *)a2 + 3);
          goto LABEL_296;
        }
        if ( *((_DWORD *)a2 + 3) )
        {
          v36 = (unsigned __int16 *)&a2[*((unsigned int *)a2 + 3)];
LABEL_296:
          v131 = v36;
          goto LABEL_297;
        }
      }
      v36 = 0LL;
      v131 = 0LL;
LABEL_297:
      v130 = v36;
      v35 |= v34 & 0x2000 | 0x10;
      v109 = 1;
      goto LABEL_212;
    }
    v13 = v116;
LABEL_352:
    v36 = v130;
    goto LABEL_139;
  }
  v36 = v130;
  v111 = 1;
  v131 = v130;
  v35 = 2 * (v129 & 0x1400 | (2 * (v129 & 8 | 0x2004)));
LABEL_212:
  v123 = v35;
LABEL_34:
  v37 = *((_WORD *)a2 + 1);
  v38 = (v37 & 0x10) != 0 ? 4 : 0;
  if ( (v37 & 0x10) == 0 )
  {
LABEL_35:
    LODWORD(v39) = 0;
    goto LABEL_36;
  }
  if ( v37 >= 0 )
  {
    v39 = *((_QWORD *)a2 + 3);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 3) )
      goto LABEL_35;
    LODWORD(v39) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
  }
LABEL_36:
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_166;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v40 = *(_QWORD *)(a1 + 24);
    goto LABEL_41;
  }
  if ( *(_DWORD *)(a1 + 12) )
    LODWORD(v40) = a1 + *(_DWORD *)(a1 + 12);
  else
LABEL_166:
    LODWORD(v40) = 0;
LABEL_41:
  v41 = v38 | (*((unsigned __int16 *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400;
  LOBYTE(v38) = a6;
  v42 = RtlpInheritAcl(
          v40,
          v39,
          v41,
          v38,
          v23 != 0,
          v133,
          (__int64)v132,
          (__int64)v134,
          (__int64)v138,
          v142,
          v137,
          2,
          v146,
          a5,
          (__int64)&v143,
          (__int64)&v127,
          (__int64)&v153);
  valid = v42;
  v33 = v42;
  if ( v42 >= 0 )
  {
    v120 = 1;
  }
  else
  {
    if ( v42 != -2147483637 )
      goto LABEL_264;
    v43 = *((_WORD *)a2 + 1);
    if ( (v43 & 0x30) == 0x30 )
    {
      if ( (v43 & 0x10) != 0 )
      {
        if ( v43 >= 0 )
        {
          v103 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
        }
        else if ( *((_DWORD *)a2 + 3) )
        {
          v103 = &a2[*((unsigned int *)a2 + 3)];
        }
        else
        {
          v103 = 0LL;
        }
        v143 = v103;
      }
      else
      {
        v143 = 0LL;
      }
    }
  }
  v126 = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
    {
LABEL_46:
      v44 = 0LL;
      goto LABEL_47;
    }
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v44 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_46;
      v44 = &a2[*((unsigned int *)a2 + 3)];
    }
LABEL_47:
    AceByType = RtlFindAceByType(v44, 20LL, &v126);
    v47 = AceByType + 8;
    if ( !AceByType )
      v47 = 0LL;
    v48 = v154;
    if ( v47 && !(unsigned __int8)RtlpValidTrustSubjectContext(v154, v47, v46, &valid) )
    {
      v33 = -1073741790;
      goto LABEL_308;
    }
    ++v126;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
    goto LABEL_52;
  v126 = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_314;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v104 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v104 = &a2[*((unsigned int *)a2 + 3)];
        goto LABEL_316;
      }
LABEL_314:
      v104 = 0LL;
    }
LABEL_316:
    v105 = RtlFindAceByType(v104, 20LL, &v126);
    ++v126;
    if ( v105 )
    {
      if ( (*(_BYTE *)(v105 + 1) & 8) == 0 )
        goto LABEL_318;
      continue;
    }
    break;
  }
  if ( v48 )
  {
LABEL_318:
    v33 = -1073741811;
    goto LABEL_308;
  }
LABEL_52:
  if ( (a2[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v49 = *((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_53;
      v49 = (__int64)&a2[*((unsigned int *)a2 + 3)];
    }
  }
  else
  {
LABEL_53:
    v49 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v49, v48);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_264;
  v51 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v51 = (a7 >> 8) & 1;
  v52 = v51 | 4;
  if ( (a7 & 0x400) == 0 )
    v52 = v51;
  if ( v52 )
  {
    v55 = 0LL;
    goto LABEL_63;
  }
  if ( (a2[2] & 0x10) == 0 )
    goto LABEL_61;
  if ( *((__int16 *)a2 + 1) >= 0 )
  {
    v53 = (_BYTE *)*((_QWORD *)a2 + 3);
  }
  else if ( *((_DWORD *)a2 + 3) )
  {
    v53 = &a2[*((unsigned int *)a2 + 3)];
  }
  else
  {
LABEL_61:
    v53 = 0LL;
  }
  v54 = RtlFindAceByType(v53, 17LL, 0LL);
  v55 = v54;
  if ( v54 )
  {
    v52 = *(_DWORD *)(v54 + 4);
    v56 = v54 + 8;
    v57 = *(_BYTE *)(v54 + 1);
    v141 = v56;
    v110 = v57;
    if ( v57 == 8 || (v57 & 0x10) != 0 )
    {
      v56 = 0LL;
      v57 = 0;
      v141 = 0LL;
      v55 = 0LL;
      v110 = 0;
      v52 = 0;
    }
  }
  else
  {
LABEL_63:
    v56 = 0LL;
    v57 = 0;
  }
  if ( (v57 & 8) != 0 && *(_DWORD *)(v150 + 8) < 0x2000u )
  {
    v33 = -1073740730;
    goto LABEL_308;
  }
  if ( v52 )
  {
LABEL_203:
    if ( v55 )
      goto LABEL_68;
    if ( v145 )
    {
      v56 = v150;
      v141 = v150;
      v110 = 0;
      goto LABEL_68;
    }
    goto LABEL_324;
  }
  if ( v150 && *(_DWORD *)(v150 + 8) < 0x2000u )
  {
    v52 = 1;
    goto LABEL_203;
  }
LABEL_68:
  if ( !v56 )
  {
    v58 = 0LL;
    v165 = 0LL;
    goto LABEL_70;
  }
  valid = RtlCreateAcl(v185, 128LL, 2LL);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_264;
  valid = RtlAddMandatoryAce((__int64)v185, 2u, v110, v141, 17, v52);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_264;
  v58 = v185;
LABEL_70:
  if ( (a7 & 0x700) != 0 )
  {
    v59 = 4;
  }
  else if ( !v55 && v58 )
  {
    v59 = 0;
  }
  else
  {
    v59 = (*((_WORD *)a2 + 1) & 0x2800 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_167;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v60 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v60) = a1 + *(_DWORD *)(a1 + 12);
      goto LABEL_79;
    }
LABEL_167:
    LODWORD(v60) = 0;
  }
LABEL_79:
  LOBYTE(v50) = a6;
  v61 = RtlpInheritAcl(
          v60,
          (_DWORD)v58,
          v59,
          v50,
          1,
          0,
          (__int64)v132,
          (__int64)v134,
          (__int64)v138,
          v142,
          v137,
          3,
          v146,
          a5,
          (__int64)&v164,
          (__int64)v128,
          (__int64)&v129);
  valid = v61;
  v33 = v61;
  if ( v61 != -2147483637 )
  {
    if ( v61 >= 0 )
    {
      v58 = v164;
      v62 = v129;
      goto LABEL_81;
    }
    goto LABEL_264;
  }
  v62 = 0;
  v129 = 0;
LABEL_81:
  v33 = RtlpCombineAcls((unsigned __int8 *)v36, v58, v143, v143, v143, v143, (__int64 *)&v166, &v149);
  valid = v33;
  v64 = ((v35 & 0x2000) << 17) | v149;
  if ( !v58 || v58 == v165 )
  {
    v65 = v122;
  }
  else
  {
    v98 = v58;
    v65 = v122;
    RtlFreeHeap(v122, 0LL, v98);
  }
  if ( v33 < 0 )
    goto LABEL_264;
  v66 = v166;
  if ( v166 )
  {
    if ( v111 && v36 )
      RtlFreeHeap(v65, 0LL, v36);
    v131 = v66;
    v130 = (unsigned __int16 *)v66;
    v36 = (unsigned __int16 *)v66;
    v119 = 1;
    v35 |= 2 * (v62 & 0x1400 | (2 * (v62 & 8 | 4)));
    v123 = v35;
  }
  if ( (a7 & 8) == 0 )
  {
    v94 = RtlFindAceByType(v36, 17LL, 0LL);
    v95 = v94 ? v94 + 8 : v141;
    if ( v95 )
    {
      if ( v145 )
      {
        valid = RtlSidDominates(v150, v95, &v117);
        v33 = valid;
        if ( valid >= 0 )
        {
          v96 = (unsigned __int8)v140;
          if ( !v117 )
            v96 = 1;
          v140 = v96;
          goto LABEL_86;
        }
        goto LABEL_264;
      }
LABEL_324:
      v33 = -1073741700;
LABEL_308:
      valid = v33;
      goto LABEL_264;
    }
  }
LABEL_86:
  v67 = *((_WORD *)a2 + 1);
  if ( (v67 & 4) == 0 )
    goto LABEL_178;
  if ( v67 >= 0 )
  {
    v68 = *((_QWORD *)a2 + 4);
    goto LABEL_90;
  }
  if ( *((_DWORD *)a2 + 4) )
    LODWORD(v68) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
  else
LABEL_178:
    LODWORD(v68) = 0;
LABEL_90:
  if ( !v139 || (*(_BYTE *)(v139 + 2) & 4) == 0 )
    goto LABEL_240;
  if ( *(__int16 *)(v139 + 2) >= 0 )
  {
    v69 = *(_QWORD *)(v139 + 32);
  }
  else
  {
    if ( *(_DWORD *)(v139 + 16) )
    {
      LODWORD(v69) = v139 + *(_DWORD *)(v139 + 16);
      goto LABEL_95;
    }
LABEL_240:
    LODWORD(v69) = 0;
  }
LABEL_95:
  LOBYTE(v63) = a6;
  v70 = RtlpInheritAcl(
          v69,
          v68,
          v67 & 0x140C,
          v63,
          a7 & 1,
          v133,
          (__int64)v132,
          (__int64)v134,
          (__int64)v138,
          v142,
          v137,
          1,
          v146,
          a5,
          (__int64)&Src,
          (__int64)v115,
          (__int64)&v129);
  valid = v70;
  v33 = v70;
  if ( v70 >= 0 )
  {
    v72 = 1;
    v112 = 1;
    v73 = v129 & 0x1408 | 4 | v35;
    goto LABEL_97;
  }
  if ( v70 != -2147483637 )
    goto LABEL_264;
  v99 = v35 | 0x400;
  if ( (a7 & 1) == 0 )
    v99 = v35;
  v100 = *((_WORD *)a2 + 1);
  if ( (v100 & 0xC) == 0xC )
  {
    if ( (v100 & 4) != 0 )
    {
      if ( v100 >= 0 )
      {
        v101 = (_BYTE *)*((_QWORD *)a2 + 4);
LABEL_278:
        v72 = 1;
        v73 = v99 | v100 & 0x1000;
        v115[0] = 1;
        goto LABEL_246;
      }
      if ( *((_DWORD *)a2 + 4) )
      {
        v101 = &a2[*((unsigned int *)a2 + 4)];
        goto LABEL_278;
      }
    }
    v101 = 0LL;
    goto LABEL_278;
  }
  v101 = v167;
  v73 = v99;
  v123 = v99;
  v72 = 1;
  if ( v167 )
  {
LABEL_246:
    v73 |= 4u;
    Src = v101;
LABEL_97:
    v123 = v73;
  }
  v74 = v145;
  if ( (a7 & 0x1000) == 0 && v121 && v145 && v139 )
  {
    v152 = 0;
    v133 = 0;
    valid = RtlpNewSecurityObject(v139, 0, (unsigned int)&v147, v146, a5, a6, a7 | 1, v145, v137);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_264;
    if ( (*(_BYTE *)(v147 + 2) & 4) == 0 )
      goto LABEL_331;
    if ( *(__int16 *)(v147 + 2) >= 0 )
    {
      v75 = *(_QWORD *)(v147 + 32);
      goto LABEL_107;
    }
    if ( *(_DWORD *)(v147 + 16) )
      v75 = v147 + *(unsigned int *)(v147 + 16);
    else
LABEL_331:
      v75 = 0LL;
LABEL_107:
    if ( RtlpOwnerAcesPresent(0x10u, v75) )
    {
      Handle = 0LL;
      v151 = 20;
      if ( (_BYTE)v144 != 1 )
        goto LABEL_259;
      v181 = 1;
      v180[1] = 2;
      v174 = v180;
      v180[0] = 12;
      v169 = 48;
      v170 = 0LL;
      v172 = 0;
      v171 = 0LL;
      v173 = 0LL;
      valid = NtDuplicateToken(v74, 8LL, &v169);
      v33 = valid;
      if ( valid < 0 )
        goto LABEL_264;
      v102 = (__int64)Handle;
      if ( !Handle )
LABEL_259:
        v102 = v74;
      valid = ZwAccessCheck(v147, v102, 0x40000LL, v137, &v176, &v151, &v152, &v133);
      v33 = valid;
      if ( Handle )
        NtClose(Handle);
      if ( v33 < 0 || (v33 = v133, valid = v133, v133 < 0) )
      {
LABEL_264:
        v13 = v116;
        goto LABEL_138;
      }
    }
  }
  if ( (a7 & 1) != 0 && !Src )
    v123 = v73 | 0x1000;
  v76 = !v64 || (v64 & 0x1B0) != v64;
  if ( v109 && (a7 & 8) == 0 && v76 )
  {
    if ( !v74 )
      goto LABEL_324;
    v139 = 8LL;
    v178 = 8LL;
    v176 = 1;
    v177 = 1;
    v179 = 0;
    valid = ZwPrivilegeCheck(v74, &v176, &v113);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_264;
    if ( !v113 )
      goto LABEL_336;
  }
  if ( (_BYTE)v140 && (a7 & 8) == 0 )
  {
    if ( !v74 )
      goto LABEL_324;
    v139 = 32LL;
    v178 = 32LL;
    v176 = 1;
    v177 = 1;
    v179 = 0;
    valid = ZwPrivilegeCheck(v74, &v176, &v113);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_264;
    if ( !v113 )
    {
LABEL_336:
      v33 = -1073741727;
      goto LABEL_308;
    }
  }
  if ( v114 && (a7 & 0x10) == 0 )
  {
    if ( !v74 )
      goto LABEL_324;
    v77 = (unsigned __int8 *)v132;
    LOBYTE(v71) = v124;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v74, v132, v71, &v159) )
    {
      v33 = v159;
      goto LABEL_308;
    }
  }
  else
  {
    v77 = (unsigned __int8 *)v132;
  }
  if ( v125 && v115[0] )
  {
    v106 = Src;
    LOBYTE(v72) = Size;
    ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v72, (_DWORD)v138, (unsigned int)&v148, (__int64)&v118);
    valid = ServerAcl;
    v33 = ServerAcl;
    if ( ServerAcl < 0 )
      goto LABEL_264;
    if ( v112 && v106 )
      RtlFreeHeap(v122, 0LL, v106);
    Src = v148;
    v148 = 0LL;
  }
  v78 = 4 * v77[1] + 8;
  LODWORD(Size) = v78;
  if ( v134 )
    v79 = 4 * *((unsigned __int8 *)v134 + 1) + 8;
  else
    v79 = 0;
  v80 = v123;
  v81 = v123 & 0x10;
  if ( (v123 & 0x10) != 0 && v131 )
    v82 = (*((unsigned __int16 *)v131 + 1) + 3) & 0xFFFFFFFC;
  else
    v82 = 0;
  v83 = v123 & 4;
  if ( (v123 & 4) != 0 && Src )
    v84 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
  else
    v84 = 0;
  Heap = RtlAllocateHeap(v122, (unsigned int)(NtdllBaseTag + 1310720), v79 + v78 + 20 + v84 + v82);
  v116 = Heap;
  v86 = Heap;
  if ( !Heap )
  {
    v36 = (unsigned __int16 *)v131;
    v33 = -1073741801;
    goto LABEL_308;
  }
  *(_QWORD *)Heap = 0LL;
  *(_QWORD *)(Heap + 8) = 0LL;
  *(_DWORD *)(Heap + 16) = 0;
  *(_WORD *)(Heap + 2) |= v80;
  v87 = (char *)(Heap + 20);
  v88 = v81 == 0;
  *(_BYTE *)Heap = 1;
  v36 = (unsigned __int16 *)v131;
  if ( !v88 && v131 )
  {
    memmove(v87, v131, *((unsigned __int16 *)v131 + 1));
    if ( !v111 )
      RtlpApplyAclToObject((__int64)v87, v137);
    v86 = v116;
    *(_DWORD *)(v116 + 12) = (_DWORD)v87 - v116;
    v97 = v36[1];
    if ( v82 > (unsigned int)v97 )
    {
      memset(&v87[v97], 0, v82 - (unsigned int)v97);
      v86 = v116;
    }
    v87 += v82;
  }
  if ( v83 )
  {
    v89 = (unsigned __int16 *)Src;
    if ( Src )
    {
      memmove(v87, Src, *((unsigned __int16 *)Src + 1));
      if ( !v112 )
        RtlpApplyAclToObject((__int64)v87, v137);
      v13 = v116;
      *(_DWORD *)(v116 + 16) = (_DWORD)v87 - v116;
      v90 = v89[1];
      if ( v84 > (unsigned int)v90 )
        memset(&v87[v90], 0, v84 - (unsigned int)v90);
      v87 += v84;
      goto LABEL_135;
    }
    *(_DWORD *)(v86 + 16) = 0;
  }
  v13 = v116;
LABEL_135:
  v91 = (unsigned int)Size;
  memmove(v87, v132, (unsigned int)Size);
  v92 = (_DWORD)v87 - v13;
  v93 = &v87[v91];
  *(_DWORD *)(v13 + 4) = v92;
  if ( v134 )
  {
    memmove(v93, v134, v79);
    *(_DWORD *)(v13 + 8) = (_DWORD)v93 - v13;
  }
  v33 = 0;
  valid = 0;
LABEL_138:
  ProcessHeap = v122;
LABEL_139:
  if ( v147 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v147);
    v36 = v130;
    v33 = valid;
  }
  if ( v118 && v148 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v148);
    v36 = v130;
    v33 = valid;
  }
  RtlFreeHeap(ProcessHeap, 0LL, v156);
  RtlFreeHeap(ProcessHeap, 0LL, v157);
  RtlFreeHeap(ProcessHeap, 0LL, v158);
  RtlFreeHeap(ProcessHeap, 0LL, v163);
  RtlFreeHeap(ProcessHeap, 0LL, v160);
  if ( v161 )
    RtlFreeHeap(ProcessHeap, 0LL, v161);
  if ( v162 )
    RtlFreeHeap(ProcessHeap, 0LL, v162);
  if ( (v119 || v111) && v36 )
    RtlFreeHeap(ProcessHeap, 0LL, v36);
  if ( v120 && v143 )
    RtlFreeHeap(ProcessHeap, 0LL, v143);
  if ( v112 )
  {
    if ( Src )
      RtlFreeHeap(ProcessHeap, 0LL, Src);
  }
  *v168 = v13;
  return (unsigned int)v33;
}
