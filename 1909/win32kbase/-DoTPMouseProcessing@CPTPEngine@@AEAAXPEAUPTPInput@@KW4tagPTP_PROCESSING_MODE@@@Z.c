/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C01938F8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01957F8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01923E4 (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01941CC (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z @ 0x1C0194650 (-FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@Ut.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0194BE0 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0195758 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C01968A0 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C0196C14 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0196CB0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C0196D00 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0196ED4 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C0196F84 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C019731C (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C0197454 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

void __fastcall CPTPEngine::DoTPMouseProcessing(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r15
  struct tagPOINT *v5; // rsi
  int v6; // r11d
  int v7; // r9d
  int v10; // r13d
  LONG y; // r8d
  int v12; // r10d
  unsigned int v13; // edx
  __int64 v14; // rbx
  bool v15; // cl
  bool v16; // r12
  int v17; // eax
  int v18; // eax
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rcx
  char v22; // r11
  int v23; // eax
  char v24; // r8
  int v25; // eax
  struct tagPOINT *v26; // r9
  _DWORD *v27; // rcx
  struct tagPOINT *v28; // r12
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rbx
  struct CContactState *v34; // r12
  __int64 v35; // rbx
  struct tagPOINT v36; // rbx
  unsigned int v37; // edx
  int v38; // eax
  __int64 v39; // rsi
  int v40; // r13d
  __int64 v41; // rax
  int v42; // eax
  int v43; // edx
  int v44; // r8d
  int v45; // ecx
  LONG x; // r15d
  int v47; // r12d
  struct tagPOINT v48; // rbx
  int v49; // eax
  struct tagPOINT *v50; // [rsp+38h] [rbp-59h]
  struct tagPOINT *v51; // [rsp+40h] [rbp-51h]
  _DWORD *v52; // [rsp+48h] [rbp-49h]
  int v53[2]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v54[24]; // [rsp+58h] [rbp-39h]
  int v55; // [rsp+70h] [rbp-21h]
  int v56; // [rsp+74h] [rbp-1Dh]
  int v57; // [rsp+78h] [rbp-19h]
  __int128 v58; // [rsp+88h] [rbp-9h] BYREF
  __int64 v59; // [rsp+98h] [rbp+7h]
  struct CContactState *v60; // [rsp+A8h] [rbp+17h]
  int v61; // [rsp+100h] [rbp+6Fh]
  struct tagPOINT v62; // [rsp+100h] [rbp+6Fh]

  v4 = *a2;
  v5 = (struct tagPOINT *)(a2 + 7);
  *(_QWORD *)v53 = a2 + 7;
  v6 = a4;
  v7 = a3;
  v51 = 0LL;
  v10 = 0;
  v50 = 0LL;
  v52 = 0LL;
  v56 = 0;
  v57 = 0;
  v61 = 0;
  v55 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  while ( 1 )
  {
    y = v5[1].y;
    if ( !y )
      goto LABEL_47;
    v12 = *(_DWORD *)(a1 + 2972);
    v13 = v5->y % *(_DWORD *)(a1 + 16);
    v14 = 296LL * v13 + a1 + 1160;
    v60 = (struct CContactState *)v14;
    v15 = v12 == 2 && *(_DWORD *)(a1 + 2936) == v13;
    v16 = v6 == 2 && *(_DWORD *)(a1 + 2936) == v13;
    if ( (y & 0x40000) == 0 )
    {
      v17 = *(_DWORD *)v14;
      if ( (*(_DWORD *)v14 & 4) != 0 && v17 < 0 && ((v17 & 0x80u) == 0 || v7 == 1 || v15) )
      {
        v18 = *(_DWORD *)(a1 + 3256);
        if ( (v18 & 2) == 0 && (v18 & 4) == 0 )
        {
          v19 = *(_DWORD *)(a1 + 3256);
          if ( v12 != 2 && (v18 & 0x400000) == 0 && (v18 & 0x200000) != 0 )
          {
            v19 = v18 | 0x400000;
            *(_QWORD *)(a1 + 3144) = v4;
            *(_DWORD *)(a1 + 3256) = v18 | 0x400000;
          }
          v20 = *(_QWORD *)(a1 + 96);
          if ( (v19 & 0x200000) != 0 )
          {
            v21 = *(_QWORD *)(a1 + 96);
            if ( v4 - *(_QWORD *)(a1 + 3144) < v20 * (unsigned __int64)*(unsigned int *)(a1 + 184) / 0x3E8 )
            {
              v22 = 0;
LABEL_30:
              v23 = v19;
              if ( (v19 & 0x8000000) == 0 && (v19 & 0x4000000) != 0 && a3 == 1 )
              {
                v23 = v19 | 0x8000000;
                *(_QWORD *)(a1 + 3160) = v4;
                *(_DWORD *)(a1 + 3256) = v19 | 0x8000000;
              }
              if ( (v23 & 0x4000000) != 0 )
              {
                if ( v4 - *(_QWORD *)(a1 + 3160) < v20 * (unsigned __int64)*(unsigned int *)(a1 + 364) / 0x3E8 )
                {
                  v24 = 0;
LABEL_38:
                  if ( v22
                    && v24
                    && v4 - *(_QWORD *)(v14 + 72) >= v20 * (unsigned __int64)*(unsigned int *)(a1 + 500) / 0x3E8 )
                  {
                    v53[0] = 0;
                    if ( (unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(
                                         (CPTPEngine *)a1,
                                         (struct PTPInput *)a2,
                                         (struct CContactState *)v14,
                                         v53) )
                    {
                      v6 = a4;
                      v25 = 1;
                      v61 = 1;
                      v26 = v5;
                      v51 = v5;
                      v27 = (_DWORD *)v14;
                      v52 = (_DWORD *)v14;
LABEL_48:
                      v28 = v50;
                      goto LABEL_49;
                    }
                    if ( v53[0] )
                    {
                      CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
                      *(_DWORD *)(a1 + 2972) = 1;
LABEL_46:
                      v6 = a4;
LABEL_47:
                      v25 = v61;
                      v26 = v51;
                      v27 = v52;
                      goto LABEL_48;
                    }
                  }
                  goto LABEL_77;
                }
                v21 = v20;
              }
              v24 = 1;
              v20 = v21;
              goto LABEL_38;
            }
          }
          else
          {
            v21 = *(_QWORD *)(a1 + 96);
          }
          v22 = 1;
          goto LABEL_30;
        }
      }
    }
    v29 = *(_DWORD *)(a1 + 3256);
    if ( (v29 & 0x100000) != 0
      || v12 == 2
      || (y & 0x48000) != 0x40000
      || (v30 = *(_DWORD *)v14, (*(_DWORD *)v14 & 0x20) == 0)
      || (v30 & 0x10) != 0
      || (v30 & 0x400000) != 0 && (v30 & 4) != 0 && (!v16 || (v29 & 0x20000000) != 0)
      || (v30 & 0x10000000) == 0
      || (v30 & 8) != 0 && (!v16 || (v29 & 0x20000000) != 0) )
    {
      if ( (y & 0x48000) != 0x40000 || (*(_DWORD *)(a1 + 220) & 0x100) == 0 )
        goto LABEL_47;
      v31 = *(_QWORD *)(v14 + 104);
      if ( v31 == *(_QWORD *)(v14 + 64) )
        goto LABEL_47;
      v32 = *(_QWORD *)(a1 + 96);
      v33 = v4 - v31;
      if ( v4 - v31 >= v32 * *(unsigned int *)(a1 + 268) / 0x3E8 )
      {
        v5 = *(struct tagPOINT **)v53;
        goto LABEL_47;
      }
      if ( !CPTPEngine::CrossedTPMoveFilteringThreshold((CPTPEngine *)a1, v60, *(struct tagPOINT *)((char *)v60 + 24))
        && v16 )
      {
        v34 = v60;
        if ( *((_DWORD *)a2 + 7) != *((_DWORD *)v60 + 14) || *((_DWORD *)a2 + 8) != *((_DWORD *)v60 + 15) )
        {
          CBasePTPEngine::SendWarpbackTelemetry(
            a1,
            14LL,
            *(__int64 *)((char *)a2 + 28),
            *((_QWORD *)v60 + 7),
            1000 * v33 / v32);
          CBasePTPEngine::SendMouseOutput(a1, 5LL, *((_QWORD *)v34 + 7));
          v5 = *(struct tagPOINT **)v53;
          goto LABEL_46;
        }
      }
      v5 = *(struct tagPOINT **)v53;
LABEL_77:
      v6 = a4;
      goto LABEL_47;
    }
    v25 = v61;
    v10 = 1;
    v26 = v51;
    v28 = v5;
    v27 = v52;
    v50 = v5;
LABEL_49:
    v5 += 12;
    *(_QWORD *)v53 = v5;
    if ( (unsigned int)++v55 >= *((_DWORD *)a2 + 12) )
      break;
    v7 = a3;
  }
  if ( v25 )
  {
    if ( v10 )
    {
      if ( (*v27 & 0x80u) == 0 && (*v27 & 0x10) != 0 )
        v10 = 0;
      v25 = v61;
LABEL_83:
      if ( v10 )
      {
        v35 = 296LL * (unsigned int)(v28->y % *(_DWORD *)(a1 + 16)) + a1 + 1160;
        if ( *(_DWORD *)(a1 + 3060) <= *(_DWORD *)(v35 + 132)
          && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)a1, (struct PTPInput *)a2, 0xAu, 1, 1)
          && !(unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)a1, (struct PTPInput *)a2, 0)
          && !CPTPEngine::FindNearbyContact(
                (CPTPEngine *)a1,
                (struct PTPInput *)a2,
                (struct CContactState *)v35,
                v28[5],
                *(_DWORD *)(a1 + 396))
          && (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
        {
          if ( (*(_QWORD *)(a1 + 3000) = *(__int64 *)((char *)a2 + 28),
                *(_QWORD *)(a1 + 3008) = *(_QWORD *)(v35 + 8),
                !*((_DWORD *)a2 + 10))
            && !*((_DWORD *)a2 + 13)
            || (CBasePTPEngine::SendInertiaOutput(a1, 3LL), !*((_DWORD *)a2 + 10)) )
          {
            *(_QWORD *)&v54[16] = 0LL;
            *(_OWORD *)v54 = 1u;
            v59 = 0LL;
            v58 = 1u;
            CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v58);
            *(_QWORD *)&v54[12] = 0LL;
            *(_DWORD *)v54 = 0;
            *(_QWORD *)&v54[4] = v4 - *(_QWORD *)(v35 + 72);
            *(_DWORD *)&v54[20] = 0;
            v58 = *(_OWORD *)v54;
            v59 = 0LL;
            CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v58);
            *(_QWORD *)(a1 + 3224) = v4;
            CPTPEngine::SendMouseUpIfPending((CPTPEngine *)a1, (unsigned int *)(a1 + 2940));
            if ( (*(_DWORD *)(a1 + 3256) & 8) == 0 )
            {
              if ( (*(_DWORD *)v35 & 4) != 0 )
              {
                if ( (*(_DWORD *)(a1 + 220) & 0x400) != 0
                  && !*(_DWORD *)(a1 + 2956)
                  && (*(_DWORD *)(v35 + 56) != *((_DWORD *)a2 + 7) || *(_DWORD *)(v35 + 60) != *((_DWORD *)a2 + 8)) )
                {
                  CBasePTPEngine::SendWarpbackTelemetry(
                    a1,
                    15LL,
                    *(__int64 *)((char *)a2 + 28),
                    *(_QWORD *)(v35 + 56),
                    (unsigned __int64)(1000 * (v4 - *(_QWORD *)(v35 + 72))) / *(_QWORD *)(a1 + 96));
                  CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v35 + 56));
                }
                CPTPEngine::SendMouseDownAtPoint(
                  (CPTPEngine *)a1,
                  2u,
                  *(struct tagPOINT *)(v35 + 56),
                  -__CFSHR__(*(_DWORD *)(a1 + 424), 3),
                  *(_DWORD *)(a1 + 188));
                *(_DWORD *)v35 &= ~4u;
              }
              else
              {
                CPTPEngine::SendMouseDownAtPoint(
                  (CPTPEngine *)a1,
                  2u,
                  *(struct tagPOINT *)((char *)a2 + 28),
                  -__CFSHR__(*(_DWORD *)(a1 + 424), 3),
                  *(_DWORD *)(a1 + 188));
              }
              *(_DWORD *)(a1 + 3256) |= 8u;
              CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
            }
          }
        }
        return;
      }
    }
    if ( !v25 )
      return;
    v36 = v26[5];
    v37 = v26->y % *(_DWORD *)(a1 + 16);
    v38 = *(_DWORD *)(a1 + 3256);
    v39 = 296LL * v37 + a1 + 1160;
    if ( (v38 & 0x8000000) != 0 )
    {
      v38 &= 0xF3FFFFFF;
      *(_DWORD *)(a1 + 3256) = v38;
    }
    if ( *(_DWORD *)(a1 + 2972) == 2 )
    {
      v40 = v56;
    }
    else
    {
      *(_DWORD *)(a1 + 2972) = 2;
      *(_DWORD *)(a1 + 3256) = v38 & 0xFF9FFFFF;
      v40 = 1;
      v41 = a1 + 1160;
      *(_DWORD *)(a1 + 2936) = v37;
      while ( v41 != a1 + 2936 )
      {
        *(_QWORD *)(v41 + 96) = 0LL;
        v41 += 296LL;
      }
      *(_QWORD *)(v39 + 96) = v4;
    }
    v42 = *(_DWORD *)(a1 + 3256);
    if ( (v42 & 0x800000) != 0 )
    {
      v40 = 1;
      *(_DWORD *)(a1 + 3256) = v42 & 0xFF7FFFFF;
    }
    else
    {
      if ( !v40 )
      {
        v43 = v36.x - *(_DWORD *)(a1 + 3016);
        v44 = v36.y - *(_DWORD *)(a1 + 3020);
LABEL_120:
        v45 = *(_DWORD *)(a1 + 148);
        v62.x = 100 * v43 / v45;
        x = v62.x;
        v62.y = 100 * v44 / v45;
        v47 = v62.y;
        v48 = v62;
        if ( !v40 )
        {
          x = v62.x - *(_DWORD *)(a1 + 3024);
          v47 = v62.y - *(_DWORD *)(a1 + 3028);
          v48 = (struct tagPOINT)__PAIR64__(v47, x);
        }
        *(struct tagPOINT *)(a1 + 3024) = v62;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                              (CPTPEngine *)a1,
                              (struct PTPInput *)a2,
                              v48,
                              (struct CContactState *)v39)
          && (x || v47) )
        {
          v49 = *(_DWORD *)(a1 + 3256);
          if ( (v49 & 0x20000000) == 0 )
          {
            *(_QWORD *)&v54[16] = 0LL;
            *(_OWORD *)v54 = 0xAuLL;
            v59 = 0LL;
            v58 = 0xAuLL;
            CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v58);
            v49 = *(_DWORD *)(a1 + 3256);
          }
          *(_DWORD *)(a1 + 3256) = v49 | 0x20000000;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(a1, 0LL, v48);
        }
        return;
      }
      *(_QWORD *)&v54[12] = 0LL;
      *(_DWORD *)&v54[20] = 0;
      *(_DWORD *)(a1 + 3256) = v42 & 0xDFFFFFFF;
      *(_QWORD *)&v54[4] = v4 - *(_QWORD *)(v39 + 64);
      *(_DWORD *)v54 = 1;
      v59 = 0LL;
      v58 = *(_OWORD *)v54;
      CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v58);
    }
    if ( (*(_DWORD *)v39 & 2) != 0 )
    {
      v43 = v57;
      v44 = v57;
    }
    else
    {
      v43 = v36.x - *(_DWORD *)(v39 + 24);
      v44 = v36.y - *(_DWORD *)(v39 + 28);
    }
    *(_QWORD *)(a1 + 3016) = *(_QWORD *)(v39 + 24);
    *(_DWORD *)v39 &= ~0x1000000u;
    goto LABEL_120;
  }
  if ( v10 )
    goto LABEL_83;
}
