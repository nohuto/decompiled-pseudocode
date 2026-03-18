/*
 * XREFs of SeLogAccessFailure @ 0x14012777C
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     SepFlattenAcl @ 0x14031D0F0 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x14031D270 (SepGetLearningModeObjectInformation.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1405DF3D0 (PsReferenceEffectiveToken.c)
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
  const wchar_t *v10; // r8
  const wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 LearningModeObjectInformation; // rax
  __int64 v14; // r13
  unsigned __int16 *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  const size_t *v18; // rdx
  unsigned __int16 *v19; // r8
  const size_t *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // ecx
  const size_t *v25; // rdx
  __int64 v26; // rax
  int *v27; // rax
  unsigned int v28; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v30; // rdi
  int *v31; // rax
  unsigned int v32; // edi
  int **v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  ULONGLONG v36; // rcx
  int v37; // eax
  ULONG v38; // r15d
  unsigned int v39; // eax
  __int64 *v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rax
  PVOID v43; // rax
  _DWORD *v44; // r12
  unsigned int v45; // ecx
  unsigned int v46; // r13d
  __int64 v47; // rbx
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // edi
  __int64 v51; // rax
  __int64 v52; // rax
  ULONGLONG v53; // r8
  unsigned int v54; // edx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rcx
  unsigned int v60; // edx
  __int16 v61; // r9
  __int64 v62; // rax
  unsigned __int8 *v63; // r8
  __int64 v64; // rcx
  unsigned int v65; // edx
  int v66; // eax
  __int64 v67; // rax
  unsigned __int8 *v68; // r8
  __int64 v69; // rcx
  unsigned int v70; // edx
  int v71; // eax
  __int64 v72; // rax
  ULONGLONG v73; // rdi
  unsigned int v74; // ebx
  __int64 v75; // r15
  int v76; // eax
  PVOID v77; // r12
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned int v82; // ecx
  __int64 v83; // rax
  ULONGLONG v84; // rdi
  unsigned int v85; // ebx
  __int64 v86; // rsi
  int v87; // eax
  PVOID v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int16 v92; // [rsp+48h] [rbp-C0h] BYREF
  char v93[2]; // [rsp+4Ah] [rbp-BEh] BYREF
  _WORD v94[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v95; // [rsp+50h] [rbp-B8h] BYREF
  int v96; // [rsp+54h] [rbp-B4h] BYREF
  int v97; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v98; // [rsp+5Ch] [rbp-ACh] BYREF
  int v99; // [rsp+60h] [rbp-A8h] BYREF
  int v100; // [rsp+64h] [rbp-A4h] BYREF
  int v101; // [rsp+68h] [rbp-A0h] BYREF
  int v102; // [rsp+6Ch] [rbp-9Ch] BYREF
  PVOID v103; // [rsp+70h] [rbp-98h] BYREF
  PVOID v104; // [rsp+78h] [rbp-90h]
  int v105; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v106; // [rsp+84h] [rbp-84h]
  int v107; // [rsp+88h] [rbp-80h] BYREF
  int v108; // [rsp+8Ch] [rbp-7Ch] BYREF
  PVOID v109; // [rsp+90h] [rbp-78h] BYREF
  __int64 v110; // [rsp+98h] [rbp-70h]
  ULONGLONG v111; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  const size_t *v114; // [rsp+C8h] [rbp-40h]
  int v115; // [rsp+D0h] [rbp-38h]
  int v116; // [rsp+D4h] [rbp-34h]
  const size_t *v117; // [rsp+D8h] [rbp-30h]
  int v118; // [rsp+E0h] [rbp-28h]
  int v119; // [rsp+E4h] [rbp-24h]
  const size_t *v120; // [rsp+E8h] [rbp-20h]
  int v121; // [rsp+F0h] [rbp-18h]
  int v122; // [rsp+F4h] [rbp-14h]
  const size_t *v123; // [rsp+F8h] [rbp-10h]
  __int64 v124; // [rsp+100h] [rbp-8h]
  char *v125; // [rsp+108h] [rbp+0h]
  __int64 v126; // [rsp+110h] [rbp+8h]
  int *v127; // [rsp+118h] [rbp+10h]
  __int64 v128; // [rsp+120h] [rbp+18h]
  int *v129; // [rsp+128h] [rbp+20h]
  __int64 v130; // [rsp+130h] [rbp+28h]
  __int64 v131; // [rsp+138h] [rbp+30h]
  __int64 v132; // [rsp+140h] [rbp+38h]
  int *v133; // [rsp+148h] [rbp+40h]
  __int64 v134; // [rsp+150h] [rbp+48h]
  int *v135; // [rsp+158h] [rbp+50h]
  __int64 v136; // [rsp+160h] [rbp+58h]
  _DWORD *v137; // [rsp+168h] [rbp+60h] BYREF
  unsigned int v138; // [rsp+170h] [rbp+68h]
  int v139; // [rsp+174h] [rbp+6Ch]
  char v140; // [rsp+178h] [rbp+70h] BYREF

  v104 = 0LL;
  v8 = a1;
  v109 = 0LL;
  LOWORD(v95) = 0;
  v103 = 0LL;
  LOWORD(v96) = 0;
  v93[0] = 0;
  v97 = 0;
  v92 = 0;
  v94[0] = 0;
  v111 = a4;
  v102 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !byte_14046BBEC || CurrentIrql >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( a1 )
  {
    v100 = *(_DWORD *)(a1 + 192);
    v101 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v8 = PsReferenceEffectiveToken(
           (unsigned int)KeGetCurrentThread(),
           (unsigned int)&v100,
           (unsigned int)&v99,
           (unsigned int)&v101,
           0LL);
    if ( !v8 )
      return;
    HIBYTE(v92) = 1;
  }
  if ( a7 )
  {
    v10 = L"Permissive";
    v11 = L"Adminless Permissive";
    v12 = a8 != 0 ? 42 : 22;
  }
  else
  {
    v10 = L"Normal";
    v11 = L"Adminless";
    v12 = a8 != 0 ? 20 : 14;
  }
  UserData.Size = v12;
  UserData.Reserved = 0;
  if ( !a8 )
    v11 = v10;
  UserData.Ptr = (ULONGLONG)v11;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v93, v12, v10);
  v110 = LearningModeObjectInformation;
  v14 = LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v15 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v16 = *v15;
    v17 = v16 + 2;
    if ( v16 + 2 >= (unsigned __int64)v15[1] )
      v17 = v15[1];
    v18 = (const size_t *)*((_QWORD *)v15 + 1);
  }
  else
  {
    v17 = 2;
    v18 = &pwsz;
  }
  v114 = v18;
  v115 = v17;
  v116 = 0;
  if ( v14 && (v19 = *(unsigned __int16 **)(v14 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v14 + 32) && (v20 = *(const size_t **)(v14 + 48)) != 0LL )
    {
      LODWORD(v21) = *(unsigned __int16 *)(v14 + 42);
    }
    else
    {
      v22 = *v19;
      v21 = v19[1];
      if ( v22 + 2 < v21 )
        LODWORD(v21) = v22 + 2;
      v20 = (const size_t *)*((_QWORD *)v19 + 1);
    }
  }
  else
  {
    LODWORD(v21) = 2;
    v20 = &pwsz;
  }
  v119 = 0;
  v117 = v20;
  v118 = v21;
  v23 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[14];
  if ( v23 )
  {
    v24 = *(unsigned __int16 *)(v23 + 2);
    v25 = *(const size_t **)(v23 + 8);
  }
  else
  {
    v24 = 2;
    v25 = &pwsz;
  }
  v120 = v25;
  v121 = v24;
  v125 = &a6;
  v127 = &v100;
  v129 = &v101;
  v131 = v8 + 120;
  v122 = 0;
  v123 = &pwsz;
  v124 = 2LL;
  v126 = 4LL;
  v128 = 4LL;
  v130 = 4LL;
  v132 = 4LL;
  v26 = *(_QWORD *)(v8 + 1080);
  if ( v26 )
    v27 = (int *)(v26 + 40);
  else
    v27 = &v97;
  v133 = v27;
  v134 = 4LL;
  v105 = 1;
  v28 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v8 + 152) + 1LL) + 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x69536553u);
  P = PoolWithTag;
  v30 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_DWORD *)(*(_QWORD *)(v8 + 152) + 8LL);
    memmove(
      PoolWithTag + 1,
      **(const void ***)(v8 + 152),
      4LL * *(unsigned __int8 *)(**(_QWORD **)(v8 + 152) + 1LL) + 8);
    v137 = v30;
    v31 = &v105;
    v32 = 13;
    v138 = v28;
    v33 = (int **)&v140;
    v139 = 0;
  }
  else
  {
    v31 = &v97;
    v32 = 12;
    v33 = &v137;
  }
  v136 = 4LL;
  v135 = v31;
  v34 = *(_QWORD *)(v8 + 784);
  v33[1] = (int *)4;
  if ( v34 )
  {
    *v33 = &v102;
    v35 = 2LL * v32;
    v36 = *(_QWORD *)(v8 + 784);
    ++v32;
    v37 = *(unsigned __int8 *)(v36 + 1);
    *(&UserData.Ptr + v35) = v36;
    *(&UserData.Reserved + 2 * v35) = 0;
    *(&UserData.Size + 2 * v35) = 4 * v37 + 8;
  }
  else
  {
    *v33 = &v97;
  }
  if ( *(_DWORD *)(v8 + 800) )
  {
    v98 = 0;
    v38 = 0;
    v39 = *(_DWORD *)(v8 + 800);
    if ( v39 )
    {
      v40 = *(__int64 **)(v8 + 792);
      v41 = v39;
      do
      {
        v42 = *v40;
        v40 += 2;
        v38 += 4 * *(unsigned __int8 *)(v42 + 1) + 12;
        --v41;
      }
      while ( v41 );
    }
    v43 = ExAllocatePoolWithTag(PagedPool, v38, 0x69536553u);
    v104 = v43;
    v44 = v43;
    if ( v43 )
    {
      v45 = *(_DWORD *)(v8 + 800);
      v106 = 0;
      v98 = v45;
      if ( v45 )
      {
        v46 = v106;
        do
        {
          v47 = 2LL * v46;
          *v44 = *(_DWORD *)(*(_QWORD *)(v8 + 792) + 16LL * v46 + 8);
          v48 = *(unsigned __int8 **)(*(_QWORD *)(v8 + 792) + 16LL * v46);
          memmove(v44 + 1, v48, 4LL * v48[1] + 8);
          ++v46;
          v45 = v98;
          v44 += *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 792) + 8 * v47) + 1LL) + 3;
        }
        while ( v46 < v98 );
        v14 = v110;
        v44 = v104;
      }
      else
      {
        v44 = v43;
      }
    }
    else
    {
      v45 = v98;
    }
    v49 = 2LL * v32;
    v50 = v32 + 1;
    *(&UserData.Reserved + 2 * v49) = 0;
    *(&UserData.Ptr + v49) = (ULONGLONG)&v98;
    *(&UserData.Size + 2 * v49) = 4;
    if ( v45 )
    {
      v51 = 2LL * v50;
      *(&UserData.Ptr + v51) = (ULONGLONG)v44;
      *(&UserData.Reserved + 2 * v51) = 0;
      ++v50;
      *(&UserData.Size + 2 * v51) = v38;
    }
  }
  else
  {
    v52 = 2LL * v32;
    v50 = v32 + 1;
    *(&UserData.Ptr + v52) = (ULONGLONG)&v97;
    *((_QWORD *)&UserData.Size + v52) = 4LL;
  }
  v53 = v111;
  v54 = v50 + 1;
  *((_QWORD *)&UserData.Size + 2 * v50) = 4LL;
  if ( v53 )
  {
    *(&UserData.Ptr + 2 * v50) = (ULONGLONG)&v102;
    v55 = 2LL * v54;
    v54 = v50 + 2;
    v56 = 4 * *(unsigned __int8 *)(v53 + 1) + 8;
    *(&UserData.Ptr + v55) = v53;
    *(&UserData.Size + 2 * v55) = v56;
    *(&UserData.Reserved + 2 * v55) = 0;
  }
  else
  {
    *(&UserData.Ptr + 2 * v50) = (ULONGLONG)&v97;
  }
  v57 = v54;
  v58 = v54 + 1;
  v57 *= 2LL;
  v59 = 2LL * v58;
  v60 = v58 + 1;
  *(&UserData.Ptr + v57) = a5;
  *((_QWORD *)&UserData.Size + v57) = 1LL;
  v61 = *(_WORD *)(a5 + 2);
  *(&UserData.Ptr + v59) = a5 + 2;
  *((_QWORD *)&UserData.Size + v59) = 2LL;
  if ( v61 >= 0 )
  {
    v63 = *(unsigned __int8 **)(a5 + 8);
LABEL_62:
    if ( v63 )
      goto LABEL_64;
    goto LABEL_63;
  }
  v62 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v62 )
  {
    v63 = (unsigned __int8 *)(a5 + v62);
    goto LABEL_62;
  }
LABEL_63:
  v63 = (unsigned __int8 *)SeNullSid;
LABEL_64:
  v64 = v60;
  v65 = v60 + 1;
  v64 *= 2LL;
  v66 = 4 * v63[1] + 8;
  *(&UserData.Ptr + v64) = (ULONGLONG)v63;
  *(&UserData.Size + 2 * v64) = v66;
  *(&UserData.Reserved + 2 * v64) = 0;
  if ( v61 >= 0 )
  {
    v68 = *(unsigned __int8 **)(a5 + 8);
LABEL_68:
    if ( v68 )
      goto LABEL_70;
    goto LABEL_69;
  }
  v67 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v67 )
  {
    v68 = (unsigned __int8 *)(a5 + v67);
    goto LABEL_68;
  }
LABEL_69:
  v68 = (unsigned __int8 *)SeNullSid;
LABEL_70:
  v69 = 2LL * v65;
  v70 = v65 + 1;
  v71 = 4 * v68[1] + 8;
  *(&UserData.Ptr + v69) = (ULONGLONG)v68;
  *(&UserData.Size + 2 * v69) = v71;
  *(&UserData.Reserved + 2 * v69) = 0;
  if ( (v61 & 4) == 0 )
  {
LABEL_74:
    v73 = 0LL;
    goto LABEL_76;
  }
  if ( v61 < 0 )
  {
    v72 = *(unsigned int *)(a5 + 16);
    if ( (_DWORD)v72 )
    {
      v73 = a5 + v72;
      goto LABEL_76;
    }
    goto LABEL_74;
  }
  v73 = *(_QWORD *)(a5 + 32);
LABEL_76:
  v74 = v70 + 1;
  v75 = 2LL * v70;
  if ( v73 )
  {
    v76 = SepFlattenAcl(v73, &v109, &v107, &v95);
    *((_QWORD *)&UserData.Size + v75) = 1LL;
    v77 = v109;
    if ( v76 < 0 )
    {
      *(&UserData.Ptr + v75) = (ULONGLONG)&v92;
      v80 = 2LL * v74;
      *(&UserData.Ptr + v80) = (ULONGLONG)v94;
      *((_QWORD *)&UserData.Size + v80) = 2LL;
    }
    else
    {
      *(&UserData.Ptr + v75) = v73;
      v78 = v74++;
      v78 *= 2LL;
      *(&UserData.Ptr + v78) = (ULONGLONG)&v95;
      *((_QWORD *)&UserData.Size + v78) = 2LL;
      LODWORD(v78) = v107;
      v79 = 2LL * v74;
      *(&UserData.Ptr + v79) = (ULONGLONG)v77;
      *(&UserData.Size + 2 * v79) = v78;
      *(&UserData.Reserved + 2 * v79) = 0;
    }
    v61 = *(_WORD *)(a5 + 2);
  }
  else
  {
    v77 = v109;
    *(&UserData.Ptr + 2 * v70) = (ULONGLONG)&v92;
    *((_QWORD *)&UserData.Size + 2 * v70) = 1LL;
    v81 = 2LL * v74;
    *(&UserData.Ptr + v81) = (ULONGLONG)v94;
    *((_QWORD *)&UserData.Size + v81) = 2LL;
  }
  v82 = v74 + 1;
  if ( (v61 & 0x10) == 0 )
  {
LABEL_86:
    v84 = 0LL;
    goto LABEL_88;
  }
  if ( v61 < 0 )
  {
    v83 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v83 )
    {
      v84 = a5 + v83;
      goto LABEL_88;
    }
    goto LABEL_86;
  }
  v84 = *(_QWORD *)(a5 + 24);
LABEL_88:
  v85 = v74 + 2;
  v86 = 2LL * v82;
  if ( !v84 )
  {
    *((_QWORD *)&UserData.Size + 2 * v82) = 1LL;
    goto LABEL_92;
  }
  v87 = SepFlattenAcl(v84, &v103, &v108, &v96);
  *((_QWORD *)&UserData.Size + v86) = 1LL;
  if ( v87 < 0 )
  {
LABEL_92:
    v88 = v103;
    *(&UserData.Ptr + v86) = (ULONGLONG)&v92;
    v91 = 2LL * v85;
    *((_QWORD *)&UserData.Size + v91) = 2LL;
    *(&UserData.Ptr + v91) = (ULONGLONG)v94;
    goto LABEL_93;
  }
  *(&UserData.Ptr + v86) = v84;
  v88 = v103;
  v89 = v85++;
  v89 *= 2LL;
  *(&UserData.Ptr + v89) = (ULONGLONG)&v96;
  *((_QWORD *)&UserData.Size + v89) = 2LL;
  LODWORD(v89) = v108;
  v90 = 2LL * v85;
  *(&UserData.Ptr + v90) = (ULONGLONG)v88;
  *(&UserData.Size + 2 * v90) = v89;
  *(&UserData.Reserved + 2 * v90) = 0;
LABEL_93:
  EtwWriteEx(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, 0, 0LL, 0LL, v85 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v104 )
    ExFreePoolWithTag(v104, 0);
  if ( v77 )
    ExFreePoolWithTag(v77, 0);
  if ( v88 )
    ExFreePoolWithTag(v88, 0);
  if ( HIBYTE(v92) )
    ObfDereferenceObject((PVOID)v8);
  if ( v93[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v14 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v14 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v14 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v14 + 24), 0);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
}
