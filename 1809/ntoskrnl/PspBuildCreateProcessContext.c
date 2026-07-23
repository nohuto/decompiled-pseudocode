/*
 * XREFs of PspBuildCreateProcessContext @ 0x140623378
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x140623100 (NtCreateThreadEx.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KeVerifyGroupAffinity @ 0x14016B82C (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x1402EABE0 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x1402FB730 (RtlGetUmsContextExtendedSize.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x140624608 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1406BB26C (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x1406D1690 (RtlValidProcessProtection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(__int64 *a1, char a2, int a3, __int64 a4)
{
  char v4; // r10
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdi
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rax
  int v14; // ebx
  int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _BYTE *v21; // rax
  SIZE_T v22; // rbx
  char *v23; // r15
  void *v24; // rcx
  SIZE_T v25; // rbx
  char *v26; // r15
  PVOID v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  _DWORD *v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  SIZE_T v40; // rbx
  SIZE_T v41; // r12
  PVOID v42; // rax
  unsigned __int64 v43; // r15
  unsigned __int64 i; // r13
  SIZE_T v45; // rbx
  char *v46; // r15
  PVOID v47; // rax
  size_t v48; // r8
  unsigned __int64 v49; // rdx
  __int128 v50; // xmm6
  _WORD *v51; // rax
  SIZE_T v52; // rbx
  char *v53; // r15
  PVOID v54; // rax
  _DWORD *v55; // rdx
  int v56; // r8d
  _DWORD *v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  _OWORD *v63; // rax
  char valid; // al
  bool v65; // zf
  _DWORD *v66; // rax
  SIZE_T v67; // r12
  const void *v68; // r15
  PVOID v69; // rax
  void **v70; // r13
  __int64 v71; // r11
  _QWORD *v72; // r15
  const void *v73; // r9
  const void *v74; // r12
  unsigned __int16 v75; // cx
  unsigned __int16 v76; // ax
  char v77; // r10
  unsigned __int64 v78; // rcx
  __int64 v79; // rdx
  _DWORD *v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  char *v83; // rbx
  unsigned __int16 v84; // dx
  SIZE_T v85; // rbx
  char *v86; // r15
  PVOID v87; // rax
  unsigned __int64 v88; // rbx
  _QWORD *PoolWithQuotaTag; // rax
  _DWORD *v90; // rcx
  _DWORD *v91; // rax
  _PROCESSOR_NUMBER *v92; // rax
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  PS_PROTECTION v99; // cl
  _OWORD *v100; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int64 v102; // r9
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  _QWORD *v105; // [rsp+48h] [rbp-1D0h]
  unsigned __int16 v106; // [rsp+58h] [rbp-1C0h]
  unsigned __int64 v107; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v108; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v109; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v110; // [rsp+68h] [rbp-1B0h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+74h] [rbp-1A4h] BYREF
  int v112; // [rsp+78h] [rbp-1A0h]
  __int64 v113; // [rsp+80h] [rbp-198h]
  const void *v114; // [rsp+88h] [rbp-190h]
  __int64 v115; // [rsp+90h] [rbp-188h]
  char *v116; // [rsp+98h] [rbp-180h]
  __int64 v117; // [rsp+A0h] [rbp-178h]
  int v118; // [rsp+B4h] [rbp-164h]
  _BYTE *v119; // [rsp+B8h] [rbp-160h]
  unsigned __int64 v120; // [rsp+C0h] [rbp-158h]
  unsigned __int64 v121; // [rsp+C8h] [rbp-150h]
  unsigned __int64 v122; // [rsp+D0h] [rbp-148h]
  _DWORD *v123; // [rsp+D8h] [rbp-140h]
  __int64 v124; // [rsp+E0h] [rbp-138h] BYREF
  unsigned __int64 v125; // [rsp+E8h] [rbp-130h]
  _WORD *v126; // [rsp+F0h] [rbp-128h]
  char *v127; // [rsp+F8h] [rbp-120h]
  _DWORD *v128; // [rsp+100h] [rbp-118h]
  _DWORD *v129; // [rsp+108h] [rbp-110h]
  _OWORD *v130; // [rsp+110h] [rbp-108h]
  _DWORD *v131; // [rsp+118h] [rbp-100h]
  const void *v132; // [rsp+120h] [rbp-F8h]
  int v133; // [rsp+128h] [rbp-F0h]
  _DWORD *v134; // [rsp+138h] [rbp-E0h]
  _PROCESSOR_NUMBER *v135; // [rsp+140h] [rbp-D8h]
  _OWORD *v136; // [rsp+148h] [rbp-D0h]
  unsigned __int64 v137; // [rsp+150h] [rbp-C8h]
  char *v138; // [rsp+158h] [rbp-C0h]
  char *v139; // [rsp+160h] [rbp-B8h]
  PVOID v140; // [rsp+168h] [rbp-B0h]
  char *v141; // [rsp+170h] [rbp-A8h]
  _QWORD *v142; // [rsp+178h] [rbp-A0h]
  const void *v143; // [rsp+180h] [rbp-98h]
  const void *v144; // [rsp+188h] [rbp-90h]
  char *v145; // [rsp+190h] [rbp-88h]
  unsigned __int64 v146; // [rsp+198h] [rbp-80h]
  __int128 v147; // [rsp+1A0h] [rbp-78h] BYREF
  __int128 v148; // [rsp+1B0h] [rbp-68h] BYREF
  int v150; // [rsp+230h] [rbp+18h]

  v150 = a3;
  v115 = a4;
  v4 = a2;
  v112 = a3;
  v117 = a4;
  v6 = a4;
  v113 = a4;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = *a1;
  if ( (unsigned __int64)*a1 < 0x28 )
    return 3221225485LL;
  if ( v4 && v7 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v7 > 0x7FFFFFFF0000LL || (__int64 *)((char *)a1 + v7) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v9 = v7 - 8;
  if ( (v9 & 0x1F) != 0 )
    return 3221225485LL;
  v10 = v9 >> 5;
  v110 = v10;
  v11 = a1 + 1;
  v105 = a1 + 1;
  v12 = 0x7FFFFFFF8LL;
  while ( v10 )
  {
    v13 = *v11;
    v137 = *v11;
    if ( a3 && (v13 & 0x10000) == 0 )
      goto LABEL_17;
    if ( (v13 & 0x20000) != 0 && v11[3] )
      goto LABEL_17;
    v118 = 1 << v13;
    v15 = *(_DWORD *)(a4 + 4);
    if ( ((1 << v13) & v15) != 0 )
      goto LABEL_17;
    *(_DWORD *)(a4 + 4) = v15 | (1 << v13);
    if ( v13 > 0x20014 )
    {
      if ( v13 > 0x3000E )
      {
        v94 = v13 - 196623;
        if ( !v94 )
        {
          if ( !a3 || !v4 || v11[1] != 24LL )
            goto LABEL_17;
          v136 = (_OWORD *)v11[2];
          if ( ((unsigned __int8)v136 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v100 = v136;
          *(_OWORD *)(a4 + 336) = *v136;
          *(_QWORD *)(a4 + 352) = *((_QWORD *)v100 + 2);
          if ( *(_DWORD *)(a4 + 336) != 256 )
          {
LABEL_17:
            v14 = -1073741811;
            goto LABEL_290;
          }
          UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
          v103 = *(_QWORD *)(a4 + 344);
          if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
          {
            if ( UmsContextExtendedSize )
            {
              if ( (v103 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v103 + UmsContextExtendedSize > v102 || v103 + UmsContextExtendedSize < v103 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
          }
          else if ( (v103 & 3) != 0 )
          {
            ExRaiseDatatypeMisalignment();
          }
          v104 = *(_QWORD *)(a4 + 352);
          if ( (v104 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          goto LABEL_144;
        }
        v95 = v94 - 196593;
        if ( v95 )
        {
          v96 = v95 - 1;
          if ( v96 )
          {
            v97 = v96 - 1;
            if ( v97 )
            {
              v98 = v97 - 15;
              if ( !v98 )
              {
                if ( v11[1] != 1LL )
                  goto LABEL_17;
                v99.Level = *((_BYTE *)v11 + 16);
                *(PS_PROTECTION *)(a4 + 376) = v99;
                valid = RtlValidProcessProtection(v99);
                goto LABEL_183;
              }
              if ( v98 != 9 || v11[1] != 1LL )
                goto LABEL_17;
              *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v11[2] != 0LL ? 0x80 : 0);
            }
            else
            {
              if ( v11[1] != 8LL )
                goto LABEL_17;
              *(_QWORD *)(a4 + 144) = v11[2];
            }
          }
          else
          {
            if ( v11[1] != 8LL )
              goto LABEL_17;
            *(_QWORD *)(a4 + 136) = v11[2];
          }
        }
        else
        {
          if ( v11[1] != 8LL )
            goto LABEL_17;
          *(_QWORD *)(a4 + 120) = v11[2];
        }
      }
      else
      {
        if ( v13 == 196622 )
        {
          if ( !a3 || v11[1] != 4LL )
            goto LABEL_17;
          v92 = (_PROCESSOR_NUMBER *)v11[2];
          v135 = v92;
          if ( v4 )
          {
            if ( ((unsigned __int8)v92 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v105;
            v92 = v135;
          }
          ProcNumber = *v92;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
          v65 = ProcessorIndexFromNumber == -1;
          goto LABEL_184;
        }
        v58 = v13 - 131093;
        if ( v58 )
        {
          v59 = v58 - 1;
          if ( !v59 )
          {
            if ( v11[1] != 8LL )
              goto LABEL_17;
            v88 = v11[2];
            v146 = v88;
            if ( v4 )
            {
              if ( (v88 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v88 + 8 > 0x7FFFFFFF0000LL || v88 + 8 < v88 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8uLL, 0x77736350u);
            *(_QWORD *)(a4 + 464) = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              v14 = -1073741801;
              goto LABEL_290;
            }
            *PoolWithQuotaTag = *(_QWORD *)v88;
            v90 = *(_DWORD **)(a4 + 464);
            if ( (*v90 & 3) == 0 || (unsigned int)(v90[1] - 1) > 5 )
              goto LABEL_17;
            goto LABEL_225;
          }
          v60 = v59 - 1;
          if ( !v60 )
          {
            v85 = v11[1];
            if ( v85 > 0xFFFF )
              goto LABEL_17;
            v86 = (char *)v11[2];
            v145 = v86;
            if ( v4 && v85 && ((unsigned __int64)&v86[v85] > 0x7FFFFFFF0000LL || &v86[v85] < v86) )
              MEMORY[0x7FFFFFFF0000] = 0;
            v87 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v85, 0x634F7350u);
            *(_QWORD *)(a4 + 416) = v87;
            if ( !v87 )
              goto LABEL_46;
            memmove(v87, v86, v85);
            *(_DWORD *)(a4 + 424) = v85;
            goto LABEL_225;
          }
          v61 = v60 - 1;
          if ( !v61 )
          {
            v67 = v11[1];
            if ( v67 != 40 )
              goto LABEL_17;
            v68 = (const void *)v11[2];
            v132 = v68;
            if ( v4 )
            {
              if ( ((unsigned __int8)v68 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v11 = v105;
              v67 = 40LL;
              v68 = v132;
            }
            v69 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v67, 0x70426E50u);
            v70 = (void **)(a4 + 432);
            v114 = (const void *)(a4 + 432);
            *(_QWORD *)(a4 + 432) = v69;
            if ( !v69 )
              goto LABEL_46;
            memset(v69, 0, 0x28uLL);
            memmove(*v70, v68, v67);
            v71 = v115;
            v72 = *v70;
            v142 = v72;
            v73 = (const void *)v72[1];
            v114 = v73;
            v143 = v73;
            v74 = (const void *)v72[3];
            v144 = v74;
            v72[1] = 0LL;
            *((_QWORD *)*v70 + 3) = 0LL;
            v75 = *(_WORD *)v72;
            if ( *(_WORD *)v72 )
            {
              v76 = *((_WORD *)v72 + 1);
              if ( v75 > v76 || (v75 & 1) != 0 || (v76 & 1) != 0 || v76 == 0xFFFF || !v73 )
                goto LABEL_17;
              v77 = a2;
              if ( a2 )
              {
                if ( v76 )
                {
                  v78 = (unsigned __int64)v73 + v76;
                  if ( v78 > 0x7FFFFFFF0000LL || v78 < (unsigned __int64)v73 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
              }
            }
            else
            {
              v77 = a2;
            }
            v79 = *((unsigned int *)*v70 + 4);
            v80 = *v70;
            if ( (_DWORD)v79 )
            {
              if ( !v74 || (unsigned int)v79 > 0xFFFF )
                goto LABEL_17;
              if ( v77 )
              {
                v81 = 8 * v79;
                if ( v81 )
                {
                  if ( ((unsigned __int8)v74 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v82 = (unsigned __int64)v74 + v81;
                  if ( v82 > 0x7FFFFFFF0000LL || v82 < (unsigned __int64)v74 )
                  {
                    MEMORY[0x7FFFFFFF0000] = 0;
                    v80 = *(_DWORD **)(v71 + 432);
                  }
                }
              }
            }
            v83 = 0LL;
            v116 = 0LL;
            v84 = *((_WORD *)v72 + 1);
            if ( v84 || v80[4] )
            {
              v83 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v84 + 8LL * (unsigned int)v80[4], 0x70426E50u);
              v116 = v83;
              v84 = *((_WORD *)v72 + 1);
              v73 = v114;
            }
            if ( v84 )
            {
              v72[1] = v83;
              memmove(v83, v73, *((unsigned __int16 *)v72 + 1));
              v83 += *((unsigned __int16 *)v72 + 1);
              v116 = v83;
            }
            if ( *((_DWORD *)*v70 + 4) )
            {
              *((_QWORD *)*v70 + 3) = v83;
              memmove(*((void **)*v70 + 3), v74, 8LL * *((unsigned int *)*v70 + 4));
            }
LABEL_224:
            v6 = v113;
            goto LABEL_225;
          }
          v62 = v61 - 1;
          if ( v62 )
          {
            if ( v62 != 65523 || !a3 || v11[1] != 16LL )
              goto LABEL_17;
            v63 = (_OWORD *)v11[2];
            v130 = v63;
            if ( v4 )
            {
              if ( ((unsigned __int8)v63 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v11 = v105;
              v63 = v130;
            }
            *(_OWORD *)(a4 + 320) = *v63;
            valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_183:
            v65 = valid == 0;
LABEL_184:
            if ( v65 )
              goto LABEL_17;
            goto LABEL_225;
          }
          if ( v11[1] != 4LL )
            goto LABEL_17;
          v66 = (_DWORD *)v11[2];
          v131 = v66;
          if ( v4 )
          {
            if ( ((unsigned __int8)v66 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v105;
            v66 = v131;
          }
          *(_DWORD *)(a4 + 440) = *v66;
        }
        else
        {
          if ( v11[1] != 4LL )
            goto LABEL_17;
          v91 = (_DWORD *)v11[2];
          v134 = v91;
          if ( v4 )
          {
            if ( ((unsigned __int8)v91 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v105;
            v91 = v134;
          }
          *(_DWORD *)(a4 + 412) = *v91;
        }
      }
    }
    else if ( v13 == 131092 )
    {
      if ( v11[1] != 4LL )
        goto LABEL_17;
      v57 = (_DWORD *)v11[2];
      v129 = v57;
      if ( v4 )
      {
        if ( ((unsigned __int8)v57 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v105;
        v57 = v129;
      }
      *(_DWORD *)(a4 + 408) = *v57;
    }
    else
    {
      if ( v13 > 0x20009 )
      {
        v35 = v13 - 131082;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 2;
            if ( !v37 )
            {
              if ( v11[1] != 2LL )
                goto LABEL_17;
              v51 = (_WORD *)v11[2];
              v126 = v51;
              if ( v4 )
              {
                if ( ((unsigned __int8)v51 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v51 = v126;
              }
              v106 = *v51;
              if ( *v51 >= (unsigned __int16)KeNumberNodes )
                goto LABEL_17;
              _mm_lfence();
              if ( !*(_QWORD *)(KeNodeBlock[v106] + 136) )
                goto LABEL_17;
              *(_WORD *)(a4 + 250) = v106;
LABEL_144:
              v11 = v105;
              goto LABEL_227;
            }
            v38 = v37 - 3;
            if ( !v38 )
            {
              v48 = v11[1];
              if ( v48 > 0x10 )
                goto LABEL_17;
              v148 = 0uLL;
              v11 = v105;
              v49 = v105[2];
              if ( v4 && v49 >= 0x7FFFFFFF0000LL )
                v49 = 0x7FFFFFFF0000LL;
              memmove(&v148, (const void *)v49, v48);
              v50 = v148;
              v147 = v148;
              v14 = PspValidateMitigationOptions(&v147, 0LL);
              if ( v14 < 0 )
                goto LABEL_290;
              *(_OWORD *)(a4 + 360) = v50;
              goto LABEL_225;
            }
            v39 = v38 - 2;
            if ( v39 )
            {
              if ( v39 != 1 )
                goto LABEL_17;
              v40 = v11[1];
              if ( !v40 || (v40 & 7) != 0 || (v40 & 0xFFFFFFFFFFFFFFF8uLL) > v12 )
                goto LABEL_17;
              v41 = v11[2];
              v127 = (char *)v41;
              if ( v4 )
              {
                if ( (v41 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v41 + v40 > 0x7FFFFFFF0000LL || v41 + v40 < v41 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              v42 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v40, 0x6C4A7350u);
              *(_QWORD *)(a4 + 392) = v42;
              if ( !v42 )
                goto LABEL_46;
              memset(v42, 0, v40);
              *(_DWORD *)(a4 + 404) = v40 >> 3;
              v43 = 0LL;
              v125 = 0LL;
              for ( i = 0LL; i < *(unsigned int *)(a4 + 404); ++i )
              {
                v14 = ObpReferenceObjectByHandleWithTag(
                        *(_QWORD *)(v41 + 8 * v43),
                        1,
                        (__int64)PsJobType,
                        a2,
                        0x6C4A7350u,
                        &v124,
                        0LL,
                        0LL);
                if ( v14 < 0 )
                  goto LABEL_290;
                *(_QWORD *)(*(_QWORD *)(a4 + 392) + 8 * v43) = v124;
                v43 = i + 1;
                v125 = i + 1;
              }
              goto LABEL_224;
            }
            v45 = v11[1];
            if ( !v45 || (v45 & 7) != 0 || v45 > 0x88 )
              goto LABEL_17;
            v46 = (char *)v11[2];
            v141 = v46;
            if ( v4 )
            {
              if ( ((unsigned __int8)v46 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v46[v45] > 0x7FFFFFFF0000LL || &v46[v45] < v46 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v47 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v45, 0x61547350u);
            *(_QWORD *)(a4 + 384) = v47;
            if ( !v47 )
              goto LABEL_46;
            memmove(v47, v46, v45);
            *(_DWORD *)(a4 + 400) = v45;
            if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 384), v45) )
              goto LABEL_17;
          }
          else
          {
            v52 = v11[1];
            if ( !v52 || (v52 & 7) != 0 || (v52 & 0xFFFFFFFFFFFFFFF8uLL) > v12 )
              goto LABEL_17;
            v53 = (char *)v11[2];
            v127 = v53;
            if ( v4 )
            {
              if ( ((unsigned __int8)v53 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v53[v52] > 0x7FFFFFFF0000LL || &v53[v52] < v53 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v54 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v52, 0x6C487350u);
            *(_QWORD *)(a4 + 296) = v54;
            if ( !v54 )
            {
LABEL_46:
              v14 = -1073741670;
              goto LABEL_290;
            }
            memmove(v54, v53, v52);
            *(_DWORD *)(a4 + 292) = v52 >> 3;
          }
LABEL_225:
          v4 = a2;
          v12 = 0x7FFFFFFF8LL;
        }
        else
        {
          if ( v11[1] != 8LL )
            goto LABEL_17;
          v55 = (_DWORD *)v11[2];
          v128 = v55;
          if ( v4 )
          {
            if ( ((unsigned __int8)v55 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v105;
            v55 = v128;
          }
          if ( (*v55 & 0x1C) != 0 )
          {
            v14 = -1073741637;
            goto LABEL_290;
          }
          v56 = *v55 & 3;
          v133 = v56;
          if ( (unsigned __int8)v56 >= 3u )
            goto LABEL_17;
          *(_BYTE *)(a4 + 9) = (4 * v56) | *(_BYTE *)(a4 + 9) & 0xF3;
          if ( v56 == 1 )
            *(_DWORD *)(a4 + 288) = v55[1];
        }
        a3 = v150;
        goto LABEL_227;
      }
      if ( v13 == 131081 )
      {
        if ( v11[1] != 4LL )
          goto LABEL_17;
        v34 = (_DWORD *)v11[2];
        v123 = v34;
        if ( v4 )
        {
          if ( ((unsigned __int8)v34 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v11 = v105;
          v34 = v123;
        }
        *(_DWORD *)(a4 + 316) = *v34;
      }
      else
      {
        v16 = v13 - 6;
        if ( v16 )
        {
          v17 = v16 - 65533;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 65537;
              if ( !v19 )
              {
                v25 = v11[1];
                if ( !v25 || (v25 & 1) != 0 || v25 > 0xFFFF )
                  goto LABEL_17;
                v26 = (char *)v11[2];
                v139 = v26;
                if ( v4 && ((unsigned __int64)&v26[v25] > 0x7FFFFFFF0000LL || &v26[v25] < v26) )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v27 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v25, 0x6E467350u);
                v140 = v27;
                if ( !v27 )
                  goto LABEL_46;
                *(_QWORD *)(a4 + 232) = 0LL;
                *(_WORD *)(a4 + 234) = v25;
                *(_QWORD *)(a4 + 240) = v27;
                memmove(v27, v26, v25);
                *(_WORD *)(a4 + 232) = v25;
                goto LABEL_225;
              }
              v20 = v19 - 2;
              if ( !v20 )
              {
                v22 = v11[1];
                if ( !v22 || (v22 & 0xF) != 0 )
                  goto LABEL_17;
                v23 = (char *)v11[2];
                v138 = v23;
                if ( v4 )
                {
                  if ( ((unsigned __int8)v23 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v23[v22] > 0x7FFFFFFF0000LL || &v23[v22] < v23 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                if ( v22 > 0x10 )
                {
                  *(_QWORD *)(v6 + 280) = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v22, 0x6C527350u);
                  v24 = *(void **)(a4 + 280);
                  if ( !v24 )
                    goto LABEL_46;
                }
                else
                {
                  v24 = (void *)(a4 + 264);
                  *(_QWORD *)(v6 + 280) = a4 + 264;
                }
                memmove(v24, v23, v22);
                *(_QWORD *)(a4 + 256) = v22 >> 4;
                goto LABEL_225;
              }
              if ( v20 != 1 || v11[1] != 1LL )
                goto LABEL_17;
              v21 = (_BYTE *)v11[2];
              v119 = v21;
              if ( v4 )
              {
                v11 = v105;
                v21 = v119;
              }
              *(_BYTE *)(a4 + 248) = *v21;
            }
            else
            {
              if ( v11[1] != 8LL )
                goto LABEL_17;
              v28 = v11[2];
              v120 = v28;
              if ( v4 )
              {
                if ( (v28 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v28 >= 0x7FFFFFFF0000LL )
                  v28 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v28 = *(_BYTE *)v28;
                *(_BYTE *)(v28 + 7) = *(_BYTE *)(v28 + 7);
                v11 = v105;
                v28 = v120;
              }
              *(_QWORD *)(a4 + 24) = v28;
              v29 = v11[3];
              v107 = v29;
              if ( v29 )
              {
                if ( v4 )
                {
                  if ( (v29 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v29 >= 0x7FFFFFFF0000LL )
                    v29 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v29 = *(_BYTE *)v29;
                  *(_BYTE *)(v29 + 7) = *(_BYTE *)(v29 + 7);
                  v11 = v105;
                  v29 = v107;
                }
                *(_QWORD *)v29 = 8LL;
              }
            }
          }
          else
          {
            if ( v11[1] != 16LL )
              goto LABEL_17;
            v30 = v11[2];
            v121 = v30;
            if ( v4 )
            {
              if ( (v30 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v30 >= 0x7FFFFFFF0000LL )
                v30 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v30 = *(_BYTE *)v30;
              *(_BYTE *)(v30 + 15) = *(_BYTE *)(v30 + 15);
              v11 = v105;
              v30 = v121;
            }
            *(_QWORD *)(a4 + 16) = v30;
            v31 = v11[3];
            v108 = v31;
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
                v11 = v105;
                v31 = v108;
              }
              *(_QWORD *)v31 = 16LL;
            }
          }
        }
        else
        {
          if ( v11[1] != 64LL )
            goto LABEL_17;
          v32 = v11[2];
          v122 = v32;
          if ( v4 )
          {
            if ( (v32 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v32 >= 0x7FFFFFFF0000LL )
              v32 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v32 = *(_BYTE *)v32;
            *(_BYTE *)(v32 + 63) = *(_BYTE *)(v32 + 63);
            v11 = v105;
            v32 = v122;
          }
          *(_QWORD *)(a4 + 32) = v32;
          v33 = v11[3];
          v109 = v33;
          if ( v33 )
          {
            if ( v4 )
            {
              if ( (v33 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v33 >= 0x7FFFFFFF0000LL )
                v33 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v33 = *(_BYTE *)v33;
              *(_BYTE *)(v33 + 7) = *(_BYTE *)(v33 + 7);
              v11 = v105;
              v33 = v109;
            }
            *(_QWORD *)v33 = 64LL;
          }
        }
      }
    }
LABEL_227:
    v11 += 4;
    v105 = v11;
    v10 = --v110;
  }
  v14 = 0;
LABEL_290:
  if ( v14 < 0 )
    goto LABEL_296;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v14 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v112 != 0);
  }
  if ( v14 < 0 )
LABEL_296:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v14;
}
