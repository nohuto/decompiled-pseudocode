/*
 * XREFs of RtlpSetSecurityObject @ 0x18007C620
 * Callers:
 *     RtlSetSecurityObject @ 0x18007C5F0 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x18008C400 (RtlSetSecurityObjectEx.c)
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
 *     RtlpApplyAclToObject @ 0x18007CE60 (RtlpApplyAclToObject.c)
 *     RtlpValidTrustSubjectContext @ 0x1800890A8 (RtlpValidTrustSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x18008B76C (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A0720 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A2730 (NtOpenProcessToken.c)
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
        PVOID *a4,
        char a5,
        int a6,
        __int64 a7,
        HANDLE TokenHandle)
{
  BOOL v8; // r11d
  HANDLE v9; // rbx
  __int16 v12; // dx
  int v13; // esi
  ACL *v14; // rdi
  char *v15; // rcx
  unsigned __int16 *v16; // r15
  void *ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  char *v20; // rax
  _QWORD *v21; // rax
  char *v22; // rcx
  PVOID v23; // rdi
  __int16 v24; // cx
  unsigned __int16 *v25; // r14
  int v26; // ecx
  int v27; // r8d
  unsigned int v28; // ebx
  unsigned int v29; // r12d
  char *v30; // rax
  _WORD *v31; // rdi
  char *v32; // r15
  int v33; // ecx
  __int16 v34; // ax
  __int16 v35; // ax
  unsigned __int16 *v36; // rsi
  __int64 v37; // rcx
  PVOID *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // eax
  char *v42; // r15
  int valid; // ebx
  PVOID v44; // r15
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int16 v48; // dx
  __int64 v49; // rcx
  PVOID v50; // rdi
  __int64 v51; // r15
  int v52; // r15d
  unsigned int v53; // edx
  ACL *v54; // rax
  PACL v55; // r15
  unsigned __int8 *v56; // rdx
  int v57; // r14d
  unsigned int v58; // eax
  unsigned int v59; // eax
  void *v60; // rax
  void *v61; // rax
  void *v62; // r15
  _DWORD *v63; // rax
  _DWORD *v64; // rdi
  void *v65; // rcx
  _DWORD *AceByType; // rax
  __int64 v67; // r8
  _DWORD *v68; // rbx
  PVOID v69; // r8
  __int64 v70; // rdx
  unsigned int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // edx
  unsigned int v74; // edx
  __int16 v75; // ax
  __int16 v76; // cx
  int v77; // eax
  _QWORD *Heap; // rdi
  void *v79; // r8
  int v80; // edx
  char *v81; // rax
  char *v82; // rcx
  __int64 AceBySid; // rax
  char v84; // cl
  ACL *v85; // [rsp+50h] [rbp-B0h]
  char v86; // [rsp+59h] [rbp-A7h]
  char v87; // [rsp+5Ah] [rbp-A6h]
  char v88; // [rsp+5Bh] [rbp-A5h]
  char v89; // [rsp+5Ch] [rbp-A4h]
  char v90; // [rsp+5Dh] [rbp-A3h]
  char v91; // [rsp+5Eh] [rbp-A2h]
  char v92; // [rsp+5Fh] [rbp-A1h]
  char v93; // [rsp+60h] [rbp-A0h]
  char v94; // [rsp+61h] [rbp-9Fh]
  char v95[2]; // [rsp+62h] [rbp-9Eh] BYREF
  _WORD v96[2]; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG v97; // [rsp+68h] [rbp-98h] BYREF
  PVOID v98; // [rsp+70h] [rbp-90h] BYREF
  PVOID v99; // [rsp+78h] [rbp-88h] BYREF
  NTSTATUS DefaultTrustSubjectContext; // [rsp+80h] [rbp-80h] BYREF
  char v101; // [rsp+84h] [rbp-7Ch]
  bool v102; // [rsp+85h] [rbp-7Bh]
  void *v103; // [rsp+88h] [rbp-78h]
  void *v104; // [rsp+90h] [rbp-70h]
  BOOL v105; // [rsp+98h] [rbp-68h]
  PACL Acl; // [rsp+A0h] [rbp-60h]
  PVOID *v107; // [rsp+A8h] [rbp-58h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v109; // [rsp+B8h] [rbp-48h]
  _DWORD Size[3]; // [rsp+BCh] [rbp-44h] BYREF
  size_t v111; // [rsp+C8h] [rbp-38h]
  void *Src; // [rsp+D0h] [rbp-30h]
  unsigned int v113; // [rsp+D8h] [rbp-28h]
  ULONG TokenInformationLength; // [rsp+DCh] [rbp-24h] BYREF
  PVOID v115; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v116; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v117; // [rsp+F0h] [rbp-10h] BYREF
  ULONG ReturnLength; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v119; // [rsp+100h] [rbp+0h] BYREF
  PVOID BaseAddress; // [rsp+108h] [rbp+8h] BYREF
  PVOID v121; // [rsp+110h] [rbp+10h] BYREF
  PVOID v122[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v123; // [rsp+128h] [rbp+28h]
  _BYTE TokenInformation[24]; // [rsp+130h] [rbp+30h] BYREF
  int v125; // [rsp+148h] [rbp+48h]
  int v126; // [rsp+14Ch] [rbp+4Ch]
  char Sid[8]; // [rsp+168h] [rbp+68h] BYREF
  int v128; // [rsp+170h] [rbp+70h]

  v9 = TokenHandle;
  v123 = a3;
  v107 = a4;
  v111 = (size_t)TokenHandle;
  v12 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v87 = 0;
  v86 = 0;
  v95[0] = 0;
  v13 = 0x8000;
  v88 = 0;
  v94 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  BaseAddress = 0LL;
  Src = 0LL;
  v119 = 0LL;
  v98 = 0LL;
  v115 = 0LL;
  v99 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  LOBYTE(v113) = 0;
  v105 = v8;
  v121 = 0LL;
  if ( (v12 & 0x10) == 0 )
    goto LABEL_2;
  if ( v12 >= 0 )
  {
    v14 = *(ACL **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = (ACL *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v15 = (char *)*a4;
  Acl = v14;
  if ( (v15[2] & 0x10) == 0 )
  {
LABEL_118:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *((__int16 *)v15 + 1) < 0 )
  {
    if ( *((_DWORD *)v15 + 3) )
    {
      v16 = (unsigned __int16 *)&v15[*((unsigned int *)v15 + 3)];
      goto LABEL_7;
    }
    goto LABEL_118;
  }
  v16 = (unsigned __int16 *)*((_QWORD *)v15 + 3);
LABEL_7:
  *(_QWORD *)&Size[1] = 0LL;
  v85 = (ACL *)v16;
  v122[0] = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *((__int16 *)v15 + 1) >= 0 )
    return (unsigned int)-1073741593;
  v109 = v12 & 0x80;
  v101 = v109 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v102 = (v12 & 0x40) != 0;
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
        v105 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *((__int16 *)v15 + 1) >= 0 )
    {
      v20 = (char *)*((_QWORD *)v15 + 1);
    }
    else
    {
      if ( !*((_DWORD *)v15 + 1) )
        return (unsigned int)-1073741734;
      v20 = &v15[*((unsigned int *)v15 + 1)];
    }
    v103 = v20;
    if ( v20 )
      goto LABEL_14;
    return (unsigned int)-1073741734;
  }
  v59 = a2 >> 2;
  LOBYTE(v59) = (a2 & 4) == 0;
  v113 = v59;
  if ( v12 >= 0 )
  {
    v60 = *(void **)(a3 + 8);
    goto LABEL_135;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v60 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_135:
    v103 = v60;
    goto LABEL_136;
  }
  v103 = 0LL;
LABEL_136:
  v86 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    valid = DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return (unsigned int)valid;
    if ( v125 == 2 && v126 < 1 )
      return (unsigned int)-1073741659;
    v9 = (HANDLE)v111;
    if ( !RtlpValidOwnerSubjectContext((void *)v111, v103, v101, &DefaultTrustSubjectContext) )
      return (unsigned int)-1073741734;
  }
  v20 = (char *)v103;
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
        v104 = 0LL;
LABEL_150:
        v22 = (char *)v104;
        v87 = 1;
        goto LABEL_20;
      }
      v61 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v104 = v61;
    goto LABEL_150;
  }
  v21 = *v107;
  if ( *((__int16 *)*v107 + 1) >= 0 )
  {
    v22 = (char *)v21[2];
  }
  else
  {
    if ( !*((_DWORD *)v21 + 2) )
    {
LABEL_254:
      valid = -1073741733;
      goto LABEL_57;
    }
    v22 = (char *)v21 + *((unsigned int *)v21 + 2);
  }
  v104 = v22;
LABEL_20:
  if ( !v22 )
    goto LABEL_254;
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v23 = v99;
    Src = v16;
    goto LABEL_24;
  }
  Size[0] = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_85:
    DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v9, v122);
    valid = DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return (unsigned int)valid;
    v50 = v122[0];
    LODWORD(v111) = a2 & 0x80;
    v51 = *(_QWORD *)v122[0];
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v51 )
      {
LABEL_176:
        valid = -1073741790;
        goto LABEL_178;
      }
      v97 = 0;
      do
      {
        AceByType = RtlFindAceByType(Acl, 0x14u, &v97);
        v68 = AceByType;
        if ( AceByType )
        {
          if ( (AceByType[1] & 0xFF000000) != 0 )
          {
            valid = -1073740730;
            goto LABEL_178;
          }
          if ( !(unsigned __int8)RtlpValidTrustSubjectContext(v51, AceByType + 2, v67, &DefaultTrustSubjectContext) )
            goto LABEL_176;
        }
        ++v97;
      }
      while ( v68 );
    }
    DefaultTrustSubjectContext = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_88;
    valid = RtlpValidFilterAclSubjectContext(Acl, v51);
    if ( valid >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
LABEL_88:
        v52 = (int)v85;
        goto LABEL_89;
      }
      v70 = v51;
      v52 = (int)v85;
      valid = RtlpValidFilterAclSubjectContext(v85, v70);
      if ( valid >= 0 )
      {
LABEL_89:
        RtlFreeHeap(ProcessHeap, 0, v50);
        if ( (a2 & 8) != 0 )
        {
          v53 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      v52,
                      (*((_WORD *)*v107 + 1) & 0x2800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                      (int)Acl,
                      (v53 & 0x2800 | (v53 >> 1) & 0x18) >> 1,
                      (__int64)v103,
                      (__int64)v104,
                      a7,
                      2,
                      (__int64)&v98,
                      (__int64)v96);
            if ( valid < 0 )
            {
              v44 = v98;
              v23 = v99;
              goto LABEL_59;
            }
            v89 = 1;
            v13 = 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 0x2004)));
          }
          else
          {
            v98 = Acl;
            v13 = v53 & 0x2000 | 0x8010;
            if ( (v53 & 0xA00) == 0xA00 )
              v13 = v53 & 0x2000 | 0x8810;
          }
          v54 = v85;
        }
        else
        {
          v54 = v85;
          v98 = v85;
        }
        v55 = Acl;
        if ( (a2 & 0x20) != 0 )
        {
          v71 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v85,
                      (*((_WORD *)*v107 + 1) & 0x800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                      (int)Acl,
                      (v71 & 0x800 | (v71 >> 1) & 0x18) >> 1,
                      (__int64)v103,
                      (__int64)v104,
                      a7,
                      2,
                      (__int64)&v99,
                      (__int64)v96);
            if ( valid < 0 )
              goto LABEL_193;
            v90 = 1;
            v13 |= 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 4)));
          }
          else
          {
            v99 = Acl;
            v13 |= v71 & 0x2000 | 0x10;
            if ( (v71 & 0xA00) == 0xA00 )
              v13 |= 0x800u;
          }
          v54 = v85;
        }
        else
        {
          v99 = v54;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v72 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v85,
                      (*((_WORD *)*v107 + 1) & 0x800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                      (int)v55,
                      (v72 & 0x800 | (v72 >> 1) & 0x18) >> 1,
                      (__int64)v103,
                      (__int64)v104,
                      a7,
                      2,
                      (__int64)&v115,
                      (__int64)v96);
            if ( valid < 0 )
              goto LABEL_193;
            v91 = 1;
            v13 |= 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 4)));
          }
          else
          {
            v115 = v55;
            v13 |= v72 & 0x2000 | 0x10;
            if ( (v72 & 0xA00) == 0xA00 )
              v13 |= 0x800u;
          }
          v54 = v85;
        }
        else
        {
          v115 = v54;
        }
        if ( (_DWORD)v111 )
        {
          v73 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v85,
                      (*((_WORD *)*v107 + 1) & 0x800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                      (int)v55,
                      (v73 & 0x800 | (v73 >> 1) & 0x18) >> 1,
                      (__int64)v103,
                      (__int64)v104,
                      a7,
                      2,
                      (__int64)&v116,
                      (__int64)v96);
            if ( valid < 0 )
              goto LABEL_193;
            v92 = 1;
            v13 |= 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 4)));
          }
          else
          {
            v116 = v55;
            v13 |= v73 & 0x2000 | 0x10;
            if ( (v73 & 0xA00) == 0xA00 )
              v13 |= 0x800u;
          }
          v54 = v85;
        }
        else
        {
          v116 = v54;
        }
        if ( !DefaultTrustSubjectContext )
        {
          v117 = v54;
LABEL_102:
          if ( Size[0] )
          {
            v75 = *(_WORD *)(a3 + 2);
            v76 = v75 & 0xA00;
            v77 = v13 | v75 & 0x2000;
            v13 = v77 | 0x10;
            if ( v76 == 2560 )
              v13 = v77 | 0x810;
          }
          else
          {
            v55 = v54;
          }
          v23 = v99;
          v56 = (unsigned __int8 *)v55;
          v44 = v98;
          valid = RtlpCombineAcls(
                    (unsigned __int8 *)v98,
                    v56,
                    (unsigned __int8 *)v99,
                    (unsigned __int8 *)v115,
                    (unsigned __int8 *)v116,
                    (unsigned __int8 *)v117,
                    (ACL **)&v119,
                    0LL);
          if ( valid < 0 )
            goto LABEL_59;
          v16 = (unsigned __int16 *)v119;
          Src = v119;
          if ( !v98 && v119 && !*((_WORD *)v119 + 2) )
          {
            RtlFreeHeap(ProcessHeap, 0, v119);
            v16 = 0LL;
            Src = 0LL;
          }
          v94 = 1;
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
              if ( !v109 )
                goto LABEL_32;
              TokenInformationLength = 76;
              Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
              if ( !Heap )
              {
LABEL_230:
                valid = -1073741801;
                goto LABEL_57;
              }
              valid = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, (PHANDLE)&Size[1]);
              v79 = Heap;
              if ( valid < 0 )
              {
LABEL_229:
                RtlFreeHeap(ProcessHeap, 0, v79);
                goto LABEL_57;
              }
              valid = NtQueryInformationToken(
                        *(HANDLE *)&Size[1],
                        4u,
                        Heap,
                        TokenInformationLength,
                        &TokenInformationLength);
              NtClose(*(HANDLE *)&Size[1]);
              if ( valid < 0 )
              {
                v79 = Heap;
                goto LABEL_229;
              }
              LOBYTE(v80) = v102;
              valid = RtlpCreateServerAcl((_DWORD)v25, v80, *Heap, (unsigned int)&v121, (__int64)v95);
              RtlFreeHeap(ProcessHeap, 0, Heap);
              if ( valid >= 0 )
              {
                v25 = (unsigned __int16 *)v121;
                goto LABEL_32;
              }
LABEL_57:
              v44 = v98;
              v23 = v99;
              if ( v88 )
                RtlFreeHeap(ProcessHeap, 0, BaseAddress);
              goto LABEL_59;
            }
            if ( (v24 & 4) != 0 )
            {
              if ( v24 >= 0 )
              {
                v46 = *(_QWORD *)(a3 + 32);
LABEL_75:
                v47 = *v107;
                v48 = *((_WORD *)*v107 + 1);
                if ( (v48 & 4) != 0 )
                {
                  if ( v48 >= 0 )
                  {
                    v49 = v47[4];
LABEL_79:
                    valid = RtlpComputeMergedAcl(
                              v49,
                              v48 & 0x140C,
                              v46,
                              *(_WORD *)(a3 + 2) & 0x140C,
                              (__int64)v103,
                              (__int64)v104,
                              a7,
                              1,
                              (__int64)&BaseAddress,
                              (__int64)v96);
                    if ( valid >= 0 )
                    {
                      v25 = (unsigned __int16 *)BaseAddress;
                      v88 = 1;
                      v13 |= v96[0] & 0x1408 | 4;
                      goto LABEL_31;
                    }
                    goto LABEL_194;
                  }
                  if ( *((_DWORD *)v47 + 4) )
                  {
                    LODWORD(v49) = (_DWORD)v47 + *((_DWORD *)v47 + 4);
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
          v81 = (char *)*v107;
          if ( (*((_BYTE *)*v107 + 2) & 4) != 0 )
          {
            if ( *((__int16 *)v81 + 1) >= 0 )
            {
              v25 = (unsigned __int16 *)*((_QWORD *)v81 + 4);
LABEL_32:
              v26 = 4 * *((unsigned __int8 *)v103 + 1) + 8;
              Size[0] = v26;
              v27 = 4 * *((unsigned __int8 *)v104 + 1) + 8;
              LODWORD(v111) = v27;
              if ( v16 )
                v28 = (v16[1] + 3) & 0xFFFFFFFC;
              else
                v28 = 0;
              if ( v25 )
                v29 = (v25[1] + 3) & 0xFFFFFFFC;
              else
                v29 = 0;
              v30 = (char *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v27 + v29 + v28 + v26 + 20);
              v31 = v30;
              if ( v30 )
              {
                v32 = v30 + 20;
                *(_QWORD *)v30 = 0LL;
                *((_QWORD *)v30 + 1) = 0LL;
                *((_DWORD *)v30 + 4) = 0;
                *v30 = 1;
                v33 = v13 | 0x800;
                v34 = *((_WORD *)v30 + 1);
                if ( !v105 )
                  v33 = v13;
                v35 = v33 | v34;
                v105 = v33;
                v31[1] = v35;
                if ( (*(_WORD *)(v123 + 2) & 0x4000) != 0 )
                {
                  *((_BYTE *)v31 + 1) = *(_BYTE *)(v123 + 1);
                  v31[1] = v35 | 0x4000;
                }
                v36 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove(v31 + 10, Src, *((unsigned __int16 *)Src + 1));
                  RtlpApplyAclToObject(v31 + 10, a7);
                  *((_DWORD *)v31 + 3) = (_DWORD)v32 - (_DWORD)v31;
                  v37 = v36[1];
                  if ( v28 > (unsigned int)v37 )
                    memset(&v32[v37], 0, v28 - (unsigned int)v37);
                  LOBYTE(v33) = v105;
                  v32 += v28;
                }
                else
                {
                  *((_DWORD *)v31 + 3) = 0;
                }
                v38 = v107;
                if ( (v33 & 0x10) == 0 )
                  v31[1] |= *((_WORD *)*v107 + 1) & 0x2830;
                if ( v25 )
                {
                  memmove(v32, v25, v25[1]);
                  RtlpApplyAclToObject(v32, a7);
                  *((_DWORD *)v31 + 4) = (_DWORD)v32 - (_DWORD)v31;
                  v39 = v25[1];
                  if ( v29 > (unsigned int)v39 )
                    memset(&v32[v39], 0, v29 - (unsigned int)v39);
                  v32 += v29;
                }
                else
                {
                  *((_DWORD *)v31 + 4) = 0;
                }
                if ( (v105 & 4) != 0 || (v31[1] |= *((_WORD *)*v38 + 1) & 0x140C, !(_BYTE)v113) )
                {
LABEL_52:
                  v40 = Size[0];
                  memmove(v32, v103, Size[0]);
                  v41 = (int)v32;
                  v42 = &v32[v40];
                  valid = 0;
                  *((_DWORD *)v31 + 1) = v41 - (_DWORD)v31;
                  if ( !v86 )
                    v31[1] |= *((_WORD *)*v38 + 1) & 1;
                  memmove(v42, v104, (unsigned int)v111);
                  *((_DWORD *)v31 + 2) = (_DWORD)v42 - (_DWORD)v31;
                  if ( !v87 )
                    v31[1] |= *((_WORD *)*v38 + 1) & 2;
                  RtlFreeHeap(ProcessHeap, 0, *v38);
                  *v38 = v31;
                }
                else
                {
                  *(_DWORD *)IdentifierAuthority.Value = 0;
                  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
                  valid = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
                  if ( valid >= 0 )
                  {
                    v128 = 4;
                    v97 = 0;
                    while ( 1 )
                    {
                      if ( (v31[1] & 4) == 0 )
                        goto LABEL_250;
                      if ( (__int16)v31[1] < 0 )
                        break;
                      v82 = (char *)*((_QWORD *)v31 + 4);
LABEL_252:
                      AceBySid = RtlFindAceBySid(v82, Sid, &v97);
                      if ( !AceBySid )
                        goto LABEL_52;
                      v84 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
                      ++v97;
                      *(_BYTE *)(AceBySid + 1) = v84;
                    }
                    if ( *((_DWORD *)v31 + 4) )
                    {
                      v82 = (char *)v31 + *((unsigned int *)v31 + 4);
                      goto LABEL_252;
                    }
LABEL_250:
                    v82 = 0LL;
                    goto LABEL_252;
                  }
                }
                goto LABEL_57;
              }
              goto LABEL_230;
            }
            if ( *((_DWORD *)v81 + 4) )
            {
              v25 = (unsigned __int16 *)&v81[*((unsigned int *)v81 + 4)];
              goto LABEL_32;
            }
          }
          v25 = 0LL;
          goto LABEL_32;
        }
        v74 = *(unsigned __int16 *)(a3 + 2);
        if ( (a5 & 2) == 0 )
        {
          v117 = v55;
          v13 |= v74 & 0x2000 | 0x10;
          if ( (v74 & 0xA00) == 0xA00 )
            v13 |= 0x800u;
          goto LABEL_214;
        }
        valid = RtlpComputeMergedAcl(
                  (int)v85,
                  (*((_WORD *)*v107 + 1) & 0x800 | (*((unsigned __int16 *)*v107 + 1) >> 1) & 0x18u) >> 1,
                  (int)v55,
                  (v74 & 0x800 | (v74 >> 1) & 0x18) >> 1,
                  (__int64)v103,
                  (__int64)v104,
                  a7,
                  2,
                  (__int64)&v117,
                  (__int64)v96);
        if ( valid >= 0 )
        {
          v93 = 1;
          v13 |= 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 4)));
LABEL_214:
          v54 = v85;
          goto LABEL_102;
        }
LABEL_193:
        v23 = v99;
LABEL_194:
        v44 = v98;
LABEL_59:
        if ( v44 && v89 )
          RtlFreeHeap(ProcessHeap, 0, v44);
        if ( v23 && v90 )
          RtlFreeHeap(ProcessHeap, 0, v23);
        if ( v115 && v91 )
          RtlFreeHeap(ProcessHeap, 0, v115);
        if ( v116 && v92 )
          RtlFreeHeap(ProcessHeap, 0, v116);
        if ( v117 && v93 )
          RtlFreeHeap(ProcessHeap, 0, v117);
        if ( Src && v94 )
          RtlFreeHeap(ProcessHeap, 0, Src);
        if ( !v95[0] )
          return (unsigned int)valid;
        v69 = v121;
LABEL_180:
        RtlFreeHeap(ProcessHeap, 0, v69);
        return (unsigned int)valid;
      }
    }
LABEL_178:
    v69 = v50;
    goto LABEL_180;
  }
  v97 = 0;
  v62 = 0LL;
  while ( 1 )
  {
    v63 = RtlFindAceByType(v14, 0x11u, &v97);
    v64 = v63;
    if ( v63 )
    {
      v62 = v63 + 2;
      if ( (v63[1] & 0xFFFFFFF8) != 0 )
        break;
    }
    if ( v9 )
    {
      DefaultTrustSubjectContext = NtQueryInformationToken(v9, 0xAu, TokenInformation, 0x38u, &ReturnLength);
      valid = DefaultTrustSubjectContext;
      if ( DefaultTrustSubjectContext < 0 )
        return (unsigned int)valid;
      if ( v125 == 2 && v126 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      DefaultTrustSubjectContext = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, (PHANDLE)&Size[1]);
      valid = DefaultTrustSubjectContext;
      if ( DefaultTrustSubjectContext < 0 )
        return (unsigned int)valid;
    }
    v9 = (HANDLE)v111;
    v65 = *(void **)&Size[1];
    if ( v111 )
      v65 = (void *)v111;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v65, v62) )
    {
      NtClose(*(HANDLE *)&Size[1]);
      break;
    }
    NtClose(*(HANDLE *)&Size[1]);
    ++v97;
    if ( !v64 )
      goto LABEL_85;
    v14 = Acl;
  }
  return (unsigned int)-1073740730;
}
