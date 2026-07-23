/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x1405BB094
 * Callers:
 *     NtSetSecurityObject @ 0x1405BACF0 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     SeMaximumAuditMask @ 0x1402FEA60 (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SepQueryNameString @ 0x14065ED54 (SepQueryNameString.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408A0430 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x1408A0BD8 (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408A4C60 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepIsAclEqual @ 0x1408A4DFC (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x1408A4E7C (SepIsSidEqual.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // ebx
  int v14; // edi
  __int64 v15; // r13
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
  __int64 v32; // rax
  __int16 v33; // ax
  __int64 v34; // rax
  __int16 v35; // ax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rax
  __int16 v40; // ax
  __int64 v41; // rax
  _WORD *v42; // r12
  __int16 v43; // ax
  _WORD *v44; // r13
  __int16 v45; // r11
  unsigned __int16 v46; // ax
  _WORD *v47; // r10
  __int16 v48; // ax
  __int16 v49; // r8
  _WORD *v50; // r15
  _WORD *v51; // r14
  unsigned __int16 v52; // ax
  __int64 v53; // rsi
  SIZE_T v54; // rax
  unsigned __int16 v55; // ax
  __int64 v56; // rsi
  SIZE_T v57; // rax
  unsigned __int16 v58; // ax
  __int64 v59; // rsi
  SIZE_T v60; // rax
  __int16 v61; // dx
  bool v62; // cf
  unsigned __int16 v63; // ax
  __int64 v64; // rsi
  SIZE_T v65; // rax
  unsigned int v66; // eax
  int v67; // edi
  ACCESS_MASK v68; // edi
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int16 v77; // ax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int16 v80; // ax
  __int64 v81; // rax
  __int64 v82; // rcx
  int v83; // r13d
  __int64 v84; // rdi
  int v85; // r12d
  unsigned int v86; // ebx
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
  __int64 v100; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v102; // [rsp+138h] [rbp+47h]
  __int16 v104; // [rsp+150h] [rbp+5Fh]
  __int16 v105; // [rsp+160h] [rbp+6Fh]

  v13 = 0;
  AuditMask = 0;
  P = 0LL;
  v14 = 0;
  v97[0] = 0LL;
  v15 = 0LL;
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
  v20 = SepAdtAuditThisEventWithContext(142LL, v17, 0LL, &SubjectContext);
  if ( v20 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    LOBYTE(v19) = 1;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(140LL, v19, 0LL, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v20 && a12 )
      v14 |= a8 & 0x40;
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
      goto LABEL_210;
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
  v35 = *(_WORD *)(a10 + 2);
  if ( (v35 & 0x10) == 0 )
    goto LABEL_66;
  if ( v35 >= 0 )
  {
    v37 = *(_QWORD *)(a10 + 24);
    goto LABEL_68;
  }
  v36 = *(unsigned int *)(a10 + 12);
  if ( (_DWORD)v36 )
    v37 = a10 + v36;
  else
LABEL_66:
    v37 = 0LL;
LABEL_68:
  SeMaximumAuditMask(v37, v22, (__int64)Token, &AuditMask);
  SeMaximumAuditMaskFromGlobalSacl(a3, v22, Token, &AuditMask);
  if ( (AuditMask & 0x80000) != 0 && v20 )
    v14 |= a8 & 0x10;
LABEL_10:
  v23 = a13;
  v24 = *(_WORD *)(a13 + 2);
  if ( (v24 & 0x10) == 0 )
  {
LABEL_50:
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
    goto LABEL_50;
  }
  v26 = *(_QWORD *)(a13 + 24);
LABEL_14:
  v89 = v26;
  if ( !a10 )
    goto LABEL_15;
  v33 = *(_WORD *)(a10 + 2);
  if ( (v33 & 0x10) == 0 )
  {
LABEL_47:
    v15 = 0LL;
    goto LABEL_15;
  }
  if ( v33 < 0 )
  {
    v34 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v34 )
    {
      v15 = a10 + v34;
      goto LABEL_15;
    }
    goto LABEL_47;
  }
  v15 = *(_QWORD *)(a10 + 24);
LABEL_15:
  v27 = a9;
  if ( !a9 )
  {
    v28 = 0LL;
    goto LABEL_17;
  }
  v38 = *(_WORD *)(a9 + 2);
  if ( (v38 & 0x10) == 0 )
  {
LABEL_77:
    v28 = 0LL;
    goto LABEL_17;
  }
  if ( v38 < 0 )
  {
    v39 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v39 )
    {
      v28 = a9 + v39;
      goto LABEL_17;
    }
    goto LABEL_77;
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
      v32 = *(unsigned int *)(a11 + 12);
      if ( !(_DWORD)v32 )
        goto LABEL_19;
      v30 = a11 + v32;
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
  v40 = *(_WORD *)(a12 + 2);
  if ( (v40 & 0x10) == 0 )
  {
LABEL_84:
    v31 = 0LL;
    goto LABEL_22;
  }
  if ( v40 < 0 )
  {
    v41 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v41 )
    {
      v31 = a12 + v41;
      goto LABEL_22;
    }
    goto LABEL_84;
  }
  v31 = *(_QWORD *)(a12 + 24);
LABEL_22:
  if ( !v26 || !*(_WORD *)(v26 + 4) )
  {
    if ( v15 && *(_WORD *)(v15 + 4) )
      v13 = v14 & 8;
    if ( v28 && *(_WORD *)(v28 + 4) )
      v13 |= v14 & 0x10;
    if ( v30 && *(_WORD *)(v30 + 4) )
      v13 |= v14 & 0x20;
    if ( v31 && *(_WORD *)(v31 + 4) )
    {
      v67 = v14 & 0x40;
LABEL_152:
      v13 |= v67;
    }
    goto LABEL_28;
  }
  if ( !v14 )
    goto LABEL_28;
  v42 = (_WORD *)(v26 + 8);
  if ( v15 && (v43 = *(_WORD *)(v15 + 4)) != 0 )
  {
    v44 = (_WORD *)(v15 + 8);
    v102 = v43;
    v45 = v43;
  }
  else
  {
    v45 = 0;
    v44 = 0LL;
  }
  if ( v28 )
  {
    v46 = *(_WORD *)(v28 + 4);
    if ( v46 )
    {
      v98 = (void *)(v28 + 8);
      v90 = v46;
    }
  }
  if ( v30 && *(_WORD *)(v30 + 4) )
  {
    v47 = (_WORD *)(v30 + 8);
    v104 = *(_WORD *)(v30 + 4);
    v88 = (_WORD *)(v30 + 8);
  }
  else
  {
    v47 = 0LL;
  }
  if ( v31 && (v48 = *(_WORD *)(v31 + 4)) != 0 )
  {
    v105 = *(_WORD *)(v31 + 4);
    Source2 = (void *)(v31 + 8);
    v49 = v48;
  }
  else
  {
    v49 = 0;
  }
  v50 = v98;
  v51 = Source2;
  do
  {
    if ( *(_BYTE *)v42 == 17 )
    {
      if ( (v14 & 0x10) == 0 )
        goto LABEL_135;
      if ( !v50
        || (v63 = v50[1], v42[1] != v63)
        || (v64 = v63, v65 = RtlCompareMemory(v42, v50, v63), v26 = v89, v65 != v64) )
      {
        v45 = v102;
        v13 |= 0x10u;
        v14 &= ~0x10u;
        goto LABEL_133;
      }
      v50 = (_WORD *)(((unsigned __int64)v50 + v64) & -(__int64)(--v90 != 0));
LABEL_113:
      v47 = v88;
      goto LABEL_116;
    }
    if ( *(_BYTE *)v42 != 18 )
    {
      if ( *(_BYTE *)v42 == 19 )
      {
        if ( (v14 & 0x40) == 0 )
          goto LABEL_135;
        if ( v51 )
        {
          v55 = v51[1];
          if ( v42[1] == v55 )
          {
            v56 = v55;
            v57 = RtlCompareMemory(v42, v51, v55);
            v26 = v89;
            if ( v57 == v56 )
            {
              v47 = v88;
              v45 = v102;
              v49 = --v105;
              v51 = (_WORD *)(((unsigned __int64)v51 + v56) & -(__int64)(v105 != 0));
              goto LABEL_135;
            }
          }
        }
        v13 |= 0x40u;
        v14 &= ~0x40u;
      }
      else
      {
        if ( (v14 & 8) == 0 )
          goto LABEL_135;
        if ( v44 )
        {
          if ( *(_BYTE *)v44 == *(_BYTE *)v42 )
          {
            v52 = v44[1];
            if ( v42[1] == v52 )
            {
              v53 = v52;
              v54 = RtlCompareMemory(v42, v44, v52);
              v26 = v89;
              if ( v54 == v53 )
              {
                v45 = --v102;
                v44 = (_WORD *)(((unsigned __int64)v44 + v53) & -(__int64)(v102 != 0));
LABEL_133:
                v47 = v88;
                goto LABEL_134;
              }
            }
          }
        }
        v13 |= 8u;
        v14 &= ~8u;
      }
      goto LABEL_113;
    }
    if ( (v14 & 0x20) == 0 )
      goto LABEL_135;
    if ( !v47 )
      goto LABEL_115;
    v58 = v47[1];
    if ( v42[1] != v58 )
      goto LABEL_115;
    v59 = v58;
    v60 = RtlCompareMemory(v42, v47, v58);
    v26 = v89;
    if ( v60 != v59 )
    {
      v47 = v88;
LABEL_115:
      v13 |= 0x20u;
      v14 &= ~0x20u;
LABEL_116:
      v45 = v102;
LABEL_134:
      v49 = v105;
LABEL_135:
      v61 = v104;
      goto LABEL_136;
    }
    v61 = v104 - 1;
    v45 = v102;
    v49 = v105;
    v62 = v104-- != 1;
    v47 = (_WORD *)(((unsigned __int64)v88 + v59) & -(__int64)v62);
    v88 = v47;
LABEL_136:
    v42 = (_WORD *)((char *)v42 + (unsigned __int16)v42[1]);
    v66 = *(unsigned __int16 *)(v26 + 4);
    ++v94;
  }
  while ( v94 < v66 && v14 );
  v27 = a9;
  v23 = a13;
  if ( v45 )
    v13 |= v14 & 8;
  if ( v61 )
    v13 |= v14 & 0x20;
  if ( v49 )
    v13 |= v14 & 0x40;
  v21 = a10;
  if ( v90 )
  {
    v67 = v14 & 0x10;
    goto LABEL_152;
  }
LABEL_28:
  if ( v27 )
  {
    v68 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v70 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          v69 = *(unsigned int *)(v23 + 4);
          v70 = (_DWORD)v69 ? v23 + v69 : 0LL;
        }
        if ( *(__int16 *)(v27 + 2) >= 0 )
        {
          v72 = *(_QWORD *)(v27 + 8);
        }
        else
        {
          v71 = *(unsigned int *)(v27 + 4);
          v72 = (_DWORD)v71 ? v27 + v71 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v72, v70) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v74 = *(_QWORD *)(v23 + 16);
        }
        else
        {
          v73 = *(unsigned int *)(v23 + 8);
          v74 = (_DWORD)v73 ? v23 + v73 : 0LL;
        }
        if ( *(__int16 *)(v27 + 2) >= 0 )
        {
          v76 = *(_QWORD *)(v27 + 16);
        }
        else
        {
          v75 = *(unsigned int *)(v27 + 8);
          v76 = (_DWORD)v75 ? v27 + v75 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v76, v74) )
          v13 |= 2u;
      }
    }
    if ( (v68 & 0x40000) != 0 )
    {
      v77 = *(_WORD *)(v23 + 2);
      if ( (v77 & 4) == 0 )
        goto LABEL_185;
      if ( v77 >= 0 )
      {
        v79 = *(_QWORD *)(v23 + 32);
      }
      else
      {
        v78 = *(unsigned int *)(v23 + 16);
        if ( (_DWORD)v78 )
        {
          v79 = v23 + v78;
          goto LABEL_187;
        }
LABEL_185:
        v79 = 0LL;
      }
LABEL_187:
      v80 = *(_WORD *)(v27 + 2);
      if ( (v80 & 4) == 0 )
        goto LABEL_191;
      if ( v80 >= 0 )
      {
        v82 = *(_QWORD *)(v27 + 32);
        goto LABEL_193;
      }
      v81 = *(unsigned int *)(v27 + 16);
      if ( (_DWORD)v81 )
        v82 = v27 + v81;
      else
LABEL_191:
        v82 = 0LL;
LABEL_193:
      if ( !(unsigned __int8)SepIsAclEqual(v82, v79) )
        v13 |= 4u;
    }
  }
  if ( v13 )
  {
    if ( !a2 )
    {
      v83 = v100;
LABEL_201:
      v84 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
      {
        v87 = v21;
        v85 = (int)v93;
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          (_DWORD)v93,
          v83,
          a5,
          v84,
          v87,
          8,
          v23);
      }
      else
      {
        v85 = (int)v93;
      }
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v85,
          v83,
          a5,
          v84,
          a11,
          32,
          v23);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v85,
          v83,
          a5,
          v84,
          a12,
          64,
          v23);
      v86 = v13 & 0xFFFFFF97;
      if ( v86 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v85,
          v83,
          a5,
          v84,
          v27,
          v86,
          v23);
      goto LABEL_210;
    }
    TypeString = SepQueryNameString(a2, &P);
    if ( TypeString >= 0 )
    {
      v83 = v100;
      if ( P )
        v83 = (int)P;
      goto LABEL_201;
    }
LABEL_210:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v97[0] )
      ExFreePoolWithTag(v97[0], 0);
  }
  if ( TypeString < 0 )
    SepAuditFailed((unsigned int)TypeString);
  SeReleaseSubjectContext(&SubjectContext);
}
