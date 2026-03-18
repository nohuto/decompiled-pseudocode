/*
 * XREFs of ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01949C4
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197AA8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C019402C (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C019647C (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C0196B80 (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197A08 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0198B50 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0198DD0 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C0198EC4 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0198F60 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0199000 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C01990F8 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0199184 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C01992E0 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0199554 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C0199704 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
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
  unsigned int v18; // eax
  LONG v19; // eax
  LONG v21; // r9d
  LONG v22; // r9d
  __int64 v23; // r13
  int v24; // r14d
  int v25; // esi
  unsigned int v26; // r12d
  char *v27; // r11
  struct tagPOINT *v28; // r9
  unsigned __int8 v29; // r10
  struct tagPOINT v30; // r8
  int v31; // ecx
  __int64 v32; // rcx
  LONG v33; // eax
  unsigned int v34; // r9d
  int v35; // esi
  int v36; // r12d
  struct CContactState *v37; // rdx
  __int64 v38; // r10
  __int64 v39; // r11
  LONG v40; // eax
  unsigned int v41; // ecx
  bool v42; // zf
  unsigned int v43; // ecx
  int v44; // r13d
  BOOL v45; // eax
  BOOL v46; // eax
  LONG v47; // r9d
  unsigned int v48; // r9d
  int v49; // ecx
  int v50; // r8d
  LONG v51; // eax
  __int64 v52; // r9
  LONG v53; // eax
  signed int v54; // r13d
  int v55; // esi
  struct tagPOINT *v56; // r14
  LONG v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // r12d
  __int64 v60; // r11
  int *v61; // rcx
  struct tagPOINT *v62; // rdi
  LONG v63; // eax
  __int64 v64; // rdx
  struct tagPOINT *v65; // r15
  LONG v66; // r10d
  struct tagPOINT *v67; // rax
  signed int v68; // edx
  struct PTPInput *v69; // rdi
  int v70; // r15d
  LONG v71; // eax
  LONG v72; // eax
  LONG v73; // eax
  LONG v74; // ecx
  int v75; // r8d
  int v76; // r15d
  int v77; // esi
  int *v78; // rax
  int v79; // [rsp+38h] [rbp-81h]
  __int128 v80; // [rsp+48h] [rbp-71h] BYREF
  __int64 v81; // [rsp+58h] [rbp-61h]
  struct tagPOINT *v82; // [rsp+68h] [rbp-51h] BYREF
  __int128 v83; // [rsp+78h] [rbp-41h] BYREF
  __int64 v84; // [rsp+88h] [rbp-31h]
  struct tagPOINT v85; // [rsp+98h] [rbp-21h]
  __int64 v86; // [rsp+A0h] [rbp-19h]
  __int128 v87; // [rsp+A8h] [rbp-11h]
  __int64 v88; // [rsp+B8h] [rbp-1h]
  struct tagPOINT *v89; // [rsp+C0h] [rbp+7h]
  int v90; // [rsp+118h] [rbp+5Fh]
  int *v91; // [rsp+118h] [rbp+5Fh]
  struct tagPOINT v93; // [rsp+120h] [rbp+67h]

  x = this[371].x;
  v6 = a5;
  v7 = 0;
  v79 = 0;
  v9 = a3;
  v11 = this[407].x;
  v12 = *(struct tagPOINT *)a2;
  v13 = 0LL;
  v14 = x & 0x10;
  v90 = 0;
  LODWORD(v86) = v14;
  v15 = v14 != 0;
  v85 = v12;
  v82 = 0LL;
  v16 = x & 0xFFFFFFEF;
  *a5 = 0;
  if ( (v11 & 1) != v15 )
  {
    y = this[371].y;
    if ( (y == 3 || y == 6) && v14 )
    {
      v18 = v11 | 0x200;
    }
    else
    {
      v18 = v11;
      if ( !v14 && (v11 & 0x200) != 0 )
      {
        v7 = 1;
        v18 = v11 & 0xFFFFFDFF;
      }
    }
    v90 = 1;
    v13 = 1LL;
    this[407].x = v15 | v18 & 0xFFFFFFFE;
    if ( v14 )
    {
      CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 0);
      v13 = 1LL;
      v9 = a3;
      this[384] = v12;
      this[383].x = *((_DWORD *)a2 + 6);
    }
    *v6 = 1;
  }
  v19 = this[371].y;
  if ( v19 == 3 || v19 == 6 || v7 )
    return 1LL;
  if ( v9 && (_DWORD)v13 && v14 && !v16 )
  {
    this[407].x |= 0x10000u;
    return 1LL;
  }
  v21 = this[407].x;
  if ( (v21 & 0x10000) != 0 )
  {
    if ( v14 )
    {
      if ( v9 )
      {
        if ( !v16 )
        {
          v13 = *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[17].y / 0x3E8;
          if ( *(_QWORD *)a2 - *(_QWORD *)&this[384] < v13 )
            return 1LL;
        }
        v79 = 1;
      }
      v90 = 1;
      this[407].x = v21 & 0xFFFEFFFF;
    }
    else
    {
      this[407].x = v21 & 0xFFFEFFFF;
      if ( !*((_DWORD *)a2 + 10) && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0) )
      {
        v88 = 0LL;
        v87 = 0x19uLL;
        v81 = 0LL;
        v80 = 0x19uLL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v80);
        CPTPEngine::SendMouseDownAtPoint((CPTPEngine *)this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0, this[50].x);
      }
    }
  }
  v22 = this[407].x;
  v23 = 0LL;
  v89 = (struct tagPOINT *)((char *)a2 + 56);
  v24 = 0;
  v87 = 0uLL;
  v25 = -__CFSHR__(v22, 15);
  v26 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_51;
  v27 = (char *)a2 + 68;
  do
  {
    v28 = &this[37 * (unsigned int)(*((_DWORD *)v27 - 2) % this[2].x) + 145];
    if ( (v28->x & 1) == 0 || (*(_DWORD *)v27 & 0x40000) != 0 )
      goto LABEL_49;
    v13 = (unsigned __int64)v28[8];
    v29 = 0;
    if ( v25 )
    {
      if ( v13 > *(_QWORD *)&this[384] )
      {
        this[407].x &= ~0x4000u;
        goto LABEL_45;
      }
      if ( (v28->y & 1) != 0 )
      {
        v30 = v28[1];
        v31 = v30.x - *(_QWORD *)(v27 + 28);
        v13 = (unsigned int)((v30.y - HIDWORD(*(_QWORD *)(v27 + 28))) * (v30.y - HIDWORD(*(_QWORD *)(v27 + 28))));
        if ( (int)v13 + v31 * v31 > (unsigned __int64)(unsigned int)(this[18].x * this[18].x) )
        {
          this[407].x &= ~0x4000u;
          if ( this[370].y == 2 )
          {
            v90 = 1;
            v79 = 1;
          }
          goto LABEL_45;
        }
LABEL_43:
        v29 = 1;
      }
    }
    else
    {
      if ( *(_QWORD *)a2 - v13 < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[17].y / 0x3E8
        && *(_QWORD *)&v28[12] <= v13 )
      {
        goto LABEL_43;
      }
      v29 = 0;
    }
LABEL_45:
    v28->y = v29 | v28->y & 0xFFFFFFFE;
    if ( v29 )
    {
      ++v24;
      v32 = 2LL;
      if ( (unsigned __int64)v24 < 2 )
        v32 = v24;
      *(&v86 + v32) = (__int64)v28;
    }
LABEL_49:
    ++v26;
    v27 += 96;
  }
  while ( v26 < *((_DWORD *)a2 + 12) );
  v22 = this[407].x;
  v23 = v87;
  v14 = v86;
LABEL_51:
  if ( (v22 & 0x4000) == 0 )
    goto LABEL_58;
  if ( v14 )
  {
    if ( *(_QWORD *)a2 - *(_QWORD *)&this[384] >= *(_QWORD *)&this[12]
                                                * (unsigned __int64)(unsigned int)this[17].y
                                                / 0x3E8 )
    {
      v42 = this[370].y == 2;
      this[407].x = v22 & 0xFFFFBFFF;
      if ( !v42 )
        goto LABEL_58;
      v35 = 1;
      v36 = 1;
      goto LABEL_59;
    }
    return 1LL;
  }
  v33 = this[370].y;
  v34 = v22 & 0xFFFFBFFF;
  this[407].x = v34;
  if ( v33 != 2 )
  {
    if ( v33 == 3 )
    {
      CBasePTPEngine::SendShellOutput(this, 0LL, v13);
      *(_QWORD *)&v80 = 23LL;
    }
    else
    {
      if ( v33 != 4 )
        goto LABEL_58;
      CBasePTPEngine::SendShellOutput(this, 1LL, v13);
      *(_QWORD *)&v80 = 24LL;
    }
LABEL_57:
    *((_QWORD *)&v80 + 1) = 0LL;
    v81 = 0LL;
    v83 = (unsigned __int64)v80;
    v84 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v83);
    goto LABEL_58;
  }
  if ( (v34 & 0x8000) == 0 )
  {
    if ( (v34 & 8) != 0 )
      goto LABEL_58;
    this[403] = v85;
    CPTPEngine::SendMouseDownAtPoint((CPTPEngine *)this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0, this[50].x);
    *(_QWORD *)&v80 = 20LL;
    goto LABEL_57;
  }
  if ( (v34 & 0x10) == 0 )
  {
    this[403] = v85;
    CPTPEngine::SendMouseDownAtPoint((CPTPEngine *)this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0, this[50].x);
    *(_QWORD *)&v80 = 17LL;
    goto LABEL_57;
  }
LABEL_58:
  v35 = v90;
  v36 = v79;
LABEL_59:
  if ( !v35 )
    goto LABEL_107;
  if ( !v36 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
    v37 = (struct CContactState *)&this[145];
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
  if ( !v14 )
  {
    v40 = this[407].x;
    if ( (v40 & 0x10) != 0 && (v40 & 0x100) != 0 && (v40 & 0x40) == 0 )
    {
      this[403] = v85;
      CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
      v41 = this[407].x & 0xFFFFFFEF;
    }
    else
    {
      v41 = this[407].x;
      if ( (v40 & 8) != 0 && (v40 & 0x80u) != 0 && (v40 & 0x20) == 0 )
      {
        this[403] = v85;
        CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
        v41 = this[407].x & 0xFFFFFFF7;
      }
    }
    v43 = v41 & 0xFFFFFE7F;
    this[407].x = v43;
    this[382].y = *((_DWORD *)a2 + 6);
    if ( (this[27].y & 8) != 0 )
      this[407].x = v43 | 0x4000000;
    v44 = a3;
    if ( (unsigned int)(this[371].y - 4) <= 1 )
      this[371].y = 1;
    goto LABEL_108;
  }
  if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
    CBasePTPEngine::SendInertiaOutput(this, 3LL);
  v45 = !a4 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0);
  if ( *((_DWORD *)a2 + 10) || v45 )
  {
    this[407].x |= 0x200u;
    goto LABEL_107;
  }
  v46 = !a3
     && v24 <= 1
     && (unsigned int)CPTPEngine::IsRCZClick((CPTPEngine *)this, a2, (struct CContactState *)v23, &v82);
  if ( v24 >= 2 && !v36 )
  {
    v47 = this[407].x;
    this[370].y = v24;
    v48 = v47 & 0xFFFF3FFF | 0x4000;
    this[407].x = v48;
    if ( v24 == 2 )
    {
      v49 = *(_QWORD *)(v23 + 8) - *(_QWORD *)(*((_QWORD *)&v87 + 1) + 8LL);
      v50 = HIDWORD(*(_QWORD *)(v23 + 8)) - HIDWORD(*(_QWORD *)(*((_QWORD *)&v87 + 1) + 8LL));
      this[407].x = v48 | ((unsigned int)this[37].x >= (unsigned __int64)(v50 * v50 + v49 * v49) ? 0x8000 : 0);
    }
    goto LABEL_107;
  }
  if ( v46 )
  {
    CPTPEngine::SendRightDownFromPhysical(this, a2, v82, v36 != 0 ? 22 : 16);
LABEL_107:
    v44 = a3;
    goto LABEL_108;
  }
  v44 = a3;
  if ( v24 <= 2 )
  {
    v52 = 18LL;
    if ( a3 )
    {
      v52 = 25LL;
    }
    else if ( v36 )
    {
      v52 = 19LL;
      if ( v24 == 2 )
        v52 = 21LL;
    }
    CPTPEngine::SendLeftDownFromPhysical(this, a2, v82, v52);
  }
LABEL_108:
  if ( a4 <= 2 )
  {
    if ( v14 )
    {
      v53 = this[407].x;
      if ( (v53 & 8) == 0 && (v53 & 0x10) == 0 )
        return 0LL;
    }
LABEL_113:
    if ( !v44 )
    {
      if ( v35 && !v36 )
      {
        if ( this[371].y == 2 && !v14 )
          this[407].x |= 0x800000u;
        *a5 = 1;
        return 1LL;
      }
      v54 = 0;
      v55 = 0;
      v56 = 0LL;
      a5 = 0LL;
      v82 = 0LL;
      if ( v14 || (v57 = this[407].x, (v57 & 2) != 0) || (v57 & 4) != 0 || this[367].y )
      {
        v58 = *((_DWORD *)a2 + 12);
        if ( v58 )
        {
          v59 = this[2].x;
          v60 = v58;
          v61 = a5;
          v62 = v89;
          do
          {
            v63 = v62[1].y;
            v64 = 37LL * (v62->y % v59);
            v65 = &this[v64 + 145];
            if ( (v63 & 0x40000) == 0 && v63 )
            {
              v66 = v65->x;
              if ( (v65->x & 4) != 0 )
              {
                HIDWORD(v91) = HIDWORD(*(_QWORD *)&v62[5]) - this[v64 + 148].y;
                LODWORD(v91) = *(_QWORD *)&v62[5] - this[v64 + 148].x;
                v67 = v62;
                v68 = abs32(SHIDWORD(v91)) + abs32((int)v91);
                if ( v68 < v54 )
                {
                  v65 = v56;
                  v67 = v82;
                  v68 = v54;
                }
                else
                {
                  v61 = v91;
                }
                a5 = v61;
                v82 = v67;
                if ( (v66 & 0x4000) == 0 )
                  v55 = 1;
                v56 = v65;
                v54 = v68;
              }
              else if ( (v66 & 0x2000) != 0 )
              {
                v55 = 1;
              }
            }
            v62 += 12;
            --v60;
          }
          while ( v60 );
          v69 = a2;
          if ( v56 )
          {
            v70 = 0;
            if ( this[371].y != 5 )
            {
              if ( a4 == 2 || (v71 = this[407].x, (v71 & 2) != 0) || (v71 & 4) != 0 )
              {
                this[371].y = 5;
                if ( this[367].y && !v55 )
                  v56[17].x = 0;
                v70 = 1;
                v81 = 0LL;
                v80 = 8uLL;
                v84 = 0LL;
                v83 = 8uLL;
                CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v83);
              }
            }
            if ( this[371].y != 4 && a4 == 1 )
            {
              v72 = this[407].x;
              if ( (v72 & 2) == 0 && (v72 & 4) == 0 )
              {
                this[371].y = 4;
                v81 = 0LL;
                v70 = 1;
                v80 = 7uLL;
                v56[17].x = 0;
                v84 = 0LL;
                v83 = 7uLL;
                CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v83);
              }
            }
            if ( v70 )
            {
              this[407].x &= ~0x20000000u;
              this[379] = 0LL;
              this[380] = 0LL;
            }
            if ( a4 == 1 && (v73 = this[407].x, (v73 & 2) == 0) && (v73 & 4) == 0 || this[367].y && !v55 )
              this[407].x ^= (this[407].x ^ ((unsigned int)CPTPEngine::ApplyElasticDragModeDeltas(
                                                             (CPTPEngine *)this,
                                                             (struct CContactState *)v56,
                                                             (struct tagPOINTER_INFO *)v82,
                                                             (struct tagPOINT *)&a5) << 18)) & 0x40000;
            v74 = this[18].y;
            v75 = this[379].y + HIDWORD(a5);
            LODWORD(a5) = this[379].x + (_DWORD)a5;
            HIDWORD(a5) = v75;
            v93.x = 100 * (int)a5 / v74;
            v76 = v93.x - this[380].x;
            v93.y = 100 * v75 / v74;
            v77 = v93.y - this[380].y;
            v78 = a5;
            this[380] = v93;
            this[379] = (struct tagPOINT)v78;
            if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                                  (CPTPEngine *)this,
                                  v69,
                                  (struct tagPOINT)__PAIR64__(v77, v76),
                                  (struct CContactState *)v56)
              && (v76 || v77) )
            {
              this[407].x |= 0x20000000u;
              CBasePTPEngine::SendMouseOutput(this, 0LL, __PAIR64__(v77, v76));
            }
          }
        }
      }
    }
    return 1LL;
  }
  if ( !v14 )
  {
    v51 = this[407].x;
    if ( (v51 & 2) == 0 && (v51 & 4) == 0 && !this[367].y )
      goto LABEL_113;
  }
  return 0LL;
}
