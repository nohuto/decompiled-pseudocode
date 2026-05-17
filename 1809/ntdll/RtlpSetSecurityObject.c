/*
 * XREFs of RtlpSetSecurityObject @ 0x18007C610
 * Callers:
 *     RtlSetSecurityObject @ 0x18007C5E0 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x18008C3F0 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlValidSid @ 0x1800411A0 (RtlValidSid.c)
 *     RtlFindAceByType @ 0x180044F10 (RtlFindAceByType.c)
 *     RtlpValidFilterAclSubjectContext @ 0x180045530 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800455AC (RtlpCombineAcls.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180045DC8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlInitializeSid @ 0x1800487A0 (RtlInitializeSid.c)
 *     RtlpValidOwnerSubjectContext @ 0x18006E2FC (RtlpValidOwnerSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x18007CE50 (RtlpApplyAclToObject.c)
 *     RtlpValidTrustSubjectContext @ 0x180089098 (RtlpValidTrustSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x18008B75C (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A0700 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A2710 (NtOpenProcessToken.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E8D94 (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E933C (RtlpValidLabelSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800EA454 (RtlFindAceBySid.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        char a5,
        __int64 a6,
        __int64 a7,
        size_t a8)
{
  BOOL v8; // r11d
  size_t v9; // rbx
  __int16 v12; // dx
  int v13; // esi
  unsigned __int8 *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int16 *v16; // r15
  void *ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  _BYTE *v20; // rax
  unsigned __int64 v21; // rax
  _BYTE *v22; // rcx
  unsigned __int8 *v23; // rdi
  __int16 v24; // cx
  unsigned __int16 *v25; // r14
  int v26; // ecx
  int v27; // r8d
  unsigned int v28; // ebx
  unsigned int v29; // r12d
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  char *v32; // r15
  int v33; // ecx
  __int16 v34; // ax
  __int16 v35; // ax
  unsigned __int16 *v36; // rsi
  __int64 v37; // rcx
  unsigned __int64 *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // eax
  char *v42; // r15
  int valid; // ebx
  unsigned __int8 *v44; // r15
  __int64 v46; // r8
  unsigned __int64 v47; // rax
  __int16 v48; // dx
  __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  __int64 v51; // r15
  int v52; // r15d
  unsigned int v53; // edx
  unsigned __int8 *v54; // rax
  unsigned __int8 *v55; // r15
  unsigned __int8 *v56; // rdx
  int v57; // r14d
  unsigned int v58; // eax
  unsigned int v59; // eax
  void *v60; // rax
  void *v61; // rax
  unsigned __int8 *v62; // r15
  unsigned __int8 *v63; // rax
  unsigned __int8 *v64; // rdi
  __int64 v65; // r8
  size_t v66; // rcx
  unsigned __int8 *AceByType; // rax
  __int64 v68; // r8
  unsigned __int8 *v69; // rbx
  unsigned __int64 v70; // r8
  __int64 v71; // rdx
  unsigned int v72; // edx
  unsigned int v73; // edx
  unsigned int v74; // edx
  unsigned int v75; // edx
  __int16 v76; // ax
  __int16 v77; // cx
  int v78; // eax
  _QWORD *Heap; // rdi
  unsigned __int64 v80; // r8
  int v81; // edx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int64 AceBySid; // rax
  char v85; // cl
  unsigned __int8 *v86; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v87; // [rsp+58h] [rbp-A8h]
  char v88; // [rsp+59h] [rbp-A7h]
  char v89; // [rsp+5Ah] [rbp-A6h]
  char v90; // [rsp+5Bh] [rbp-A5h]
  char v91; // [rsp+5Ch] [rbp-A4h]
  char v92; // [rsp+5Dh] [rbp-A3h]
  char v93; // [rsp+5Eh] [rbp-A2h]
  char v94; // [rsp+5Fh] [rbp-A1h]
  char v95; // [rsp+60h] [rbp-A0h]
  char v96; // [rsp+61h] [rbp-9Fh]
  char v97[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v98; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v99; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v100; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 *v101; // [rsp+78h] [rbp-88h] BYREF
  int InformationToken; // [rsp+80h] [rbp-80h] BYREF
  char v103; // [rsp+84h] [rbp-7Ch]
  bool v104; // [rsp+85h] [rbp-7Bh]
  void *v105; // [rsp+88h] [rbp-78h]
  void *v106; // [rsp+90h] [rbp-70h]
  BOOL v107; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v108; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v109; // [rsp+A8h] [rbp-58h]
  int v110; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v111; // [rsp+B4h] [rbp-4Ch]
  __int16 v112; // [rsp+B8h] [rbp-48h]
  _DWORD Size[3]; // [rsp+BCh] [rbp-44h] BYREF
  size_t v114; // [rsp+C8h] [rbp-38h]
  void *Src; // [rsp+D0h] [rbp-30h]
  unsigned int v116; // [rsp+D8h] [rbp-28h]
  unsigned int v117; // [rsp+DCh] [rbp-24h] BYREF
  unsigned __int8 *v118; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int8 *v119; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int8 *v120; // [rsp+F0h] [rbp-10h] BYREF
  char v121[8]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 *v122; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v123; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v124; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v125; // [rsp+118h] [rbp+18h] BYREF
  __int64 v126; // [rsp+128h] [rbp+28h]
  _BYTE v127[24]; // [rsp+130h] [rbp+30h] BYREF
  int v128; // [rsp+148h] [rbp+48h]
  int v129; // [rsp+14Ch] [rbp+4Ch]
  char v130[8]; // [rsp+168h] [rbp+68h] BYREF
  int v131; // [rsp+170h] [rbp+70h]

  v9 = a8;
  v126 = a3;
  v109 = a4;
  v114 = a8;
  v12 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v89 = 0;
  v88 = 0;
  v97[0] = 0;
  v13 = 0x8000;
  v90 = 0;
  v96 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v123 = 0LL;
  Src = 0LL;
  v122 = 0LL;
  v100 = 0LL;
  v118 = 0LL;
  v101 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v87 = 0;
  LOBYTE(v116) = 0;
  v107 = v8;
  v124 = 0LL;
  if ( (v12 & 0x10) == 0 )
    goto LABEL_2;
  if ( v12 >= 0 )
  {
    v14 = *(unsigned __int8 **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = (unsigned __int8 *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v15 = *a4;
  v108 = v14;
  if ( (*(_BYTE *)(v15 + 2) & 0x10) == 0 )
  {
LABEL_118:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *(__int16 *)(v15 + 2) < 0 )
  {
    if ( *(_DWORD *)(v15 + 12) )
    {
      v16 = (unsigned __int16 *)(v15 + *(unsigned int *)(v15 + 12));
      goto LABEL_7;
    }
    goto LABEL_118;
  }
  v16 = *(unsigned __int16 **)(v15 + 24);
LABEL_7:
  *(_QWORD *)&Size[1] = 0LL;
  v86 = (unsigned __int8 *)v16;
  v125 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *(__int16 *)(v15 + 2) >= 0 )
    return (unsigned int)-1073741593;
  v112 = v12 & 0x80;
  v103 = v112 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v104 = (v12 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v57 = a2 | 0x1FF;
    v58 = v57 & 0xFFFFFF7F;
    if ( v18 )
      v58 = v57;
    a2 = v58 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v58;
    if ( !v16 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v12 & 0x10) != 0 )
        a2 |= 8u;
      else
        v107 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v15 + 2) >= 0 )
    {
      v20 = *(_BYTE **)(v15 + 8);
    }
    else
    {
      if ( !*(_DWORD *)(v15 + 4) )
        return (unsigned int)-1073741734;
      v20 = (_BYTE *)(v15 + *(unsigned int *)(v15 + 4));
    }
    v105 = v20;
    if ( v20 )
      goto LABEL_14;
    return (unsigned int)-1073741734;
  }
  v59 = a2 >> 2;
  LOBYTE(v59) = (a2 & 4) == 0;
  v116 = v59;
  if ( v12 >= 0 )
  {
    v60 = *(void **)(a3 + 8);
    goto LABEL_135;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v60 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_135:
    v105 = v60;
    goto LABEL_136;
  }
  v105 = 0LL;
LABEL_136:
  v88 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    InformationToken = NtQueryInformationToken(a8, 10LL, v127, 56LL, v121);
    valid = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)valid;
    if ( v128 == 2 && v129 < 1 )
      return (unsigned int)-1073741659;
    v9 = v114;
    if ( !RtlpValidOwnerSubjectContext((void *)v114, (__int64)v105, v103, &InformationToken) )
      return (unsigned int)-1073741734;
  }
  v20 = v105;
LABEL_14:
  if ( !RtlValidSid(v20) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v61 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v106 = 0LL;
LABEL_150:
        v22 = v106;
        v89 = 1;
        goto LABEL_20;
      }
      v61 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v106 = v61;
    goto LABEL_150;
  }
  v21 = *v109;
  if ( *(__int16 *)(*v109 + 2) >= 0 )
  {
    v22 = *(_BYTE **)(v21 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(v21 + 8) )
    {
LABEL_254:
      valid = -1073741733;
      goto LABEL_57;
    }
    v22 = (_BYTE *)(v21 + *(unsigned int *)(v21 + 8));
  }
  v106 = v22;
LABEL_20:
  if ( !v22 )
    goto LABEL_254;
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v23 = v101;
    Src = v16;
    goto LABEL_24;
  }
  Size[0] = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_85:
    InformationToken = RtlpGetDefaultTrustSubjectContext(v9, (unsigned __int64 *)&v125);
    valid = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)valid;
    v50 = (unsigned __int64)v125;
    LODWORD(v114) = a2 & 0x80;
    v51 = *v125;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v51 )
      {
LABEL_176:
        valid = -1073741790;
        goto LABEL_178;
      }
      v99 = 0;
      do
      {
        AceByType = RtlFindAceByType((__int64)v108, 20, &v99);
        v69 = AceByType;
        if ( AceByType )
        {
          if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
          {
            valid = -1073740730;
            goto LABEL_178;
          }
          if ( !(unsigned __int8)RtlpValidTrustSubjectContext(v51, AceByType + 8, v68, &InformationToken) )
            goto LABEL_176;
        }
        ++v99;
      }
      while ( v69 );
    }
    InformationToken = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_88;
    valid = RtlpValidFilterAclSubjectContext((__int64)v108, v51);
    if ( valid >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
LABEL_88:
        v52 = (int)v86;
        goto LABEL_89;
      }
      v71 = v51;
      v52 = (int)v86;
      valid = RtlpValidFilterAclSubjectContext((__int64)v86, v71);
      if ( valid >= 0 )
      {
LABEL_89:
        RtlFreeHeap((__int64)ProcessHeap, 0, v50);
        if ( (a2 & 8) != 0 )
        {
          v53 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      v52,
                      (*(_WORD *)(*v109 + 2) & 0x2800 | (*(unsigned __int16 *)(*v109 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v108,
                      (v53 & 0x2800 | (v53 >> 1) & 0x18) >> 1,
                      (__int64)v105,
                      (__int64)v106,
                      a7,
                      2,
                      (__int64)&v100,
                      (__int64)&v98);
            if ( valid < 0 )
            {
              v44 = v100;
              v23 = v101;
              goto LABEL_59;
            }
            v91 = 1;
            v13 = 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 0x2004)));
          }
          else
          {
            v100 = v108;
            v13 = v53 & 0x2000 | 0x8010;
            if ( (v53 & 0xA00) == 0xA00 )
              v13 = v53 & 0x2000 | 0x8810;
          }
          v54 = v86;
        }
        else
        {
          v54 = v86;
          v100 = v86;
        }
        v55 = v108;
        if ( (a2 & 0x20) != 0 )
        {
          v72 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (_DWORD)v86,
                      (*(_WORD *)(*v109 + 2) & 0x800 | (*(unsigned __int16 *)(*v109 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v108,
                      (v72 & 0x800 | (v72 >> 1) & 0x18) >> 1,
                      (__int64)v105,
                      (__int64)v106,
                      a7,
                      2,
                      (__int64)&v101,
                      (__int64)&v98);
            if ( valid < 0 )
              goto LABEL_193;
            v92 = 1;
            v13 |= 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)));
          }
          else
          {
            v101 = v108;
            v13 |= v72 & 0x2000 | 0x10;
            if ( (v72 & 0xA00) == 0xA00 )
              v13 |= 0x800u;
          }
          v54 = v86;
        }
        else
        {
          v101 = v54;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v73 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (_DWORD)v86,
                      (*(_WORD *)(*v109 + 2) & 0x800 | (*(unsigned __int16 *)(*v109 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v55,
                      (v73 & 0x800 | (v73 >> 1) & 0x18) >> 1,
                      (__int64)v105,
                      (__int64)v106,
                      a7,
                      2,
                      (__int64)&v118,
                      (__int64)&v98);
            if ( valid < 0 )
              goto LABEL_193;
            v93 = 1;
            v13 |= 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)));
          }
          else
          {
            v118 = v55;
            v13 |= v73 & 0x2000 | 0x10;
            if ( (v73 & 0xA00) == 0xA00 )
              v13 |= 0x800u;
          }
          v54 = v86;
        }
        else
        {
          v118 = v54;
        }
        if ( (_DWORD)v114 )
        {
          v74 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (_DWORD)v86,
                      (*(_WORD *)(*v109 + 2) & 0x800 | (*(unsigned __int16 *)(*v109 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v55,
                      (v74 & 0x800 | (v74 >> 1) & 0x18) >> 1,
                      (__int64)v105,
                      (__int64)v106,
                      a7,
                      2,
                      (__int64)&v119,
                      (__int64)&v98);
            if ( valid < 0 )
              goto LABEL_193;
            v94 = 1;
            v13 |= 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)));
          }
          else
          {
            v119 = v55;
            v13 |= v74 & 0x2000 | 0x10;
            if ( (v74 & 0xA00) == 0xA00 )
              v13 |= 0x800u;
          }
          v54 = v86;
        }
        else
        {
          v119 = v54;
        }
        if ( !InformationToken )
        {
          v120 = v54;
LABEL_102:
          if ( Size[0] )
          {
            v76 = *(_WORD *)(a3 + 2);
            v77 = v76 & 0xA00;
            v78 = v13 | v76 & 0x2000;
            v13 = v78 | 0x10;
            if ( v77 == 2560 )
              v13 = v78 | 0x810;
          }
          else
          {
            v55 = v54;
          }
          v23 = v101;
          v56 = v55;
          v44 = v100;
          valid = RtlpCombineAcls(v100, v56, v101, v118, v119, v120, (unsigned __int64 *)&v122, 0LL);
          if ( valid < 0 )
            goto LABEL_59;
          v16 = v122;
          Src = v122;
          if ( !v100 && v122 && !v122[2] )
          {
            RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v122);
            v16 = 0LL;
            Src = 0LL;
          }
          v96 = 1;
LABEL_24:
          if ( (a2 & 4) != 0 )
          {
            v24 = *(_WORD *)(a3 + 2);
            if ( (a5 & 1) == 0 )
            {
              if ( (v24 & 4) == 0 )
                goto LABEL_224;
              if ( v24 >= 0 )
              {
                v25 = *(unsigned __int16 **)(a3 + 32);
                goto LABEL_29;
              }
              if ( *(_DWORD *)(a3 + 16) )
                v25 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
              else
LABEL_224:
                v25 = 0LL;
LABEL_29:
              v13 |= v24 & 0x1000 | 4;
              if ( (v24 & 0x500) == 0x500 )
                v13 |= 0x400u;
LABEL_31:
              if ( !v112 )
                goto LABEL_32;
              v117 = 76;
              Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 76LL);
              if ( !Heap )
              {
LABEL_230:
                valid = -1073741801;
                goto LABEL_57;
              }
              valid = NtOpenProcessToken(-1LL, 8LL, &Size[1]);
              v80 = (unsigned __int64)Heap;
              if ( valid < 0 )
              {
LABEL_229:
                RtlFreeHeap((__int64)ProcessHeap, 0, v80);
                goto LABEL_57;
              }
              valid = NtQueryInformationToken(*(_QWORD *)&Size[1], 4LL, Heap, v117, &v117);
              NtClose(*(HANDLE *)&Size[1]);
              if ( valid < 0 )
              {
                v80 = (unsigned __int64)Heap;
                goto LABEL_229;
              }
              LOBYTE(v81) = v104;
              valid = RtlpCreateServerAcl((_DWORD)v25, v81, *Heap, (unsigned int)&v124, (__int64)v97);
              RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
              if ( valid >= 0 )
              {
                v25 = v124;
                goto LABEL_32;
              }
LABEL_57:
              v44 = v100;
              v23 = v101;
              if ( v90 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v123);
              goto LABEL_59;
            }
            if ( (v24 & 4) != 0 )
            {
              if ( v24 >= 0 )
              {
                v46 = *(_QWORD *)(a3 + 32);
LABEL_75:
                v47 = *v109;
                v48 = *(_WORD *)(*v109 + 2);
                if ( (v48 & 4) != 0 )
                {
                  if ( v48 >= 0 )
                  {
                    v49 = *(_QWORD *)(v47 + 32);
LABEL_79:
                    valid = RtlpComputeMergedAcl(
                              v49,
                              v48 & 0x140C,
                              v46,
                              *(_WORD *)(a3 + 2) & 0x140C,
                              (__int64)v105,
                              (__int64)v106,
                              a7,
                              1,
                              (__int64)&v123,
                              (__int64)&v98);
                    if ( valid >= 0 )
                    {
                      v25 = v123;
                      v90 = 1;
                      v13 |= v98 & 0x1408 | 4;
                      goto LABEL_31;
                    }
                    goto LABEL_194;
                  }
                  if ( *(_DWORD *)(v47 + 16) )
                  {
                    LODWORD(v49) = v47 + *(_DWORD *)(v47 + 16);
                    goto LABEL_79;
                  }
                }
                LODWORD(v49) = 0;
                goto LABEL_79;
              }
              if ( *(_DWORD *)(a3 + 16) )
              {
                LODWORD(v46) = a3 + *(_DWORD *)(a3 + 16);
                goto LABEL_75;
              }
            }
            LODWORD(v46) = 0;
            goto LABEL_75;
          }
          v82 = *v109;
          if ( (*(_BYTE *)(*v109 + 2) & 4) != 0 )
          {
            if ( *(__int16 *)(v82 + 2) >= 0 )
            {
              v25 = *(unsigned __int16 **)(v82 + 32);
LABEL_32:
              v26 = 4 * *((unsigned __int8 *)v105 + 1) + 8;
              Size[0] = v26;
              v27 = 4 * *((unsigned __int8 *)v106 + 1) + 8;
              LODWORD(v114) = v27;
              if ( v16 )
                v28 = (v16[1] + 3) & 0xFFFFFFFC;
              else
                v28 = 0;
              if ( v25 )
                v29 = (v25[1] + 3) & 0xFFFFFFFC;
              else
                v29 = 0;
              v30 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v27 + v29 + v28 + v26 + 20);
              v31 = v30;
              if ( v30 )
              {
                v32 = (char *)(v30 + 20);
                *(_QWORD *)v30 = 0LL;
                *(_QWORD *)(v30 + 8) = 0LL;
                *(_DWORD *)(v30 + 16) = 0;
                *(_BYTE *)v30 = 1;
                v33 = v13 | 0x800;
                v34 = *(_WORD *)(v30 + 2);
                if ( !v107 )
                  v33 = v13;
                v35 = v33 | v34;
                v107 = v33;
                *(_WORD *)(v31 + 2) = v35;
                if ( (*(_WORD *)(v126 + 2) & 0x4000) != 0 )
                {
                  *(_BYTE *)(v31 + 1) = *(_BYTE *)(v126 + 1);
                  *(_WORD *)(v31 + 2) = v35 | 0x4000;
                }
                v36 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove((void *)(v31 + 20), Src, *((unsigned __int16 *)Src + 1));
                  RtlpApplyAclToObject(v31 + 20, a7);
                  *(_DWORD *)(v31 + 12) = (_DWORD)v32 - v31;
                  v37 = v36[1];
                  if ( v28 > (unsigned int)v37 )
                    memset(&v32[v37], 0, v28 - (unsigned int)v37);
                  LOBYTE(v33) = v107;
                  v32 += v28;
                }
                else
                {
                  *(_DWORD *)(v31 + 12) = 0;
                }
                v38 = v109;
                if ( (v33 & 0x10) == 0 )
                  *(_WORD *)(v31 + 2) |= *(_WORD *)(*v109 + 2) & 0x2830;
                if ( v25 )
                {
                  memmove(v32, v25, v25[1]);
                  RtlpApplyAclToObject(v32, a7);
                  *(_DWORD *)(v31 + 16) = (_DWORD)v32 - v31;
                  v39 = v25[1];
                  if ( v29 > (unsigned int)v39 )
                    memset(&v32[v39], 0, v29 - (unsigned int)v39);
                  v32 += v29;
                }
                else
                {
                  *(_DWORD *)(v31 + 16) = 0;
                }
                if ( (v107 & 4) != 0 || (*(_WORD *)(v31 + 2) |= *(_WORD *)(*v38 + 2) & 0x140C, !(_BYTE)v116) )
                {
LABEL_52:
                  v40 = Size[0];
                  memmove(v32, v105, Size[0]);
                  v41 = (int)v32;
                  v42 = &v32[v40];
                  valid = 0;
                  *(_DWORD *)(v31 + 4) = v41 - v31;
                  if ( !v88 )
                    *(_WORD *)(v31 + 2) |= *(_WORD *)(*v38 + 2) & 1;
                  memmove(v42, v106, (unsigned int)v114);
                  *(_DWORD *)(v31 + 8) = (_DWORD)v42 - v31;
                  if ( !v89 )
                    *(_WORD *)(v31 + 2) |= *(_WORD *)(*v38 + 2) & 2;
                  RtlFreeHeap((__int64)ProcessHeap, 0, *v38);
                  *v38 = v31;
                }
                else
                {
                  v110 = 0;
                  v111 = 768;
                  valid = RtlInitializeSid((__int64)v130, (__int64)&v110, 1u);
                  if ( valid >= 0 )
                  {
                    v131 = 4;
                    v99 = 0;
                    while ( 1 )
                    {
                      if ( (*(_BYTE *)(v31 + 2) & 4) == 0 )
                        goto LABEL_250;
                      if ( *(__int16 *)(v31 + 2) < 0 )
                        break;
                      v83 = *(_QWORD *)(v31 + 32);
LABEL_252:
                      AceBySid = RtlFindAceBySid(v83, v130, &v99);
                      if ( !AceBySid )
                        goto LABEL_52;
                      v85 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
                      ++v99;
                      *(_BYTE *)(AceBySid + 1) = v85;
                    }
                    if ( *(_DWORD *)(v31 + 16) )
                    {
                      v83 = v31 + *(unsigned int *)(v31 + 16);
                      goto LABEL_252;
                    }
LABEL_250:
                    v83 = 0LL;
                    goto LABEL_252;
                  }
                }
                goto LABEL_57;
              }
              goto LABEL_230;
            }
            if ( *(_DWORD *)(v82 + 16) )
            {
              v25 = (unsigned __int16 *)(v82 + *(unsigned int *)(v82 + 16));
              goto LABEL_32;
            }
          }
          v25 = 0LL;
          goto LABEL_32;
        }
        v75 = *(unsigned __int16 *)(a3 + 2);
        if ( (a5 & 2) == 0 )
        {
          v120 = v55;
          v13 |= v75 & 0x2000 | 0x10;
          if ( (v75 & 0xA00) == 0xA00 )
            v13 |= 0x800u;
          goto LABEL_214;
        }
        valid = RtlpComputeMergedAcl(
                  (_DWORD)v86,
                  (*(_WORD *)(*v109 + 2) & 0x800 | (*(unsigned __int16 *)(*v109 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)v55,
                  (v75 & 0x800 | (v75 >> 1) & 0x18) >> 1,
                  (__int64)v105,
                  (__int64)v106,
                  a7,
                  2,
                  (__int64)&v120,
                  (__int64)&v98);
        if ( valid >= 0 )
        {
          v95 = 1;
          v13 |= 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)));
LABEL_214:
          v54 = v86;
          goto LABEL_102;
        }
LABEL_193:
        v23 = v101;
LABEL_194:
        v44 = v100;
LABEL_59:
        if ( v44 && v91 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v44);
        if ( v23 && v92 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v23);
        if ( v118 && v93 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v118);
        if ( v119 && v94 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v119);
        if ( v120 && v95 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v120);
        if ( Src && v96 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Src);
        if ( !v97[0] )
          return (unsigned int)valid;
        v70 = (unsigned __int64)v124;
LABEL_180:
        RtlFreeHeap((__int64)ProcessHeap, 0, v70);
        return (unsigned int)valid;
      }
    }
LABEL_178:
    v70 = v50;
    goto LABEL_180;
  }
  v99 = 0;
  v62 = 0LL;
  while ( 1 )
  {
    v63 = RtlFindAceByType((__int64)v14, 17, &v99);
    v64 = v63;
    if ( v63 )
    {
      v62 = v63 + 8;
      v87 = v63[1];
      if ( (*((_DWORD *)v63 + 1) & 0xFFFFFFF8) != 0 )
        break;
    }
    if ( v9 )
    {
      InformationToken = NtQueryInformationToken(v9, 10LL, v127, 56LL, v121);
      valid = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)valid;
      if ( v128 == 2 && v129 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      InformationToken = NtOpenProcessToken(-1LL, 8LL, &Size[1]);
      valid = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)valid;
    }
    v9 = v114;
    v66 = *(_QWORD *)&Size[1];
    LOBYTE(v65) = v87;
    if ( v114 )
      v66 = v114;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v66, v62, v65, &InformationToken) )
    {
      NtClose(*(HANDLE *)&Size[1]);
      break;
    }
    NtClose(*(HANDLE *)&Size[1]);
    ++v99;
    if ( !v64 )
      goto LABEL_85;
    v14 = v108;
  }
  return (unsigned int)-1073740730;
}
