/*
 * XREFs of ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C015A680
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C0159C2C (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C015C174 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C015C86C (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D76C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C015E8DC (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C015EB64 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z @ 0x1C015EC48 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C015ECF8 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C015EDA4 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C015EE88 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015EF14 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C015F064 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C015F298 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C015F434 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPButtonProcessing(
        struct tagPOINT *this,
        struct PTPInput *a2,
        int a3,
        unsigned int a4,
        int *a5)
{
  LONG x; // esi
  int *v6; // r13
  int v7; // r14d
  int v9; // r10d
  unsigned int v11; // ecx
  struct tagPOINT v12; // r12
  unsigned __int64 v13; // r8
  int v14; // r15d
  BOOL v15; // edx
  unsigned int v16; // esi
  LONG y; // eax
  int v18; // ecx
  unsigned int v19; // eax
  LONG v20; // eax
  LONG v22; // r9d
  LONG v23; // r9d
  __int64 v24; // r13
  int v25; // r14d
  int v26; // esi
  unsigned int v27; // r12d
  char *v28; // r11
  struct tagPOINT *v29; // r9
  unsigned __int8 v30; // r10
  __int64 v31; // rcx
  LONG v32; // eax
  unsigned int v33; // r9d
  __int128 *v34; // r8
  int v35; // esi
  int v36; // r12d
  struct CContactState *v37; // rdx
  __int64 v38; // r10
  __int64 v39; // r11
  LONG v40; // eax
  bool v41; // zf
  LONG v42; // ecx
  unsigned int v43; // ecx
  int v44; // r13d
  BOOL v45; // eax
  BOOL v46; // eax
  LONG v47; // r9d
  unsigned int v48; // r9d
  int v49; // edx
  LONG v50; // eax
  __int64 v51; // r9
  LONG v52; // eax
  signed int v53; // r13d
  int v54; // esi
  struct tagPOINT *v55; // r14
  LONG v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // r12d
  __int64 v59; // r11
  int *v60; // rcx
  struct tagPOINT *v61; // rdi
  LONG v62; // eax
  __int64 v63; // rdx
  struct tagPOINT *v64; // r15
  LONG v65; // r10d
  struct tagPOINT *v66; // rax
  signed int v67; // edx
  struct PTPInput *v68; // rdi
  int v69; // r15d
  LONG v70; // eax
  LONG v71; // eax
  __int64 v72; // xmm1_8
  __int128 v73; // xmm0
  LONG v74; // eax
  LONG v75; // ecx
  int v76; // r8d
  int v77; // esi
  int v78; // r15d
  int *v79; // rax
  int v80; // [rsp+48h] [rbp-71h]
  struct tagPOINT *v81; // [rsp+50h] [rbp-69h] BYREF
  __int128 v82; // [rsp+58h] [rbp-61h] BYREF
  __int64 v83; // [rsp+68h] [rbp-51h]
  __int128 v84; // [rsp+78h] [rbp-41h] BYREF
  __int64 v85; // [rsp+88h] [rbp-31h]
  struct tagPOINT v86; // [rsp+98h] [rbp-21h]
  __int64 v87; // [rsp+A0h] [rbp-19h]
  __int128 v88; // [rsp+A8h] [rbp-11h]
  __int64 v89; // [rsp+B8h] [rbp-1h]
  struct tagPOINT *v90; // [rsp+C0h] [rbp+7h]
  int v91; // [rsp+118h] [rbp+5Fh]
  int *v92; // [rsp+118h] [rbp+5Fh]
  struct tagPOINT v94; // [rsp+120h] [rbp+67h]

  x = this[375].x;
  v6 = a5;
  v7 = 0;
  v80 = 0;
  v9 = a3;
  v11 = this[412].x;
  v12 = *(struct tagPOINT *)a2;
  v13 = 0LL;
  v14 = x & 0x10;
  v91 = 0;
  LODWORD(v87) = v14;
  v15 = v14 != 0;
  v86 = v12;
  v81 = 0LL;
  v16 = x & 0xFFFFFFEF;
  *a5 = 0;
  if ( (v11 & 1) != v15 )
  {
    y = this[375].y;
    if ( (y == 3 || y == 6) && v14 )
    {
      v18 = v11 | 0x200;
      this[412].x = v18;
      v19 = v18;
    }
    else
    {
      v19 = v11;
      if ( !v14 && (v11 & 0x200) != 0 )
      {
        v19 = v11 & 0xFFFFFDFF;
        v7 = 1;
        this[412].x = v11 & 0xFFFFFDFF;
      }
    }
    v91 = 1;
    v13 = 1LL;
    this[412].x = v15 | v19 & 0xFFFFFFFE;
    if ( v14 )
    {
      CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 0);
      v13 = 1LL;
      v9 = a3;
      this[388] = v12;
      this[387].y = *((_DWORD *)a2 + 6);
    }
    *v6 = 1;
  }
  v20 = this[375].y;
  if ( v20 == 3 || v20 == 6 || v7 )
    return 1LL;
  if ( v9 && (_DWORD)v13 && v14 && !v16 )
  {
    this[412].x |= 0x10000u;
    return 1LL;
  }
  v22 = this[412].x;
  if ( (v22 & 0x10000) != 0 )
  {
    if ( v14 )
    {
      if ( v9 )
      {
        if ( !v16 )
        {
          v13 = *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[17].y / 0x3E8;
          if ( *(_QWORD *)a2 - *(_QWORD *)&this[388] < v13 )
            return 1LL;
        }
        v80 = 1;
      }
      v91 = 1;
      this[412].x = v22 & 0xFFFEFFFF;
    }
    else
    {
      this[412].x = v22 & 0xFFFEFFFF;
      if ( !*((_DWORD *)a2 + 10) && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0) )
      {
        LODWORD(v88) = 25;
        v83 = v89;
        v82 = v88;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
        CPTPEngine::SendMouseDownAtPoint(
          (CPTPEngine *)this,
          2u,
          *((_DWORD *)a2 + 6) - this[387].y,
          *((_DWORD *)a2 + 6),
          *(struct tagPOINT *)((char *)a2 + 28),
          0,
          this[50].x);
      }
    }
  }
  v23 = this[412].x;
  v24 = 0LL;
  v90 = (struct tagPOINT *)((char *)a2 + 52);
  v25 = 0;
  v88 = 0uLL;
  v26 = -__CFSHR__(v23, 15);
  v27 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_51;
  v28 = (char *)a2 + 64;
  do
  {
    v29 = &this[37 * (unsigned int)(*((_DWORD *)v28 - 2) % this[2].x) + 149];
    if ( (v29->x & 1) == 0 || (*(_DWORD *)v28 & 0x40000) != 0 )
      goto LABEL_49;
    v13 = (unsigned __int64)v29[8];
    v30 = 0;
    if ( v26 )
    {
      if ( v13 > *(_QWORD *)&this[388] )
      {
        this[412].x &= ~0x4000u;
        goto LABEL_45;
      }
      if ( (v29->y & 1) != 0 )
      {
        v13 = (unsigned int)((HIDWORD(*(_QWORD *)&v29[1]) - HIDWORD(*(_QWORD *)(v28 + 28)))
                           * (HIDWORD(*(_QWORD *)&v29[1]) - HIDWORD(*(_QWORD *)(v28 + 28)))
                           + (*(_QWORD *)&v29[1] - *(_QWORD *)(v28 + 28)) * (*(_QWORD *)&v29[1] - *(_QWORD *)(v28 + 28)));
        if ( (int)v13 > (unsigned __int64)(unsigned int)(this[18].x * this[18].x) )
        {
          this[412].x &= ~0x4000u;
          if ( this[374].y == 2 )
          {
            v91 = 1;
            v80 = 1;
          }
          goto LABEL_45;
        }
LABEL_43:
        v30 = 1;
      }
    }
    else
    {
      if ( *(_QWORD *)a2 - v13 < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[17].y / 0x3E8
        && *(_QWORD *)&v29[12] <= v13 )
      {
        goto LABEL_43;
      }
      v30 = 0;
    }
LABEL_45:
    v29->y = v30 | v29->y & 0xFFFFFFFE;
    if ( v30 )
    {
      ++v25;
      v31 = 2LL;
      if ( (unsigned __int64)v25 < 2 )
        v31 = v25;
      *(&v87 + v31) = (__int64)v29;
    }
LABEL_49:
    ++v27;
    v28 += 96;
  }
  while ( v27 < *((_DWORD *)a2 + 12) );
  v23 = this[412].x;
  v24 = v88;
  v14 = v87;
LABEL_51:
  if ( (v23 & 0x4000) == 0 )
    goto LABEL_58;
  if ( v14 )
  {
    if ( *(_QWORD *)a2 - *(_QWORD *)&this[388] >= *(_QWORD *)&this[12]
                                                * (unsigned __int64)(unsigned int)this[17].y
                                                / 0x3E8 )
    {
      v41 = this[374].y == 2;
      this[412].x = v23 & 0xFFFFBFFF;
      if ( !v41 )
        goto LABEL_58;
      v35 = 1;
      v36 = 1;
      goto LABEL_59;
    }
    return 1LL;
  }
  v32 = this[374].y;
  v33 = v23 & 0xFFFFBFFF;
  this[412].x = v33;
  switch ( v32 )
  {
    case 2:
      if ( (v33 & 0x8000) != 0 )
      {
        if ( (v33 & 0x10) == 0 )
        {
          this[407] = v86;
          CPTPEngine::SendMouseDownAtPoint(
            (CPTPEngine *)this,
            8u,
            *((_DWORD *)a2 + 6) - this[387].y,
            *((_DWORD *)a2 + 6),
            *(struct tagPOINT *)((char *)a2 + 28),
            0,
            this[50].x);
          v34 = &v84;
          LODWORD(v82) = 17;
          v85 = v83;
          v84 = v82;
          goto LABEL_57;
        }
        goto LABEL_58;
      }
      if ( (v33 & 8) != 0 )
        goto LABEL_58;
      this[407] = v86;
      CPTPEngine::SendMouseDownAtPoint(
        (CPTPEngine *)this,
        2u,
        *((_DWORD *)a2 + 6) - this[387].y,
        *((_DWORD *)a2 + 6),
        *(struct tagPOINT *)((char *)a2 + 28),
        0,
        this[50].x);
      LODWORD(v84) = 20;
      break;
    case 3:
      CBasePTPEngine::SendShellOutput(this, 0LL, v13);
      LODWORD(v84) = 23;
      break;
    case 4:
      CBasePTPEngine::SendShellOutput(this, 1LL, v13);
      LODWORD(v84) = 24;
      break;
    default:
      goto LABEL_58;
  }
  v34 = &v82;
  v82 = v84;
  v83 = v85;
LABEL_57:
  CBasePTPEngine::SendTelemetryOutput(this, 4LL, v34);
LABEL_58:
  v35 = v91;
  v36 = v80;
LABEL_59:
  if ( !v35 )
  {
LABEL_108:
    v44 = a3;
    goto LABEL_109;
  }
  if ( !v36 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
    v37 = (struct CContactState *)&this[149];
    v38 = 6LL;
    v39 = 1LL;
    do
    {
      if ( ((unsigned __int8)*(_DWORD *)v37 & (unsigned __int8)v39) != 0 )
        CPTPEngine::SetContactRestingState((CPTPEngine *)this, v37, v39);
      v37 = (struct CContactState *)((char *)v37 + 296);
      v38 -= v39;
    }
    while ( v38 );
  }
  if ( v14 )
  {
    if ( *((_DWORD *)a2 + 10) )
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
    v45 = !a4 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0);
    if ( *((_DWORD *)a2 + 10) || v45 )
    {
      this[412].x |= 0x200u;
    }
    else
    {
      v46 = !a3
         && v25 <= 1
         && (unsigned int)CPTPEngine::IsRCZClick((CPTPEngine *)this, a2, (struct CContactState *)v24, &v81);
      if ( v25 < 2 || v36 )
      {
        if ( !v46 )
        {
          v44 = a3;
          if ( v25 <= 2 )
          {
            v51 = 18LL;
            if ( a3 )
            {
              v51 = 25LL;
            }
            else if ( v36 )
            {
              v51 = 19LL;
              if ( v25 == 2 )
                v51 = 21LL;
            }
            CPTPEngine::SendLeftDownFromPhysical(this, a2, v81, v51);
          }
          goto LABEL_109;
        }
        CPTPEngine::SendRightDownFromPhysical(this, a2, v81, v36 != 0 ? 22 : 16);
      }
      else
      {
        v47 = this[412].x;
        this[374].y = v25;
        v48 = v47 & 0xFFFF3FFF | 0x4000;
        this[412].x = v48;
        if ( v25 == 2 )
        {
          v49 = HIDWORD(*(_QWORD *)(v24 + 8)) - HIDWORD(*(_QWORD *)(*((_QWORD *)&v88 + 1) + 8LL));
          this[412].x = v48 | ((unsigned int)this[37].x >= (unsigned __int64)(int)(v49 * v49
                                                                                 + (*(_QWORD *)(v24 + 8)
                                                                                  - *(_QWORD *)(*((_QWORD *)&v88 + 1)
                                                                                              + 8LL))
                                                                                 * (*(_QWORD *)(v24 + 8)
                                                                                  - *(_QWORD *)(*((_QWORD *)&v88 + 1)
                                                                                              + 8LL)))
                             ? 0x8000
                             : 0);
        }
      }
    }
    goto LABEL_108;
  }
  v40 = this[412].x;
  if ( (v40 & 0x10) != 0 && (v40 & 0x100) != 0 && (v40 & 0x40) == 0 )
  {
    this[407] = v86;
    CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
    this[412].x &= ~0x10u;
    goto LABEL_84;
  }
  v42 = this[412].x;
  if ( (v40 & 8) != 0 && (v40 & 0x80u) != 0 && (v40 & 0x20) == 0 )
  {
    this[407] = v86;
    CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
    this[412].x &= ~8u;
LABEL_84:
    v42 = this[412].x;
  }
  v43 = v42 & 0xFFFFFE7F;
  this[412].x = v43;
  this[387].x = *((_DWORD *)a2 + 6);
  if ( (this[27].y & 8) != 0 )
    this[412].x = v43 | 0x4000000;
  v44 = a3;
  if ( (unsigned int)(this[375].y - 4) <= 1 )
    this[375].y = 1;
LABEL_109:
  if ( a4 <= 2 )
  {
    if ( v14 )
    {
      v52 = this[412].x;
      if ( (v52 & 8) == 0 && (v52 & 0x10) == 0 )
        return 0LL;
    }
LABEL_114:
    if ( !v44 )
    {
      if ( v35 && !v36 )
      {
        if ( this[375].y == 2 && !v14 )
          this[412].x |= 0x800000u;
        *a5 = 1;
        return 1LL;
      }
      v53 = 0;
      v54 = 0;
      v55 = 0LL;
      a5 = 0LL;
      v81 = 0LL;
      if ( v14 || (v56 = this[412].x, (v56 & 2) != 0) || (v56 & 4) != 0 || this[371].y )
      {
        v57 = *((_DWORD *)a2 + 12);
        if ( v57 )
        {
          v58 = this[2].x;
          v59 = v57;
          v60 = a5;
          v61 = v90;
          do
          {
            v62 = v61[1].y;
            v63 = 37LL * (v61->y % v58);
            v64 = &this[v63 + 149];
            if ( (v62 & 0x40000) == 0 && v62 )
            {
              v65 = v64->x;
              if ( (v64->x & 4) != 0 )
              {
                HIDWORD(v92) = HIDWORD(*(_QWORD *)&v61[5]) - this[v63 + 152].y;
                LODWORD(v92) = *(_QWORD *)&v61[5] - this[v63 + 152].x;
                v66 = v61;
                v67 = abs32(SHIDWORD(v92)) + abs32((int)v92);
                if ( v67 < v53 )
                {
                  v64 = v55;
                  v66 = v81;
                  v67 = v53;
                }
                else
                {
                  v60 = v92;
                }
                a5 = v60;
                v81 = v66;
                if ( (v65 & 0x4000) == 0 )
                  v54 = 1;
                v55 = v64;
                v53 = v67;
              }
              else if ( (v65 & 0x2000) != 0 )
              {
                v54 = 1;
              }
            }
            v61 += 12;
            --v59;
          }
          while ( v59 );
          v68 = a2;
          if ( v55 )
          {
            v69 = 0;
            if ( this[375].y != 5 )
            {
              if ( a4 == 2 || (v70 = this[412].x, (v70 & 2) != 0) || (v70 & 4) != 0 )
              {
                this[375].y = 5;
                if ( this[371].y && !v54 )
                  v55[17].x = 0;
                LODWORD(v84) = 8;
                v69 = 1;
                v83 = v85;
                v82 = v84;
                CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
              }
            }
            if ( this[375].y != 4 && a4 == 1 )
            {
              v71 = this[412].x;
              if ( (v71 & 2) == 0 && (v71 & 4) == 0 )
              {
                v72 = v85;
                this[375].y = 4;
                LODWORD(v84) = 7;
                v73 = v84;
                v55[17].x = 0;
                v69 = 1;
                v83 = v72;
                v82 = v73;
                CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v82);
              }
            }
            if ( v69 )
            {
              this[412].x &= ~0x40000000u;
              this[383] = 0LL;
              this[384] = 0LL;
            }
            if ( a4 == 1 && (v74 = this[412].x, (v74 & 2) == 0) && (v74 & 4) == 0 || this[371].y && !v54 )
              this[412].x ^= (this[412].x ^ ((unsigned int)CPTPEngine::ApplyElasticDragModeDeltas(
                                                             (CPTPEngine *)this,
                                                             (struct CContactState *)v55,
                                                             (struct tagPOINTER_INFO *)v81,
                                                             (struct tagPOINT *)&a5) << 18)) & 0x40000;
            v75 = this[18].y;
            v76 = this[383].y + HIDWORD(a5);
            LODWORD(a5) = this[383].x + (_DWORD)a5;
            HIDWORD(a5) = v76;
            v94.x = 100 * (int)a5 / v75;
            v94.y = 100 * v76 / v75;
            v77 = v94.y - this[384].y;
            v78 = v94.x - this[384].x;
            v79 = a5;
            this[384] = v94;
            this[383] = (struct tagPOINT)v79;
            if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                                  (CPTPEngine *)this,
                                  v68,
                                  (struct tagPOINT)__PAIR64__(v77, v78),
                                  (struct CContactState *)v55)
              && (v78 || v77) )
            {
              this[412].x |= 0x40000000u;
              CBasePTPEngine::SendMouseOutput(this, 0LL, __PAIR64__(v77, v78));
            }
          }
        }
      }
    }
    return 1LL;
  }
  if ( !v14 )
  {
    v50 = this[412].x;
    if ( (v50 & 2) == 0 && (v50 & 4) == 0 && !this[371].y )
      goto LABEL_114;
  }
  return 0LL;
}
