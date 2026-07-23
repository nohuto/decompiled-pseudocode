/*
 * XREFs of PspBuildCreateProcessContext @ 0x14060D280
 * Callers:
 *     NtCreateThreadEx @ 0x14060E510 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004AD0 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     KeVerifyGroupAffinity @ 0x14015AE18 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x140307FC0 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x14031990C (RtlGetUmsContextExtendedSize.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x14060D0B0 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1406DBDE0 (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x1406F1660 (RtlValidProcessProtection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(unsigned __int64 *a1, char a2, int a3, __int64 a4)
{
  char v4; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // ebx
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  SIZE_T v27; // rbx
  char *v28; // r15
  PVOID PoolWithQuotaTag; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  size_t v38; // r8
  unsigned __int64 v39; // rdx
  __int128 v40; // xmm6
  int v41; // eax
  _BYTE *v42; // rax
  int v43; // eax
  int v44; // eax
  unsigned __int64 v45; // rbx
  _QWORD *v46; // rax
  _DWORD *v47; // rcx
  _DWORD *v48; // rax
  _DWORD *v49; // rax
  PS_PROTECTION v50; // cl
  char valid; // al
  bool v52; // zf
  int v53; // eax
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // rax
  _WORD *v57; // rax
  SIZE_T v59; // rbx
  char *v60; // r15
  PVOID v61; // rax
  int v62; // eax
  SIZE_T v63; // rbx
  SIZE_T v64; // r12
  PVOID v65; // rax
  unsigned __int64 v66; // r15
  unsigned __int64 i; // r13
  SIZE_T v68; // rbx
  char *v69; // r15
  PVOID v70; // rax
  SIZE_T v71; // rbx
  char *v72; // r15
  PVOID v73; // rax
  _OWORD *v74; // rax
  SIZE_T v75; // r12
  const void *v76; // r15
  PVOID v77; // rax
  void **v78; // r13
  __int64 v79; // r11
  _QWORD *v80; // r15
  const void *v81; // r9
  const void *v82; // r12
  unsigned __int16 v83; // cx
  unsigned __int16 v84; // ax
  char v85; // r10
  unsigned __int64 v86; // rcx
  __int64 v87; // rdx
  _DWORD *v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rdx
  char *v91; // rbx
  unsigned __int16 v92; // dx
  SIZE_T v93; // rbx
  char *v94; // r15
  PVOID v95; // rax
  _DWORD *v96; // rax
  _PROCESSOR_NUMBER *v97; // rax
  ULONG ProcessorIndexFromNumber; // eax
  _OWORD *v99; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int64 v101; // r9
  unsigned __int64 v102; // rcx
  __int64 v103; // rax
  _QWORD *v104; // [rsp+48h] [rbp-1D0h]
  unsigned __int16 v105; // [rsp+50h] [rbp-1C8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned __int64 v107; // [rsp+68h] [rbp-1B0h]
  unsigned __int64 v108; // [rsp+70h] [rbp-1A8h]
  int v109; // [rsp+78h] [rbp-1A0h]
  int v110; // [rsp+7Ch] [rbp-19Ch]
  const void *v111; // [rsp+80h] [rbp-198h]
  __int64 v112; // [rsp+88h] [rbp-190h]
  char *v113; // [rsp+90h] [rbp-188h]
  __int64 v114; // [rsp+A0h] [rbp-178h]
  int v115; // [rsp+B4h] [rbp-164h]
  _BYTE *v116; // [rsp+B8h] [rbp-160h]
  unsigned __int64 v117; // [rsp+C0h] [rbp-158h]
  unsigned __int64 v118; // [rsp+C8h] [rbp-150h]
  unsigned __int64 v119; // [rsp+D0h] [rbp-148h]
  _DWORD *v120; // [rsp+D8h] [rbp-140h]
  __int64 v121; // [rsp+E0h] [rbp-138h] BYREF
  unsigned __int64 v122; // [rsp+E8h] [rbp-130h]
  _WORD *v123; // [rsp+F0h] [rbp-128h]
  char *v124; // [rsp+F8h] [rbp-120h]
  _DWORD *v125; // [rsp+100h] [rbp-118h]
  _DWORD *v126; // [rsp+108h] [rbp-110h]
  _OWORD *v127; // [rsp+110h] [rbp-108h]
  _DWORD *v128; // [rsp+118h] [rbp-100h]
  const void *v129; // [rsp+120h] [rbp-F8h]
  int v130; // [rsp+128h] [rbp-F0h]
  _DWORD *v131; // [rsp+138h] [rbp-E0h]
  _PROCESSOR_NUMBER *v132; // [rsp+140h] [rbp-D8h]
  _OWORD *v133; // [rsp+148h] [rbp-D0h]
  unsigned __int64 v134; // [rsp+150h] [rbp-C8h]
  char *v135; // [rsp+158h] [rbp-C0h]
  char *v136; // [rsp+160h] [rbp-B8h]
  PVOID v137; // [rsp+168h] [rbp-B0h]
  char *v138; // [rsp+170h] [rbp-A8h]
  _QWORD *v139; // [rsp+178h] [rbp-A0h]
  const void *v140; // [rsp+180h] [rbp-98h]
  const void *v141; // [rsp+188h] [rbp-90h]
  char *v142; // [rsp+190h] [rbp-88h]
  unsigned __int64 v143; // [rsp+198h] [rbp-80h]
  __int128 v144; // [rsp+1A0h] [rbp-78h] BYREF
  __int128 v145; // [rsp+1B0h] [rbp-68h] BYREF
  int v147; // [rsp+230h] [rbp+18h]

  v147 = a3;
  v112 = a4;
  v4 = a2;
  v110 = a3;
  v114 = a4;
  v145 = 0uLL;
  ProcNumber = 0;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = *a1;
  v108 = v6;
  if ( v6 < 0x28 )
    return 3221225485LL;
  if ( v4 && v6 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v6 > 0x7FFFFFFF0000LL || (unsigned __int64 *)((char *)a1 + v6) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v7 = v6 - 8;
  v108 = v7;
  if ( (v7 & 0x1F) != 0 )
    return 3221225485LL;
  v8 = v7 >> 5;
  v108 = v8;
  v9 = a1 + 1;
  v104 = a1 + 1;
  v10 = 0x7FFFFFFF8LL;
  while ( 1 )
  {
    if ( !v8 )
    {
      v17 = 0;
      goto LABEL_317;
    }
    v11 = *v9;
    v134 = *v9;
    if ( a3 && (v11 & 0x10000) == 0
      || (v11 & 0x20000) != 0 && v9[3]
      || (v115 = 1 << v11, v12 = *(_DWORD *)(a4 + 4), ((1 << v11) & v12) != 0)
      || (*(_DWORD *)(a4 + 4) = v12 | (1 << v11), v11 > 0x6001A) )
    {
LABEL_125:
      v17 = -1073741811;
      goto LABEL_317;
    }
    if ( (unsigned int)v11 <= 0x20014 )
    {
      if ( (_DWORD)v11 == 131092 )
      {
        if ( v9[1] != 4LL )
          goto LABEL_125;
        v48 = (_DWORD *)v9[2];
        v126 = v48;
        if ( v4 )
        {
          if ( ((unsigned __int8)v48 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v9 = v104;
          v48 = v126;
        }
        *(_DWORD *)(a4 + 408) = *v48;
        goto LABEL_21;
      }
      if ( (unsigned int)v11 <= 0x20009 )
      {
        if ( (_DWORD)v11 == 131081 )
        {
          if ( v9[1] != 4LL )
            goto LABEL_125;
          v49 = (_DWORD *)v9[2];
          v120 = v49;
          if ( v4 )
          {
            if ( ((unsigned __int8)v49 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v9 = v104;
            v49 = v120;
          }
          *(_DWORD *)(a4 + 316) = *v49;
        }
        else
        {
          v13 = v11 - 6;
          if ( v13 )
          {
            v14 = v13 - 65533;
            if ( v14 )
            {
              v18 = v14 - 1;
              if ( v18 )
              {
                v26 = v18 - 65537;
                if ( !v26 )
                {
                  v27 = v9[1];
                  if ( !v27 || (v27 & 1) != 0 || v27 > 0xFFFF )
                    goto LABEL_125;
                  v28 = (char *)v9[2];
                  v136 = v28;
                  if ( v4 && ((unsigned __int64)&v28[v27] > 0x7FFFFFFF0000LL || &v28[v27] < v28) )
                    MEMORY[0x7FFFFFFF0000] = 0;
                  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v27, 0x6E467350u);
                  v137 = PoolWithQuotaTag;
                  if ( !PoolWithQuotaTag )
                    goto LABEL_175;
                  *(_QWORD *)(a4 + 232) = 0LL;
                  *(_WORD *)(a4 + 234) = v27;
                  *(_QWORD *)(a4 + 240) = PoolWithQuotaTag;
                  memmove(PoolWithQuotaTag, v28, v27);
                  *(_WORD *)(a4 + 232) = v27;
                  goto LABEL_66;
                }
                v41 = v26 - 2;
                if ( !v41 )
                {
                  v59 = v9[1];
                  if ( !v59 || (v59 & 0xF) != 0 )
                    goto LABEL_125;
                  v60 = (char *)v9[2];
                  v135 = v60;
                  if ( v4 )
                  {
                    if ( ((unsigned __int8)v60 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v60[v59] > 0x7FFFFFFF0000LL || &v60[v59] < v60 )
                      MEMORY[0x7FFFFFFF0000] = 0;
                  }
                  if ( v59 > 0x10 )
                  {
                    v61 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v59, 0x6C527350u);
                    *(_QWORD *)(a4 + 280) = v61;
                    if ( !v61 )
                      goto LABEL_175;
                  }
                  else
                  {
                    v61 = (PVOID)(a4 + 264);
                    *(_QWORD *)(a4 + 280) = a4 + 264;
                  }
                  memmove(v61, v60, v59);
                  *(_QWORD *)(a4 + 256) = v59 >> 4;
                  goto LABEL_66;
                }
                if ( v41 != 1 || v9[1] != 1LL )
                  goto LABEL_125;
                v42 = (_BYTE *)v9[2];
                v116 = v42;
                if ( v4 )
                {
                  v9 = v104;
                  v42 = v116;
                }
                *(_BYTE *)(a4 + 248) = *v42;
              }
              else
              {
                if ( v9[1] != 8LL )
                  goto LABEL_125;
                v19 = v9[2];
                v117 = v19;
                if ( v4 )
                {
                  if ( (v19 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v19 >= 0x7FFFFFFF0000LL )
                    v19 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v19 = *(_BYTE *)v19;
                  *(_BYTE *)(v19 + 7) = *(_BYTE *)(v19 + 7);
                  v9 = v104;
                  v19 = v117;
                }
                *(_QWORD *)(a4 + 24) = v19;
                v20 = v9[3];
                v107 = v20;
                if ( v20 )
                {
                  if ( v4 )
                  {
                    if ( (v20 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( v20 >= 0x7FFFFFFF0000LL )
                      v20 = 0x7FFFFFFF0000LL;
                    *(_BYTE *)v20 = *(_BYTE *)v20;
                    *(_BYTE *)(v20 + 7) = *(_BYTE *)(v20 + 7);
                    v9 = v104;
                    v20 = v107;
                  }
                  *(_QWORD *)v20 = 8LL;
                }
              }
            }
            else
            {
              if ( v9[1] != 16LL )
                goto LABEL_125;
              v15 = v9[2];
              v118 = v15;
              if ( v4 )
              {
                if ( (v15 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v15 >= 0x7FFFFFFF0000LL )
                  v15 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v15 = *(_BYTE *)v15;
                *(_BYTE *)(v15 + 15) = *(_BYTE *)(v15 + 15);
                v9 = v104;
                v15 = v118;
              }
              *(_QWORD *)(a4 + 16) = v15;
              v16 = v9[3];
              v107 = v16;
              if ( v16 )
              {
                if ( v4 )
                {
                  if ( (v16 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v16 >= 0x7FFFFFFF0000LL )
                    v16 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v16 = *(_BYTE *)v16;
                  *(_BYTE *)(v16 + 7) = *(_BYTE *)(v16 + 7);
                  v9 = v104;
                  v16 = v107;
                }
                *(_QWORD *)v16 = 16LL;
              }
            }
          }
          else
          {
            if ( v9[1] != 64LL )
              goto LABEL_125;
            v30 = v9[2];
            v119 = v30;
            if ( v4 )
            {
              if ( (v30 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v30 >= 0x7FFFFFFF0000LL )
                v30 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v30 = *(_BYTE *)v30;
              *(_BYTE *)(v30 + 63) = *(_BYTE *)(v30 + 63);
              v9 = v104;
              v30 = v119;
            }
            *(_QWORD *)(a4 + 32) = v30;
            v31 = v9[3];
            v107 = v31;
            if ( v31 )
            {
              if ( v4 )
              {
                if ( (v31 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v31 >= 0x7FFFFFFF0000LL )
                  v31 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v31 = *(_BYTE *)v31;
                *(_BYTE *)(v31 + 7) = *(_BYTE *)(v31 + 7);
                v9 = v104;
                v31 = v107;
              }
              *(_QWORD *)v31 = 64LL;
            }
          }
        }
        goto LABEL_21;
      }
      v32 = v11 - 131082;
      if ( !v32 )
      {
        if ( v9[1] != 8LL )
          goto LABEL_125;
        v33 = (_DWORD *)v9[2];
        v125 = v33;
        if ( v4 )
        {
          if ( ((unsigned __int8)v33 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v9 = v104;
          v33 = v125;
        }
        if ( (*v33 & 0x1C) != 0 )
        {
          v17 = -1073741637;
          goto LABEL_317;
        }
        v34 = *v33 & 3;
        v130 = v34;
        if ( (unsigned __int8)v34 >= 3u )
          goto LABEL_125;
        *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v34)) & 0xC;
        if ( v34 == 1 )
          *(_DWORD *)(a4 + 288) = v33[1];
        goto LABEL_21;
      }
      v35 = v32 - 1;
      if ( !v35 )
      {
        v71 = v9[1];
        if ( !v71 || (v71 & 7) != 0 || (v71 & 0xFFFFFFFFFFFFFFF8uLL) > v10 )
          goto LABEL_125;
        v72 = (char *)v9[2];
        v124 = v72;
        if ( v4 )
        {
          if ( ((unsigned __int8)v72 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v72[v71] > 0x7FFFFFFF0000LL || &v72[v71] < v72 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v73 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v71, 0x6C487350u);
        *(_QWORD *)(a4 + 296) = v73;
        if ( !v73 )
        {
LABEL_175:
          v17 = -1073741670;
          goto LABEL_317;
        }
        memmove(v73, v72, v71);
        *(_DWORD *)(a4 + 292) = v71 >> 3;
        goto LABEL_66;
      }
      v36 = v35 - 2;
      if ( v36 )
      {
        v37 = v36 - 3;
        if ( v37 )
        {
          v62 = v37 - 2;
          if ( v62 )
          {
            if ( v62 != 1 )
              goto LABEL_125;
            v63 = v9[1];
            if ( !v63 || (v63 & 7) != 0 || (v63 & 0xFFFFFFFFFFFFFFF8uLL) > v10 )
              goto LABEL_125;
            v64 = v9[2];
            v124 = (char *)v64;
            if ( v4 )
            {
              if ( (v64 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v64 + v63 > 0x7FFFFFFF0000LL || v64 + v63 < v64 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v65 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v63, 0x6C4A7350u);
            *(_QWORD *)(a4 + 392) = v65;
            if ( !v65 )
              goto LABEL_175;
            memset(v65, 0, v63);
            *(_DWORD *)(a4 + 404) = v63 >> 3;
            v66 = 0LL;
            v122 = 0LL;
            for ( i = 0LL; i < *(unsigned int *)(a4 + 404); ++i )
            {
              v17 = ObpReferenceObjectByHandleWithTag(
                      *(_QWORD *)(v64 + 8 * v66),
                      1,
                      (__int64)PsJobType,
                      a2,
                      0x6C4A7350u,
                      &v121,
                      0LL,
                      0LL);
              if ( v17 < 0 )
                goto LABEL_317;
              *(_QWORD *)(*(_QWORD *)(a4 + 392) + 8 * v66) = v121;
              v66 = i + 1;
              v122 = i + 1;
            }
          }
          else
          {
            v68 = v9[1];
            if ( !v68 || (v68 & 7) != 0 || v68 > 0x88 )
              goto LABEL_125;
            v69 = (char *)v9[2];
            v138 = v69;
            if ( v4 )
            {
              if ( ((unsigned __int8)v69 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v69[v68] > 0x7FFFFFFF0000LL || &v69[v68] < v69 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v70 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v68, 0x61547350u);
            *(_QWORD *)(a4 + 384) = v70;
            if ( !v70 )
              goto LABEL_175;
            memmove(v70, v69, v68);
            *(_DWORD *)(a4 + 400) = v68;
            if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 384), v68) )
              goto LABEL_125;
          }
        }
        else
        {
          v38 = v9[1];
          if ( v38 > 0x10 )
            goto LABEL_125;
          v145 = 0uLL;
          v39 = v9[2];
          if ( v4 && v39 >= 0x7FFFFFFF0000LL )
            v39 = 0x7FFFFFFF0000LL;
          memmove(&v145, (const void *)v39, v38);
          v40 = v145;
          v144 = v145;
          v17 = PspValidateMitigationOptions(&v144, 0LL);
          if ( v17 < 0 )
            goto LABEL_317;
          *(_OWORD *)(a4 + 360) = v40;
        }
        goto LABEL_66;
      }
      if ( v9[1] != 2LL )
        goto LABEL_125;
      v57 = (_WORD *)v9[2];
      v123 = v57;
      if ( v4 )
      {
        if ( ((unsigned __int8)v57 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v57 = v123;
      }
      v105 = *v57;
      if ( *v57 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_125;
      _mm_lfence();
      if ( !*(_QWORD *)(KeNodeBlock[v105] + 136) )
        goto LABEL_125;
      *(_WORD *)(a4 + 250) = v105;
LABEL_156:
      v9 = v104;
      goto LABEL_21;
    }
    if ( (unsigned int)v11 > 0x3000E )
    {
      v21 = v11 - 196623;
      if ( v21 )
      {
        v22 = v21 - 196593;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 15;
              if ( !v25 )
              {
                if ( v9[1] != 1LL )
                  goto LABEL_125;
                v50.Level = *((_BYTE *)v9 + 16);
                *(PS_PROTECTION *)(a4 + 376) = v50;
                valid = RtlValidProcessProtection(v50);
                goto LABEL_138;
              }
              if ( v25 != 9 || v9[1] != 1LL )
                goto LABEL_125;
              *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v9[2] != 0LL ? 0x80 : 0);
            }
            else
            {
              if ( v9[1] != 8LL )
                goto LABEL_125;
              *(_QWORD *)(a4 + 144) = v9[2];
            }
          }
          else
          {
            if ( v9[1] != 8LL )
              goto LABEL_125;
            *(_QWORD *)(a4 + 136) = v9[2];
          }
        }
        else
        {
          if ( v9[1] != 8LL )
            goto LABEL_125;
          *(_QWORD *)(a4 + 120) = v9[2];
        }
        goto LABEL_21;
      }
      if ( !a3 || !v4 || v9[1] != 24LL )
        goto LABEL_125;
      v133 = (_OWORD *)v9[2];
      if ( ((unsigned __int8)v133 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v99 = v133;
      *(_OWORD *)(a4 + 336) = *v133;
      *(_QWORD *)(a4 + 352) = *((_QWORD *)v99 + 2);
      if ( *(_DWORD *)(a4 + 336) != 256 )
        goto LABEL_125;
      UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
      v102 = *(_QWORD *)(a4 + 344);
      if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
      {
        if ( UmsContextExtendedSize )
        {
          if ( (v102 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v102 + UmsContextExtendedSize > v101 || v102 + UmsContextExtendedSize < v102 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( (v102 & 3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      v103 = *(_QWORD *)(a4 + 352);
      if ( (v103 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      goto LABEL_156;
    }
    if ( (_DWORD)v11 == 196622 )
    {
      if ( !a3 || v9[1] != 4LL )
        goto LABEL_125;
      v97 = (_PROCESSOR_NUMBER *)v9[2];
      v132 = v97;
      if ( v4 )
      {
        if ( ((unsigned __int8)v97 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = v104;
        v97 = v132;
      }
      ProcNumber = *v97;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
      v52 = ProcessorIndexFromNumber == -1;
      goto LABEL_139;
    }
    v43 = v11 - 131093;
    if ( !v43 )
    {
      if ( v9[1] != 4LL )
        goto LABEL_125;
      v96 = (_DWORD *)v9[2];
      v131 = v96;
      if ( v4 )
      {
        if ( ((unsigned __int8)v96 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = v104;
        v96 = v131;
      }
      *(_DWORD *)(a4 + 412) = *v96;
      goto LABEL_21;
    }
    v44 = v43 - 1;
    if ( !v44 )
      break;
    v53 = v44 - 1;
    if ( !v53 )
    {
      v93 = v9[1];
      if ( v93 > 0xFFFF )
        goto LABEL_125;
      v94 = (char *)v9[2];
      v142 = v94;
      if ( v4 && v93 && ((unsigned __int64)&v94[v93] > 0x7FFFFFFF0000LL || &v94[v93] < v94) )
        MEMORY[0x7FFFFFFF0000] = 0;
      v95 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v93, 0x634F7350u);
      *(_QWORD *)(a4 + 416) = v95;
      if ( !v95 )
        goto LABEL_175;
      memmove(v95, v94, v93);
      *(_DWORD *)(a4 + 424) = v93;
      goto LABEL_66;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
      v75 = v9[1];
      if ( v75 != 40 )
        goto LABEL_125;
      v76 = (const void *)v9[2];
      v129 = v76;
      if ( v4 )
      {
        if ( ((unsigned __int8)v76 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = v104;
        v75 = 40LL;
        v76 = v129;
      }
      v77 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v75, 0x70426E50u);
      v78 = (void **)(a4 + 432);
      v111 = (const void *)(a4 + 432);
      *(_QWORD *)(a4 + 432) = v77;
      if ( !v77 )
        goto LABEL_175;
      memset(v77, 0, 0x28uLL);
      v109 = 0;
      memmove(*v78, v76, v75);
      v79 = v112;
      v80 = *v78;
      v139 = v80;
      v81 = (const void *)v80[1];
      v111 = v81;
      v140 = v81;
      v82 = (const void *)v80[3];
      v141 = v82;
      v80[1] = 0LL;
      *((_QWORD *)*v78 + 3) = 0LL;
      v83 = *(_WORD *)v80;
      if ( *(_WORD *)v80 )
      {
        v84 = *((_WORD *)v80 + 1);
        if ( v83 > v84 || ((v84 | v83) & 1) != 0 || v84 == 0xFFFF || !v81 )
          goto LABEL_125;
        v85 = a2;
        if ( a2 )
        {
          if ( v84 )
          {
            v86 = (unsigned __int64)v81 + v84;
            if ( v86 > 0x7FFFFFFF0000LL || v86 < (unsigned __int64)v81 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
      }
      else
      {
        v85 = a2;
      }
      v87 = *((unsigned int *)*v78 + 4);
      v88 = *v78;
      if ( (_DWORD)v87 )
      {
        if ( !v82 || (unsigned int)v87 > 0xFFFF )
          goto LABEL_125;
        if ( v85 )
        {
          v89 = 8 * v87;
          if ( v89 )
          {
            if ( ((unsigned __int8)v82 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v90 = (unsigned __int64)v82 + v89;
            if ( v90 > 0x7FFFFFFF0000LL || v90 < (unsigned __int64)v82 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v88 = *(_DWORD **)(v79 + 432);
            }
          }
        }
      }
      v91 = 0LL;
      v113 = 0LL;
      v92 = *((_WORD *)v80 + 1);
      if ( v92 || v88[4] )
      {
        v91 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v92 + 8LL * (unsigned int)v88[4], 0x70426E50u);
        v113 = v91;
        v92 = *((_WORD *)v80 + 1);
        v81 = v111;
      }
      if ( v92 )
      {
        v80[1] = v91;
        memmove(v91, v81, *((unsigned __int16 *)v80 + 1));
        v91 += *((unsigned __int16 *)v80 + 1);
        v113 = v91;
      }
      if ( *((_DWORD *)*v78 + 4) )
      {
        *((_QWORD *)*v78 + 3) = v91;
        memmove(*((void **)*v78 + 3), v82, 8LL * *((unsigned int *)*v78 + 4));
      }
      goto LABEL_66;
    }
    v55 = v54 - 1;
    if ( v55 )
    {
      if ( v55 != 65523 || !a3 || v9[1] != 16LL )
        goto LABEL_125;
      v74 = (_OWORD *)v9[2];
      v127 = v74;
      if ( v4 )
      {
        if ( ((unsigned __int8)v74 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = v104;
        v74 = v127;
      }
      *(_OWORD *)(a4 + 320) = *v74;
      valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_138:
      v52 = valid == 0;
LABEL_139:
      if ( v52 )
        goto LABEL_125;
LABEL_66:
      v4 = a2;
      a3 = v147;
      v10 = 0x7FFFFFFF8LL;
      goto LABEL_21;
    }
    if ( v9[1] != 4LL )
      goto LABEL_125;
    v56 = (_DWORD *)v9[2];
    v128 = v56;
    if ( v4 )
    {
      if ( ((unsigned __int8)v56 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = v104;
      v56 = v128;
    }
    *(_DWORD *)(a4 + 440) = *v56;
LABEL_21:
    v9 += 4;
    v104 = v9;
    v8 = --v108;
  }
  if ( v9[1] != 8LL )
    goto LABEL_125;
  v45 = v9[2];
  v143 = v45;
  if ( v4 )
  {
    if ( (v45 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v45 + 8 > 0x7FFFFFFF0000LL || v45 + 8 < v45 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v46 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8uLL, 0x77736350u);
  *(_QWORD *)(a4 + 464) = v46;
  if ( v46 )
  {
    *v46 = *(_QWORD *)v45;
    v47 = *(_DWORD **)(a4 + 464);
    if ( (*v47 & 3) == 0 || (unsigned int)(v47[1] - 1) > 5 )
      goto LABEL_125;
    goto LABEL_66;
  }
  v17 = -1073741801;
LABEL_317:
  if ( v17 < 0 )
    goto LABEL_321;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v17 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v110 != 0);
  }
  if ( v17 < 0 )
LABEL_321:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v17;
}
