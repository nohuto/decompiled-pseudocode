/*
 * XREFs of RtlpSetSecurityObject @ 0x1405C80E0
 * Callers:
 *     SeSetSecurityDescriptorInfo @ 0x1405C80A0 (SeSetSecurityDescriptorInfo.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x1406EB000 (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140003FD0 (RtlFindAceBySid.c)
 *     RtlFindAceByType @ 0x14000AC80 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x14000ACD4 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x140180564 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 *     RtlpApplyAclToObject @ 0x1405DBCE0 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x1405DC270 (RtlpCombineAcls.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     RtlInitializeSid @ 0x14069F600 (RtlInitializeSid.c)
 *     SepValidOwnerSubjectContext @ 0x1406CC7FC (SepValidOwnerSubjectContext.c)
 *     SepValidLabelSubjectContext @ 0x1406DB094 (SepValidLabelSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1406DDF50 (RtlpCreateServerAcl.c)
 *     RtlpComputeMergedAcl @ 0x1408D1F7C (RtlpComputeMergedAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1408D2DD8 (RtlpValidFilterAclSubjectContext.c)
 *     SepGetDefaultsSubjectContext @ 0x1408DE324 (SepGetDefaultsSubjectContext.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 *v8; // rsi
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r12
  __int64 v11; // r13
  ACL *v12; // r15
  unsigned __int16 *v13; // r14
  __int64 v14; // r9
  __int16 v15; // ax
  void *v16; // rdi
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rax
  __int16 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  unsigned __int8 *v23; // rdi
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 *v27; // r12
  void *v28; // r15
  __int16 v29; // cx
  unsigned __int16 *v30; // r15
  __int16 v31; // dx
  unsigned int v32; // r13d
  int v33; // ecx
  unsigned int v34; // esi
  unsigned int v35; // r14d
  char *PoolWithTag; // rbx
  char *v37; // rdi
  __int64 v38; // rdx
  __int16 v39; // cx
  __int64 v40; // rcx
  __int64 *v41; // rsi
  __int64 v42; // rcx
  char *v43; // rdi
  NTSTATUS ServerAcl; // esi
  void *v45; // r12
  void *v46; // rdi
  void *v47; // rbx
  __int64 v49; // rax
  _BYTE *AceByType; // rax
  _BYTE *v51; // r13
  char *v52; // rax
  void *TokenTrustLevel; // r13
  int v54; // ecx
  __int64 v55; // r8
  int v56; // r11d
  void *v57; // r10
  __int16 v58; // r9
  void *v59; // rdx
  __int64 v60; // r8
  __int16 v61; // ax
  __int16 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  __int16 v65; // cx
  __int64 v66; // rcx
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rcx
  char *AceBySid; // rax
  unsigned __int8 v71; // cl
  unsigned int v72; // eax
  __int64 v73; // rax
  unsigned int v74; // edx
  __int64 v75; // rax
  unsigned int v76; // edx
  _DWORD *v77; // rax
  __int64 v78; // r8
  unsigned int v79; // edx
  int v80; // ebx
  unsigned int v81; // eax
  int v82; // eax
  unsigned int v83; // edx
  unsigned int v84; // edx
  __int64 v85; // r8
  int v86; // eax
  __int64 v87; // rax
  __int16 v88; // dx
  __int64 v89; // rcx
  int v90; // ecx
  char v91; // cl
  __int16 v92; // [rsp+58h] [rbp-B0h]
  ULONG Index; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int8 v94; // [rsp+60h] [rbp-A8h]
  bool v95; // [rsp+61h] [rbp-A7h]
  bool v96; // [rsp+62h] [rbp-A6h]
  char v97; // [rsp+63h] [rbp-A5h]
  char v98; // [rsp+64h] [rbp-A4h]
  char v99; // [rsp+65h] [rbp-A3h]
  char v100; // [rsp+66h] [rbp-A2h]
  char v101; // [rsp+67h] [rbp-A1h]
  __int16 v102; // [rsp+68h] [rbp-A0h]
  char v103; // [rsp+6Ah] [rbp-9Eh]
  __int16 v104; // [rsp+6Bh] [rbp-9Dh] BYREF
  void *Src; // [rsp+70h] [rbp-98h]
  PVOID v106; // [rsp+78h] [rbp-90h]
  NTSTATUS v107; // [rsp+80h] [rbp-88h] BYREF
  PVOID v108; // [rsp+88h] [rbp-80h]
  PVOID v109; // [rsp+90h] [rbp-78h]
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+98h] [rbp-70h] BYREF
  PVOID v111; // [rsp+A0h] [rbp-68h]
  PVOID v112; // [rsp+A8h] [rbp-60h]
  __int64 *v113; // [rsp+B0h] [rbp-58h]
  __int64 v114; // [rsp+B8h] [rbp-50h]
  int v115; // [rsp+C0h] [rbp-48h]
  unsigned int v116; // [rsp+C4h] [rbp-44h]
  void *v117; // [rsp+C8h] [rbp-40h]
  __int64 *v118; // [rsp+D0h] [rbp-38h]
  PVOID P; // [rsp+D8h] [rbp-30h] BYREF
  size_t Size; // [rsp+E0h] [rbp-28h] BYREF
  char *v121; // [rsp+E8h] [rbp-20h]
  __int64 v122; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v123; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v124; // [rsp+100h] [rbp-8h] BYREF
  __int64 v125; // [rsp+108h] [rbp+0h] BYREF
  __int64 v126; // [rsp+110h] [rbp+8h] BYREF
  PVOID v127; // [rsp+118h] [rbp+10h] BYREF
  PVOID v128; // [rsp+120h] [rbp+18h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+128h] [rbp+20h] BYREF
  __int16 Sid; // [rsp+148h] [rbp+40h] BYREF
  int v131; // [rsp+150h] [rbp+48h]

  v8 = a4;
  p_SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)a8;
  v11 = a3;
  v12 = 0LL;
  *(_DWORD *)PoolType.Value = a6;
  v13 = 0LL;
  v114 = a3;
  v113 = a4;
  v118 = a8;
  v98 = 0;
  v97 = 0;
  v99 = 0;
  v104 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v127 = 0LL;
  P = 0LL;
  v108 = 0LL;
  v122 = 0LL;
  v112 = 0LL;
  v124 = 0LL;
  v109 = 0LL;
  v123 = 0LL;
  v106 = 0LL;
  v125 = 0LL;
  v111 = 0LL;
  v126 = 0LL;
  v121 = 0LL;
  v94 = 0;
  LOBYTE(v116) = 0;
  LOBYTE(v115) = 0;
  v92 = 0x8000;
  v128 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v15 = *(_WORD *)(v11 + 2);
  if ( (v15 & 0x10) != 0 )
  {
    if ( v15 >= 0 )
    {
      v16 = *(void **)(v11 + 24);
    }
    else
    {
      v63 = *(unsigned int *)(v11 + 12);
      if ( (_DWORD)v63 )
        v16 = (void *)(v63 + v11);
      else
        v16 = 0LL;
    }
  }
  else
  {
    v16 = 0LL;
  }
  v17 = *v8;
  Src = v16;
  v18 = *(_WORD *)(v17 + 2);
  if ( (v18 & 0x10) != 0 )
  {
    if ( v18 >= 0 )
    {
      v12 = *(ACL **)(v17 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(v17 + 12);
      if ( (_DWORD)v19 )
        v12 = (ACL *)(v17 + v19);
    }
  }
  if ( !a8 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v17 = *v8;
    p_SubjectContext = &SubjectContext;
    v118 = (__int64 *)&SubjectContext;
  }
  if ( *(__int16 *)(v17 + 2) >= 0 )
  {
    ServerAcl = -1073741593;
    goto LABEL_76;
  }
  v20 = *(_WORD *)(v11 + 2);
  v95 = (v20 & 0x80u) != 0;
  v96 = (v20 & 0x40) != 0;
  v21 = a2 & 0x80;
  LOBYTE(v14) = (a2 & 0x100) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v80 = a2 | 0x1FF;
    v81 = v80 & 0xFFFFFF7F;
    if ( v21 )
      v81 = v80;
    a2 = v81 & 0xFFFFFEFF;
    if ( (_BYTE)v14 )
      a2 = v81;
    if ( !v12 && !v16 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v20 & 0x10) != 0 )
      {
        a2 |= 8u;
      }
      else
      {
        v82 = (unsigned __int8)v115;
        if ( (v20 & 0x800) != 0 )
          v82 = 1;
        v115 = v82;
      }
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v17 + 2) >= 0 )
    {
      v23 = *(unsigned __int8 **)(v17 + 8);
    }
    else
    {
      v22 = *(unsigned int *)(v17 + 4);
      if ( !(_DWORD)v22 )
        goto LABEL_248;
      v23 = (unsigned __int8 *)(v17 + v22);
    }
    v117 = v23;
    v24 = v23 == 0LL;
LABEL_16:
    if ( !v24 )
      goto LABEL_17;
LABEL_248:
    ServerAcl = -1073741734;
    goto LABEL_76;
  }
  v72 = a2 >> 2;
  LOBYTE(v72) = (a2 & 4) == 0;
  v116 = v72;
  if ( v20 >= 0 )
  {
    v23 = *(unsigned __int8 **)(v11 + 8);
  }
  else
  {
    v73 = *(unsigned int *)(v11 + 4);
    if ( (_DWORD)v73 )
      v23 = (unsigned __int8 *)(v73 + v11);
    else
      v23 = 0LL;
  }
  v117 = v23;
  v97 = 1;
  if ( (a5 & 8) == 0 )
  {
    v24 = (unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v23, (v20 & 0x80u) != 0, v14) == 0;
    goto LABEL_16;
  }
LABEL_17:
  if ( !RtlValidSid(v23) )
    goto LABEL_248;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v27 = *(unsigned __int8 **)(v11 + 16);
    }
    else
    {
      v75 = *(unsigned int *)(v11 + 8);
      if ( (_DWORD)v75 )
        v27 = (unsigned __int8 *)(v75 + v11);
      else
        v27 = 0LL;
    }
    v98 = 1;
  }
  else
  {
    v25 = *v8;
    if ( *(__int16 *)(*v8 + 2) >= 0 )
    {
      v27 = *(unsigned __int8 **)(v25 + 16);
    }
    else
    {
      v26 = *(unsigned int *)(v25 + 8);
      if ( !(_DWORD)v26 )
      {
LABEL_188:
        ServerAcl = -1073741733;
        goto LABEL_76;
      }
      v27 = (unsigned __int8 *)(v25 + v26);
    }
  }
  if ( !v27 || !RtlValidSid(v27) )
    goto LABEL_188;
  if ( (a2 & 0x1F8) == 0 )
  {
    v13 = (unsigned __int16 *)v12;
    Src = v12;
    v28 = v112;
LABEL_26:
    if ( (a2 & 4) == 0 )
    {
      v64 = *v8;
      v65 = *(_WORD *)(*v8 + 2);
      if ( (v65 & 4) != 0 )
      {
        if ( v65 >= 0 )
        {
          v30 = *(unsigned __int16 **)(v64 + 32);
        }
        else
        {
          v66 = *(unsigned int *)(v64 + 16);
          if ( (_DWORD)v66 )
            v30 = (unsigned __int16 *)(v64 + v66);
          else
            v30 = 0LL;
        }
      }
      else
      {
        v30 = 0LL;
      }
      goto LABEL_34;
    }
    v29 = *(_WORD *)(v11 + 2);
    if ( (a5 & 1) == 0 )
    {
      if ( (v29 & 4) != 0 )
      {
        if ( v29 < 0 )
        {
          v49 = *(unsigned int *)(v11 + 16);
          if ( (_DWORD)v49 )
            v30 = (unsigned __int16 *)(v49 + v11);
          else
            v30 = 0LL;
        }
        else
        {
          v30 = *(unsigned __int16 **)(v11 + 32);
        }
      }
      else
      {
        v30 = 0LL;
      }
      v31 = v29 & 0x1000 | 4 | v92;
      v92 = v31;
      if ( (v29 & 0x500) == 0x500 )
        v92 = v31 | 0x400;
LABEL_33:
      if ( v95 )
      {
        SepGetDefaultsSubjectContext(
          (_DWORD)v118,
          (unsigned int)&Size,
          (unsigned int)&v122,
          (unsigned int)&P,
          (__int64)&v123,
          (__int64)&v124,
          (__int64)&v125,
          (__int64)&v126);
        ServerAcl = RtlpCreateServerAcl((_DWORD)v30, v96, (_DWORD)P, (unsigned int)&v128, (__int64)&v104 + 1);
        if ( ServerAcl < 0 )
        {
LABEL_60:
          if ( v99 )
            ExFreePoolWithTag(v127, 0);
          goto LABEL_62;
        }
        v30 = (unsigned __int16 *)v128;
      }
LABEL_34:
      v32 = 4 * v23[1] + 8;
      v33 = 4 * v27[1] + 8;
      LODWORD(Size) = v33;
      if ( v13 )
        v34 = (v13[1] + 3) & 0xFFFFFFFC;
      else
        v34 = 0;
      if ( v30 )
        v35 = (v30[1] + 3) & 0xFFFFFFFC;
      else
        v35 = 0;
      PoolWithTag = (char *)ExAllocatePoolWithTag(*(POOL_TYPE *)PoolType.Value, v32 + v33 + 20 + v35 + v34, 0x64536553u);
      if ( PoolWithTag )
      {
        v37 = PoolWithTag + 20;
        *(_QWORD *)PoolWithTag = 0LL;
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *((_DWORD *)PoolWithTag + 4) = 0;
        *PoolWithTag = 1;
        if ( (_BYTE)v115 )
          v92 |= 0x800u;
        v38 = v114;
        v39 = v92 | *((_WORD *)PoolWithTag + 1);
        *((_WORD *)PoolWithTag + 1) = v39;
        if ( (*(_WORD *)(v38 + 2) & 0x4000) != 0 )
        {
          PoolWithTag[1] = *(_BYTE *)(v38 + 1);
          *((_WORD *)PoolWithTag + 1) = v39 | 0x4000;
        }
        if ( Src )
        {
          memmove(PoolWithTag + 20, Src, *((unsigned __int16 *)Src + 1));
          RtlpApplyAclToObject(PoolWithTag + 20, a7);
          *((_DWORD *)PoolWithTag + 3) = 20;
          v40 = *((unsigned __int16 *)Src + 1);
          if ( v34 > (unsigned int)v40 )
            memset(&v37[v40], 0, v34 - (unsigned int)v40);
          v37 += v34;
        }
        else
        {
          *((_DWORD *)PoolWithTag + 3) = 0;
        }
        v41 = v113;
        if ( (v92 & 0x10) == 0 )
          *((_WORD *)PoolWithTag + 1) |= *(_WORD *)(*v113 + 2) & 0x2830;
        if ( v30 )
        {
          memmove(v37, v30, v30[1]);
          RtlpApplyAclToObject(v37, a7);
          *((_DWORD *)PoolWithTag + 4) = (_DWORD)v37 - (_DWORD)PoolWithTag;
          v42 = v30[1];
          if ( v35 > (unsigned int)v42 )
            memset(&v37[v42], 0, v35 - (unsigned int)v42);
          v37 += v35;
        }
        else
        {
          *((_DWORD *)PoolWithTag + 4) = 0;
        }
        if ( (v92 & 4) != 0 )
          goto LABEL_54;
        *((_WORD *)PoolWithTag + 1) |= *(_WORD *)(*v41 + 2) & 0x140C;
        if ( !(_BYTE)v116 )
          goto LABEL_54;
        *(_DWORD *)PoolType.Value = 0;
        *(_WORD *)&PoolType.Value[4] = 768;
        ServerAcl = RtlInitializeSid(&Sid, &PoolType, 1u);
        if ( ServerAcl >= 0 )
        {
          v131 = 4;
          Index = 0;
          while ( 1 )
          {
            v67 = *((_WORD *)PoolWithTag + 1);
            if ( (v67 & 4) != 0 )
            {
              if ( v67 >= 0 )
              {
                v69 = *((_QWORD *)PoolWithTag + 4);
              }
              else
              {
                v68 = *((unsigned int *)PoolWithTag + 4);
                v69 = (_DWORD)v68 ? (__int64)&PoolWithTag[v68] : 0LL;
              }
            }
            else
            {
              v69 = 0LL;
            }
            AceBySid = RtlFindAceBySid(v69, &Sid, &Index);
            if ( !AceBySid )
              break;
            v91 = AceBySid[1] & 0xF4 | 8;
            ++Index;
            AceBySid[1] = v91;
          }
          v41 = v113;
LABEL_54:
          memmove(v37, v117, v32);
          *((_DWORD *)PoolWithTag + 1) = (_DWORD)v37 - (_DWORD)PoolWithTag;
          v43 = &v37[v32];
          if ( !v97 )
            *((_WORD *)PoolWithTag + 1) |= *(_WORD *)(*v41 + 2) & 1;
          memmove(v43, v27, (unsigned int)Size);
          v24 = v98 == 0;
          *((_DWORD *)PoolWithTag + 2) = (_DWORD)v43 - (_DWORD)PoolWithTag;
          if ( v24 )
            *((_WORD *)PoolWithTag + 1) |= *(_WORD *)(*v41 + 2) & 2;
          *v41 = (__int64)PoolWithTag;
          ServerAcl = 0;
        }
      }
      else
      {
        ServerAcl = -1073741801;
      }
      v13 = (unsigned __int16 *)Src;
      goto LABEL_60;
    }
    if ( (v29 & 4) != 0 )
    {
      if ( v29 >= 0 )
      {
        v85 = *(_QWORD *)(v11 + 32);
      }
      else
      {
        v86 = *(_DWORD *)(v11 + 16);
        if ( v86 )
          LODWORD(v85) = v86 + v11;
        else
          LODWORD(v85) = 0;
      }
    }
    else
    {
      LODWORD(v85) = 0;
    }
    v87 = *v8;
    v88 = *(_WORD *)(*v8 + 2);
    if ( (v88 & 4) != 0 )
    {
      if ( v88 >= 0 )
      {
        v89 = *(_QWORD *)(v87 + 32);
      }
      else
      {
        v90 = *(_DWORD *)(v87 + 16);
        if ( v90 )
          LODWORD(v89) = v87 + v90;
        else
          LODWORD(v89) = 0;
      }
    }
    else
    {
      LODWORD(v89) = 0;
    }
    ServerAcl = RtlpComputeMergedAcl(
                  v89,
                  v88 & 0x140C,
                  v85,
                  *(_WORD *)(v11 + 2) & 0x140C,
                  (__int64)v23,
                  (__int64)v27,
                  a7,
                  1,
                  (__int64)&v127,
                  (__int64)&Index);
    if ( ServerAcl >= 0 )
    {
      v30 = (unsigned __int16 *)v127;
      v99 = 1;
      v92 |= Index & 0x1408 | 4;
      goto LABEL_33;
    }
LABEL_205:
    v45 = v109;
    goto LABEL_64;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    do
    {
      AceByType = RtlFindAceByType((PACL)Src, 0x11u, &Index);
      v51 = AceByType;
      if ( AceByType )
      {
        v71 = AceByType[1];
        v52 = AceByType + 8;
        v24 = (*((_DWORD *)v51 + 1) & 0xFFFFFFF8) == 0;
        v121 = v52;
        v94 = v71;
        if ( !v24 )
        {
LABEL_189:
          ServerAcl = -1073740730;
          goto LABEL_76;
        }
      }
      else
      {
        v52 = v121;
      }
      if ( !(unsigned __int8)SepValidLabelSubjectContext(v118, v52, v94) )
        goto LABEL_189;
      ++Index;
    }
    while ( v51 );
  }
  TokenTrustLevel = (void *)SepLocateTokenTrustLevel(v118);
  LODWORD(v121) = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
  {
LABEL_88:
    v54 = a2 & 0x100;
    v107 = v54;
    if ( (a2 & 0x100) != 0 )
    {
      ServerAcl = RtlpValidFilterAclSubjectContext((PACL)Src);
      if ( ServerAcl < 0 )
        goto LABEL_76;
      if ( (a5 & 2) == 0 )
      {
        ServerAcl = RtlpValidFilterAclSubjectContext(v12);
        if ( ServerAcl < 0 )
          goto LABEL_76;
      }
      v54 = v107;
      v8 = v113;
    }
    v55 = v114;
    if ( (a2 & 8) != 0 )
    {
      v76 = *(unsigned __int16 *)(v114 + 2);
      if ( (a5 & 2) == 0 )
      {
        v57 = Src;
        v108 = Src;
        v92 = v76 & 0x2000 | 0x8010;
        v56 = (int)Src;
        if ( (v76 & 0xA00) == 0xA00 )
          v92 = v76 & 0x2000 | 0x8810;
LABEL_92:
        if ( (a2 & 0x20) != 0 )
        {
          v74 = *(unsigned __int16 *)(v55 + 2);
          if ( (a5 & 2) != 0 )
          {
            ServerAcl = RtlpComputeMergedAcl(
                          (int)v12,
                          (*(_WORD *)(*v8 + 2) & 0x800 | (*(unsigned __int16 *)(*v8 + 2) >> 1) & 0x18u) >> 1,
                          (int)v57,
                          (v74 & 0x800 | (v74 >> 1) & 0x18) >> 1,
                          (__int64)v23,
                          (__int64)v27,
                          a7,
                          2,
                          (__int64)&v123,
                          (__int64)&Index);
            if ( ServerAcl < 0 )
            {
              v45 = (void *)v123;
              goto LABEL_63;
            }
            v8 = v113;
            v55 = v114;
            v57 = Src;
            v56 = (int)v108;
            v58 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v92;
            v101 = 1;
            v54 = v107;
            v92 = v58;
            v109 = (PVOID)v123;
          }
          else
          {
            v109 = v57;
            v58 = v74 & 0x2000 | 0x10 | v92;
            v92 = v58;
            if ( (v74 & 0xA00) == 0xA00 )
            {
              v58 |= 0x800u;
              v92 = v58;
            }
          }
        }
        else
        {
          v58 = v92;
          v109 = v12;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v83 = *(unsigned __int16 *)(v55 + 2);
          if ( (a5 & 2) != 0 )
          {
            ServerAcl = RtlpComputeMergedAcl(
                          (int)v12,
                          (*(_WORD *)(*v8 + 2) & 0x800 | (*(unsigned __int16 *)(*v8 + 2) >> 1) & 0x18u) >> 1,
                          (int)v57,
                          (v83 & 0x800 | (v83 >> 1) & 0x18) >> 1,
                          (__int64)v23,
                          (__int64)v27,
                          a7,
                          2,
                          (__int64)&v124,
                          (__int64)&Index);
            if ( ServerAcl < 0 )
            {
              v28 = (void *)v124;
              goto LABEL_205;
            }
            v8 = v113;
            v55 = v114;
            v57 = Src;
            v56 = (int)v108;
            v58 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v92;
            LOBYTE(v102) = 1;
            v54 = v107;
            v92 = v58;
            v112 = (PVOID)v124;
          }
          else
          {
            v112 = v57;
            v58 |= v83 & 0x2000 | 0x10;
            v92 = v58;
            if ( (v83 & 0xA00) == 0xA00 )
            {
              v58 |= 0x800u;
              v92 = v58;
            }
          }
        }
        else
        {
          v112 = v12;
        }
        if ( (_DWORD)v121 )
        {
          v79 = *(unsigned __int16 *)(v55 + 2);
          if ( (a5 & 2) == 0 )
          {
            v106 = v57;
            v58 |= v79 & 0x2000 | 0x10;
            v92 = v58;
            v24 = (v79 & 0xA00) == 2560;
            v59 = v57;
            if ( v24 )
            {
              v58 |= 0x800u;
              v92 = v58;
            }
            goto LABEL_99;
          }
          ServerAcl = RtlpComputeMergedAcl(
                        (int)v12,
                        (*(_WORD *)(*v8 + 2) & 0x800 | (*(unsigned __int16 *)(*v8 + 2) >> 1) & 0x18u) >> 1,
                        (int)v57,
                        (v79 & 0x800 | (v79 >> 1) & 0x18) >> 1,
                        (__int64)v23,
                        (__int64)v27,
                        a7,
                        2,
                        (__int64)&v125,
                        (__int64)&Index);
          if ( ServerAcl < 0 )
          {
            v46 = (void *)v125;
            v28 = v112;
            v45 = v109;
            goto LABEL_65;
          }
          v59 = (void *)v125;
          v8 = v113;
          v55 = v114;
          v57 = Src;
          v56 = (int)v108;
          v58 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v92;
          HIBYTE(v102) = 1;
          v54 = v107;
          v92 = v58;
        }
        else
        {
          v59 = v12;
        }
        v106 = v59;
LABEL_99:
        if ( v54 )
        {
          v84 = *(unsigned __int16 *)(v55 + 2);
          v60 = (__int64)v57;
          if ( (a5 & 2) != 0 )
          {
            ServerAcl = RtlpComputeMergedAcl(
                          (int)v12,
                          (*(_WORD *)(*v8 + 2) & 0x800 | (*(unsigned __int16 *)(*v8 + 2) >> 1) & 0x18u) >> 1,
                          (int)v57,
                          (v84 & 0x800 | (v84 >> 1) & 0x18) >> 1,
                          (__int64)v23,
                          (__int64)v27,
                          a7,
                          2,
                          (__int64)&v126,
                          (__int64)&Index);
            if ( ServerAcl < 0 )
            {
              v47 = (void *)v126;
              v46 = v106;
              v28 = v112;
              v45 = v109;
LABEL_66:
              if ( v108 && v100 )
                ExFreePoolWithTag(v108, 0);
              if ( v45 && v101 )
                ExFreePoolWithTag(v45, 0);
              if ( v28 && (_BYTE)v102 )
                ExFreePoolWithTag(v28, 0);
              if ( v46 && HIBYTE(v102) )
                ExFreePoolWithTag(v46, 0);
              if ( v47 && v103 )
                ExFreePoolWithTag(v47, 0);
              if ( v13 && (_BYTE)v104 )
                ExFreePoolWithTag(v13, 0);
              if ( HIBYTE(v104) )
                ExFreePoolWithTag(v128, 0);
              goto LABEL_76;
            }
            v60 = v126;
            LODWORD(v57) = (_DWORD)Src;
            v56 = (int)v108;
            v103 = 1;
            v111 = (PVOID)v126;
            v58 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v92;
            v92 = v58;
          }
          else
          {
            v111 = v57;
            v58 |= v84 & 0x2000 | 0x10;
            v92 = v58;
            if ( (v84 & 0xA00) == 0xA00 )
            {
              v58 |= 0x800u;
              v92 = v58;
            }
          }
          v59 = v106;
        }
        else
        {
          v60 = (__int64)v12;
          v111 = v12;
        }
        v11 = v114;
        if ( (_DWORD)Size )
        {
          v61 = *(_WORD *)(v114 + 2);
          v62 = v61 & 0x2000 | 0x10 | v58;
          v92 = v62;
          if ( (v61 & 0xA00) == 0xA00 )
            v92 = v62 | 0x800;
        }
        else
        {
          LODWORD(v57) = (_DWORD)v12;
        }
        v28 = v112;
        ServerAcl = RtlpCombineAcls(v56, (_DWORD)v57, (_DWORD)v109, (_DWORD)v112, (__int64)v59, v60, (__int64)&P, 0LL);
        if ( ServerAcl < 0 )
          goto LABEL_205;
        v13 = (unsigned __int16 *)P;
        Src = P;
        if ( !v108 && P && !*((_WORD *)P + 2) )
        {
          ExFreePoolWithTag(P, 0);
          v13 = 0LL;
          Src = 0LL;
        }
        v8 = v113;
        LOBYTE(v104) = 1;
        goto LABEL_26;
      }
      ServerAcl = RtlpComputeMergedAcl(
                    (int)v12,
                    (*(_WORD *)(*v8 + 2) & 0x2800 | (*(unsigned __int16 *)(*v8 + 2) >> 1) & 0x18u) >> 1,
                    (int)Src,
                    (v76 & 0x2800 | (v76 >> 1) & 0x18) >> 1,
                    (__int64)v23,
                    (__int64)v27,
                    a7,
                    2,
                    (__int64)&v122,
                    (__int64)&Index);
      if ( ServerAcl < 0 )
      {
        v108 = (PVOID)v122;
LABEL_62:
        v45 = v109;
LABEL_63:
        v28 = v112;
LABEL_64:
        v46 = v106;
LABEL_65:
        v47 = v111;
        goto LABEL_66;
      }
      v56 = v122;
      v8 = v113;
      v55 = v114;
      v100 = 1;
      v108 = (PVOID)v122;
      v92 = 2 * (Index & 0x1400 | (2 * (Index & 8 | 0x2004)));
      v54 = v107;
    }
    else
    {
      v56 = (int)v12;
      v108 = v12;
    }
    v57 = Src;
    goto LABEL_92;
  }
  if ( TokenTrustLevel )
  {
    Index = 0;
    while ( 1 )
    {
      v77 = RtlFindAceByType((PACL)Src, 0x14u, &Index);
      v108 = v77;
      if ( v77 )
      {
        if ( (v77[1] & 0xFF000000) != 0 )
          goto LABEL_189;
        if ( !RtlpValidTrustSubjectContext(TokenTrustLevel, v77 + 2, v78, &v107) )
          break;
        v77 = v108;
      }
      ++Index;
      if ( !v77 )
        goto LABEL_88;
    }
  }
  ServerAcl = -1073741790;
LABEL_76:
  if ( v118 == (__int64 *)&SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)ServerAcl;
}
