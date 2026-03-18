/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x140621638
 * Callers:
 *     NtSetSecurityObject @ 0x140621290 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeMaximumAuditMask @ 0x14031C4D0 (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4D78 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SepQueryNameString @ 0x140620310 (SepQueryNameString.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406235B0 (SepAdtAuditThisEventWithContext.c)
 *     SepQueryTypeString @ 0x1408DDA2C (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408E1C40 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
 *     SepIsAclEqual @ 0x1408E3014 (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x1408E3094 (SepIsSidEqual.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v14; // ebx
  int v15; // edi
  __int64 v16; // r13
  __int64 v17; // rdx
  PACCESS_TOKEN PrimaryToken; // rcx
  __int64 v19; // rdx
  char v20; // r15
  __int64 v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // r15
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rcx
  __int16 v29; // ax
  __int64 v30; // rdx
  __int64 v31; // r8
  _WORD *v32; // r12
  __int16 v33; // ax
  _WORD *v34; // r13
  __int16 v35; // r11
  _WORD *v36; // r10
  __int16 v37; // r8
  _WORD *v38; // r15
  _WORD *v39; // r14
  __int16 v40; // dx
  unsigned int v41; // eax
  __int64 v42; // rax
  __int16 v43; // ax
  __int64 v44; // rax
  unsigned __int16 v45; // ax
  __int64 v46; // rsi
  SIZE_T v47; // rax
  unsigned __int16 *v48; // r13
  __int64 v49; // rdi
  unsigned __int16 *p_Length; // r12
  unsigned int v51; // ebx
  __int16 v52; // ax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int16 v55; // ax
  __int64 v56; // rax
  __int16 v57; // ax
  __int64 v58; // rax
  unsigned __int16 v59; // ax
  __int16 v60; // ax
  unsigned __int16 v61; // ax
  __int64 v62; // rsi
  SIZE_T v63; // rax
  unsigned __int16 v64; // ax
  __int64 v65; // rsi
  SIZE_T v66; // rax
  bool v67; // cf
  unsigned __int16 v68; // ax
  __int64 v69; // rsi
  SIZE_T v70; // rax
  int v71; // edi
  ACCESS_MASK v72; // edi
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int16 v81; // ax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int16 v84; // ax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // [rsp+38h] [rbp-B9h]
  _WORD *v88; // [rsp+58h] [rbp-99h]
  __int64 v89; // [rsp+60h] [rbp-91h]
  int v90; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+6Ch] [rbp-85h] BYREF
  int TypeString; // [rsp+70h] [rbp-81h]
  UNICODE_STRING *v93; // [rsp+78h] [rbp-79h]
  unsigned int v94; // [rsp+80h] [rbp-71h]
  PACCESS_TOKEN Token; // [rsp+88h] [rbp-69h]
  PVOID P; // [rsp+90h] [rbp-61h] BYREF
  PVOID v97[2]; // [rsp+98h] [rbp-59h] BYREF
  void *v98; // [rsp+A8h] [rbp-49h]
  void *Source2; // [rsp+B0h] [rbp-41h]
  unsigned __int16 *v100; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v102; // [rsp+138h] [rbp+47h]
  __int16 v104; // [rsp+150h] [rbp+5Fh]
  __int16 v105; // [rsp+160h] [rbp+6Fh]

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v14 = 0;
  AuditMask = 0;
  P = 0LL;
  v15 = 0;
  v97[0] = 0LL;
  v16 = 0LL;
  v100 = 0LL;
  v93 = 0LL;
  TypeString = 0;
  v94 = 0;
  v90 = 0;
  v98 = 0LL;
  v102 = 0;
  v88 = 0LL;
  v104 = 0;
  Source2 = 0LL;
  v105 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  if ( !PrimaryToken )
  {
    SepAuditFailed(3221225596LL);
    return;
  }
  LOBYTE(v17) = 1;
  v20 = SepAdtAuditThisEventWithContext(141LL, v17, 0LL, &SubjectContext);
  if ( v20 && a11 )
    v15 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    LOBYTE(v19) = 1;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(139LL, v19, 0LL, &SubjectContext) )
      v15 |= a8 & 8;
    if ( v20 && a12 )
      v15 |= a8 & 0x40;
  }
  if ( !a3 || !a3->Length )
  {
    if ( !a2 )
    {
      a3 = 0LL;
      goto LABEL_9;
    }
    TypeString = SepQueryTypeString(a2, v97);
    if ( TypeString < 0 )
      goto LABEL_94;
    a3 = 0LL;
    if ( v97[0] )
      a3 = (UNICODE_STRING *)v97[0];
  }
  v93 = a3;
LABEL_9:
  v21 = a10;
  v22 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) == 0 )
    goto LABEL_10;
  v52 = *(_WORD *)(a10 + 2);
  if ( (v52 & 0x10) == 0 )
    goto LABEL_114;
  if ( v52 >= 0 )
  {
    v54 = *(_QWORD *)(a10 + 24);
    goto LABEL_116;
  }
  v53 = *(unsigned int *)(a10 + 12);
  if ( (_DWORD)v53 )
    v54 = a10 + v53;
  else
LABEL_114:
    v54 = 0LL;
LABEL_116:
  SeMaximumAuditMask(v54, v22, (__int64)Token, &AuditMask);
  SeMaximumAuditMaskFromGlobalSacl(a3, v22, Token, &AuditMask);
  if ( (AuditMask & 0x80000) != 0 && v20 )
    v15 |= a8 & 0x10;
LABEL_10:
  v23 = a13;
  v24 = *(_WORD *)(a13 + 2);
  if ( (v24 & 0x10) == 0 )
  {
LABEL_72:
    v26 = 0LL;
    goto LABEL_14;
  }
  if ( v24 < 0 )
  {
    v25 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v25 )
    {
      v26 = a13 + v25;
      goto LABEL_14;
    }
    goto LABEL_72;
  }
  v26 = *(_QWORD *)(a13 + 24);
LABEL_14:
  v89 = v26;
  if ( !a10 )
    goto LABEL_15;
  v43 = *(_WORD *)(a10 + 2);
  if ( (v43 & 0x10) == 0 )
    goto LABEL_70;
  if ( v43 >= 0 )
  {
    v16 = *(_QWORD *)(a10 + 24);
  }
  else
  {
    v44 = *(unsigned int *)(a10 + 12);
    if ( !(_DWORD)v44 )
    {
LABEL_70:
      v16 = 0LL;
      goto LABEL_15;
    }
    v16 = a10 + v44;
  }
LABEL_15:
  v27 = a9;
  if ( !a9 )
  {
    v28 = 0LL;
    goto LABEL_17;
  }
  v55 = *(_WORD *)(a9 + 2);
  if ( (v55 & 0x10) == 0 )
  {
LABEL_125:
    v28 = 0LL;
    goto LABEL_17;
  }
  if ( v55 < 0 )
  {
    v56 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v56 )
    {
      v28 = a9 + v56;
      goto LABEL_17;
    }
    goto LABEL_125;
  }
  v28 = *(_QWORD *)(a9 + 24);
LABEL_17:
  if ( a11 )
  {
    v29 = *(_WORD *)(a11 + 2);
    if ( (v29 & 0x10) == 0 )
    {
LABEL_19:
      v30 = 0LL;
      goto LABEL_20;
    }
    if ( v29 >= 0 )
    {
      v30 = *(_QWORD *)(a11 + 24);
    }
    else
    {
      v42 = *(unsigned int *)(a11 + 12);
      if ( !(_DWORD)v42 )
        goto LABEL_19;
      v30 = a11 + v42;
    }
  }
  else
  {
    v30 = 0LL;
  }
LABEL_20:
  if ( !a12 )
  {
    v31 = 0LL;
    goto LABEL_22;
  }
  v57 = *(_WORD *)(a12 + 2);
  if ( (v57 & 0x10) == 0 )
  {
LABEL_132:
    v31 = 0LL;
    goto LABEL_22;
  }
  if ( v57 < 0 )
  {
    v58 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v58 )
    {
      v31 = a12 + v58;
      goto LABEL_22;
    }
    goto LABEL_132;
  }
  v31 = *(_QWORD *)(a12 + 24);
LABEL_22:
  if ( !v26 || !*(_WORD *)(v26 + 4) )
  {
    if ( v16 && *(_WORD *)(v16 + 4) )
      v14 = v15 & 8;
    if ( v28 && *(_WORD *)(v28 + 4) )
      v14 |= v15 & 0x10;
    if ( v30 && *(_WORD *)(v30 + 4) )
      v14 |= v15 & 0x20;
    if ( v31 && *(_WORD *)(v31 + 4) )
    {
      v71 = v15 & 0x40;
LABEL_169:
      v14 |= v71;
    }
    goto LABEL_28;
  }
  if ( !v15 )
    goto LABEL_28;
  v32 = (_WORD *)(v26 + 8);
  if ( v16 && (v33 = *(_WORD *)(v16 + 4)) != 0 )
  {
    v34 = (_WORD *)(v16 + 8);
    v102 = v33;
    v35 = v33;
  }
  else
  {
    v35 = 0;
    v34 = 0LL;
  }
  if ( v28 )
  {
    v59 = *(_WORD *)(v28 + 4);
    if ( v59 )
    {
      v98 = (void *)(v28 + 8);
      v90 = v59;
    }
  }
  if ( v30 && *(_WORD *)(v30 + 4) )
  {
    v36 = (_WORD *)(v30 + 8);
    v104 = *(_WORD *)(v30 + 4);
    v88 = (_WORD *)(v30 + 8);
  }
  else
  {
    v36 = 0LL;
  }
  if ( v31 && (v60 = *(_WORD *)(v31 + 4)) != 0 )
  {
    v105 = *(_WORD *)(v31 + 4);
    Source2 = (void *)(v31 + 8);
    v37 = v60;
  }
  else
  {
    v37 = 0;
  }
  v38 = v98;
  v39 = Source2;
  do
  {
    switch ( *(_BYTE *)v32 )
    {
      case 0x11:
        if ( (v15 & 0x10) == 0 )
          goto LABEL_52;
        if ( !v38
          || (v68 = v38[1], v32[1] != v68)
          || (v69 = v68, v70 = RtlCompareMemory(v32, v38, v68), v26 = v89, v70 != v69) )
        {
          v35 = v102;
          v14 |= 0x10u;
          v15 &= ~0x10u;
          goto LABEL_81;
        }
        v38 = (_WORD *)(((unsigned __int64)v38 + v69) & -(__int64)(--v90 != 0));
        goto LABEL_49;
      case 0x12:
        if ( (v15 & 0x20) == 0 )
          goto LABEL_52;
        if ( v36 )
        {
          v64 = v36[1];
          if ( v32[1] == v64 )
          {
            v65 = v64;
            v66 = RtlCompareMemory(v32, v36, v64);
            v26 = v89;
            if ( v66 == v65 )
            {
              v40 = v104 - 1;
              v35 = v102;
              v37 = v105;
              v67 = v104-- != 1;
              v36 = (_WORD *)(((unsigned __int64)v88 + v65) & -(__int64)v67);
              v88 = v36;
              goto LABEL_53;
            }
            v36 = v88;
          }
        }
        v14 |= 0x20u;
        v15 &= ~0x20u;
        goto LABEL_50;
      case 0x13:
        if ( (v15 & 0x40) == 0 )
          goto LABEL_52;
        if ( v39 )
        {
          v61 = v39[1];
          if ( v32[1] == v61 )
          {
            v62 = v61;
            v63 = RtlCompareMemory(v32, v39, v61);
            v26 = v89;
            if ( v63 == v62 )
            {
              v36 = v88;
              v35 = v102;
              v37 = --v105;
              v39 = (_WORD *)(((unsigned __int64)v39 + v62) & -(__int64)(v105 != 0));
              goto LABEL_52;
            }
          }
        }
        v14 |= 0x40u;
        v15 &= ~0x40u;
LABEL_49:
        v36 = v88;
LABEL_50:
        v35 = v102;
LABEL_51:
        v37 = v105;
        goto LABEL_52;
    }
    if ( (v15 & 8) != 0 )
    {
      if ( v34 )
      {
        if ( *(_BYTE *)v34 == *(_BYTE *)v32 )
        {
          v45 = v34[1];
          if ( v32[1] == v45 )
          {
            v46 = v45;
            v47 = RtlCompareMemory(v32, v34, v45);
            v26 = v89;
            if ( v47 == v46 )
            {
              v35 = --v102;
              v34 = (_WORD *)(((unsigned __int64)v34 + v46) & -(__int64)(v102 != 0));
LABEL_81:
              v36 = v88;
              goto LABEL_51;
            }
          }
        }
      }
      v14 |= 8u;
      v15 &= ~8u;
      goto LABEL_49;
    }
LABEL_52:
    v40 = v104;
LABEL_53:
    v32 = (_WORD *)((char *)v32 + (unsigned __int16)v32[1]);
    v41 = *(unsigned __int16 *)(v26 + 4);
    ++v94;
  }
  while ( v94 < v41 && v15 );
  v27 = a9;
  v23 = a13;
  if ( v35 )
    v14 |= v15 & 8;
  if ( v40 )
    v14 |= v15 & 0x20;
  if ( v37 )
    v14 |= v15 & 0x40;
  v21 = a10;
  if ( v90 )
  {
    v71 = v15 & 0x10;
    goto LABEL_169;
  }
LABEL_28:
  if ( v27 )
  {
    v72 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v74 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          v73 = *(unsigned int *)(v23 + 4);
          v74 = (_DWORD)v73 ? v23 + v73 : 0LL;
        }
        if ( *(__int16 *)(v27 + 2) >= 0 )
        {
          v76 = *(_QWORD *)(v27 + 8);
        }
        else
        {
          v75 = *(unsigned int *)(v27 + 4);
          v76 = (_DWORD)v75 ? v27 + v75 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v76, v74) )
          v14 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v78 = *(_QWORD *)(v23 + 16);
        }
        else
        {
          v77 = *(unsigned int *)(v23 + 8);
          v78 = (_DWORD)v77 ? v23 + v77 : 0LL;
        }
        if ( *(__int16 *)(v27 + 2) >= 0 )
        {
          v80 = *(_QWORD *)(v27 + 16);
        }
        else
        {
          v79 = *(unsigned int *)(v27 + 8);
          v80 = (_DWORD)v79 ? v27 + v79 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v80, v78) )
          v14 |= 2u;
      }
    }
    if ( (v72 & 0x40000) != 0 )
    {
      v81 = *(_WORD *)(v23 + 2);
      if ( (v81 & 4) == 0 )
        goto LABEL_202;
      if ( v81 >= 0 )
      {
        v83 = *(_QWORD *)(v23 + 32);
      }
      else
      {
        v82 = *(unsigned int *)(v23 + 16);
        if ( (_DWORD)v82 )
        {
          v83 = v23 + v82;
          goto LABEL_204;
        }
LABEL_202:
        v83 = 0LL;
      }
LABEL_204:
      v84 = *(_WORD *)(v27 + 2);
      if ( (v84 & 4) == 0 )
        goto LABEL_208;
      if ( v84 >= 0 )
      {
        v86 = *(_QWORD *)(v27 + 32);
        goto LABEL_210;
      }
      v85 = *(unsigned int *)(v27 + 16);
      if ( (_DWORD)v85 )
        v86 = v27 + v85;
      else
LABEL_208:
        v86 = 0LL;
LABEL_210:
      if ( !(unsigned __int8)SepIsAclEqual(v86, v83) )
        v14 |= 4u;
    }
  }
  if ( v14 )
  {
    if ( !a2 )
    {
      v48 = v100;
LABEL_86:
      v49 = **((_QWORD **)Token + 19);
      if ( (v14 & 8) != 0 )
      {
        v87 = v21;
        p_Length = &v93->Length;
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          &v93->Length,
          v48,
          a5,
          v49,
          v87,
          8u,
          v23);
      }
      else
      {
        p_Length = &v93->Length;
      }
      if ( (v14 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          p_Length,
          v48,
          a5,
          v49,
          a11,
          0x20u,
          v23);
      if ( (v14 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          p_Length,
          v48,
          a5,
          v49,
          a12,
          0x40u,
          v23);
      v51 = v14 & 0xFFFFFF97;
      if ( v51 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          p_Length,
          v48,
          a5,
          v49,
          v27,
          v51,
          v23);
      goto LABEL_94;
    }
    TypeString = SepQueryNameString(a2, &P);
    if ( TypeString >= 0 )
    {
      v48 = v100;
      if ( P )
        v48 = (unsigned __int16 *)P;
      goto LABEL_86;
    }
LABEL_94:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v97[0] )
      ExFreePoolWithTag(v97[0], 0);
  }
  if ( TypeString < 0 )
    SepAuditFailed((unsigned int)TypeString);
  SeReleaseSubjectContext(&SubjectContext);
}
