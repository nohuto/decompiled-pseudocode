/*
 * XREFs of RtlpSetSecurityObject @ 0x1405CB240
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfo @ 0x1405CB200 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x1406C3210 (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     RtlFindAceBySid @ 0x1400160E0 (RtlFindAceBySid.c)
 *     RtlFindAceByType @ 0x1400A8EF0 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8F44 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x14016CBBC (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SepValidLabelSubjectContext @ 0x14060A6D0 (SepValidLabelSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x140630650 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x140630720 (RtlpCombineAcls.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 *     SepValidOwnerSubjectContext @ 0x1406A656C (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x14089573C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140895B60 (RtlpCreateServerAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140896810 (RtlpValidFilterAclSubjectContext.c)
 *     SepGetDefaultsSubjectContext @ 0x1408A14F4 (SepGetDefaultsSubjectContext.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 *a8)
{
  _BOOL8 v8; // r12
  __int64 v9; // rsi
  _QWORD *v11; // rdi
  __int16 v12; // ax
  PVOID v13; // r15
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r11
  void *v15; // r14
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  ACL *v19; // r13
  __int16 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  unsigned __int8 *v23; // r14
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 *v27; // r12
  __int16 v28; // cx
  unsigned __int16 *v29; // r15
  __int16 v30; // dx
  unsigned int v31; // r13d
  int v32; // ecx
  unsigned int v33; // esi
  unsigned int v34; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v36; // rbx
  char *v37; // rdi
  __int16 v38; // ax
  __int64 v39; // rdx
  __int16 v40; // cx
  __int64 v41; // rcx
  _QWORD *v42; // rsi
  __int64 v43; // rcx
  char *v44; // rdi
  NTSTATUS valid; // esi
  void *v46; // rcx
  void *v47; // r12
  void *v48; // r14
  void *v49; // rdi
  void *v50; // rbx
  __int64 v52; // rax
  void *TokenTrustLevel; // rsi
  __int64 v54; // r8
  int v55; // ecx
  int v56; // r11d
  void *v57; // r10
  unsigned int v58; // edx
  __int16 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  __int16 v64; // cx
  __int64 v65; // rcx
  __int16 v66; // ax
  __int64 v67; // rax
  __int64 v68; // rcx
  char *AceBySid; // rax
  _BYTE *AceByType; // rax
  _BYTE *v71; // rsi
  char *v72; // rax
  __int16 v73; // ax
  __int16 v74; // cx
  __int16 v75; // ax
  unsigned __int8 v76; // cl
  unsigned int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v80; // edx
  _DWORD *v81; // rax
  __int64 v82; // r8
  unsigned int v83; // edx
  int v84; // ebx
  unsigned int v85; // eax
  unsigned int v86; // edx
  unsigned int v87; // edx
  __int64 v88; // r8
  int v89; // eax
  __int64 v90; // rax
  __int16 v91; // dx
  __int64 v92; // rcx
  int v93; // ecx
  char v94; // cl
  __int16 v95; // [rsp+58h] [rbp-B0h]
  ULONG Index; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int8 v97; // [rsp+60h] [rbp-A8h]
  bool v98; // [rsp+61h] [rbp-A7h]
  bool v99; // [rsp+62h] [rbp-A6h]
  char v100; // [rsp+63h] [rbp-A5h]
  char v101; // [rsp+64h] [rbp-A4h]
  char v102; // [rsp+65h] [rbp-A3h]
  char v103; // [rsp+66h] [rbp-A2h]
  char v104; // [rsp+67h] [rbp-A1h]
  __int16 v105; // [rsp+68h] [rbp-A0h]
  char v106; // [rsp+6Ah] [rbp-9Eh]
  __int16 v107; // [rsp+6Bh] [rbp-9Dh] BYREF
  void *Src; // [rsp+70h] [rbp-98h]
  PVOID v109; // [rsp+78h] [rbp-90h]
  void *v110; // [rsp+80h] [rbp-88h]
  PVOID v111; // [rsp+88h] [rbp-80h]
  PVOID v112; // [rsp+90h] [rbp-78h]
  PVOID v113; // [rsp+98h] [rbp-70h]
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v115; // [rsp+A8h] [rbp-60h]
  void *v116; // [rsp+B0h] [rbp-58h]
  char *v117; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v118; // [rsp+C0h] [rbp-48h]
  BOOL v119; // [rsp+C4h] [rbp-44h]
  void *v120; // [rsp+C8h] [rbp-40h]
  __int64 *v121; // [rsp+D0h] [rbp-38h]
  PVOID P; // [rsp+D8h] [rbp-30h] BYREF
  size_t Size; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v124; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v125; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v126; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v127; // [rsp+100h] [rbp-8h] BYREF
  __int64 v128; // [rsp+108h] [rbp+0h] BYREF
  int v129; // [rsp+110h] [rbp+8h]
  _QWORD *v130; // [rsp+118h] [rbp+10h]
  PVOID v131; // [rsp+120h] [rbp+18h] BYREF
  PVOID v132; // [rsp+128h] [rbp+20h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+130h] [rbp+28h] BYREF
  __int16 Sid; // [rsp+150h] [rbp+48h] BYREF
  int v135; // [rsp+158h] [rbp+50h]
  _BOOL8 v136; // [rsp+1A0h] [rbp+98h]

  v9 = a3;
  v136 = v8;
  v11 = a4;
  *(_DWORD *)PoolType.Value = a6;
  LOBYTE(v8) = 0;
  v12 = *(_WORD *)(a3 + 2);
  v13 = 0LL;
  p_SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)a8;
  v130 = a4;
  v115 = a3;
  v121 = a8;
  v101 = 0;
  v100 = 0;
  v102 = 0;
  v107 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v131 = 0LL;
  P = 0LL;
  v109 = 0LL;
  v128 = 0LL;
  v112 = 0LL;
  v125 = 0LL;
  v111 = 0LL;
  v124 = 0LL;
  v110 = 0LL;
  v126 = 0LL;
  v113 = 0LL;
  v127 = 0LL;
  v117 = 0LL;
  v97 = 0;
  LOBYTE(v118) = 0;
  v119 = v8;
  v95 = 0x8000;
  v132 = 0LL;
  if ( (v12 & 0x10) != 0 )
  {
    if ( v12 >= 0 )
    {
      v15 = *(void **)(a3 + 24);
    }
    else
    {
      v62 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v62 )
        v15 = (void *)(a3 + v62);
      else
        v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  Src = v15;
  v17 = *(_WORD *)(v16 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v19 = *(ACL **)(v16 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v18 )
        v19 = (ACL *)(v16 + v18);
      else
        v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( !a8 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v16 = *v11;
    p_SubjectContext = &SubjectContext;
    v121 = (__int64 *)&SubjectContext;
  }
  if ( *(__int16 *)(v16 + 2) >= 0 )
  {
    valid = -1073741593;
    goto LABEL_77;
  }
  v20 = *(_WORD *)(v9 + 2);
  v98 = (v20 & 0x80u) != 0;
  v99 = (v20 & 0x40) != 0;
  v21 = a2 & 0x80;
  LOBYTE(a4) = (a2 & 0x100) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v84 = a2 | 0x1FF;
    v85 = v84 & 0xFFFFFF7F;
    if ( v21 )
      v85 = v84;
    a2 = v85 & 0xFFFFFEFF;
    if ( (_BYTE)a4 )
      a2 = v85;
    if ( !v19 && !v15 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v20 & 0x10) != 0 )
        a2 |= 8u;
      else
        v119 = (v20 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v16 + 2) >= 0 )
    {
      v23 = *(unsigned __int8 **)(v16 + 8);
    }
    else
    {
      v22 = *(unsigned int *)(v16 + 4);
      if ( !(_DWORD)v22 )
        goto LABEL_249;
      v23 = (unsigned __int8 *)(v16 + v22);
    }
    v120 = v23;
    v24 = v23 == 0LL;
LABEL_16:
    if ( !v24 )
      goto LABEL_17;
LABEL_249:
    valid = -1073741734;
    goto LABEL_77;
  }
  v77 = a2 >> 2;
  LOBYTE(v77) = (a2 & 4) == 0;
  v118 = v77;
  if ( v20 >= 0 )
  {
    v23 = *(unsigned __int8 **)(v9 + 8);
  }
  else
  {
    v78 = *(unsigned int *)(v9 + 4);
    if ( (_DWORD)v78 )
      v23 = (unsigned __int8 *)(v9 + v78);
    else
      v23 = 0LL;
  }
  v120 = v23;
  v100 = 1;
  if ( (a5 & 8) == 0 )
  {
    v24 = (unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v23, (v20 & 0x80u) != 0, a4) == 0;
    goto LABEL_16;
  }
LABEL_17:
  if ( !RtlValidSid(v23) )
    goto LABEL_249;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v9 + 2) >= 0 )
    {
      v27 = *(unsigned __int8 **)(v9 + 16);
    }
    else
    {
      v79 = *(unsigned int *)(v9 + 8);
      if ( (_DWORD)v79 )
        v27 = (unsigned __int8 *)(v9 + v79);
      else
        v27 = 0LL;
    }
    v101 = 1;
  }
  else
  {
    v25 = *v11;
    if ( *(__int16 *)(*v11 + 2LL) >= 0 )
    {
      v27 = *(unsigned __int8 **)(v25 + 16);
    }
    else
    {
      v26 = *(unsigned int *)(v25 + 8);
      if ( !(_DWORD)v26 )
      {
LABEL_194:
        valid = -1073741733;
        goto LABEL_77;
      }
      v27 = (unsigned __int8 *)(v25 + v26);
    }
  }
  if ( !v27 || !RtlValidSid(v27) )
    goto LABEL_194;
  if ( (a2 & 0x1F8) == 0 )
  {
    v13 = v19;
    Src = v19;
    goto LABEL_26;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    do
    {
      AceByType = RtlFindAceByType((PACL)Src, 0x11u, &Index);
      v71 = AceByType;
      if ( AceByType )
      {
        v76 = AceByType[1];
        v72 = AceByType + 8;
        v24 = (*((_DWORD *)v71 + 1) & 0xFFFFFFF8) == 0;
        v117 = v72;
        v97 = v76;
        if ( !v24 )
        {
LABEL_195:
          valid = -1073740730;
          goto LABEL_77;
        }
      }
      else
      {
        v72 = v117;
      }
      if ( !(unsigned __int8)SepValidLabelSubjectContext(v121, v72, v97) )
        goto LABEL_195;
      ++Index;
    }
    while ( v71 );
  }
  TokenTrustLevel = (void *)SepLocateTokenTrustLevel(v121);
  v116 = TokenTrustLevel;
  v129 = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
  {
LABEL_84:
    LODWORD(v117) = a2 & 0x100;
    if ( (a2 & 0x100) != 0 )
    {
      valid = RtlpValidFilterAclSubjectContext((PACL)Src);
      if ( valid < 0 )
        goto LABEL_77;
      if ( (a5 & 2) == 0 )
      {
        valid = RtlpValidFilterAclSubjectContext(v19);
        if ( valid < 0 )
          goto LABEL_77;
      }
    }
    v54 = v115;
    v55 = a5 & 2;
    LODWORD(v116) = v55;
    if ( (a2 & 8) != 0 )
    {
      v80 = *(unsigned __int16 *)(v115 + 2);
      if ( (a5 & 2) == 0 )
      {
        v57 = Src;
        v109 = Src;
        v95 = v80 & 0x2000 | 0x8010;
        v56 = (int)Src;
        if ( (v80 & 0xA00) == 0xA00 )
          v95 = v80 & 0x2000 | 0x8810;
LABEL_88:
        if ( (a2 & 0x20) != 0 )
        {
          v58 = *(unsigned __int16 *)(v54 + 2);
          if ( v55 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v11 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v11 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v57,
                      (v58 & 0x800 | (v58 >> 1) & 0x18) >> 1,
                      (__int64)v23,
                      (__int64)v27,
                      a7,
                      2,
                      (__int64)&v124,
                      (__int64)&Index);
            if ( valid < 0 )
            {
              v47 = (void *)v124;
              v46 = v109;
              goto LABEL_64;
            }
            v54 = v115;
            v57 = Src;
            v56 = (int)v109;
            v104 = 1;
            v111 = (PVOID)v124;
            v59 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v95;
            v55 = (int)v116;
            v95 = v59;
          }
          else
          {
            v111 = v57;
            v59 = v58 & 0x2000 | 0x10 | v95;
            v95 = v59;
            if ( (v58 & 0xA00) == 0xA00 )
            {
              v59 |= 0x800u;
              v95 = v59;
            }
          }
        }
        else
        {
          v59 = v95;
          v111 = v19;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v86 = *(unsigned __int16 *)(v54 + 2);
          if ( v55 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v11 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v11 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v57,
                      (v86 & 0x800 | (v86 >> 1) & 0x18) >> 1,
                      (__int64)v23,
                      (__int64)v27,
                      a7,
                      2,
                      (__int64)&v125,
                      (__int64)&Index);
            if ( valid < 0 )
            {
              v48 = (void *)v125;
              v46 = v109;
              v47 = v111;
              goto LABEL_65;
            }
            v54 = v115;
            v57 = Src;
            v56 = (int)v109;
            v112 = (PVOID)v125;
            v59 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v95;
            LOBYTE(v105) = 1;
            v55 = (int)v116;
            v95 = v59;
          }
          else
          {
            v112 = v57;
            v59 |= v86 & 0x2000 | 0x10;
            v95 = v59;
            if ( (v86 & 0xA00) == 0xA00 )
            {
              v59 |= 0x800u;
              v95 = v59;
            }
          }
        }
        else
        {
          v112 = v19;
        }
        if ( v129 )
        {
          v83 = *(unsigned __int16 *)(v54 + 2);
          if ( !v55 )
          {
            v110 = v57;
            v59 |= v83 & 0x2000 | 0x10;
            v24 = (v83 & 0xA00) == 2560;
            v95 = v59;
            v60 = (__int64)v57;
            if ( v24 )
            {
              v59 |= 0x800u;
              v95 = v59;
            }
            goto LABEL_97;
          }
          valid = RtlpComputeMergedAcl(
                    (int)v19,
                    (*(_WORD *)(*v11 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v11 + 2LL) >> 1) & 0x18u) >> 1,
                    (int)v57,
                    (v83 & 0x800 | (v83 >> 1) & 0x18) >> 1,
                    (__int64)v23,
                    (__int64)v27,
                    a7,
                    2,
                    (__int64)&v126,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v49 = (void *)v126;
            v46 = v109;
            v48 = v112;
            v47 = v111;
            goto LABEL_66;
          }
          v60 = v126;
          v54 = v115;
          v57 = Src;
          v56 = (int)v109;
          HIBYTE(v105) = 1;
          v59 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v95;
          v55 = (int)v116;
          v95 = v59;
        }
        else
        {
          v60 = (__int64)v19;
        }
        v110 = (void *)v60;
LABEL_97:
        if ( (_DWORD)v117 )
        {
          v87 = *(unsigned __int16 *)(v54 + 2);
          if ( v55 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v19,
                      (*(_WORD *)(*v11 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v11 + 2LL) >> 1) & 0x18u) >> 1,
                      (int)v57,
                      (v87 & 0x800 | (v87 >> 1) & 0x18) >> 1,
                      (__int64)v23,
                      (__int64)v27,
                      a7,
                      2,
                      (__int64)&v127,
                      (__int64)&Index);
            if ( valid < 0 )
            {
              v50 = (void *)v127;
              v46 = v109;
              v49 = v110;
              v48 = v112;
              v47 = v111;
LABEL_67:
              if ( v46 && v103 )
                ExFreePoolWithTag(v46, 0);
              if ( v47 && v104 )
                ExFreePoolWithTag(v47, 0);
              if ( v48 && (_BYTE)v105 )
                ExFreePoolWithTag(v48, 0);
              if ( v49 && HIBYTE(v105) )
                ExFreePoolWithTag(v49, 0);
              if ( v50 && v106 )
                ExFreePoolWithTag(v50, 0);
              if ( v13 && (_BYTE)v107 )
                ExFreePoolWithTag(v13, 0);
              if ( HIBYTE(v107) )
                ExFreePoolWithTag(v132, 0);
              goto LABEL_77;
            }
            v61 = v127;
            v54 = v115;
            LODWORD(v57) = (_DWORD)Src;
            v56 = (int)v109;
            v106 = 1;
            v59 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v95;
            v113 = (PVOID)v127;
            v95 = v59;
          }
          else
          {
            v113 = v57;
            v61 = (__int64)v57;
            v59 |= v87 & 0x2000 | 0x10;
            v95 = v59;
            if ( (v87 & 0xA00) == 0xA00 )
            {
              v59 |= 0x800u;
              v95 = v59;
            }
          }
          v60 = (__int64)v110;
        }
        else
        {
          v61 = (__int64)v19;
          v113 = v19;
        }
        if ( (_DWORD)Size )
        {
          v73 = *(_WORD *)(v54 + 2);
          v74 = v73 & 0xA00;
          v75 = v59 | v73 & 0x2000;
          v95 = v75 | 0x10;
          if ( v74 == 2560 )
            v95 = v75 | 0x810;
        }
        else
        {
          LODWORD(v57) = (_DWORD)v19;
        }
        valid = RtlpCombineAcls(v56, (_DWORD)v57, (_DWORD)v111, (_DWORD)v112, v60, v61, (__int64)&P, 0LL);
        if ( valid < 0 )
          goto LABEL_62;
        v13 = P;
        Src = P;
        if ( !v109 && P && !*((_WORD *)P + 2) )
        {
          ExFreePoolWithTag(P, 0);
          v13 = 0LL;
          Src = 0LL;
        }
        v9 = v115;
        LOBYTE(v107) = 1;
LABEL_26:
        if ( (a2 & 4) != 0 )
        {
          v28 = *(_WORD *)(v9 + 2);
          if ( (a5 & 1) != 0 )
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 >= 0 )
              {
                v88 = *(_QWORD *)(v9 + 32);
              }
              else
              {
                v89 = *(_DWORD *)(v9 + 16);
                if ( v89 )
                  LODWORD(v88) = v9 + v89;
                else
                  LODWORD(v88) = 0;
              }
            }
            else
            {
              LODWORD(v88) = 0;
            }
            v90 = *v11;
            v91 = *(_WORD *)(*v11 + 2LL);
            if ( (v91 & 4) != 0 )
            {
              if ( v91 >= 0 )
              {
                v92 = *(_QWORD *)(v90 + 32);
              }
              else
              {
                v93 = *(_DWORD *)(v90 + 16);
                if ( v93 )
                  LODWORD(v92) = v90 + v93;
                else
                  LODWORD(v92) = 0;
              }
            }
            else
            {
              LODWORD(v92) = 0;
            }
            valid = RtlpComputeMergedAcl(
                      v92,
                      v91 & 0x140C,
                      v88,
                      *(_WORD *)(v9 + 2) & 0x140C,
                      (__int64)v23,
                      (__int64)v27,
                      a7,
                      1,
                      (__int64)&v131,
                      (__int64)&Index);
            if ( valid < 0 )
            {
LABEL_62:
              v46 = v109;
LABEL_63:
              v47 = v111;
LABEL_64:
              v48 = v112;
LABEL_65:
              v49 = v110;
LABEL_66:
              v50 = v113;
              goto LABEL_67;
            }
            v29 = (unsigned __int16 *)v131;
            v102 = 1;
            v95 |= Index & 0x1408 | 4;
          }
          else
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v52 = *(unsigned int *)(v9 + 16);
                if ( (_DWORD)v52 )
                  v29 = (unsigned __int16 *)(v9 + v52);
                else
                  v29 = 0LL;
              }
              else
              {
                v29 = *(unsigned __int16 **)(v9 + 32);
              }
            }
            else
            {
              v29 = 0LL;
            }
            v30 = v28 & 0x1000 | 4 | v95;
            v95 = v30;
            if ( (v28 & 0x500) == 0x500 )
              v95 = v30 | 0x400;
          }
          if ( v98 )
          {
            SepGetDefaultsSubjectContext(
              (_DWORD)v121,
              (unsigned int)&Size,
              (unsigned int)&v128,
              (unsigned int)&P,
              (__int64)&v124,
              (__int64)&v125,
              (__int64)&v126,
              (__int64)&v127);
            valid = RtlpCreateServerAcl((_DWORD)v29, v99, (_DWORD)P, (unsigned int)&v132, (__int64)&v107 + 1);
            if ( valid < 0 )
              goto LABEL_59;
            v29 = (unsigned __int16 *)v132;
          }
        }
        else
        {
          v63 = *v11;
          v64 = *(_WORD *)(*v11 + 2LL);
          if ( (v64 & 4) != 0 )
          {
            if ( v64 >= 0 )
            {
              v29 = *(unsigned __int16 **)(v63 + 32);
            }
            else
            {
              v65 = *(unsigned int *)(v63 + 16);
              if ( (_DWORD)v65 )
                v29 = (unsigned __int16 *)(v63 + v65);
              else
                v29 = 0LL;
            }
          }
          else
          {
            v29 = 0LL;
          }
        }
        v31 = 4 * v23[1] + 8;
        v32 = 4 * v27[1] + 8;
        LODWORD(Size) = v32;
        if ( Src )
          v33 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
        else
          v33 = 0;
        if ( v29 )
          v34 = (v29[1] + 3) & 0xFFFFFFFC;
        else
          v34 = 0;
        PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)PoolType.Value, v31 + v32 + 20 + v34 + v33, 0x64536553u);
        v36 = PoolWithTag;
        if ( PoolWithTag )
        {
          v37 = (char *)PoolWithTag + 20;
          v24 = !v119;
          *PoolWithTag = 0LL;
          PoolWithTag[1] = 0LL;
          *((_DWORD *)PoolWithTag + 4) = 0;
          v38 = v95;
          *(_BYTE *)v36 = 1;
          if ( !v24 )
            v38 = v95 | 0x800;
          v39 = v115;
          v40 = *((_WORD *)v36 + 1) | v38;
          *((_WORD *)v36 + 1) = v40;
          if ( (*(_WORD *)(v39 + 2) & 0x4000) != 0 )
          {
            *((_BYTE *)v36 + 1) = *(_BYTE *)(v39 + 1);
            *((_WORD *)v36 + 1) = v40 | 0x4000;
          }
          if ( Src )
          {
            memmove((char *)v36 + 20, Src, *((unsigned __int16 *)Src + 1));
            RtlpApplyAclToObject((char *)v36 + 20, a7);
            *((_DWORD *)v36 + 3) = (_DWORD)v37 - (_DWORD)v36;
            v41 = *((unsigned __int16 *)Src + 1);
            if ( v33 > (unsigned int)v41 )
              memset(&v37[v41], 0, v33 - (unsigned int)v41);
            v37 += v33;
          }
          else
          {
            *((_DWORD *)v36 + 3) = 0;
          }
          v42 = v130;
          if ( (v95 & 0x10) == 0 )
            *((_WORD *)v36 + 1) |= *(_WORD *)(*v130 + 2LL) & 0x2830;
          if ( v29 )
          {
            memmove(v37, v29, v29[1]);
            RtlpApplyAclToObject(v37, a7);
            *((_DWORD *)v36 + 4) = (_DWORD)v37 - (_DWORD)v36;
            v43 = v29[1];
            if ( v34 > (unsigned int)v43 )
              memset(&v37[v43], 0, v34 - (unsigned int)v43);
            v37 += v34;
          }
          else
          {
            *((_DWORD *)v36 + 4) = 0;
          }
          if ( (v95 & 4) != 0 )
            goto LABEL_54;
          *((_WORD *)v36 + 1) |= *(_WORD *)(*v42 + 2LL) & 0x140C;
          if ( !(_BYTE)v118 )
            goto LABEL_54;
          *(_DWORD *)PoolType.Value = 0;
          *(_WORD *)&PoolType.Value[4] = 768;
          valid = RtlInitializeSid(&Sid, &PoolType, 1u);
          if ( valid >= 0 )
          {
            v135 = 4;
            Index = 0;
            while ( 1 )
            {
              v66 = *((_WORD *)v36 + 1);
              if ( (v66 & 4) != 0 )
              {
                if ( v66 >= 0 )
                {
                  v68 = v36[4];
                }
                else
                {
                  v67 = *((unsigned int *)v36 + 4);
                  v68 = (_DWORD)v67 ? (__int64)v36 + v67 : 0LL;
                }
              }
              else
              {
                v68 = 0LL;
              }
              AceBySid = RtlFindAceBySid(v68, &Sid, &Index);
              if ( !AceBySid )
                break;
              v94 = AceBySid[1] & 0xF4 | 8;
              ++Index;
              AceBySid[1] = v94;
            }
            v42 = v130;
LABEL_54:
            memmove(v37, v120, v31);
            *((_DWORD *)v36 + 1) = (_DWORD)v37 - (_DWORD)v36;
            v44 = &v37[v31];
            if ( !v100 )
              *((_WORD *)v36 + 1) |= *(_WORD *)(*v42 + 2LL) & 1;
            memmove(v44, v27, (unsigned int)Size);
            v24 = v101 == 0;
            *((_DWORD *)v36 + 2) = (_DWORD)v44 - (_DWORD)v36;
            if ( v24 )
              *((_WORD *)v36 + 1) |= *(_WORD *)(*v42 + 2LL) & 2;
            *v42 = v36;
            valid = 0;
          }
        }
        else
        {
          valid = -1073741801;
        }
LABEL_59:
        if ( v102 )
          ExFreePoolWithTag(v131, 0);
        v13 = Src;
        goto LABEL_62;
      }
      valid = RtlpComputeMergedAcl(
                (int)v19,
                (*(_WORD *)(*v11 + 2LL) & 0x2800 | (*(unsigned __int16 *)(*v11 + 2LL) >> 1) & 0x18u) >> 1,
                (int)Src,
                (v80 & 0x2800 | (v80 >> 1) & 0x18) >> 1,
                (__int64)v23,
                (__int64)v27,
                a7,
                2,
                (__int64)&v128,
                (__int64)&Index);
      if ( valid < 0 )
      {
        v46 = (void *)v128;
        goto LABEL_63;
      }
      v56 = v128;
      v54 = v115;
      v103 = 1;
      v109 = (PVOID)v128;
      v95 = 2 * (Index & 0x1400 | (2 * (Index & 8 | 0x2004)));
      v55 = (int)v116;
    }
    else
    {
      v56 = (int)v19;
      v109 = v19;
      LODWORD(v116) = a5 & 2;
    }
    v57 = Src;
    goto LABEL_88;
  }
  if ( TokenTrustLevel )
  {
    Index = 0;
    while ( 1 )
    {
      v81 = RtlFindAceByType((PACL)Src, 0x14u, &Index);
      v109 = v81;
      if ( v81 )
      {
        if ( (v81[1] & 0xFF000000) != 0 )
          goto LABEL_195;
        if ( !RtlpValidTrustSubjectContext(TokenTrustLevel, v81 + 2, v82, (NTSTATUS *)&v117) )
          break;
        v81 = v109;
      }
      ++Index;
      if ( !v81 )
        goto LABEL_84;
    }
  }
  valid = -1073741790;
LABEL_77:
  if ( v121 == (__int64 *)&SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
