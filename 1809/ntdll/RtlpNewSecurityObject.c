/*
 * XREFs of RtlpNewSecurityObject @ 0x1800428C0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x1800460D0 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObject @ 0x18008AB60 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18008B380 (RtlNewSecurityObjectWithMultipleInheritance.c)
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
 *     RtlpApplyAclToObject @ 0x18007CE60 (RtlpApplyAclToObject.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800883A0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpValidTrustSubjectContext @ 0x1800890A8 (RtlpValidTrustSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x18008B76C (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A0300 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A0720 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1800A0B40 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A2910 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E8D94 (RtlpCreateServerAcl.c)
 */

NTSTATUS __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  __int64 v11; // r14
  _BYTE *v12; // rbx
  _BYTE *v13; // rdi
  _QWORD *v14; // rsi
  void *ProcessHeap; // r13
  NTSTATUS result; // eax
  ULONG v17; // eax
  __int16 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // edx
  _BYTE *v21; // r12
  _BYTE *v22; // r11
  unsigned int v23; // ebx
  int v24; // edi
  int v25; // eax
  int v26; // r9d
  int v27; // r8d
  int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // r9d
  int v33; // eax
  NTSTATUS v34; // ebx
  __int16 v35; // cx
  int v36; // r13d
  ACL *v37; // r12
  unsigned int v38; // edx
  __int16 v39; // cx
  int v40; // eax
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r8d
  int v46; // eax
  __int16 v47; // cx
  ACL *v48; // rcx
  char *AceByType; // rbx
  __int64 v50; // r8
  char *v51; // rdx
  void *v52; // rdi
  ACL *v53; // rcx
  int v54; // r9d
  unsigned int v55; // edx
  ACCESS_MASK v56; // edi
  ACL *v57; // rcx
  _DWORD *v58; // rax
  _DWORD *v59; // rsi
  PSID v60; // rcx
  char v61; // al
  ACL *v62; // rdi
  unsigned int v63; // r8d
  __int64 v64; // rcx
  int v65; // eax
  __int16 v66; // si
  int v67; // r9d
  int v68; // r14d
  PVOID v69; // rdi
  ACL *v70; // rbx
  __int16 v71; // ax
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // r8
  int v76; // edx
  int v77; // r13d
  HANDLE v78; // r15
  char *v79; // rdx
  bool v80; // al
  unsigned __int8 *v81; // rsi
  ULONG v82; // ecx
  unsigned int v83; // r13d
  __int16 v84; // bx
  int v85; // r15d
  unsigned int v86; // esi
  int v87; // r12d
  unsigned int v88; // r14d
  _QWORD *Heap; // rax
  _QWORD *v90; // rdx
  char *v91; // rbx
  unsigned __int16 *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rdi
  int v95; // eax
  char *v96; // rbx
  char *v97; // rax
  char *v98; // rax
  int v99; // eax
  unsigned __int16 *v100; // rdi
  __int64 v101; // rcx
  ACL *v102; // r8
  int v103; // ecx
  __int16 v104; // r13
  _BYTE *v105; // rax
  HANDLE v106; // rdx
  _BYTE *v107; // rax
  ACL *v108; // rcx
  _DWORD *v109; // rax
  ACCESS_MASK v110; // edi
  void *v111; // rsi
  ULONG v112; // r14d
  void *v113; // rdi
  int ServerAcl; // eax
  int ReturnLength; // [rsp+20h] [rbp-F0h]
  int ReturnLengtha; // [rsp+20h] [rbp-F0h]
  int ReturnLengthb; // [rsp+20h] [rbp-F0h]
  int ReturnLengthc; // [rsp+20h] [rbp-F0h]
  int AccessMask; // [rsp+28h] [rbp-E8h]
  NTSTATUS valid; // [rsp+90h] [rbp-80h] BYREF
  char v121; // [rsp+94h] [rbp-7Ch] BYREF
  __int16 v122; // [rsp+95h] [rbp-7Bh]
  char v123; // [rsp+97h] [rbp-79h]
  BOOLEAN v124; // [rsp+98h] [rbp-78h] BYREF
  __int16 v125; // [rsp+99h] [rbp-77h] BYREF
  _QWORD *v126; // [rsp+A0h] [rbp-70h]
  PVOID HeapHandle; // [rsp+A8h] [rbp-68h]
  BOOLEAN Dominates; // [rsp+B0h] [rbp-60h] BYREF
  char v129; // [rsp+B1h] [rbp-5Fh]
  char v130; // [rsp+B2h] [rbp-5Eh] BYREF
  char v131; // [rsp+B3h] [rbp-5Dh]
  char v132; // [rsp+B4h] [rbp-5Ch]
  char v133; // [rsp+B5h] [rbp-5Bh]
  int v134; // [rsp+B8h] [rbp-58h]
  _WORD v135[2]; // [rsp+BCh] [rbp-54h] BYREF
  ULONG v136; // [rsp+C0h] [rbp-50h] BYREF
  int v137; // [rsp+C4h] [rbp-4Ch] BYREF
  __int16 v138; // [rsp+C8h] [rbp-48h]
  bool v139; // [rsp+CAh] [rbp-46h]
  PACL Acl; // [rsp+D0h] [rbp-40h] BYREF
  void *v141; // [rsp+D8h] [rbp-38h]
  NTSTATUS AccessStatus; // [rsp+E0h] [rbp-30h] BYREF
  PVOID v143; // [rsp+E8h] [rbp-28h]
  void *v144; // [rsp+F0h] [rbp-20h]
  PGENERIC_MAPPING GenericMapping; // [rsp+F8h] [rbp-18h]
  void *Src; // [rsp+100h] [rbp-10h] BYREF
  ULONG v147; // [rsp+108h] [rbp-8h] BYREF
  PVOID v148; // [rsp+110h] [rbp+0h] BYREF
  __int64 v149; // [rsp+118h] [rbp+8h]
  __int64 v150; // [rsp+120h] [rbp+10h]
  int v151; // [rsp+128h] [rbp+18h]
  PSID Sid2; // [rsp+130h] [rbp+20h]
  __int64 v153; // [rsp+138h] [rbp+28h]
  int v154; // [rsp+140h] [rbp+30h] BYREF
  int v155; // [rsp+144h] [rbp+34h]
  __int64 v156; // [rsp+148h] [rbp+38h]
  HANDLE ClientToken; // [rsp+150h] [rbp+40h]
  PVOID v158; // [rsp+158h] [rbp+48h] BYREF
  PVOID v159; // [rsp+160h] [rbp+50h] BYREF
  void *v160; // [rsp+168h] [rbp+58h]
  PSID Sid1; // [rsp+170h] [rbp+60h]
  PVOID v162; // [rsp+178h] [rbp+68h] BYREF
  NTSTATUS v163; // [rsp+180h] [rbp+70h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+184h] [rbp+74h] BYREF
  ULONG PrivilegeSetLength; // [rsp+188h] [rbp+78h] BYREF
  int v166[2]; // [rsp+190h] [rbp+80h]
  __int64 v167; // [rsp+198h] [rbp+88h]
  HANDLE NewTokenHandle; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID BaseAddress; // [rsp+1A8h] [rbp+98h]
  int v170; // [rsp+1B0h] [rbp+A0h] BYREF
  PVOID v171; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v172; // [rsp+1C0h] [rbp+B0h]
  PVOID v173; // [rsp+1C8h] [rbp+B8h] BYREF
  PVOID v174; // [rsp+1D0h] [rbp+C0h] BYREF
  PVOID v175; // [rsp+1D8h] [rbp+C8h] BYREF
  PVOID v176; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v177; // [rsp+1E8h] [rbp+D8h] BYREF
  ACL *v178; // [rsp+1F0h] [rbp+E0h]
  ACL *v179; // [rsp+1F8h] [rbp+E8h] BYREF
  _QWORD *v180; // [rsp+208h] [rbp+F8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+210h] [rbp+100h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+240h] [rbp+130h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+268h] [rbp+158h] BYREF
  _DWORD v184[2]; // [rsp+280h] [rbp+170h] BYREF
  __int16 v185; // [rsp+288h] [rbp+178h]
  char TokenInformation[24]; // [rsp+290h] [rbp+180h] BYREF
  int v187; // [rsp+2A8h] [rbp+198h]
  int v188; // [rsp+2ACh] [rbp+19Ch]
  ACL v189; // [rsp+2D0h] [rbp+1C0h] BYREF
  ACL v190; // [rsp+330h] [rbp+220h] BYREF

  GenericMapping = a9;
  v11 = a1;
  v167 = a10;
  v158 = 0LL;
  v12 = 0LL;
  v178 = &v190;
  v13 = 0LL;
  v14 = 0LL;
  v156 = a4;
  v180 = a3;
  *(_QWORD *)v166 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  ClientToken = TokenHandle;
  v143 = 0LL;
  Acl = 0LL;
  v148 = 0LL;
  v132 = 0;
  v131 = 0;
  v154 = 0;
  Src = 0LL;
  v159 = 0LL;
  v123 = 0;
  v125 = 0;
  v121 = 0;
  v135[0] = 0;
  LOBYTE(v151) = 0;
  v130 = 0;
  Sid1 = 0LL;
  v160 = 0LL;
  v149 = 0LL;
  v153 = 0LL;
  v150 = 0LL;
  v126 = 0LL;
  v170 = 0;
  Sid2 = 0LL;
  v177 = 0LL;
  v179 = 0LL;
  v122 = 0;
  Dominates = 1;
  v162 = 0LL;
  v133 = 0;
  LOBYTE(v155) = 1;
  BaseAddress = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  v176 = 0LL;
  v171 = 0LL;
  v174 = 0LL;
  v175 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &v147);
    if ( result < 0 )
      return result;
    v155 = v187;
    if ( v187 == 2 && v188 < 1 )
      return -1073741659;
  }
  if ( a2 )
  {
    v129 = 1;
  }
  else
  {
    v129 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    a2 = SecurityDescriptor;
  }
  v17 = *((unsigned __int16 *)a2 + 1);
  v138 = *((_WORD *)a2 + 1) & 0x80;
  v18 = v138;
  LOBYTE(v17) = (v17 & 0x40) != 0;
  v139 = v138 != 0;
  v147 = v17;
  if ( TokenHandle || v138 )
  {
    result = RtlpGetDefaultsSubjectContext(
               TokenHandle,
               (ULONG)&v173,
               (__int64)&v174,
               (__int64)&v176,
               (__int64)&v171,
               (ULONG)&v175);
    if ( result < 0 )
      return result;
    v12 = *(_BYTE **)BaseAddress;
    v13 = *(_BYTE **)v172;
    v150 = *(_QWORD *)v173;
    Sid1 = *(PSID *)v176;
    v160 = *(void **)v171;
    if ( v174 )
      v149 = *(_QWORD *)v174;
    else
      v149 = 0LL;
    v18 = v138;
    if ( v175 )
      v19 = *(_QWORD *)v175;
    else
      v19 = 0LL;
    v153 = v19;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *((unsigned __int16 *)a2 + 1);
  if ( (v20 & 0x8000u) == 0 )
  {
    v21 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_160;
    v21 = &a2[*((unsigned int *)a2 + 1)];
  }
  v141 = v21;
  if ( v21 )
  {
    LOBYTE(v125) = 1;
    goto LABEL_18;
  }
LABEL_160:
  if ( (a7 & 0x20) != 0 )
  {
    if ( v11 )
    {
      if ( *(__int16 *)(v11 + 2) >= 0 )
      {
        v21 = *(_BYTE **)(v11 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(v11 + 4) )
          goto LABEL_287;
        v21 = (_BYTE *)(v11 + *(unsigned int *)(v11 + 4));
      }
      v141 = v21;
      LOBYTE(v125) = 1;
      if ( v21 )
        goto LABEL_18;
    }
LABEL_287:
    v34 = -1073741734;
    goto LABEL_289;
  }
  v21 = (_BYTE *)v149;
  if ( !v18 )
    v21 = v12;
  v141 = v21;
  if ( !v21 )
  {
    v34 = -1073741700;
LABEL_289:
    valid = v34;
LABEL_363:
    v37 = Acl;
    goto LABEL_144;
  }
LABEL_18:
  if ( (v20 & 0x8000u) == 0 )
  {
    v22 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_22;
    v22 = &a2[*((unsigned int *)a2 + 2)];
  }
  v144 = v22;
  if ( v22 )
    goto LABEL_26;
LABEL_22:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !v11 )
      goto LABEL_288;
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v22 = *(_BYTE **)(v11 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(v11 + 8) )
        goto LABEL_288;
      v22 = (_BYTE *)(v11 + *(unsigned int *)(v11 + 8));
    }
  }
  else
  {
    v22 = v13;
    if ( v18 )
      v22 = (_BYTE *)v19;
  }
  v144 = v22;
  if ( !v22 )
  {
LABEL_288:
    v34 = -1073741733;
    goto LABEL_289;
  }
LABEL_26:
  v23 = a7 >> 2;
  LOBYTE(v23) = (a7 & 4) != 0;
  v24 = a7 & 2;
  AccessStatus = v23;
  v25 = (v20 >> 2) & 8;
  v26 = (v20 >> 1) & 0x400;
  v27 = (v20 >> 1) & 0x1000;
  v28 = (v20 & 0x10) != 0 ? 4 : 0;
  if ( (v20 & 0x10) == (_WORD)v143 )
  {
    LODWORD(v29) = 0;
  }
  else
  {
    LODWORD(v29) = 0;
    if ( (v20 & 0x8000u) == 0 )
    {
      v30 = *((_QWORD *)a2 + 3);
      goto LABEL_29;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      LODWORD(v30) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
      goto LABEL_29;
    }
  }
  LODWORD(v30) = 0;
LABEL_29:
  if ( v11 && (*(_BYTE *)(v11 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v29 = *(_QWORD *)(v11 + 24);
    }
    else if ( *(_DWORD *)(v11 + 12) )
    {
      LODWORD(v29) = v11 + *(_DWORD *)(v11 + 12);
    }
  }
  v31 = v26 | v27;
  v32 = (int)GenericMapping;
  LOBYTE(v32) = a6;
  LOBYTE(ReturnLength) = v24 != 0;
  v33 = RtlpInheritAcl(
          v29,
          v30,
          v28 | v25 | (unsigned int)v31,
          v32,
          ReturnLength,
          v23,
          (int)v21,
          (__int64)v22,
          v149,
          v153,
          GenericMapping,
          2,
          v156,
          a5,
          (__int64)&Acl,
          (__int64)&v121,
          &v137);
  valid = v33;
  v34 = v33;
  if ( v33 >= 0 )
  {
    v35 = *((_WORD *)a2 + 1);
    HIBYTE(v122) = 1;
    v36 = 2 * (v137 & 0x1400 | (2 * (v137 & 8 | 0x2004)));
    v134 = v36;
    goto LABEL_37;
  }
  if ( v33 != -2147483637 )
  {
    v14 = v126;
    goto LABEL_363;
  }
  v35 = *((_WORD *)a2 + 1);
  v36 = v24 != 0 ? 34816 : 0x8000;
  v134 = v36;
  if ( (v35 & 0x30) != 0x30 )
  {
LABEL_37:
    v37 = Acl;
    v143 = Acl;
    goto LABEL_38;
  }
  if ( (v35 & 0x10) != 0 )
  {
    if ( v35 >= 0 )
    {
      v37 = (ACL *)*((_QWORD *)a2 + 3);
      goto LABEL_299;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      v37 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
LABEL_299:
      v143 = v37;
      goto LABEL_300;
    }
  }
  v37 = 0LL;
  v143 = 0LL;
LABEL_300:
  Acl = v37;
  v121 = 1;
  v36 |= v35 & 0x2000 | 0x10;
  v134 = v36;
LABEL_38:
  v38 = (unsigned __int16)v35;
  v39 = v35 & 0x10;
  v40 = (v38 >> 2) & 8;
  v41 = (v38 >> 1) & 0x400;
  v42 = v39 != 0 ? 4 : 0;
  if ( !v39 )
  {
LABEL_39:
    LODWORD(v43) = 0;
    goto LABEL_40;
  }
  if ( (v38 & 0x8000u) == 0 )
  {
    v43 = *((_QWORD *)a2 + 3);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 3) )
      goto LABEL_39;
    LODWORD(v43) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
  }
LABEL_40:
  if ( !v11 || (*(_BYTE *)(v11 + 2) & 0x10) == 0 )
    goto LABEL_169;
  if ( *(__int16 *)(v11 + 2) >= 0 )
  {
    v44 = *(_QWORD *)(v11 + 24);
    goto LABEL_45;
  }
  if ( *(_DWORD *)(v11 + 12) )
    LODWORD(v44) = v11 + *(_DWORD *)(v11 + 12);
  else
LABEL_169:
    LODWORD(v44) = 0;
LABEL_45:
  v45 = v42 | v40 | v41;
  LOBYTE(v42) = a6;
  LOBYTE(ReturnLengtha) = v24 != 0;
  v46 = RtlpInheritAcl(
          v44,
          v43,
          v45,
          v42,
          ReturnLengtha,
          AccessStatus,
          (int)v141,
          (__int64)v144,
          v149,
          v153,
          GenericMapping,
          2,
          v156,
          a5,
          (__int64)&v148,
          (__int64)v135,
          &v170);
  valid = v46;
  v34 = v46;
  if ( v46 >= 0 )
  {
    v132 = 1;
  }
  else
  {
    if ( v46 != -2147483637 )
      goto LABEL_266;
    v47 = *((_WORD *)a2 + 1);
    if ( (v47 & 0x30) == 0x30 )
    {
      if ( (v47 & 0x10) != 0 )
      {
        if ( v47 >= 0 )
        {
          v107 = (_BYTE *)*((_QWORD *)a2 + 3);
        }
        else if ( *((_DWORD *)a2 + 3) )
        {
          v107 = &a2[*((unsigned int *)a2 + 3)];
        }
        else
        {
          v107 = 0LL;
        }
        v148 = v107;
      }
      else
      {
        v148 = 0LL;
      }
    }
  }
  v136 = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
    {
LABEL_50:
      v48 = 0LL;
      goto LABEL_51;
    }
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v48 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_50;
      v48 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
LABEL_51:
    AceByType = (char *)RtlFindAceByType(v48, 0x14u, &v136);
    v51 = AceByType + 8;
    if ( !AceByType )
      v51 = 0LL;
    v52 = v160;
    if ( v51 && !(unsigned __int8)RtlpValidTrustSubjectContext(v160, v51, v50, &valid) )
    {
      v34 = -1073741790;
      goto LABEL_311;
    }
    ++v136;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_56:
    v162 = v148;
    goto LABEL_57;
  }
  v136 = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_317;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v108 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v108 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
        goto LABEL_319;
      }
LABEL_317:
      v108 = 0LL;
    }
LABEL_319:
    v109 = RtlFindAceByType(v108, 0x14u, &v136);
    ++v136;
    if ( v109 )
    {
      if ( (*((_BYTE *)v109 + 1) & 8) == 0 )
      {
        v110 = v109[1];
        v111 = v109 + 2;
        v112 = *((unsigned __int8 *)v109 + 1);
        if ( !v167 || (v110 & *(_DWORD *)(v167 + 4)) != v110 || v109 == (_DWORD *)-8LL )
          goto LABEL_324;
        goto LABEL_328;
      }
      continue;
    }
    break;
  }
  if ( !v52 )
    goto LABEL_56;
  if ( !v167 )
  {
LABEL_324:
    v34 = -1073741811;
    goto LABEL_311;
  }
  v111 = v52;
  v112 = 0;
  v110 = *(_DWORD *)(v167 + 4);
LABEL_328:
  valid = RtlCreateAcl(&v189, 0x58u, 2u);
  v34 = valid;
  if ( valid < 0 )
    goto LABEL_266;
  valid = RtlAddProcessTrustLabelAce(&v189, 2u, v112, v111, 0x14u, v110);
  v34 = valid;
  if ( valid < 0 )
    goto LABEL_266;
  valid = RtlpComputeMergedAcl(
            (int)v148,
            (*((_WORD *)a2 + 1) & 0x800 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x18u) >> 1,
            (int)&v189,
            4,
            (__int64)v141,
            (__int64)v144,
            (__int64)GenericMapping,
            2,
            (__int64)&v162,
            (__int64)&v137);
  v34 = valid;
  if ( valid < 0 )
    goto LABEL_266;
  v11 = *(_QWORD *)v166;
  v133 = 1;
LABEL_57:
  if ( (a2[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v53 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_58;
      v53 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
  }
  else
  {
LABEL_58:
    v53 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v53);
  v34 = valid;
  if ( valid < 0 )
    goto LABEL_266;
  v55 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v55 = (a7 >> 8) & 1;
  v56 = v55 | 4;
  if ( (a7 & 0x400) == 0 )
    v56 = v55;
  if ( v56 )
  {
    v59 = 0LL;
    goto LABEL_68;
  }
  if ( (a2[2] & 0x10) == 0 )
    goto LABEL_66;
  if ( *((__int16 *)a2 + 1) >= 0 )
  {
    v57 = (ACL *)*((_QWORD *)a2 + 3);
  }
  else if ( *((_DWORD *)a2 + 3) )
  {
    v57 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
  }
  else
  {
LABEL_66:
    v57 = 0LL;
  }
  v58 = RtlFindAceByType(v57, 0x11u, 0LL);
  v59 = v58;
  if ( v58 )
  {
    v56 = v58[1];
    v60 = v58 + 2;
    v61 = *((_BYTE *)v58 + 1);
    Sid2 = v60;
    LOBYTE(v122) = v61;
    if ( v61 == 8 || (v61 & 0x10) != 0 )
    {
      v60 = 0LL;
      v61 = 0;
      Sid2 = 0LL;
      v59 = 0LL;
      LOBYTE(v122) = 0;
      v56 = 0;
    }
  }
  else
  {
LABEL_68:
    v60 = 0LL;
    v61 = 0;
  }
  if ( (v61 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v34 = -1073740730;
    goto LABEL_311;
  }
  if ( v56 )
  {
LABEL_204:
    if ( v59 )
      goto LABEL_73;
    if ( ClientToken )
    {
      v60 = Sid1;
      Sid2 = Sid1;
      LOBYTE(v122) = 0;
      goto LABEL_73;
    }
    goto LABEL_335;
  }
  if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v56 = 1;
    goto LABEL_204;
  }
LABEL_73:
  if ( !v60 )
  {
    v62 = 0LL;
    v178 = 0LL;
    goto LABEL_75;
  }
  valid = RtlCreateAcl(&v190, 0x80u, 2u);
  v34 = valid;
  if ( valid < 0 )
    goto LABEL_266;
  valid = RtlAddMandatoryAce(&v190, 2u, (unsigned __int8)v122, Sid2, 0x11u, v56);
  v34 = valid;
  if ( valid < 0 )
    goto LABEL_266;
  v62 = &v190;
LABEL_75:
  if ( (a7 & 0x700) != 0 )
  {
    v63 = 4;
  }
  else if ( !v59 && v62 )
  {
    v63 = 0;
  }
  else
  {
    v63 = (*((_WORD *)a2 + 1) & 0x2800 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !v11 || (*(_BYTE *)(v11 + 2) & 0x10) == 0 )
    goto LABEL_170;
  if ( *(__int16 *)(v11 + 2) >= 0 )
  {
    v64 = *(_QWORD *)(v11 + 24);
  }
  else
  {
    if ( *(_DWORD *)(v11 + 12) )
    {
      LODWORD(v64) = v11 + *(_DWORD *)(v11 + 12);
      goto LABEL_84;
    }
LABEL_170:
    LODWORD(v64) = 0;
  }
LABEL_84:
  LOBYTE(v54) = a6;
  LOBYTE(ReturnLengthb) = 1;
  v65 = RtlpInheritAcl(
          v64,
          (int)v62,
          v63,
          v54,
          ReturnLengthb,
          0,
          (int)v141,
          (__int64)v144,
          v149,
          v153,
          GenericMapping,
          3,
          v156,
          a5,
          (__int64)&v177,
          (__int64)v135 + 1,
          &v137);
  valid = v65;
  v34 = v65;
  if ( v65 != -2147483637 )
  {
    if ( v65 >= 0 )
    {
      v62 = (ACL *)v177;
      v66 = v137;
      goto LABEL_86;
    }
    goto LABEL_266;
  }
  v66 = 0;
  v137 = 0;
LABEL_86:
  v34 = RtlpCombineAcls(
          (_DWORD)v37,
          (_DWORD)v62,
          (_DWORD)v148,
          (_DWORD)v148,
          (__int64)v162,
          (__int64)v148,
          (__int64)&v179,
          (__int64)&v154);
  valid = v34;
  v68 = ((v36 & 0x2000) << 17) | v154;
  if ( !v62 || v62 == v178 )
  {
    v69 = HeapHandle;
  }
  else
  {
    v102 = v62;
    v69 = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, v102);
  }
  if ( v34 < 0 )
    goto LABEL_266;
  v70 = v179;
  if ( v179 )
  {
    if ( HIBYTE(v122) && v37 )
      RtlFreeHeap(v69, 0, v37);
    v143 = v70;
    Acl = v70;
    v37 = v70;
    v131 = 1;
    v36 |= 2 * (v66 & 0x1400 | (2 * (v66 & 8 | 4)));
    v134 = v36;
  }
  if ( (a7 & 8) == 0 )
  {
    v97 = (char *)RtlFindAceByType(v37, 0x11u, 0LL);
    v98 = v97 ? v97 + 8 : (char *)Sid2;
    if ( v98 )
    {
      if ( ClientToken )
      {
        valid = RtlSidDominates(Sid1, v98, &Dominates);
        v34 = valid;
        if ( valid >= 0 )
        {
          v99 = (unsigned __int8)v151;
          if ( !Dominates )
            v99 = 1;
          v151 = v99;
          goto LABEL_91;
        }
        goto LABEL_266;
      }
LABEL_335:
      v34 = -1073741700;
LABEL_311:
      valid = v34;
      goto LABEL_266;
    }
  }
LABEL_91:
  v71 = *((_WORD *)a2 + 1);
  if ( (v71 & 4) == 0 )
    goto LABEL_179;
  if ( v71 >= 0 )
  {
    v72 = *((_QWORD *)a2 + 4);
    goto LABEL_95;
  }
  if ( *((_DWORD *)a2 + 4) )
    LODWORD(v72) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
  else
LABEL_179:
    LODWORD(v72) = 0;
LABEL_95:
  if ( !*(_QWORD *)v166 || (*(_BYTE *)(*(_QWORD *)v166 + 2LL) & 4) == 0 )
    goto LABEL_254;
  if ( *(__int16 *)(*(_QWORD *)v166 + 2LL) >= 0 )
  {
    v73 = *(_QWORD *)(*(_QWORD *)v166 + 32LL);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)v166 + 16LL) )
    {
      LODWORD(v73) = v166[0] + *(_DWORD *)(*(_QWORD *)v166 + 16LL);
      goto LABEL_100;
    }
LABEL_254:
    LODWORD(v73) = 0;
  }
LABEL_100:
  LOBYTE(v67) = a6;
  LOBYTE(ReturnLengthc) = a7 & 1;
  v74 = RtlpInheritAcl(
          v73,
          v72,
          v71 & 0x140C,
          v67,
          ReturnLengthc,
          AccessStatus,
          (int)v141,
          (__int64)v144,
          v149,
          v153,
          GenericMapping,
          1,
          v156,
          a5,
          (__int64)&Src,
          (__int64)&v125 + 1,
          &v137);
  valid = v74;
  v34 = v74;
  if ( v74 >= 0 )
  {
    v76 = 1;
    v123 = 1;
    v77 = v137 & 0x1408 | 4 | v36;
    goto LABEL_102;
  }
  if ( v74 != -2147483637 )
    goto LABEL_266;
  v103 = v36 | 0x400;
  if ( (a7 & 1) == 0 )
    v103 = v36;
  v104 = *((_WORD *)a2 + 1);
  if ( (v104 & 0xC) == 0xC )
  {
    if ( (v104 & 4) != 0 )
    {
      if ( v104 >= 0 )
      {
        v105 = (_BYTE *)*((_QWORD *)a2 + 4);
LABEL_274:
        v76 = 1;
        v77 = v103 | v104 & 0x1000;
        HIBYTE(v125) = 1;
        goto LABEL_247;
      }
      if ( *((_DWORD *)a2 + 4) )
      {
        v105 = &a2[*((unsigned int *)a2 + 4)];
        goto LABEL_274;
      }
    }
    v105 = 0LL;
    goto LABEL_274;
  }
  v105 = (_BYTE *)v150;
  v77 = v103;
  v134 = v103;
  v76 = 1;
  if ( v150 )
  {
LABEL_247:
    v77 |= 4u;
    Src = v105;
LABEL_102:
    v134 = v77;
  }
  v78 = ClientToken;
  if ( (a7 & 0x1000) == 0 && v129 && ClientToken && *(_QWORD *)v166 )
  {
    LOBYTE(AccessMask) = a6;
    GrantedAccess = 0;
    AccessStatus = 0;
    valid = RtlpNewSecurityObject(
              v166[0],
              0,
              (int)&v158,
              v156,
              a5,
              AccessMask,
              a7 | 1,
              ClientToken,
              (__int64)GenericMapping,
              v167);
    v34 = valid;
    if ( valid < 0 )
      goto LABEL_266;
    if ( (*((_BYTE *)v158 + 2) & 4) == 0 )
      goto LABEL_342;
    if ( *((__int16 *)v158 + 1) >= 0 )
    {
      v79 = (char *)*((_QWORD *)v158 + 4);
      goto LABEL_112;
    }
    if ( *((_DWORD *)v158 + 4) )
      v79 = (char *)v158 + *((unsigned int *)v158 + 4);
    else
LABEL_342:
      v79 = 0LL;
LABEL_112:
    if ( (unsigned __int8)RtlpOwnerAcesPresent(16LL, v79) )
    {
      NewTokenHandle = 0LL;
      PrivilegeSetLength = 20;
      if ( (_BYTE)v155 != 1 )
        goto LABEL_261;
      v185 = 1;
      v184[1] = 2;
      ObjectAttributes.SecurityQualityOfService = v184;
      v184[0] = 12;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ObjectAttributes.SecurityDescriptor = 0LL;
      valid = NtDuplicateToken(v78, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
      v34 = valid;
      if ( valid < 0 )
        goto LABEL_266;
      v106 = NewTokenHandle;
      if ( !NewTokenHandle )
LABEL_261:
        v106 = v78;
      valid = ZwAccessCheck(
                v158,
                v106,
                0x40000u,
                GenericMapping,
                &RequiredPrivileges,
                &PrivilegeSetLength,
                &GrantedAccess,
                &AccessStatus);
      v34 = valid;
      if ( NewTokenHandle )
        NtClose(NewTokenHandle);
      if ( v34 < 0 || (v34 = AccessStatus, valid = AccessStatus, AccessStatus < 0) )
      {
LABEL_266:
        v14 = v126;
        goto LABEL_143;
      }
    }
  }
  if ( (a7 & 1) != 0 && !Src )
    v134 = v77 | 0x1000;
  v80 = !v68 || (v68 & 0x1B0) != v68;
  if ( v121 && (a7 & 8) == 0 && v80 )
  {
    if ( !v78 )
      goto LABEL_335;
    v150 = 8LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    valid = ZwPrivilegeCheck(v78, &RequiredPrivileges, &v124);
    v34 = valid;
    if ( valid < 0 )
      goto LABEL_266;
    if ( !v124 )
      goto LABEL_347;
  }
  if ( (_BYTE)v151 && (a7 & 8) == 0 )
  {
    if ( !v78 )
      goto LABEL_335;
    v150 = 32LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    valid = ZwPrivilegeCheck(v78, &RequiredPrivileges, &v124);
    v34 = valid;
    if ( valid < 0 )
      goto LABEL_266;
    if ( !v124 )
    {
LABEL_347:
      v34 = -1073741727;
      goto LABEL_311;
    }
  }
  if ( (_BYTE)v125 && (a7 & 0x10) == 0 )
  {
    if ( !v78 )
      goto LABEL_335;
    v81 = (unsigned __int8 *)v141;
    LOBYTE(v75) = v139;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v78, v141, v75, &v163) )
    {
      v34 = v163;
      goto LABEL_311;
    }
  }
  else
  {
    v81 = (unsigned __int8 *)v141;
  }
  if ( v138 && HIBYTE(v125) )
  {
    v113 = Src;
    LOBYTE(v76) = v147;
    ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v76, v149, (unsigned int)&v159, (__int64)&v130);
    valid = ServerAcl;
    v34 = ServerAcl;
    if ( ServerAcl < 0 )
      goto LABEL_266;
    if ( v123 && v113 )
      RtlFreeHeap(HeapHandle, 0, v113);
    Src = v159;
    v159 = 0LL;
  }
  v82 = 4 * v81[1] + 8;
  v147 = v82;
  if ( v144 )
    v83 = 4 * *((unsigned __int8 *)v144 + 1) + 8;
  else
    v83 = 0;
  v84 = v134;
  v85 = v134 & 0x10;
  if ( (v134 & 0x10) != 0 && v37 )
    v86 = (v37->AclSize + 3) & 0xFFFFFFFC;
  else
    v86 = 0;
  v87 = v134 & 4;
  if ( (v134 & 4) != 0 && Src )
    v88 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
  else
    v88 = 0;
  Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v83 + v82 + 20 + v88 + v86);
  v126 = Heap;
  v90 = Heap;
  if ( !Heap )
  {
    v37 = (ACL *)v143;
    v34 = -1073741801;
    goto LABEL_311;
  }
  *Heap = 0LL;
  Heap[1] = 0LL;
  *((_DWORD *)Heap + 4) = 0;
  *((_WORD *)Heap + 1) |= v84;
  v91 = (char *)Heap + 20;
  *(_BYTE *)Heap = 1;
  if ( v85 )
  {
    v100 = (unsigned __int16 *)v143;
    if ( v143 )
    {
      memmove(v91, v143, *((unsigned __int16 *)v143 + 1));
      if ( !HIBYTE(v122) )
        RtlpApplyAclToObject(v91, GenericMapping);
      v90 = v126;
      *((_DWORD *)v126 + 3) = (_DWORD)v91 - (_DWORD)v126;
      v101 = v100[1];
      if ( v86 > (unsigned int)v101 )
      {
        memset(&v91[v101], 0, v86 - (unsigned int)v101);
        v90 = v126;
      }
      v91 += v86;
    }
    else
    {
      *((_DWORD *)Heap + 3) = 0;
    }
  }
  if ( v87 )
  {
    v92 = (unsigned __int16 *)Src;
    if ( Src )
    {
      memmove(v91, Src, *((unsigned __int16 *)Src + 1));
      if ( !v123 )
        RtlpApplyAclToObject(v91, GenericMapping);
      v14 = v126;
      *((_DWORD *)v126 + 4) = (_DWORD)v91 - (_DWORD)v126;
      v93 = v92[1];
      if ( v88 > (unsigned int)v93 )
        memset(&v91[v93], 0, v88 - (unsigned int)v93);
      v91 += v88;
      goto LABEL_140;
    }
    *((_DWORD *)v90 + 4) = 0;
  }
  v14 = v126;
LABEL_140:
  v94 = v147;
  memmove(v91, v141, v147);
  v95 = (_DWORD)v91 - (_DWORD)v14;
  v96 = &v91[v94];
  *((_DWORD *)v14 + 1) = v95;
  if ( v144 )
  {
    memmove(v96, v144, v83);
    *((_DWORD *)v14 + 2) = (_DWORD)v96 - (_DWORD)v14;
  }
  v37 = (ACL *)v143;
  v34 = 0;
  valid = 0;
LABEL_143:
  ProcessHeap = HeapHandle;
LABEL_144:
  if ( v158 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v158);
    v37 = Acl;
    v34 = valid;
  }
  if ( v130 && v159 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v159);
    v37 = Acl;
    v34 = valid;
  }
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  RtlFreeHeap(ProcessHeap, 0, v176);
  RtlFreeHeap(ProcessHeap, 0, v171);
  RtlFreeHeap(ProcessHeap, 0, v172);
  RtlFreeHeap(ProcessHeap, 0, v173);
  if ( v174 )
    RtlFreeHeap(ProcessHeap, 0, v174);
  if ( v175 )
    RtlFreeHeap(ProcessHeap, 0, v175);
  if ( (v131 || HIBYTE(v122)) && v37 )
    RtlFreeHeap(ProcessHeap, 0, v37);
  if ( v132 && v148 )
    RtlFreeHeap(ProcessHeap, 0, v148);
  if ( v162 && v133 )
    RtlFreeHeap(ProcessHeap, 0, v162);
  if ( v123 )
  {
    if ( Src )
      RtlFreeHeap(ProcessHeap, 0, Src);
  }
  *v180 = v14;
  return v34;
}
