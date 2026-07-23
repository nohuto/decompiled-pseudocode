/*
 * XREFs of SeLogAccessFailure @ 0x140118F70
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SepFlattenAcl @ 0x1402FF640 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1402FF7C0 (SepGetLearningModeObjectInformation.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x14064A470 (PsReferenceEffectiveToken.c)
 */

void __fastcall SeLogAccessFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONGLONG a4,
        ULONGLONG a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // al
  const wchar_t *v10; // rax
  ULONG v11; // eax
  const wchar_t *v12; // rax
  __int64 LearningModeObjectInformation; // rax
  PVOID *v14; // r13
  unsigned __int16 *v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int16 *v18; // rdx
  const size_t *v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  int *v25; // rax
  unsigned int v26; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v28; // rdi
  int **v29; // rcx
  _QWORD *v30; // rax
  unsigned int v31; // edi
  ULONGLONG v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  ULONG v35; // esi
  unsigned int v36; // eax
  __int64 *v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rax
  PVOID v40; // rax
  _DWORD *v41; // r12
  unsigned int v42; // ecx
  unsigned int v43; // r13d
  __int64 v44; // rbx
  unsigned __int8 *v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // edi
  __int64 v48; // rax
  __int64 v49; // rax
  ULONGLONG v50; // r8
  unsigned int v51; // edx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // edx
  __int64 v56; // rcx
  unsigned int v57; // edx
  __int16 v58; // r9
  __int64 v59; // rax
  unsigned __int8 *v60; // r8
  __int64 v61; // rcx
  unsigned int v62; // edx
  int v63; // eax
  __int64 v64; // rax
  unsigned __int8 *v65; // r8
  __int64 v66; // rcx
  unsigned int v67; // edx
  int v68; // eax
  __int64 v69; // rax
  ULONGLONG v70; // rsi
  unsigned int v71; // edi
  __int64 v72; // rbx
  int v73; // eax
  PVOID v74; // r12
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned int v79; // ecx
  __int64 v80; // rax
  ULONGLONG v81; // rsi
  unsigned int v82; // edi
  __int64 v83; // rbx
  int v84; // eax
  PVOID v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int16 v89; // [rsp+48h] [rbp-C0h] BYREF
  char v90[2]; // [rsp+4Ah] [rbp-BEh] BYREF
  _WORD v91[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v92; // [rsp+50h] [rbp-B8h] BYREF
  int v93; // [rsp+54h] [rbp-B4h] BYREF
  int v94; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v95; // [rsp+5Ch] [rbp-ACh] BYREF
  int v96; // [rsp+60h] [rbp-A8h] BYREF
  int v97; // [rsp+64h] [rbp-A4h] BYREF
  int v98; // [rsp+68h] [rbp-A0h] BYREF
  int v99; // [rsp+6Ch] [rbp-9Ch] BYREF
  PVOID v100; // [rsp+70h] [rbp-98h] BYREF
  PVOID v101; // [rsp+78h] [rbp-90h]
  int v102; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v103; // [rsp+84h] [rbp-84h]
  int v104; // [rsp+88h] [rbp-80h] BYREF
  int v105; // [rsp+8Ch] [rbp-7Ch] BYREF
  PVOID v106; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v107; // [rsp+98h] [rbp-70h]
  ULONGLONG v108; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  const size_t *v111; // [rsp+C8h] [rbp-40h]
  __int64 v112; // [rsp+D0h] [rbp-38h]
  const size_t *v113; // [rsp+D8h] [rbp-30h]
  __int64 v114; // [rsp+E0h] [rbp-28h]
  const size_t *v115; // [rsp+E8h] [rbp-20h]
  __int64 v116; // [rsp+F0h] [rbp-18h]
  const size_t *v117; // [rsp+F8h] [rbp-10h]
  __int64 v118; // [rsp+100h] [rbp-8h]
  char *v119; // [rsp+108h] [rbp+0h]
  __int64 v120; // [rsp+110h] [rbp+8h]
  int *v121; // [rsp+118h] [rbp+10h]
  __int64 v122; // [rsp+120h] [rbp+18h]
  int *v123; // [rsp+128h] [rbp+20h]
  __int64 v124; // [rsp+130h] [rbp+28h]
  __int64 v125; // [rsp+138h] [rbp+30h]
  __int64 v126; // [rsp+140h] [rbp+38h]
  int *v127; // [rsp+148h] [rbp+40h]
  __int64 v128; // [rsp+150h] [rbp+48h]
  int *v129; // [rsp+158h] [rbp+50h]
  __int64 v130; // [rsp+160h] [rbp+58h]
  _DWORD *v131; // [rsp+168h] [rbp+60h] BYREF
  unsigned int v132; // [rsp+170h] [rbp+68h]
  int v133; // [rsp+174h] [rbp+6Ch]
  _BYTE v134[320]; // [rsp+178h] [rbp+70h] BYREF

  v101 = 0LL;
  v8 = a1;
  v106 = 0LL;
  LOWORD(v92) = 0;
  v100 = 0LL;
  LOWORD(v93) = 0;
  v90[0] = 0;
  v94 = 0;
  v89 = 0;
  v91[0] = 0;
  v108 = a4;
  v99 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !byte_14044116C || CurrentIrql >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( a1 )
  {
    v97 = *(_DWORD *)(a1 + 192);
    v98 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v8 = PsReferenceEffectiveToken(
           (unsigned int)KeGetCurrentThread(),
           (unsigned int)&v97,
           (unsigned int)&v96,
           (unsigned int)&v98,
           0LL);
    if ( !v8 )
      return;
    HIBYTE(v89) = 1;
  }
  UserData.Reserved = 0;
  if ( a7 )
  {
    v12 = L"Adminless Permissive";
    if ( !a8 )
      v12 = L"Permissive";
    UserData.Ptr = (ULONGLONG)v12;
    v11 = a8 != 0 ? 42 : 22;
  }
  else
  {
    v10 = L"Adminless";
    if ( !a8 )
      v10 = L"Normal";
    UserData.Ptr = (ULONGLONG)v10;
    v11 = a8 != 0 ? 20 : 14;
  }
  UserData.Size = v11;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v90);
  v107 = (PVOID *)LearningModeObjectInformation;
  v14 = (PVOID *)LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v15 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v16 = *v15;
    v17 = v15[1];
    if ( v16 + 2 < v17 )
      LODWORD(v17) = v16 + 2;
    v111 = (const size_t *)*((_QWORD *)v15 + 1);
    v112 = (unsigned int)v17;
  }
  else
  {
    v111 = &pwsz;
    v112 = 2LL;
  }
  if ( LearningModeObjectInformation && (v18 = *(unsigned __int16 **)(LearningModeObjectInformation + 24)) != 0LL )
  {
    if ( *(_QWORD *)(LearningModeObjectInformation + 32)
      && (v19 = *(const size_t **)(LearningModeObjectInformation + 48)) != 0LL )
    {
      LODWORD(v114) = *(unsigned __int16 *)(LearningModeObjectInformation + 42);
      v113 = v19;
    }
    else
    {
      v20 = *v18;
      v21 = v18[1];
      if ( v20 + 2 < v21 )
        LODWORD(v21) = v20 + 2;
      v113 = (const size_t *)*((_QWORD *)v18 + 1);
      LODWORD(v114) = v21;
    }
    HIDWORD(v114) = 0;
  }
  else
  {
    v113 = &pwsz;
    v114 = 2LL;
  }
  v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
  if ( v22 )
  {
    v23 = *(unsigned __int16 *)(v22 + 2);
    v115 = *(const size_t **)(v22 + 8);
    v116 = v23;
  }
  else
  {
    v115 = &pwsz;
    v116 = 2LL;
  }
  v117 = &pwsz;
  v118 = 2LL;
  v119 = &a6;
  v121 = &v97;
  v123 = &v98;
  v125 = v8 + 120;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 4LL;
  v126 = 4LL;
  v24 = *(_QWORD *)(v8 + 1080);
  v128 = 4LL;
  if ( v24 )
    v25 = (int *)(v24 + 40);
  else
    v25 = &v94;
  v127 = v25;
  v102 = 1;
  v26 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v8 + 152) + 1LL) + 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x69536553u);
  P = PoolWithTag;
  v28 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_DWORD *)(*(_QWORD *)(v8 + 152) + 8LL);
    memmove(
      PoolWithTag + 1,
      **(const void ***)(v8 + 152),
      4LL * *(unsigned __int8 *)(**(_QWORD **)(v8 + 152) + 1LL) + 8);
    v131 = v28;
    v129 = &v102;
    v29 = (int **)v134;
    v30 = v134;
    v132 = v26;
    v133 = 0;
    v31 = 13;
  }
  else
  {
    v31 = 12;
    v129 = &v94;
    v29 = &v131;
    v30 = &v131;
  }
  v130 = 4LL;
  if ( *(_QWORD *)(v8 + 784) )
  {
    v29[1] = (int *)4;
    *v29 = &v99;
    v32 = *(_QWORD *)(v8 + 784);
    v33 = 2LL * v31++;
    v34 = *(unsigned __int8 *)(v32 + 1);
    *(&UserData.Ptr + v33) = v32;
    *(&UserData.Reserved + 2 * v33) = 0;
    *(&UserData.Size + 2 * v33) = 4 * v34 + 8;
  }
  else
  {
    v30[1] = 4LL;
    *v30 = &v94;
  }
  if ( *(_DWORD *)(v8 + 800) )
  {
    v95 = 0;
    v35 = 0;
    v36 = *(_DWORD *)(v8 + 800);
    if ( v36 )
    {
      v37 = *(__int64 **)(v8 + 792);
      v38 = v36;
      do
      {
        v39 = *v37;
        v37 += 2;
        v35 += 4 * *(unsigned __int8 *)(v39 + 1) + 12;
        --v38;
      }
      while ( v38 );
    }
    v40 = ExAllocatePoolWithTag(PagedPool, v35, 0x69536553u);
    v101 = v40;
    v41 = v40;
    if ( v40 )
    {
      v42 = *(_DWORD *)(v8 + 800);
      v103 = 0;
      v95 = v42;
      if ( v42 )
      {
        v43 = v103;
        do
        {
          v44 = 2LL * v43;
          *v41 = *(_DWORD *)(*(_QWORD *)(v8 + 792) + 16LL * v43 + 8);
          v45 = *(unsigned __int8 **)(*(_QWORD *)(v8 + 792) + 16LL * v43);
          memmove(v41 + 1, v45, 4LL * v45[1] + 8);
          ++v43;
          v42 = v95;
          v41 += *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 792) + 8 * v44) + 1LL) + 3;
        }
        while ( v43 < v95 );
        v14 = v107;
        v41 = v101;
      }
      else
      {
        v41 = v40;
      }
    }
    else
    {
      v42 = v95;
    }
    v46 = 2LL * v31;
    v47 = v31 + 1;
    *(&UserData.Reserved + 2 * v46) = 0;
    *(&UserData.Ptr + v46) = (ULONGLONG)&v95;
    *(&UserData.Size + 2 * v46) = 4;
    if ( v42 )
    {
      v48 = 2LL * v47;
      *(&UserData.Ptr + v48) = (ULONGLONG)v41;
      *(&UserData.Reserved + 2 * v48) = 0;
      ++v47;
      *(&UserData.Size + 2 * v48) = v35;
    }
  }
  else
  {
    v49 = 2LL * v31;
    v47 = v31 + 1;
    *(&UserData.Ptr + v49) = (ULONGLONG)&v94;
    *((_QWORD *)&UserData.Size + v49) = 4LL;
  }
  v50 = v108;
  v51 = v47 + 1;
  *((_QWORD *)&UserData.Size + 2 * v47) = 4LL;
  if ( v50 )
  {
    *(&UserData.Ptr + 2 * v47) = (ULONGLONG)&v99;
    v52 = 2LL * v51;
    v51 = v47 + 2;
    v53 = 4 * *(unsigned __int8 *)(v50 + 1) + 8;
    *(&UserData.Ptr + v52) = v50;
    *(&UserData.Size + 2 * v52) = v53;
    *(&UserData.Reserved + 2 * v52) = 0;
  }
  else
  {
    *(&UserData.Ptr + 2 * v47) = (ULONGLONG)&v94;
  }
  v54 = v51;
  v55 = v51 + 1;
  v54 *= 2LL;
  v56 = 2LL * v55;
  v57 = v55 + 1;
  *(&UserData.Ptr + v54) = a5;
  *((_QWORD *)&UserData.Size + v54) = 1LL;
  v58 = *(_WORD *)(a5 + 2);
  *(&UserData.Ptr + v56) = a5 + 2;
  *((_QWORD *)&UserData.Size + v56) = 2LL;
  if ( v58 >= 0 )
  {
    v60 = *(unsigned __int8 **)(a5 + 8);
LABEL_65:
    if ( v60 )
      goto LABEL_67;
    goto LABEL_66;
  }
  v59 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v59 )
  {
    v60 = (unsigned __int8 *)(a5 + v59);
    goto LABEL_65;
  }
LABEL_66:
  v60 = (unsigned __int8 *)SeNullSid;
LABEL_67:
  v61 = v57;
  v62 = v57 + 1;
  v61 *= 2LL;
  v63 = 4 * v60[1] + 8;
  *(&UserData.Ptr + v61) = (ULONGLONG)v60;
  *(&UserData.Size + 2 * v61) = v63;
  *(&UserData.Reserved + 2 * v61) = 0;
  if ( v58 >= 0 )
  {
    v65 = *(unsigned __int8 **)(a5 + 8);
LABEL_71:
    if ( v65 )
      goto LABEL_73;
    goto LABEL_72;
  }
  v64 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v64 )
  {
    v65 = (unsigned __int8 *)(a5 + v64);
    goto LABEL_71;
  }
LABEL_72:
  v65 = (unsigned __int8 *)SeNullSid;
LABEL_73:
  v66 = 2LL * v62;
  v67 = v62 + 1;
  v68 = 4 * v65[1] + 8;
  *(&UserData.Ptr + v66) = (ULONGLONG)v65;
  *(&UserData.Size + 2 * v66) = v68;
  *(&UserData.Reserved + 2 * v66) = 0;
  if ( (v58 & 4) == 0 )
  {
LABEL_77:
    v70 = 0LL;
    goto LABEL_79;
  }
  if ( v58 < 0 )
  {
    v69 = *(unsigned int *)(a5 + 16);
    if ( (_DWORD)v69 )
    {
      v70 = a5 + v69;
      goto LABEL_79;
    }
    goto LABEL_77;
  }
  v70 = *(_QWORD *)(a5 + 32);
LABEL_79:
  v71 = v67 + 1;
  v72 = 2LL * v67;
  if ( v70 )
  {
    v73 = SepFlattenAcl(v70, &v106, &v104, &v92);
    v74 = v106;
    *((_QWORD *)&UserData.Size + v72) = 1LL;
    if ( v73 < 0 )
    {
      *(&UserData.Ptr + v72) = (ULONGLONG)&v89;
      v77 = 2LL * v71;
      *(&UserData.Ptr + v77) = (ULONGLONG)v91;
      *((_QWORD *)&UserData.Size + v77) = 2LL;
    }
    else
    {
      *(&UserData.Ptr + v72) = v70;
      v75 = v71++;
      v75 *= 2LL;
      *(&UserData.Ptr + v75) = (ULONGLONG)&v92;
      *((_QWORD *)&UserData.Size + v75) = 2LL;
      LODWORD(v75) = v104;
      v76 = 2LL * v71;
      *(&UserData.Ptr + v76) = (ULONGLONG)v74;
      *(&UserData.Size + 2 * v76) = v75;
      *(&UserData.Reserved + 2 * v76) = 0;
    }
    v58 = *(_WORD *)(a5 + 2);
  }
  else
  {
    v74 = v106;
    *(&UserData.Ptr + 2 * v67) = (ULONGLONG)&v89;
    *((_QWORD *)&UserData.Size + 2 * v67) = 1LL;
    v78 = 2LL * v71;
    *(&UserData.Ptr + v78) = (ULONGLONG)v91;
    *((_QWORD *)&UserData.Size + v78) = 2LL;
  }
  v79 = v71 + 1;
  if ( (v58 & 0x10) == 0 )
  {
LABEL_89:
    v81 = 0LL;
    goto LABEL_91;
  }
  if ( v58 < 0 )
  {
    v80 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v80 )
    {
      v81 = a5 + v80;
      goto LABEL_91;
    }
    goto LABEL_89;
  }
  v81 = *(_QWORD *)(a5 + 24);
LABEL_91:
  v82 = v71 + 2;
  v83 = 2LL * v79;
  if ( !v81 )
  {
    *((_QWORD *)&UserData.Size + 2 * v79) = 1LL;
    goto LABEL_95;
  }
  v84 = SepFlattenAcl(v81, &v100, &v105, &v93);
  *((_QWORD *)&UserData.Size + v83) = 1LL;
  if ( v84 < 0 )
  {
LABEL_95:
    *(&UserData.Ptr + v83) = (ULONGLONG)&v89;
    v85 = v100;
    v88 = 2LL * v82;
    *((_QWORD *)&UserData.Size + v88) = 2LL;
    *(&UserData.Ptr + v88) = (ULONGLONG)v91;
    goto LABEL_96;
  }
  *(&UserData.Ptr + v83) = v81;
  v85 = v100;
  v86 = v82++;
  v86 *= 2LL;
  *(&UserData.Ptr + v86) = (ULONGLONG)&v93;
  *((_QWORD *)&UserData.Size + v86) = 2LL;
  LODWORD(v86) = v105;
  v87 = 2LL * v82;
  *(&UserData.Ptr + v87) = (ULONGLONG)v85;
  *(&UserData.Size + 2 * v87) = v86;
  *(&UserData.Reserved + 2 * v87) = 0;
LABEL_96:
  EtwWriteEx(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, 0, 0LL, 0LL, v82 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v101 )
    ExFreePoolWithTag(v101, 0);
  if ( v74 )
    ExFreePoolWithTag(v74, 0);
  if ( v85 )
    ExFreePoolWithTag(v85, 0);
  if ( HIBYTE(v89) )
    ObfDereferenceObject((PVOID)v8);
  if ( v90[0] )
  {
    ExFreePoolWithTag(*((PVOID *)v14[2] + 1), 0);
    ExFreePoolWithTag(v14[2], 0);
    ExFreePoolWithTag(*((PVOID *)v14[3] + 1), 0);
    ExFreePoolWithTag(v14[3], 0);
    ExFreePoolWithTag(v14, 0);
  }
}
