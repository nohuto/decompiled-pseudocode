/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C015B89C
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C015A340 (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C015C174 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z @ 0x1C015C5C4 (-FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@Ut.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C015CBA0 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D76C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C015E8DC (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z @ 0x1C015EC48 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C015ECF8 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C015ED50 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015EF14 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C015EFC4 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C015F304 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C015F434 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

void __fastcall CPTPEngine::DoTPMouseProcessing(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r12
  char v5; // r15
  int v6; // ebx
  struct tagPOINT *v7; // r9
  int v8; // r11d
  int v11; // r13d
  LONG y; // r8d
  int v13; // r10d
  unsigned int v14; // edx
  __int64 v15; // r14
  char v16; // cl
  int v17; // eax
  int v18; // eax
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // r11
  char v22; // bl
  int v23; // eax
  char v24; // r8
  int v25; // eax
  _DWORD *v26; // rcx
  struct tagPOINT *v27; // r10
  int v28; // ecx
  int v29; // eax
  struct tagPOINT *v30; // r14
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  __int64 v33; // rbx
  struct CContactState *v34; // r15
  __int64 v35; // rbx
  int v36; // r14d
  struct tagPOINT v37; // rbx
  unsigned int v38; // edx
  int v39; // eax
  __int64 v40; // r14
  int v41; // r13d
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // xmm1_8
  int v45; // edx
  int v46; // r8d
  int v47; // ecx
  LONG x; // r15d
  struct tagPOINT v49; // rbx
  unsigned __int64 v50; // r12
  int v51; // eax
  struct tagPOINT *v52; // [rsp+48h] [rbp-59h]
  struct tagPOINT *v53; // [rsp+50h] [rbp-51h]
  _DWORD *v54; // [rsp+58h] [rbp-49h]
  struct tagPOINT *v55; // [rsp+60h] [rbp-41h]
  struct CContactState *v56; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-31h]
  __int128 v58; // [rsp+78h] [rbp-29h] BYREF
  __int64 v59; // [rsp+88h] [rbp-19h]
  int v60; // [rsp+98h] [rbp-9h]
  int v61; // [rsp+9Ch] [rbp-5h]
  __int128 v62; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v63; // [rsp+B8h] [rbp+17h]
  int v64; // [rsp+110h] [rbp+6Fh]
  struct tagPOINT v65; // [rsp+110h] [rbp+6Fh]

  v4 = *a2;
  v5 = 0;
  v6 = a4;
  v7 = (struct tagPOINT *)((char *)a2 + 52);
  v8 = a3;
  v55 = (struct tagPOINT *)((char *)a2 + 52);
  v11 = 0;
  v53 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  v60 = 0;
  v61 = 0;
  v64 = 0;
  v57 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  do
  {
    y = v7[1].y;
    if ( !y )
      goto LABEL_66;
    v13 = *(_DWORD *)(a1 + 3004);
    v14 = v7->y % *(_DWORD *)(a1 + 16);
    v15 = 296LL * v14 + a1 + 1192;
    v56 = (struct CContactState *)v15;
    if ( v13 != 2 || (v16 = 1, *(_DWORD *)(a1 + 2968) != v14) )
      v16 = 0;
    if ( v6 == 2 && *(_DWORD *)(a1 + 2968) == v14 )
      v5 = 1;
    if ( (y & 0x40000) != 0
      || (v17 = *(_DWORD *)v15, (*(_DWORD *)v15 & 4) == 0)
      || v17 >= 0
      || (v17 & 0x80u) != 0 && v8 != 1 && !v16
      || (v18 = *(_DWORD *)(a1 + 3296), (v18 & 2) != 0)
      || (v18 & 4) != 0 )
    {
      v28 = *(_DWORD *)(a1 + 3296);
      if ( (v28 & 0x100000) == 0 && v13 != 2 && (y & 0x48000) == 0x40000 )
      {
        v29 = *(_DWORD *)v15;
        if ( (*(_DWORD *)v15 & 0x20) != 0
          && (v29 & 0x10) == 0
          && ((v29 & 0x400000) == 0 || (v29 & 4) == 0 || v5 && (v28 & 0x40000000) == 0)
          && (v29 & 0x10000000) != 0
          && ((v29 & 8) == 0 || v5 && (v28 & 0x40000000) == 0) )
        {
          v25 = v64;
          v11 = 1;
          v27 = v53;
          v30 = v7;
          v26 = v54;
          v5 = 0;
          v52 = v7;
          goto LABEL_68;
        }
      }
      if ( (y & 0x48000) == 0x40000 && (*(_DWORD *)(a1 + 220) & 0x100) != 0 )
      {
        v31 = *(_QWORD *)(v15 + 104);
        if ( v31 != *(_QWORD *)(v15 + 64) )
        {
          v32 = *(_QWORD *)(a1 + 96);
          v33 = v4 - v31;
          if ( v4 - v31 < v32 * *(unsigned int *)(a1 + 268) / 0x3E8 )
          {
            if ( !CPTPEngine::CrossedTPMoveFilteringThreshold(
                    (CPTPEngine *)a1,
                    v56,
                    *(struct tagPOINT *)((char *)v56 + 24)) )
            {
              if ( v5 )
              {
                v34 = v56;
                if ( *((_DWORD *)a2 + 7) != *((_DWORD *)v56 + 14) || *((_DWORD *)a2 + 8) != *((_DWORD *)v56 + 15) )
                {
                  CBasePTPEngine::SendWarpbackTelemetry(
                    a1,
                    14LL,
                    *(__int64 *)((char *)a2 + 28),
                    *((_QWORD *)v56 + 7),
                    1000 * v33 / v32);
                  CBasePTPEngine::SendMouseOutput(a1, 5LL, *((_QWORD *)v34 + 7));
                }
              }
            }
            v7 = v55;
            v8 = a3;
          }
          v6 = a4;
        }
      }
      v5 = 0;
      goto LABEL_66;
    }
    v19 = *(_DWORD *)(a1 + 3296);
    if ( v13 != 2 && (v18 & 0x400000) == 0 && (v18 & 0x200000) != 0 )
    {
      v19 = v18 | 0x400000;
      *(_QWORD *)(a1 + 3176) = v4;
      *(_DWORD *)(a1 + 3296) = v18 | 0x400000;
    }
    v20 = *(_QWORD *)(a1 + 96);
    v21 = v20;
    if ( (v19 & 0x200000) != 0
      && v4 - *(_QWORD *)(a1 + 3176) < v20 * (unsigned __int64)*(unsigned int *)(a1 + 184) / 0x3E8 )
    {
      v5 = 0;
      v22 = 0;
    }
    else
    {
      v22 = 1;
      v5 = 0;
    }
    v23 = v19;
    if ( (v19 & 0x8000000) == 0 && (v19 & 0x4000000) != 0 && a3 == 1 )
    {
      v23 = v19 | 0x8000000;
      *(_QWORD *)(a1 + 3192) = v4;
      *(_DWORD *)(a1 + 3296) = v19 | 0x8000000;
    }
    if ( (v23 & 0x4000000) != 0
      && (v21 = v20, v4 - *(_QWORD *)(a1 + 3192) < v20 * (unsigned __int64)*(unsigned int *)(a1 + 364) / 0x3E8) )
    {
      v24 = 0;
    }
    else
    {
      v24 = 1;
      v20 = v21;
    }
    if ( !v22 || !v24 || v4 - *(_QWORD *)(v15 + 72) < v20 * (unsigned __int64)*(unsigned int *)(a1 + 528) / 0x3E8 )
      goto LABEL_40;
    LODWORD(v56) = 0;
    if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(
                          (CPTPEngine *)a1,
                          (struct PTPInput *)a2,
                          (struct CContactState *)v15,
                          (int *)&v56) )
    {
      if ( (_DWORD)v56 )
      {
        CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
        *(_DWORD *)(a1 + 3004) = 1;
      }
LABEL_40:
      v7 = v55;
      v8 = a3;
      v6 = a4;
LABEL_66:
      v25 = v64;
      v27 = v53;
      v26 = v54;
      goto LABEL_67;
    }
    v7 = v55;
    v25 = 1;
    v8 = a3;
    v26 = (_DWORD *)v15;
    v6 = a4;
    v27 = v55;
    v64 = 1;
    v53 = v55;
    v54 = (_DWORD *)v15;
LABEL_67:
    v30 = v52;
LABEL_68:
    v7 += 12;
    v55 = v7;
    ++v57;
  }
  while ( v57 < *((_DWORD *)a2 + 12) );
  if ( v25 )
  {
    if ( v11 )
    {
      if ( (*v26 & 0x80u) == 0 && (*v26 & 0x10) != 0 )
        v11 = 0;
      v25 = v64;
LABEL_77:
      if ( v11 )
      {
        v35 = 296LL * (unsigned int)(v30->y % *(_DWORD *)(a1 + 16)) + a1 + 1192;
        if ( *(_DWORD *)(a1 + 3096) <= *(_DWORD *)(v35 + 132) )
        {
          if ( (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)a1, (struct PTPInput *)a2, 0xAu, 1, 1) )
          {
            if ( !(unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)a1, (struct PTPInput *)a2, 0)
              && !CPTPEngine::FindNearbyContact(
                    (CPTPEngine *)a1,
                    (struct PTPInput *)a2,
                    (struct CContactState *)v35,
                    v30[5],
                    *(_DWORD *)(a1 + 396))
              && (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
            {
              v36 = *(_DWORD *)(a1 + 3092);
              *(_QWORD *)(a1 + 3032) = *(__int64 *)((char *)a2 + 28);
              *(_QWORD *)(a1 + 3040) = *(_QWORD *)(v35 + 8);
              *(_DWORD *)(a1 + 3092) = *((_DWORD *)a2 + 6);
              if ( !*((_DWORD *)a2 + 10) || (CBasePTPEngine::SendInertiaOutput(a1, 3LL), !*((_DWORD *)a2 + 10)) )
              {
                LODWORD(v58) = 1;
                v63 = v59;
                v62 = v58;
                CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v62);
                LODWORD(v58) = 0;
                *(_QWORD *)((char *)&v58 + 4) = v4 - *(_QWORD *)(v35 + 72);
                v63 = v59;
                v62 = v58;
                CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v62);
                *(_QWORD *)(a1 + 3256) = v4;
                CPTPEngine::SendMouseUpIfPending(
                  (CPTPEngine *)a1,
                  (unsigned int *)(a1 + 2972),
                  *((_DWORD *)a2 + 6) - v36);
                if ( (*(_DWORD *)(a1 + 3296) & 8) == 0 )
                {
                  if ( (*(_DWORD *)v35 & 4) != 0 )
                  {
                    if ( (*(_DWORD *)(a1 + 220) & 0x400) != 0
                      && !*(_DWORD *)(a1 + 2988)
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
                      *((_DWORD *)a2 + 6) - *(_DWORD *)(v35 + 132),
                      *(_DWORD *)(a1 + 3092),
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
                      *((_DWORD *)a2 + 6) - *(_DWORD *)(v35 + 132),
                      *(_DWORD *)(a1 + 3092),
                      *(struct tagPOINT *)((char *)a2 + 28),
                      -__CFSHR__(*(_DWORD *)(a1 + 424), 3),
                      *(_DWORD *)(a1 + 188));
                  }
                  *(_DWORD *)(a1 + 3296) |= 8u;
                  CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
                }
              }
            }
          }
        }
        return;
      }
    }
    if ( !v25 )
      return;
    v37 = v27[5];
    v38 = v27->y % *(_DWORD *)(a1 + 16);
    v39 = *(_DWORD *)(a1 + 3296);
    v40 = 296LL * v38 + a1 + 1192;
    if ( (v39 & 0x8000000) != 0 )
    {
      v39 &= 0xF3FFFFFF;
      *(_DWORD *)(a1 + 3296) = v39;
    }
    if ( *(_DWORD *)(a1 + 3004) == 2 )
    {
      v41 = v60;
    }
    else
    {
      *(_DWORD *)(a1 + 3004) = 2;
      *(_DWORD *)(a1 + 3296) = v39 & 0xFF9FFFFF;
      v41 = 1;
      v42 = a1 + 1192;
      *(_DWORD *)(a1 + 2968) = v38;
      while ( v42 != a1 + 2968 )
      {
        *(_QWORD *)(v42 + 96) = 0LL;
        v42 += 296LL;
      }
      *(_QWORD *)(v40 + 96) = v4;
    }
    v43 = *(_DWORD *)(a1 + 3296);
    if ( (v43 & 0x800000) != 0 )
    {
      v41 = 1;
      *(_DWORD *)(a1 + 3296) = v43 & 0xFF7FFFFF;
    }
    else
    {
      if ( !v41 )
      {
        v45 = v37.x - *(_DWORD *)(a1 + 3048);
        v46 = v37.y - *(_DWORD *)(a1 + 3052);
LABEL_113:
        v47 = *(_DWORD *)(a1 + 148);
        v65.x = 100 * v45 / v47;
        x = v65.x;
        v65.y = 100 * v46 / v47;
        v49 = v65;
        v50 = HIDWORD(*(unsigned __int64 *)&v65);
        if ( !v41 )
        {
          x = v65.x - *(_DWORD *)(a1 + 3056);
          LODWORD(v50) = 100 * v46 / v47 - *(_DWORD *)(a1 + 3060);
          v49 = (struct tagPOINT)__PAIR64__(v50, x);
        }
        *(struct tagPOINT *)(a1 + 3056) = v65;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                              (CPTPEngine *)a1,
                              (struct PTPInput *)a2,
                              v49,
                              (struct CContactState *)v40)
          && (x || (_DWORD)v50) )
        {
          v51 = *(_DWORD *)(a1 + 3296);
          if ( (v51 & 0x40000000) == 0 )
          {
            LODWORD(v62) = 10;
            v59 = v63;
            v58 = v62;
            CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v58);
            v51 = *(_DWORD *)(a1 + 3296);
          }
          *(_DWORD *)(a1 + 3296) = v51 | 0x40000000;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(a1, 0LL, v49);
        }
        return;
      }
      v44 = v59;
      LODWORD(v58) = 1;
      *(_DWORD *)(a1 + 3296) = v43 & 0xBFFFFFFF;
      *(_QWORD *)((char *)&v58 + 4) = v4 - *(_QWORD *)(v40 + 64);
      v63 = v44;
      v62 = v58;
      CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v62);
    }
    if ( (*(_DWORD *)v40 & 2) != 0 )
    {
      v45 = v61;
      v46 = v61;
    }
    else
    {
      v45 = v37.x - *(_DWORD *)(v40 + 24);
      v46 = v37.y - *(_DWORD *)(v40 + 28);
    }
    *(_QWORD *)(a1 + 3048) = *(_QWORD *)(v40 + 24);
    *(_DWORD *)v40 &= ~0x1000000u;
    goto LABEL_113;
  }
  if ( v11 )
    goto LABEL_77;
}
