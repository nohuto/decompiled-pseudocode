/*
 * XREFs of ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002B180
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000D7B4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180028200 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800288A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000E0B0 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x18002BD10 (RmpActivityImportanceMergeVectors.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x180037DB4 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18004936C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180062574 (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18006260C (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 */

void __fastcall HampHostComputeStaticEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        struct _RM_COMMIT_THRESHOLDS *a4,
        struct _HAM_ACTIVITY **a5)
{
  unsigned __int64 v5; // r14
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  __int16 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // r8d
  unsigned __int64 v20; // r15
  __int64 v21; // r10
  __int64 v22; // r11
  char v23; // al
  int v24; // ecx
  char v25; // al
  BOOL v26; // eax
  int v27; // ecx
  __int64 v28; // rax
  char v29; // di
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  DWORD v34; // edi
  __int64 v35; // r14
  __int64 v36; // rsi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v39; // ecx
  bool v40; // bl
  _QWORD *v41; // rax
  DWORD v42; // edi
  _QWORD *v43; // rbx
  char v44; // bl
  char *v45; // rax
  DWORD v46; // edi
  _QWORD *v47; // rbx
  unsigned __int64 v48; // rsi
  BOOL v49; // ebx
  _QWORD *v50; // rax
  struct _RM_HAM_ACTIVITY_HOST *v51; // rbx
  unsigned __int8 v52; // cl
  int v53; // r8d
  int v54; // eax
  char v55; // al
  char v56; // cl
  char v57; // al
  char v58; // cl
  __int64 v59; // r14
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v70; // rax
  char *v71; // rax
  char *v72; // rcx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  __int128 v75; // xmm2
  unsigned __int64 v76; // rcx
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  struct _RM_COMMIT_THRESHOLDS *v79; // rax
  struct _RM_COMMIT_THRESHOLDS *v80; // rax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // r9
  unsigned __int64 v85; // rdi
  unsigned __int64 v86; // rax
  __int128 v87; // xmm1
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  int v91; // eax
  unsigned int v92; // r9d
  unsigned int v93; // r10d
  int v94; // ecx
  int v95; // eax
  __int64 v96; // rcx
  __int128 v97; // xmm1
  __int128 v98; // [rsp+20h] [rbp-51h] BYREF
  __int128 v99; // [rsp+30h] [rbp-41h]
  __int128 v100; // [rsp+40h] [rbp-31h]
  int v101; // [rsp+50h] [rbp-21h]
  __int64 v102; // [rsp+58h] [rbp-19h]
  int v103; // [rsp+60h] [rbp-11h]
  int v104; // [rsp+64h] [rbp-Dh] BYREF
  __int64 v105; // [rsp+68h] [rbp-9h]
  unsigned __int64 v106; // [rsp+70h] [rbp-1h]
  struct _RM_HAM_ACTIVITY_HOST *v107; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned int v108; // [rsp+D8h] [rbp+67h] BYREF
  struct _RM_COMMIT_THRESHOLDS *v109; // [rsp+E0h] [rbp+6Fh]
  struct _RM_COMMIT_THRESHOLDS *v110; // [rsp+E8h] [rbp+77h]

  v110 = a4;
  v109 = a3;
  v107 = a1;
  v5 = 0LL;
  v100 = 0uLL;
  *(_QWORD *)&v98 = 0LL;
  v108 = 0;
  *(_QWORD *)a2 = 0LL;
  v8 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  v9 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v10 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)&v98 + 1) = 0LL;
  *((_DWORD *)a2 + 6) = 1;
  v11 = 1;
  v12 = *((_QWORD *)a1 + 97);
  v105 = 0LL;
  v101 = 0;
  v102 = 0LL;
  v13 = *(_QWORD *)(v12 + 88);
  v99 = 0uLL;
  v103 = 1;
  v14 = *(_QWORD *)(v13 + 32);
  LOWORD(v108) = 1;
  v15 = *((_DWORD *)a1 + 140) == 2;
  v106 = (*(_QWORD *)(*(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) - 168;
  *((_DWORD *)a2 + 6) = !v15;
  v16 = *((_QWORD *)a1 + 75);
  LODWORD(v13) = v16 != (_QWORD)a1 + 600;
  v17 = v16 - 96;
  v18 = 0LL;
  if ( (_DWORD)v13 )
    v18 = v17;
  if ( v18 )
  {
    v19 = v108;
    v20 = v106;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v18 + 512);
      v22 = *((_QWORD *)a1 + 100);
      if ( v21 == v22 )
      {
        v23 = *(_BYTE *)(v18 + 548);
      }
      else
      {
        if ( v21 )
          goto LABEL_23;
        if ( *(_BYTE *)(v18 + 548) != 2 )
          goto LABEL_23;
        v23 = 2;
        if ( *(_BYTE *)(v18 + 549) < 5u )
          goto LABEL_23;
      }
      ++v101;
      if ( (*(_BYTE *)(v18 + 480) & 0x20) != 0 )
        break;
      v81 = *(_QWORD *)(v18 + 464);
      v82 = *(_QWORD *)(v18 + 456);
      v83 = *(_QWORD *)(v18 + 448);
      v84 = *(_QWORD *)(v18 + 440);
      if ( v81 == -1LL || v10 == -1LL || (v10 += v81, v10 < v81) )
        v10 = -1LL;
      *((_QWORD *)&v99 + 1) = v10;
      if ( v82 == -1LL || v9 == -1 || (v85 = v82 + v9, v102 = v85, v85 < v82) )
      {
        v102 = -1LL;
        *(_QWORD *)&v99 = -1LL;
      }
      else
      {
        *(_QWORD *)&v99 = v85;
      }
      if ( v83 == -1LL
        || *((_QWORD *)&v100 + 1) == -1LL
        || (v86 = v83 + *((_QWORD *)&v100 + 1), *((_QWORD *)&v100 + 1) = v86, v86 < v83) )
      {
        v86 = -1LL;
        *((_QWORD *)&v100 + 1) = -1LL;
      }
      *((_QWORD *)&v98 + 1) = v86;
      if ( v84 == -1LL || v5 == -1LL || (v5 += v84, v5 < v84) )
        v5 = -1LL;
      *(_QWORD *)&v98 = v5;
LABEL_23:
      v29 = *(_BYTE *)(v18 + 548);
      if ( v29 == 3 || v29 == 2 && *(_BYTE *)(v18 + 549) >= 3u || v21 == v22 )
      {
        v30 = *(unsigned int *)(v18 + 424);
        if ( (v30 & 1) != 0 )
          v19 = RmpActivityImportanceMergeVectors(v30, v19);
        if ( v29 != 3 )
        {
          if ( v29 != 2 )
            goto LABEL_30;
          if ( *(_BYTE *)(v18 + 549) < 3u )
            goto LABEL_127;
        }
        v31 = *(_DWORD *)(v18 + 480) & 3;
        if ( v31 <= *((_DWORD *)a2 + 6) )
          v31 = *((_DWORD *)a2 + 6);
        *((_DWORD *)a2 + 6) = v31;
        v29 = *(_BYTE *)(v18 + 548);
      }
LABEL_30:
      if ( v29 == 3 )
        goto LABEL_31;
      if ( v29 == 2 )
      {
LABEL_127:
        if ( *(_BYTE *)(v18 + 549) >= 5u )
LABEL_31:
          *((_BYTE *)a2 + 28) ^= (*((_BYTE *)a2 + 28) ^ (*((_BYTE *)a2 + 28) | (*(_DWORD *)(v18 + 480) >> 3))) & 1;
      }
      if ( (*(_BYTE *)(v20 - 1100) & 0x10) != 0 )
      {
        if ( !HampActIsStartedOrReachedPendState(v18, 5u) && *(_QWORD *)(v18 + 512) == *((_QWORD *)a1 + 100) && v92 )
          v92 = v93;
        if ( ((*((unsigned __int8 *)a2 + 28) >> 4) & 7u) > v92 )
          LOBYTE(v92) = (*((_BYTE *)a2 + 28) >> 4) & 7;
        *((_BYTE *)a2 + 28) = *((_BYTE *)a2 + 28) & 0x8F | (16 * v92);
      }
      v32 = *(_QWORD *)(v18 + 96);
      v33 = *(_QWORD *)(v18 + 80);
      v18 = 0LL;
      v8 = v105;
      if ( v32 != v33 + 600 )
        v18 = v32 - 96;
      if ( !v18 )
      {
        v108 = v19;
        v11 = v19;
        *(_QWORD *)&v100 = v5;
        goto LABEL_37;
      }
      v9 = v102;
    }
    if ( v8 )
    {
      if ( v23 == 3 )
      {
        v24 = 1;
      }
      else
      {
        v24 = 0;
        if ( v23 == 2 )
          LOBYTE(v24) = *(_BYTE *)(v18 + 549) >= 5u;
      }
      v25 = *(_BYTE *)(v8 + 548);
      if ( v25 == 3 )
        v26 = 1;
      else
        v26 = v25 == 2 && *(_BYTE *)(v8 + 549) >= 5u;
      if ( v24 )
      {
        if ( v26 )
        {
LABEL_16:
          if ( (*(_DWORD *)(v18 + 112) & 0x10000) == 0 || (*(_DWORD *)(v8 + 112) & 0x10000) != 0 )
          {
            if ( (*(_DWORD *)(v18 + 112) & 0x10000) != 0 || (*(_DWORD *)(v8 + 112) & 0x10000) == 0 )
            {
              v88 = *(_QWORD *)(v18 + 456);
              if ( v88 > *(_QWORD *)(v8 + 456) )
              {
                v27 = 1;
              }
              else if ( v88 < *(_QWORD *)(v8 + 456) )
              {
                v27 = -1;
              }
              else
              {
                v89 = *(_QWORD *)(v18 + 464);
                if ( v89 > *(_QWORD *)(v8 + 464) )
                {
                  v27 = 1;
                }
                else if ( v89 < *(_QWORD *)(v8 + 464) )
                {
                  v27 = -1;
                }
                else
                {
                  v90 = *(_QWORD *)(*(_QWORD *)(v18 + 80) + 1000LL);
                  if ( v18 == v90 )
                    v27 = 1;
                  else
                    v27 = (v8 != v90) - 1;
                }
              }
            }
            else
            {
              v27 = -1;
            }
          }
          else
          {
            v27 = 1;
          }
          goto LABEL_20;
        }
        v27 = 1;
      }
      else
      {
        if ( !v26 )
          goto LABEL_16;
        v27 = -1;
      }
    }
    else
    {
      v27 = 1;
    }
LABEL_20:
    v28 = v18;
    if ( v27 <= 0 )
      v28 = v8;
    v105 = v28;
    goto LABEL_23;
  }
LABEL_37:
  v34 = HampLockTrackerId;
  v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL) + 88LL);
  v36 = *(_QWORD *)(v35 + 160);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v36 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v39 = HampLockTrackerId;
  *(_DWORD *)(v36 + 104) = CurrentThreadId;
  v40 = (*(_DWORD *)(v36 + 132) & 2) != 0;
  if ( v39 != -1 )
  {
    v41 = TlsGetValue(v39);
    if ( (*(_DWORD *)v41 & 0x100LL) == 0 )
      __int2c();
    v15 = v41[9]-- == 1LL;
    if ( v15 )
      *v41 &= ~0x100uLL;
  }
  *(_DWORD *)(v36 + 104) = 0;
  RtlReleaseSRWLockExclusive(v36 + 96);
  if ( v40 )
    goto LABEL_214;
  v42 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v43 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v42) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v43 |= 0x80uLL;
    ++v43[8];
  }
  RtlAcquireSRWLockShared(v35 + 168);
  v44 = *(_BYTE *)(v35 + 192) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v45 = (char *)TlsGetValue(HampLockTrackerId);
    if ( *v45 >= 0 )
      __int2c();
    v15 = (*((_QWORD *)v45 + 8))-- == 1LL;
    if ( v15 )
      *(_QWORD *)v45 &= ~0x80uLL;
  }
  RtlReleaseSRWLockShared(v35 + 168);
  if ( v44 )
  {
LABEL_214:
    v91 = *((_DWORD *)a2 + 6);
    if ( v91 <= 1 )
      v91 = 1;
    *((_DWORD *)a2 + 6) = v91;
  }
  v46 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v47 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v46) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *v47 |= 0x400uLL;
    ++v47[11];
  }
  v48 = v106;
  RtlAcquireSRWLockShared(v106);
  v49 = *(_DWORD *)(v106 + 380) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v50 = TlsGetValue(HampLockTrackerId);
    if ( (*(_DWORD *)v50 & 0x400LL) == 0 )
      __int2c();
    v15 = v50[11]-- == 1LL;
    if ( v15 )
      *v50 &= ~0x400uLL;
  }
  RtlReleaseSRWLockShared(v48);
  v15 = !v49;
  v51 = v107;
  if ( !v15 )
  {
    RmHamHostGetCurrentState(v107, (union _RM_OPTIMIZATION_STATE *)&v104, 0LL);
    if ( (v104 & 0x100) != 0 )
    {
      v94 = *((_DWORD *)v51 + 282);
      if ( v94 <= *((_DWORD *)a2 + 6) )
        v94 = *((_DWORD *)a2 + 6);
      *((_DWORD *)a2 + 6) = v94;
    }
    else
    {
      v95 = *((_DWORD *)a2 + 6);
      if ( v95 < 1 )
        v95 = 1;
      *((_DWORD *)a2 + 6) = v95;
    }
  }
  v52 = v108;
  if ( (v11 & 0xC0) == 0xC0 )
    v53 = 2;
  else
    v53 = (v108 & 0xE) >= 8 && (v108 & 0x30) >= 0x20;
  v54 = *((_DWORD *)a2 + 6);
  if ( v54 <= v53 )
  {
    if ( (v11 & 0xC0) == 0xC0 )
      v54 = 2;
    else
      v54 = (v108 & 0xE) >= 8 && (v108 & 0x30) >= 0x20;
  }
  *((_BYTE *)a2 + 28) &= ~2u;
  *((_DWORD *)a2 + 6) = v54;
  *((_BYTE *)a2 + 28) |= 2 * (v52 >> 7);
  if ( (v11 & 0x100) == 0
    || (RmHamHostGetCurrentState(v51, (union _RM_OPTIMIZATION_STATE *)&v107, (union _RM_OPTIMIZATION_STATE *)&v108),
        ((unsigned __int8)v107 & 0x10) != 0)
    || (v108 & 0x10) != 0 )
  {
    v55 = 0;
  }
  else
  {
    v55 = 8;
  }
  v56 = v55 | *((_BYTE *)a2 + 28) & 0xF7;
  *((_BYTE *)a2 + 28) = v56;
  v57 = v56;
  if ( (*((_BYTE *)v51 + 1132) & 8) != 0 )
  {
    v57 = v56;
    if ( (*((_QWORD *)v51 + 81) & 0x2000000000000LL) != 0 )
    {
      v57 = v56 | 8;
      *((_BYTE *)a2 + 28) = v56 | 8;
    }
  }
  if ( (v11 & 0x400) == 0 || (*((_QWORD *)v51 + 81) & 0x8000000000000LL) != 0 )
    v58 = 0;
  else
    v58 = 4;
  v59 = v105;
  *((_BYTE *)a2 + 28) = v58 | v57 & 0xFB;
  if ( v59 )
  {
    v60 = *(_QWORD *)(v59 + 464);
    v61 = *(_QWORD *)(v59 + 456);
    v62 = *(_QWORD *)(v59 + 448);
    v63 = *(_QWORD *)(v59 + 440);
    if ( v60 == -1LL || v10 == -1LL || (v10 += v60, v10 < v60) )
      v10 = -1LL;
    *((_QWORD *)&v99 + 1) = v10;
    if ( v61 == -1LL || v102 == -1 || (v64 = v61 + v102, v102 = v64, v64 < v61) )
    {
      v64 = -1LL;
      v102 = -1LL;
    }
    *(_QWORD *)&v99 = v64;
    if ( v62 == -1LL
      || *((_QWORD *)&v100 + 1) == -1LL
      || (v65 = v62 + *((_QWORD *)&v100 + 1), *((_QWORD *)&v100 + 1) = v65, v65 < v62) )
    {
      v65 = -1LL;
      *((_QWORD *)&v100 + 1) = -1LL;
    }
    *((_QWORD *)&v98 + 1) = v65;
    if ( v63 == -1LL || (_QWORD)v100 == -1LL || (v66 = v63 + v100, *(_QWORD *)&v100 = v66, v66 < v63) )
    {
      v66 = -1LL;
      *(_QWORD *)&v100 = -1LL;
      *(_QWORD *)&v98 = -1LL;
    }
    else
    {
      *(_QWORD *)&v98 = v66;
    }
  }
  else
  {
    v66 = v100;
  }
  if ( v101 )
  {
    v67 = v102;
    v68 = *((_QWORD *)&v100 + 1);
  }
  else
  {
    v87 = *(_OWORD *)((char *)v51 + 888);
    v98 = *(_OWORD *)((char *)v51 + 872);
    v68 = *((_QWORD *)&v98 + 1);
    v66 = v98;
    v99 = v87;
    v10 = *((_QWORD *)&v87 + 1);
    v67 = v87;
    v100 = v98;
  }
  if ( (*(_BYTE *)(v48 - 1100) & 0x20) != 0 )
  {
    if ( HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*((_QWORD *)v51 + 97) + 88LL)) )
    {
      RmpCommitThresholdsAddValue((struct _RM_COMMIT_THRESHOLDS *)&v98, 0xFFFFFFFFFFFFFFFFuLL);
      v68 = *((_QWORD *)&v98 + 1);
      v66 = v98;
      v10 = *((_QWORD *)&v99 + 1);
      v67 = v99;
    }
    else
    {
      v68 = *((_QWORD *)&v100 + 1);
      v66 = v100;
    }
  }
  v69 = *((_QWORD *)v51 + 118);
  if ( v67 < v69 && v67 )
  {
    RmpCommitThresholdsScaleToTarget((struct _RM_COMMIT_THRESHOLDS *)&v98, v69, (struct _RM_COMMIT_THRESHOLDS *)&v98);
    v68 = *((_QWORD *)&v98 + 1);
    v66 = v98;
    v10 = *((_QWORD *)&v99 + 1);
    v67 = v99;
  }
  v70 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v51 + 75);
  if ( v70 == (struct _RM_HAM_ACTIVITY_HOST *)((char *)v51 + 600) )
    v103 = 0;
  v71 = (char *)v70 - 96;
  v72 = 0LL;
  if ( v103 )
    v72 = v71;
  if ( v72 && (*((_DWORD *)v72 + 28) & 0x80000) != 0 )
  {
    v96 = *((_QWORD *)HampHostGetFirstActivity(v51) + 9);
    v97 = *(_OWORD *)(v96 + 88);
    v98 = *(_OWORD *)(v96 + 72);
    v68 = *((_QWORD *)&v98 + 1);
    v66 = v98;
    v99 = v97;
    v10 = *((_QWORD *)&v97 + 1);
    v67 = v97;
  }
  v73 = *((_QWORD *)v51 + 119);
  if ( v10 != -1LL )
  {
    if ( v10 < v73 )
      v10 = 0LL;
    else
      v10 -= v73;
  }
  if ( v67 != -1LL )
  {
    if ( v67 < v73 )
      v67 = 0LL;
    else
      v67 -= v73;
  }
  if ( v68 != -1LL )
  {
    if ( v68 < v73 )
      v68 = 0LL;
    else
      v68 -= v73;
  }
  if ( v66 != -1LL )
  {
    if ( v66 < v73 )
      v66 = 0LL;
    else
      v66 -= v73;
  }
  v74 = *((_QWORD *)v51 + 120);
  if ( v10 != -1LL )
  {
    if ( v10 < v74 )
      v10 = 0LL;
    else
      v10 -= v74;
  }
  *((_QWORD *)&v99 + 1) = v10;
  if ( v67 == -1LL )
  {
    *(_QWORD *)&v99 = -1LL;
  }
  else if ( v67 < v74 )
  {
    *(_QWORD *)&v99 = 0LL;
  }
  else
  {
    *(_QWORD *)&v99 = v67 - v74;
  }
  if ( v68 == -1LL )
  {
    *((_QWORD *)&v98 + 1) = -1LL;
  }
  else if ( v68 < v74 )
  {
    *((_QWORD *)&v98 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)&v98 + 1) = v68 - v74;
  }
  if ( v66 == -1LL )
  {
    *(_QWORD *)&v98 = -1LL;
  }
  else if ( v66 < v74 )
  {
    *(_QWORD *)&v98 = 0LL;
  }
  else
  {
    *(_QWORD *)&v98 = v66 - v74;
  }
  v75 = v99;
  v76 = *((_QWORD *)v51 + 106);
  v77 = v98;
  v78 = v99;
  if ( v10 > v76 )
  {
    v76 = *((_QWORD *)&v99 + 1);
  }
  else
  {
    *((_QWORD *)&v99 + 1) = *((_QWORD *)v51 + 106);
    v78 = v99;
  }
  if ( (unsigned __int64)v78 <= *((_QWORD *)v51 + 107) )
  {
    *(_QWORD *)&v99 = *((_QWORD *)v51 + 107);
    v78 = v99;
  }
  v79 = v109;
  *((_QWORD *)a2 + 2) = v76;
  if ( v79 )
  {
    *(_OWORD *)v79 = v77;
    *((_OWORD *)v79 + 1) = v75;
  }
  v80 = v110;
  if ( v110 )
  {
    *(_OWORD *)v110 = v77;
    *((_OWORD *)v80 + 1) = v78;
  }
  if ( a5 )
    *a5 = (struct _HAM_ACTIVITY *)v59;
}
