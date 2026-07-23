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

int __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9)
{
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi
  _QWORD *v13; // rsi
  void *ProcessHeap; // r13
  int result; // eax
  ULONG v16; // eax
  __int16 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  _BYTE *v20; // r15
  _BYTE *v21; // r11
  unsigned int v22; // ebx
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
  ACL *v36; // r15
  __int16 v37; // dx
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // eax
  __int16 v43; // cx
  ACL *v44; // rcx
  char *AceByType; // rbx
  __int64 v46; // r8
  char *v47; // rdx
  __int64 v48; // rdi
  ACL *v49; // rcx
  int v50; // r9d
  unsigned int v51; // edx
  ACCESS_MASK v52; // edi
  ACL *v53; // rcx
  _DWORD *v54; // rax
  _DWORD *v55; // rsi
  PSID v56; // rcx
  char v57; // al
  unsigned __int8 *v58; // rdi
  unsigned int v59; // r8d
  __int64 v60; // rcx
  int v61; // eax
  __int16 v62; // si
  int v63; // r9d
  int v64; // r12d
  PVOID v65; // rdi
  ACL *v66; // rbx
  __int16 v67; // ax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // r8
  int v72; // edx
  int v73; // r13d
  HANDLE v74; // r14
  char *v75; // rdx
  bool v76; // al
  unsigned __int8 *v77; // rsi
  ULONG v78; // ecx
  unsigned int v79; // r13d
  __int16 v80; // bx
  int v81; // r15d
  unsigned int v82; // esi
  int v83; // r12d
  unsigned int v84; // r14d
  _QWORD *Heap; // rax
  _QWORD *v86; // rdx
  char *v87; // rbx
  bool v88; // zf
  unsigned __int16 *v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rdi
  int v92; // eax
  char *v93; // rbx
  char *v94; // rax
  char *v95; // rax
  int v96; // eax
  __int64 AclSize; // rcx
  unsigned __int8 *v98; // r8
  int v99; // ecx
  __int16 v100; // r13
  _BYTE *v101; // rax
  HANDLE v102; // rdx
  _BYTE *v103; // rax
  ACL *v104; // rcx
  _BYTE *v105; // rax
  void *v106; // rdi
  int ServerAcl; // eax
  PULONG ReturnLength; // [rsp+20h] [rbp-F0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-F0h]
  PULONG ReturnLengthb; // [rsp+20h] [rbp-F0h]
  PULONG ReturnLengthc; // [rsp+20h] [rbp-F0h]
  int AccessMask; // [rsp+28h] [rbp-E8h]
  int valid; // [rsp+90h] [rbp-80h] BYREF
  char v114; // [rsp+94h] [rbp-7Ch] BYREF
  __int16 v115; // [rsp+95h] [rbp-7Bh]
  char v116; // [rsp+97h] [rbp-79h]
  BOOLEAN v117; // [rsp+98h] [rbp-78h] BYREF
  __int16 v118; // [rsp+99h] [rbp-77h] BYREF
  _QWORD *v119; // [rsp+A0h] [rbp-70h]
  BOOLEAN Dominates; // [rsp+A8h] [rbp-68h] BYREF
  char v121; // [rsp+A9h] [rbp-67h] BYREF
  char v122; // [rsp+AAh] [rbp-66h]
  char v123; // [rsp+ABh] [rbp-65h]
  char v124; // [rsp+ACh] [rbp-64h]
  PVOID HeapHandle; // [rsp+B0h] [rbp-60h]
  int v126; // [rsp+B8h] [rbp-58h]
  bool v127; // [rsp+BCh] [rbp-54h]
  __int16 v128; // [rsp+BEh] [rbp-52h]
  ULONG Index; // [rsp+C0h] [rbp-50h] BYREF
  _WORD v130[2]; // [rsp+C4h] [rbp-4Ch] BYREF
  int v131; // [rsp+C8h] [rbp-48h] BYREF
  PACL Acl; // [rsp+D0h] [rbp-40h] BYREF
  PVOID v133; // [rsp+D8h] [rbp-38h]
  void *v134; // [rsp+E0h] [rbp-30h]
  NTSTATUS AccessStatus; // [rsp+E8h] [rbp-28h] BYREF
  void *v136; // [rsp+F0h] [rbp-20h]
  void *Src; // [rsp+F8h] [rbp-18h] BYREF
  ULONG v138; // [rsp+100h] [rbp-10h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+108h] [rbp-8h]
  __int64 v140; // [rsp+110h] [rbp+0h]
  int v141[2]; // [rsp+118h] [rbp+8h]
  int v142; // [rsp+120h] [rbp+10h]
  PSID Sid2; // [rsp+128h] [rbp+18h]
  __int64 v144; // [rsp+130h] [rbp+20h]
  PVOID v145; // [rsp+138h] [rbp+28h] BYREF
  int v146; // [rsp+140h] [rbp+30h]
  HANDLE ClientToken; // [rsp+148h] [rbp+38h]
  __int64 v148; // [rsp+150h] [rbp+40h]
  PVOID v149; // [rsp+158h] [rbp+48h] BYREF
  PVOID v150; // [rsp+160h] [rbp+50h] BYREF
  int v151; // [rsp+168h] [rbp+58h] BYREF
  PSID Sid1; // [rsp+170h] [rbp+60h]
  ULONG PrivilegeSetLength; // [rsp+178h] [rbp+68h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+17Ch] [rbp+6Ch] BYREF
  int v155; // [rsp+180h] [rbp+70h] BYREF
  __int64 v156; // [rsp+188h] [rbp+78h]
  HANDLE NewTokenHandle; // [rsp+190h] [rbp+80h] BYREF
  PVOID BaseAddress; // [rsp+198h] [rbp+88h] BYREF
  PVOID v159; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID v160; // [rsp+1A8h] [rbp+98h] BYREF
  int v161; // [rsp+1B0h] [rbp+A0h] BYREF
  PVOID v162; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v163; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v164; // [rsp+1C8h] [rbp+B8h] BYREF
  PVOID v165; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 v166; // [rsp+1D8h] [rbp+C8h] BYREF
  ACL *v167; // [rsp+1E0h] [rbp+D0h]
  ACL *v168; // [rsp+1E8h] [rbp+D8h] BYREF
  _BYTE *v169; // [rsp+1F0h] [rbp+E0h]
  _QWORD *v170; // [rsp+200h] [rbp+F0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+208h] [rbp+F8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+238h] [rbp+128h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+260h] [rbp+150h] BYREF
  _DWORD v174[2]; // [rsp+278h] [rbp+168h] BYREF
  __int16 v175; // [rsp+280h] [rbp+170h]
  char TokenInformation[24]; // [rsp+288h] [rbp+178h] BYREF
  int v177; // [rsp+2A0h] [rbp+190h]
  int v178; // [rsp+2A4h] [rbp+194h]
  ACL v179; // [rsp+2C0h] [rbp+1B0h] BYREF

  GenericMapping = a9;
  v149 = 0LL;
  v167 = &v179;
  v11 = 0LL;
  v12 = 0LL;
  v148 = a4;
  v170 = a3;
  v13 = 0LL;
  *(_QWORD *)v141 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  ClientToken = TokenHandle;
  v133 = 0LL;
  Acl = 0LL;
  v145 = 0LL;
  v123 = 0;
  v122 = 0;
  v151 = 0;
  Src = 0LL;
  v150 = 0LL;
  v116 = 0;
  v118 = 0;
  v114 = 0;
  v130[0] = 0;
  LOBYTE(v142) = 0;
  v121 = 0;
  Sid1 = 0LL;
  v156 = 0LL;
  v140 = 0LL;
  v144 = 0LL;
  v169 = 0LL;
  v119 = 0LL;
  v155 = 0;
  Sid2 = 0LL;
  v166 = 0LL;
  v168 = 0LL;
  v115 = 0;
  Dominates = 1;
  LOBYTE(v146) = 1;
  BaseAddress = 0LL;
  v165 = 0LL;
  v162 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &v138);
    if ( result < 0 )
      return result;
    v146 = v177;
    if ( v177 == 2 && v178 < 1 )
      return -1073741659;
  }
  if ( a2 )
  {
    v124 = 1;
  }
  else
  {
    v124 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    a2 = SecurityDescriptor;
  }
  v16 = *((unsigned __int16 *)a2 + 1);
  v128 = *((_WORD *)a2 + 1) & 0x80;
  v17 = v128;
  LOBYTE(v16) = (v16 & 0x40) != 0;
  v127 = v128 != 0;
  v138 = v16;
  if ( TokenHandle || v128 )
  {
    result = RtlpGetDefaultsSubjectContext(
               TokenHandle,
               v128 != 0,
               &BaseAddress,
               &v165,
               &v162,
               &v163,
               &v159,
               &v160,
               &v164);
    if ( result < 0 )
      return result;
    v11 = *(_BYTE **)BaseAddress;
    v12 = *(_BYTE **)v165;
    v169 = *(_BYTE **)v162;
    Sid1 = *(PSID *)v159;
    v156 = *(_QWORD *)v160;
    if ( v163 )
      v140 = *(_QWORD *)v163;
    else
      v140 = 0LL;
    v17 = v128;
    if ( v164 )
      v18 = *(_QWORD *)v164;
    else
      v18 = 0LL;
    v144 = v18;
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
  v134 = v20;
  if ( v20 )
  {
    LOBYTE(v118) = 1;
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
      v134 = v20;
      LOBYTE(v118) = 1;
      if ( v20 )
        goto LABEL_18;
    }
LABEL_284:
    v33 = -1073741734;
    goto LABEL_286;
  }
  v20 = (_BYTE *)v140;
  if ( !v17 )
    v20 = v11;
  v134 = v20;
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
  v136 = v21;
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
  v136 = v21;
  if ( !v21 )
    goto LABEL_285;
LABEL_22:
  v22 = a7 >> 2;
  LOBYTE(v22) = (a7 & 4) != 0;
  v23 = a7 & 2;
  AccessStatus = v22;
  v24 = (v19 >> 2) & 8;
  v25 = (v19 >> 1) & 0x400;
  v26 = (v19 >> 1) & 0x1000;
  v27 = (v19 & 0x10) != 0 ? 4 : 0;
  if ( (v19 & 0x10) == (_WORD)v133 )
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
  v31 = (int)GenericMapping;
  LOBYTE(v31) = a6;
  LOBYTE(ReturnLength) = v23 != 0;
  v32 = RtlpInheritAcl(
          v28,
          v29,
          v27 | v24 | (unsigned int)v30,
          v31,
          (__int64)ReturnLength,
          v22,
          (int)v20,
          (__int64)v21,
          v140,
          v144,
          GenericMapping,
          2,
          v148,
          a5,
          (__int64)&Acl,
          (__int64)&v114,
          &v131);
  valid = v32;
  v33 = v32;
  if ( v32 < 0 )
  {
    if ( v32 == -2147483637 )
    {
      v34 = *((_WORD *)a2 + 1);
      v35 = v23 != 0 ? 34816 : 0x8000;
      v126 = v35;
      if ( (v34 & 0x30) != 0x30 )
      {
        v36 = Acl;
        v133 = Acl;
        goto LABEL_34;
      }
      if ( (v34 & 0x10) != 0 )
      {
        if ( v34 >= 0 )
        {
          v36 = (ACL *)*((_QWORD *)a2 + 3);
          goto LABEL_296;
        }
        if ( *((_DWORD *)a2 + 3) )
        {
          v36 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
LABEL_296:
          v133 = v36;
          goto LABEL_297;
        }
      }
      v36 = 0LL;
      v133 = 0LL;
LABEL_297:
      Acl = v36;
      v35 |= v34 & 0x2000 | 0x10;
      v114 = 1;
      goto LABEL_212;
    }
    v13 = v119;
LABEL_352:
    v36 = Acl;
    goto LABEL_139;
  }
  v36 = Acl;
  HIBYTE(v115) = 1;
  v133 = Acl;
  v35 = 2 * (v131 & 0x1400 | (2 * (v131 & 8 | 0x2004)));
LABEL_212:
  v126 = v35;
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
  LOBYTE(ReturnLengtha) = v23 != 0;
  v42 = RtlpInheritAcl(
          v40,
          v39,
          v41,
          v38,
          (__int64)ReturnLengtha,
          AccessStatus,
          (int)v134,
          (__int64)v136,
          v140,
          v144,
          GenericMapping,
          2,
          v148,
          a5,
          (__int64)&v145,
          (__int64)v130,
          &v155);
  valid = v42;
  v33 = v42;
  if ( v42 >= 0 )
  {
    v123 = 1;
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
          v103 = (_BYTE *)*((_QWORD *)a2 + 3);
        }
        else if ( *((_DWORD *)a2 + 3) )
        {
          v103 = &a2[*((unsigned int *)a2 + 3)];
        }
        else
        {
          v103 = 0LL;
        }
        v145 = v103;
      }
      else
      {
        v145 = 0LL;
      }
    }
  }
  Index = 0;
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
      v44 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_46;
      v44 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
LABEL_47:
    AceByType = (char *)RtlFindAceByType(v44, 0x14u, &Index);
    v47 = AceByType + 8;
    if ( !AceByType )
      v47 = 0LL;
    v48 = v156;
    if ( v47 && !(unsigned __int8)RtlpValidTrustSubjectContext(v156, v47, v46, &valid) )
    {
      v33 = -1073741790;
      goto LABEL_308;
    }
    ++Index;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
    goto LABEL_52;
  Index = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_314;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v104 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v104 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
        goto LABEL_316;
      }
LABEL_314:
      v104 = 0LL;
    }
LABEL_316:
    v105 = RtlFindAceByType(v104, 0x14u, &Index);
    ++Index;
    if ( v105 )
    {
      if ( (v105[1] & 8) == 0 )
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
      v49 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_53;
      v49 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
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
    v53 = (ACL *)*((_QWORD *)a2 + 3);
  }
  else if ( *((_DWORD *)a2 + 3) )
  {
    v53 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
  }
  else
  {
LABEL_61:
    v53 = 0LL;
  }
  v54 = RtlFindAceByType(v53, 0x11u, 0LL);
  v55 = v54;
  if ( v54 )
  {
    v52 = v54[1];
    v56 = v54 + 2;
    v57 = *((_BYTE *)v54 + 1);
    Sid2 = v56;
    LOBYTE(v115) = v57;
    if ( v57 == 8 || (v57 & 0x10) != 0 )
    {
      v56 = 0LL;
      v57 = 0;
      Sid2 = 0LL;
      v55 = 0LL;
      LOBYTE(v115) = 0;
      v52 = 0;
    }
  }
  else
  {
LABEL_63:
    v56 = 0LL;
    v57 = 0;
  }
  if ( (v57 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v33 = -1073740730;
    goto LABEL_308;
  }
  if ( v52 )
  {
LABEL_203:
    if ( v55 )
      goto LABEL_68;
    if ( ClientToken )
    {
      v56 = Sid1;
      Sid2 = Sid1;
      LOBYTE(v115) = 0;
      goto LABEL_68;
    }
    goto LABEL_324;
  }
  if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v52 = 1;
    goto LABEL_203;
  }
LABEL_68:
  if ( !v56 )
  {
    v58 = 0LL;
    v167 = 0LL;
    goto LABEL_70;
  }
  valid = RtlCreateAcl(&v179, 0x80u, 2u);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_264;
  valid = RtlAddMandatoryAce(&v179, 2u, (unsigned __int8)v115, Sid2, 0x11u, v52);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_264;
  v58 = (unsigned __int8 *)&v179;
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
  LOBYTE(ReturnLengthb) = 1;
  v61 = RtlpInheritAcl(
          v60,
          (int)v58,
          v59,
          v50,
          (__int64)ReturnLengthb,
          0,
          (int)v134,
          (__int64)v136,
          v140,
          v144,
          GenericMapping,
          3,
          v148,
          a5,
          (__int64)&v166,
          (__int64)v130 + 1,
          &v131);
  valid = v61;
  v33 = v61;
  if ( v61 != -2147483637 )
  {
    if ( v61 >= 0 )
    {
      v58 = (unsigned __int8 *)v166;
      v62 = v131;
      goto LABEL_81;
    }
    goto LABEL_264;
  }
  v62 = 0;
  v131 = 0;
LABEL_81:
  v33 = RtlpCombineAcls(
          (unsigned __int8 *)v36,
          v58,
          (unsigned __int8 *)v145,
          (unsigned __int8 *)v145,
          (unsigned __int8 *)v145,
          (unsigned __int8 *)v145,
          &v168,
          &v151);
  valid = v33;
  v64 = ((v35 & 0x2000) << 17) | v151;
  if ( !v58 || v58 == (unsigned __int8 *)v167 )
  {
    v65 = HeapHandle;
  }
  else
  {
    v98 = v58;
    v65 = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, v98);
  }
  if ( v33 < 0 )
    goto LABEL_264;
  v66 = v168;
  if ( v168 )
  {
    if ( HIBYTE(v115) && v36 )
      RtlFreeHeap(v65, 0, v36);
    v133 = v66;
    Acl = v66;
    v36 = v66;
    v122 = 1;
    v35 |= 2 * (v62 & 0x1400 | (2 * (v62 & 8 | 4)));
    v126 = v35;
  }
  if ( (a7 & 8) == 0 )
  {
    v94 = (char *)RtlFindAceByType(v36, 0x11u, 0LL);
    v95 = v94 ? v94 + 8 : (char *)Sid2;
    if ( v95 )
    {
      if ( ClientToken )
      {
        valid = RtlSidDominates(Sid1, v95, &Dominates);
        v33 = valid;
        if ( valid >= 0 )
        {
          v96 = (unsigned __int8)v142;
          if ( !Dominates )
            v96 = 1;
          v142 = v96;
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
  if ( !*(_QWORD *)v141 || (*(_BYTE *)(*(_QWORD *)v141 + 2LL) & 4) == 0 )
    goto LABEL_240;
  if ( *(__int16 *)(*(_QWORD *)v141 + 2LL) >= 0 )
  {
    v69 = *(_QWORD *)(*(_QWORD *)v141 + 32LL);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)v141 + 16LL) )
    {
      LODWORD(v69) = v141[0] + *(_DWORD *)(*(_QWORD *)v141 + 16LL);
      goto LABEL_95;
    }
LABEL_240:
    LODWORD(v69) = 0;
  }
LABEL_95:
  LOBYTE(v63) = a6;
  LOBYTE(ReturnLengthc) = a7 & 1;
  v70 = RtlpInheritAcl(
          v69,
          v68,
          v67 & 0x140C,
          v63,
          (__int64)ReturnLengthc,
          AccessStatus,
          (int)v134,
          (__int64)v136,
          v140,
          v144,
          GenericMapping,
          1,
          v148,
          a5,
          (__int64)&Src,
          (__int64)&v118 + 1,
          &v131);
  valid = v70;
  v33 = v70;
  if ( v70 >= 0 )
  {
    v72 = 1;
    v116 = 1;
    v73 = v131 & 0x1408 | 4 | v35;
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
        HIBYTE(v118) = 1;
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
  v101 = v169;
  v73 = v99;
  v126 = v99;
  v72 = 1;
  if ( v169 )
  {
LABEL_246:
    v73 |= 4u;
    Src = v101;
LABEL_97:
    v126 = v73;
  }
  v74 = ClientToken;
  if ( (a7 & 0x1000) == 0 && v124 && ClientToken && *(_QWORD *)v141 )
  {
    LOBYTE(AccessMask) = a6;
    GrantedAccess = 0;
    AccessStatus = 0;
    valid = RtlpNewSecurityObject(
              v141[0],
              0,
              (int)&v149,
              v148,
              a5,
              AccessMask,
              a7 | 1,
              ClientToken,
              (__int64)GenericMapping);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_264;
    if ( (*((_BYTE *)v149 + 2) & 4) == 0 )
      goto LABEL_331;
    if ( *((__int16 *)v149 + 1) >= 0 )
    {
      v75 = (char *)*((_QWORD *)v149 + 4);
      goto LABEL_107;
    }
    if ( *((_DWORD *)v149 + 4) )
      v75 = (char *)v149 + *((unsigned int *)v149 + 4);
    else
LABEL_331:
      v75 = 0LL;
LABEL_107:
    if ( RtlpOwnerAcesPresent(0x10u, (__int64)v75) )
    {
      NewTokenHandle = 0LL;
      PrivilegeSetLength = 20;
      if ( (_BYTE)v146 != 1 )
        goto LABEL_259;
      v175 = 1;
      v174[1] = 2;
      ObjectAttributes.SecurityQualityOfService = v174;
      v174[0] = 12;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ObjectAttributes.SecurityDescriptor = 0LL;
      valid = NtDuplicateToken(v74, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
      v33 = valid;
      if ( valid < 0 )
        goto LABEL_264;
      v102 = NewTokenHandle;
      if ( !NewTokenHandle )
LABEL_259:
        v102 = v74;
      valid = ZwAccessCheck(
                v149,
                v102,
                0x40000u,
                GenericMapping,
                &RequiredPrivileges,
                &PrivilegeSetLength,
                &GrantedAccess,
                &AccessStatus);
      v33 = valid;
      if ( NewTokenHandle )
        NtClose(NewTokenHandle);
      if ( v33 < 0 || (v33 = AccessStatus, valid = AccessStatus, AccessStatus < 0) )
      {
LABEL_264:
        v13 = v119;
        goto LABEL_138;
      }
    }
  }
  if ( (a7 & 1) != 0 && !Src )
    v126 = v73 | 0x1000;
  v76 = !v64 || (v64 & 0x1B0) != v64;
  if ( v114 && (a7 & 8) == 0 && v76 )
  {
    if ( !v74 )
      goto LABEL_324;
    *(_QWORD *)v141 = 8LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    valid = ZwPrivilegeCheck(v74, &RequiredPrivileges, &v117);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_264;
    if ( !v117 )
      goto LABEL_336;
  }
  if ( (_BYTE)v142 && (a7 & 8) == 0 )
  {
    if ( !v74 )
      goto LABEL_324;
    *(_QWORD *)v141 = 32LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    valid = ZwPrivilegeCheck(v74, &RequiredPrivileges, &v117);
    v33 = valid;
    if ( valid < 0 )
      goto LABEL_264;
    if ( !v117 )
    {
LABEL_336:
      v33 = -1073741727;
      goto LABEL_308;
    }
  }
  if ( (_BYTE)v118 && (a7 & 0x10) == 0 )
  {
    if ( !v74 )
      goto LABEL_324;
    v77 = (unsigned __int8 *)v134;
    LOBYTE(v71) = v127;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v74, v134, v71, &v161) )
    {
      v33 = v161;
      goto LABEL_308;
    }
  }
  else
  {
    v77 = (unsigned __int8 *)v134;
  }
  if ( v128 && HIBYTE(v118) )
  {
    v106 = Src;
    LOBYTE(v72) = v138;
    ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v72, v140, (unsigned int)&v150, (__int64)&v121);
    valid = ServerAcl;
    v33 = ServerAcl;
    if ( ServerAcl < 0 )
      goto LABEL_264;
    if ( v116 && v106 )
      RtlFreeHeap(HeapHandle, 0, v106);
    Src = v150;
    v150 = 0LL;
  }
  v78 = 4 * v77[1] + 8;
  v138 = v78;
  if ( v136 )
    v79 = 4 * *((unsigned __int8 *)v136 + 1) + 8;
  else
    v79 = 0;
  v80 = v126;
  v81 = v126 & 0x10;
  if ( (v126 & 0x10) != 0 && v133 )
    v82 = (*((unsigned __int16 *)v133 + 1) + 3) & 0xFFFFFFFC;
  else
    v82 = 0;
  v83 = v126 & 4;
  if ( (v126 & 4) != 0 && Src )
    v84 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
  else
    v84 = 0;
  Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v79 + v78 + 20 + v84 + v82);
  v119 = Heap;
  v86 = Heap;
  if ( !Heap )
  {
    v36 = (ACL *)v133;
    v33 = -1073741801;
    goto LABEL_308;
  }
  *Heap = 0LL;
  Heap[1] = 0LL;
  *((_DWORD *)Heap + 4) = 0;
  *((_WORD *)Heap + 1) |= v80;
  v87 = (char *)Heap + 20;
  v88 = v81 == 0;
  *(_BYTE *)Heap = 1;
  v36 = (ACL *)v133;
  if ( !v88 && v133 )
  {
    memmove(v87, v133, *((unsigned __int16 *)v133 + 1));
    if ( !HIBYTE(v115) )
      RtlpApplyAclToObject((__int64)v87, GenericMapping);
    v86 = v119;
    *((_DWORD *)v119 + 3) = (_DWORD)v87 - (_DWORD)v119;
    AclSize = v36->AclSize;
    if ( v82 > (unsigned int)AclSize )
    {
      memset(&v87[AclSize], 0, v82 - (unsigned int)AclSize);
      v86 = v119;
    }
    v87 += v82;
  }
  if ( v83 )
  {
    v89 = (unsigned __int16 *)Src;
    if ( Src )
    {
      memmove(v87, Src, *((unsigned __int16 *)Src + 1));
      if ( !v116 )
        RtlpApplyAclToObject((__int64)v87, GenericMapping);
      v13 = v119;
      *((_DWORD *)v119 + 4) = (_DWORD)v87 - (_DWORD)v119;
      v90 = v89[1];
      if ( v84 > (unsigned int)v90 )
        memset(&v87[v90], 0, v84 - (unsigned int)v90);
      v87 += v84;
      goto LABEL_135;
    }
    *((_DWORD *)v86 + 4) = 0;
  }
  v13 = v119;
LABEL_135:
  v91 = v138;
  memmove(v87, v134, v138);
  v92 = (_DWORD)v87 - (_DWORD)v13;
  v93 = &v87[v91];
  *((_DWORD *)v13 + 1) = v92;
  if ( v136 )
  {
    memmove(v93, v136, v79);
    *((_DWORD *)v13 + 2) = (_DWORD)v93 - (_DWORD)v13;
  }
  v33 = 0;
  valid = 0;
LABEL_138:
  ProcessHeap = HeapHandle;
LABEL_139:
  if ( v149 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v149);
    v36 = Acl;
    v33 = valid;
  }
  if ( v121 && v150 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v150);
    v36 = Acl;
    v33 = valid;
  }
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  RtlFreeHeap(ProcessHeap, 0, v159);
  RtlFreeHeap(ProcessHeap, 0, v160);
  RtlFreeHeap(ProcessHeap, 0, v165);
  RtlFreeHeap(ProcessHeap, 0, v162);
  if ( v163 )
    RtlFreeHeap(ProcessHeap, 0, v163);
  if ( v164 )
    RtlFreeHeap(ProcessHeap, 0, v164);
  if ( (v122 || HIBYTE(v115)) && v36 )
    RtlFreeHeap(ProcessHeap, 0, v36);
  if ( v123 && v145 )
    RtlFreeHeap(ProcessHeap, 0, v145);
  if ( v116 )
  {
    if ( Src )
      RtlFreeHeap(ProcessHeap, 0, Src);
  }
  *v170 = v13;
  return v33;
}
