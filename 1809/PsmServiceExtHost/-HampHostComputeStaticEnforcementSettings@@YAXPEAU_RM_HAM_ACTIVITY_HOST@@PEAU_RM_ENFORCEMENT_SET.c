/*
 * XREFs of ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180028F40
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800248E0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x180029B00 (RmpActivityImportanceMergeVectors.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18002C308 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180049ACC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x180055AA8 (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 */

void __fastcall HampHostComputeStaticEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        struct _RM_COMMIT_THRESHOLDS *a4,
        struct _HAM_ACTIVITY **a5)
{
  unsigned __int64 v5; // r14
  char *v8; // r9
  unsigned __int64 v9; // rdx
  __int16 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  bool v15; // zf
  char *v16; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // r10
  __int64 v20; // r11
  char v21; // al
  int v22; // ecx
  char v23; // al
  BOOL v24; // eax
  int v25; // ecx
  char *v26; // rax
  char v27; // di
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  char *v32; // rax
  DWORD v33; // edi
  __int64 v34; // rsi
  __int64 v35; // r14
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v38; // ecx
  bool v39; // bl
  _QWORD *v40; // rax
  DWORD v41; // edi
  _QWORD *v42; // rbx
  char v43; // bl
  char *v44; // rax
  DWORD v45; // edi
  _QWORD *v46; // rbx
  unsigned __int64 v47; // rdi
  BOOL v48; // ebx
  _QWORD *v49; // rax
  unsigned __int8 v50; // cl
  int v51; // r8d
  int v52; // eax
  char v53; // al
  char v54; // cl
  char v55; // al
  char v56; // cl
  char *v57; // rbx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r10
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // r9
  unsigned __int64 v68; // r11
  unsigned __int64 v69; // rdx
  char *v70; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v71; // rcx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r9
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int128 v78; // xmm2
  unsigned __int64 v79; // rcx
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  struct _RM_COMMIT_THRESHOLDS *v82; // rax
  struct _RM_COMMIT_THRESHOLDS *v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // r9
  unsigned __int64 v87; // r15
  unsigned __int64 v88; // rdi
  unsigned __int64 v89; // rax
  __int128 v90; // xmm1
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rcx
  char *v95; // rax
  int v96; // eax
  unsigned int v97; // r9d
  unsigned int v98; // r10d
  int v99; // ecx
  int v100; // eax
  __int64 v101; // rcx
  __int128 v102; // xmm1
  __int128 v103; // [rsp+20h] [rbp-51h] BYREF
  __int128 v104; // [rsp+30h] [rbp-41h]
  __int64 v105; // [rsp+40h] [rbp-31h]
  __int64 v106; // [rsp+48h] [rbp-29h]
  __int64 v107; // [rsp+50h] [rbp-21h]
  __int64 v108; // [rsp+58h] [rbp-19h]
  int v109; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v110; // [rsp+68h] [rbp-9h] BYREF
  char *v111; // [rsp+70h] [rbp-1h]
  unsigned int v112; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned int v113; // [rsp+D8h] [rbp+67h]
  struct _RM_COMMIT_THRESHOLDS *v114; // [rsp+E0h] [rbp+6Fh]
  struct _RM_COMMIT_THRESHOLDS *v115; // [rsp+E8h] [rbp+77h]

  v115 = a4;
  v114 = a3;
  v5 = 0LL;
  v108 = 0LL;
  v112 = 0;
  v107 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v8 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  v9 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  v10 = 1;
  *((_DWORD *)a2 + 6) = 1;
  v11 = 0LL;
  v106 = 0LL;
  v12 = *((_QWORD *)a1 + 94);
  LOWORD(v112) = 1;
  v111 = 0LL;
  v113 = 0;
  v13 = *(_QWORD *)(v12 + 88);
  v103 = 0uLL;
  v105 = 0LL;
  v104 = 0uLL;
  v14 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
      - 168;
  v15 = *((_DWORD *)a1 + 140) == 2;
  v110 = v14;
  v16 = 0LL;
  *((_DWORD *)a2 + 6) = !v15;
  v17 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 73);
  if ( v17 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 584) )
    v16 = (char *)v17 - 96;
  if ( v16 )
  {
    v18 = v112;
    while ( 1 )
    {
      v19 = *((_QWORD *)v16 + 64);
      v20 = *((_QWORD *)a1 + 97);
      if ( v19 == v20 )
      {
        v21 = v16[548];
      }
      else
      {
        if ( v19 )
          goto LABEL_23;
        if ( v16[548] != 2 )
          goto LABEL_23;
        v21 = 2;
        if ( (unsigned __int8)v16[549] < 4u )
          goto LABEL_23;
      }
      v9 = (unsigned int)(v9 + 1);
      v15 = (v16[480] & 0x20) == 0;
      v113 = v9;
      if ( !v15 )
        break;
      v84 = *((_QWORD *)v16 + 58);
      v85 = *((_QWORD *)v16 + 57);
      v9 = *((_QWORD *)v16 + 56);
      v86 = *((_QWORD *)v16 + 55);
      if ( v84 == -1LL || v106 == -1 || (v87 = v84 + v106, v106 = v87, v87 < v84) )
      {
        v106 = -1LL;
        *((_QWORD *)&v104 + 1) = -1LL;
      }
      else
      {
        *((_QWORD *)&v104 + 1) = v87;
      }
      if ( v85 == -1LL || v11 == -1 || (v88 = v85 + v11, v105 = v88, v88 < v85) )
      {
        v105 = -1LL;
        *(_QWORD *)&v104 = -1LL;
      }
      else
      {
        *(_QWORD *)&v104 = v88;
      }
      if ( v9 == -1LL || v107 == -1 || (v89 = v9 + v107, v107 = v89, v89 < v9) )
      {
        v89 = -1LL;
        v107 = -1LL;
      }
      *((_QWORD *)&v103 + 1) = v89;
      if ( v86 == -1LL || v5 == -1LL || (v5 += v86, v108 = v5, v5 < v86) )
      {
        v5 = -1LL;
        v108 = -1LL;
      }
      *(_QWORD *)&v103 = v5;
LABEL_23:
      v27 = v16[548];
      if ( v27 == 3 || v27 == 2 && (unsigned __int8)v16[549] >= 2u || v19 == v20 )
      {
        v28 = *((unsigned int *)v16 + 106);
        if ( (v28 & 1) != 0 )
          v18 = RmpActivityImportanceMergeVectors(v28, v18);
        if ( v27 != 3 )
        {
          if ( v27 != 2 )
            goto LABEL_30;
          if ( (unsigned __int8)v16[549] < 2u )
            goto LABEL_128;
        }
        v29 = *((_DWORD *)v16 + 120) & 3;
        if ( v29 <= *((_DWORD *)a2 + 6) )
          v29 = *((_DWORD *)a2 + 6);
        *((_DWORD *)a2 + 6) = v29;
        v27 = v16[548];
      }
LABEL_30:
      if ( v27 == 3 )
        goto LABEL_31;
      if ( v27 == 2 )
      {
LABEL_128:
        if ( (unsigned __int8)v16[549] >= 4u )
LABEL_31:
          *((_BYTE *)a2 + 28) ^= (*((_BYTE *)a2 + 28) ^ (*((_BYTE *)a2 + 28) | (*((_DWORD *)v16 + 120) >> 3))) & 1;
      }
      if ( (*(_BYTE *)(v14 - 1100) & 0x10) == 0 )
      {
        LOBYTE(v9) = 4;
        if ( !(unsigned int)HampActIsStartedOrReachedPendState(v16, v9)
          && *((_QWORD *)v16 + 64) == *((_QWORD *)a1 + 97)
          && v97 )
        {
          v97 = v98;
        }
        if ( ((*((unsigned __int8 *)a2 + 28) >> 4) & 7u) > v97 )
          LOBYTE(v97) = (*((_BYTE *)a2 + 28) >> 4) & 7;
        *((_BYTE *)a2 + 28) = *((_BYTE *)a2 + 28) & 0x8F | (16 * v97);
      }
      v30 = *((_QWORD *)v16 + 12);
      v31 = *((_QWORD *)v16 + 10);
      v16 = 0LL;
      v8 = v111;
      v15 = v30 == v31 + 584;
      v32 = (char *)(v30 - 96);
      v9 = v113;
      if ( !v15 )
        v16 = v32;
      if ( !v16 )
      {
        v112 = v18;
        v10 = v18;
        goto LABEL_37;
      }
      v11 = v105;
    }
    if ( v8 )
    {
      v9 = *((_QWORD *)v16 + 10);
      if ( v21 == 3 )
      {
        v22 = 1;
      }
      else
      {
        v22 = 0;
        if ( v21 == 2 )
          LOBYTE(v22) = (unsigned __int8)v16[549] >= 4u;
      }
      v23 = v8[548];
      if ( v23 == 3 )
        v24 = 1;
      else
        v24 = v23 == 2 && (unsigned __int8)v8[549] >= 4u;
      if ( v22 )
      {
        if ( v24 )
        {
LABEL_16:
          if ( (*((_DWORD *)v16 + 28) & 0x10000) == 0 || (*((_DWORD *)v8 + 28) & 0x10000) != 0 )
          {
            if ( (*((_DWORD *)v16 + 28) & 0x10000) != 0 || (*((_DWORD *)v8 + 28) & 0x10000) == 0 )
            {
              v91 = *((_QWORD *)v16 + 57);
              v92 = *((_QWORD *)v8 + 57);
              if ( v91 > v92 )
              {
                v25 = 1;
              }
              else if ( v91 < v92 )
              {
                v25 = -1;
              }
              else
              {
                v93 = *((_QWORD *)v16 + 58);
                v94 = *((_QWORD *)v8 + 58);
                if ( v93 > v94 )
                {
                  v25 = 1;
                }
                else if ( v93 < v94 )
                {
                  v25 = -1;
                }
                else
                {
                  v95 = *(char **)(v9 + 976);
                  if ( v16 == v95 )
                    v25 = 1;
                  else
                    v25 = (v8 != v95) - 1;
                }
              }
            }
            else
            {
              v25 = -1;
            }
          }
          else
          {
            v25 = 1;
          }
          goto LABEL_20;
        }
        v25 = 1;
      }
      else
      {
        if ( !v24 )
          goto LABEL_16;
        v25 = -1;
      }
    }
    else
    {
      v25 = 1;
    }
LABEL_20:
    v26 = v16;
    if ( v25 <= 0 )
      v26 = v8;
    v111 = v26;
    goto LABEL_23;
  }
LABEL_37:
  v33 = HampLockTrackerId;
  v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 94) + 88LL) + 88LL);
  v35 = *(_QWORD *)(v34 + 160);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v33) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v35 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v38 = HampLockTrackerId;
  *(_DWORD *)(v35 + 104) = CurrentThreadId;
  v39 = (*(_DWORD *)(v35 + 132) & 2) != 0;
  if ( v38 != -1 )
  {
    v40 = TlsGetValue(v38);
    if ( (*(_DWORD *)v40 & 0x100LL) == 0 )
      __int2c();
    v15 = v40[9]-- == 1LL;
    if ( v15 )
      *v40 &= ~0x100uLL;
  }
  *(_DWORD *)(v35 + 104) = 0;
  RtlReleaseSRWLockExclusive(v35 + 96);
  if ( v39 )
    goto LABEL_226;
  v41 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v42 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v41) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v42 |= 0x80uLL;
    ++v42[8];
  }
  RtlAcquireSRWLockShared(v34 + 168);
  v43 = *(_BYTE *)(v34 + 184) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v44 = (char *)TlsGetValue(HampLockTrackerId);
    if ( *v44 >= 0 )
      __int2c();
    v15 = (*((_QWORD *)v44 + 8))-- == 1LL;
    if ( v15 )
      *(_QWORD *)v44 &= ~0x80uLL;
  }
  RtlReleaseSRWLockShared(v34 + 168);
  if ( v43 )
  {
LABEL_226:
    v96 = *((_DWORD *)a2 + 6);
    if ( v96 <= 1 )
      v96 = 1;
    *((_DWORD *)a2 + 6) = v96;
  }
  v45 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v46 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *v46 |= 0x400uLL;
    ++v46[11];
  }
  v47 = v110;
  RtlAcquireSRWLockShared(v110);
  v48 = *(_DWORD *)(v110 + 396) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v49 = TlsGetValue(HampLockTrackerId);
    if ( (*(_DWORD *)v49 & 0x400LL) == 0 )
      __int2c();
    v15 = v49[11]-- == 1LL;
    if ( v15 )
      *v49 &= ~0x400uLL;
  }
  RtlReleaseSRWLockShared(v47);
  if ( v48 )
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v109, 0LL);
    if ( (v109 & 0x100) != 0 )
    {
      v99 = *((_DWORD *)a1 + 268);
      if ( v99 <= *((_DWORD *)a2 + 6) )
        v99 = *((_DWORD *)a2 + 6);
      *((_DWORD *)a2 + 6) = v99;
    }
    else
    {
      v100 = *((_DWORD *)a2 + 6);
      if ( v100 < 1 )
        v100 = 1;
      *((_DWORD *)a2 + 6) = v100;
    }
  }
  v50 = v112;
  if ( (v10 & 0xC0) == 0xC0 )
    v51 = 2;
  else
    v51 = (v112 & 0xE) >= 8 && (v112 & 0x30) >= 0x20;
  v52 = *((_DWORD *)a2 + 6);
  if ( v52 <= v51 )
  {
    if ( (v10 & 0xC0) == 0xC0 )
      v52 = 2;
    else
      v52 = (v112 & 0xE) >= 8 && (v112 & 0x30) >= 0x20;
  }
  *((_BYTE *)a2 + 28) &= ~2u;
  *((_DWORD *)a2 + 6) = v52;
  *((_BYTE *)a2 + 28) |= 2 * (v50 >> 7);
  if ( (v10 & 0x100) == 0
    || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v112, (union _RM_OPTIMIZATION_STATE *)&v110),
        (v112 & 0x10) != 0)
    || (v110 & 0x10) != 0 )
  {
    v53 = 0;
  }
  else
  {
    v53 = 8;
  }
  v54 = v53 | *((_BYTE *)a2 + 28) & 0xF7;
  *((_BYTE *)a2 + 28) = v54;
  v55 = v54;
  if ( (*((_BYTE *)a1 + 1076) & 8) != 0 )
  {
    v55 = v54;
    if ( (*((_QWORD *)a1 + 79) & 0x2000000000000LL) != 0 )
    {
      v55 = v54 | 8;
      *((_BYTE *)a2 + 28) = v54 | 8;
    }
  }
  if ( (v10 & 0x400) == 0 || (*((_QWORD *)a1 + 79) & 0x8000000000000LL) != 0 )
    v56 = 0;
  else
    v56 = 4;
  v57 = v111;
  *((_BYTE *)a2 + 28) = v56 | v55 & 0xFB;
  if ( v57 )
  {
    v58 = *((_QWORD *)v57 + 58);
    v59 = *((_QWORD *)v57 + 57);
    v60 = *((_QWORD *)v57 + 56);
    v61 = *((_QWORD *)v57 + 55);
    if ( v58 == -1LL || v106 == -1 || (v62 = v58 + v106, v106 = v62, v62 < v58) )
    {
      v62 = -1LL;
      v106 = -1LL;
    }
    *((_QWORD *)&v104 + 1) = v62;
    if ( v59 == -1LL || v105 == -1 || (v63 = v59 + v105, v105 = v63, v63 < v59) )
    {
      v63 = -1LL;
      v105 = -1LL;
    }
    *(_QWORD *)&v104 = v63;
    if ( v60 == -1LL || v107 == -1 || (v64 = v60 + v107, v107 = v64, v64 < v60) )
    {
      v64 = -1LL;
      v107 = -1LL;
    }
    *((_QWORD *)&v103 + 1) = v64;
    if ( v61 == -1LL || v108 == -1 || (v65 = v61 + v108, v61 + v108 < v61) )
    {
      v65 = -1LL;
      *(_QWORD *)&v103 = -1LL;
    }
    else
    {
      *(_QWORD *)&v103 = v61 + v108;
    }
  }
  else
  {
    v65 = v108;
  }
  if ( v113 )
  {
    v66 = v105;
    v67 = v106;
    v68 = v107;
  }
  else
  {
    v90 = *((_OWORD *)a1 + 54);
    v103 = *((_OWORD *)a1 + 53);
    v68 = *((_QWORD *)&v103 + 1);
    v65 = v103;
    v104 = v90;
    v67 = *((_QWORD *)&v90 + 1);
    v66 = v90;
  }
  v69 = *((_QWORD *)a1 + 115);
  if ( v66 < v69 && v66 )
  {
    RmpCommitThresholdsScaleToTarget((struct _RM_COMMIT_THRESHOLDS *)&v103, v69, (struct _RM_COMMIT_THRESHOLDS *)&v103);
    v67 = *((_QWORD *)&v104 + 1);
    v66 = v104;
    v68 = *((_QWORD *)&v103 + 1);
    v65 = v103;
  }
  v70 = 0LL;
  v71 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 73);
  if ( v71 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 584) )
    v70 = (char *)v71 - 96;
  if ( v70 && (*((_DWORD *)v70 + 28) & 0x80000) != 0 )
  {
    v101 = *((_QWORD *)HampHostGetFirstActivity(a1) + 9);
    v102 = *(_OWORD *)(v101 + 88);
    v103 = *(_OWORD *)(v101 + 72);
    v68 = *((_QWORD *)&v103 + 1);
    v65 = v103;
    v104 = v102;
    v67 = *((_QWORD *)&v102 + 1);
    v66 = v102;
  }
  v72 = *((_QWORD *)a1 + 116);
  if ( v67 == -1LL )
  {
    v73 = -1LL;
  }
  else
  {
    if ( v67 < v72 )
      v73 = -1LL;
    else
      v73 = v67 - v72;
    if ( v67 < v72 )
      v73 = 0LL;
  }
  if ( v66 == -1LL )
  {
    v74 = -1LL;
  }
  else
  {
    if ( v66 < v72 )
      v74 = -1LL;
    else
      v74 = v66 - v72;
    if ( v66 < v72 )
      v74 = 0LL;
  }
  if ( v68 == -1LL )
  {
    v75 = -1LL;
  }
  else
  {
    if ( v68 < v72 )
      v75 = -1LL;
    else
      v75 = v68 - v72;
    if ( v68 < v72 )
      v75 = 0LL;
  }
  if ( v65 == -1LL )
  {
    v76 = -1LL;
  }
  else
  {
    if ( v65 < v72 )
      v76 = -1LL;
    else
      v76 = v65 - v72;
    if ( v65 < v72 )
      v76 = 0LL;
  }
  v77 = *((_QWORD *)a1 + 117);
  if ( v73 != -1LL )
  {
    if ( v73 < v77 )
      v73 = 0LL;
    else
      v73 -= v77;
  }
  *((_QWORD *)&v104 + 1) = v73;
  if ( v74 == -1LL )
  {
    *(_QWORD *)&v104 = -1LL;
  }
  else if ( v74 < v77 )
  {
    *(_QWORD *)&v104 = 0LL;
  }
  else
  {
    *(_QWORD *)&v104 = v74 - v77;
  }
  if ( v75 == -1LL )
  {
    *((_QWORD *)&v103 + 1) = -1LL;
  }
  else if ( v75 < v77 )
  {
    *((_QWORD *)&v103 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)&v103 + 1) = v75 - v77;
  }
  if ( v76 == -1LL )
  {
    *(_QWORD *)&v103 = -1LL;
  }
  else if ( v76 < v77 )
  {
    *(_QWORD *)&v103 = 0LL;
  }
  else
  {
    *(_QWORD *)&v103 = v76 - v77;
  }
  v78 = v104;
  v79 = *((_QWORD *)a1 + 103);
  v80 = v103;
  v81 = v104;
  if ( v73 > v79 )
  {
    v79 = *((_QWORD *)&v104 + 1);
  }
  else
  {
    *((_QWORD *)&v104 + 1) = *((_QWORD *)a1 + 103);
    v81 = v104;
  }
  if ( (unsigned __int64)v81 <= *((_QWORD *)a1 + 104) )
  {
    *(_QWORD *)&v104 = *((_QWORD *)a1 + 104);
    v81 = v104;
  }
  v82 = v114;
  *((_QWORD *)a2 + 2) = v79;
  if ( v82 )
  {
    *(_OWORD *)v82 = v80;
    *((_OWORD *)v82 + 1) = v78;
  }
  v83 = v115;
  if ( v115 )
  {
    *(_OWORD *)v115 = v80;
    *((_OWORD *)v83 + 1) = v81;
  }
  if ( a5 )
    *a5 = (struct _HAM_ACTIVITY *)v57;
}
