/*
 * XREFs of ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C015D3E0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C0159FE4 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C015A458 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C015A680 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C015B380 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C015B89C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C015C314 (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C015C438 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C015C754 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C015C994 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C015C9FC (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C015CB70 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C015CBA0 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C015D3F8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D76C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015E7F8 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C015E8DC (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C015ED50 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015EF14 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C015F064 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C015F298 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C015F434 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C015FBA8 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::RunStateMachine(struct tagPOINT *this, struct PTPInput *a2)
{
  int v2; // r13d
  int v3; // r14d
  int v4; // r12d
  int v5; // r15d
  int v6; // edi
  struct PTPInput *v7; // rsi
  int v9; // eax
  LONG x; // eax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  LONG v13; // eax
  int y; // ecx
  struct tagPOINT v15; // rax
  LONG v16; // ecx
  unsigned int v17; // eax
  char *v18; // r13
  int v19; // r12d
  unsigned int v20; // edx
  struct tagPOINT *v21; // r14
  unsigned int v22; // ecx
  int v23; // r15d
  LONG v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  char *v28; // r13
  unsigned int v29; // r9d
  LONG v30; // ecx
  char *v31; // r8
  __int64 v32; // rdx
  LONG v33; // ecx
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // ecx
  int GestureAndMarkGesturingContactsAsNonResting; // eax
  __int64 v38; // r8
  bool v39; // dl
  bool v40; // al
  bool v41; // zf
  int v42; // eax
  unsigned int v43; // r15d
  struct tagPOINT v44; // rdx
  int v45; // r14d
  LONG v46; // eax
  char v47; // cl
  CPTPEngine *i; // rax
  int v49; // edx
  unsigned int j; // r15d
  int v51; // r8d
  unsigned int v52; // edx
  struct tagPOINT *v53; // r14
  int v54; // ecx
  struct CContactState *v55; // rdx
  __int64 v56; // r10
  int v57; // edx
  LONG v58; // eax
  LONG v59; // r13d
  unsigned int v60; // r13d
  unsigned int v61; // r14d
  unsigned int v62; // r10d
  LONG *p_y; // r11
  __int64 v64; // r12
  struct tagPOINT *v65; // r9
  __int64 v66; // r15
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // r8
  LONG v69; // eax
  LONG v70; // eax
  LONG v71; // r8d
  int v72; // r12d
  int v73; // r13d
  int v74; // r14d
  LONG v75; // ecx
  int v76; // edx
  char v77; // al
  LONG v78; // edx
  int v79; // r8d
  int v80; // r14d
  unsigned int v81; // r10d
  char *v82; // r8
  __int64 v83; // r9
  LONG v84; // ecx
  unsigned int v85; // ecx
  int v86; // ecx
  __int64 v87; // rdx
  int v88; // edx
  unsigned int v89; // r8d
  __int64 v90; // rcx
  LONG v91; // eax
  __int128 v92; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v93; // [rsp+40h] [rbp-C0h]
  unsigned int v94; // [rsp+50h] [rbp-B0h]
  int v95; // [rsp+54h] [rbp-ACh]
  int v96; // [rsp+58h] [rbp-A8h]
  int v97; // [rsp+5Ch] [rbp-A4h]
  int v98; // [rsp+60h] [rbp-A0h]
  unsigned int v99; // [rsp+64h] [rbp-9Ch]
  int v100; // [rsp+68h] [rbp-98h] BYREF
  int v101; // [rsp+6Ch] [rbp-94h]
  int v102; // [rsp+70h] [rbp-90h] BYREF
  int v103; // [rsp+74h] [rbp-8Ch] BYREF
  int v104; // [rsp+78h] [rbp-88h] BYREF
  int v105; // [rsp+7Ch] [rbp-84h]
  int v106; // [rsp+80h] [rbp-80h]
  int v107[3]; // [rsp+84h] [rbp-7Ch] BYREF
  __int128 v108; // [rsp+90h] [rbp-70h] BYREF
  __int64 v109; // [rsp+A0h] [rbp-60h]
  unsigned int v110; // [rsp+B0h] [rbp-50h]
  int v111; // [rsp+B4h] [rbp-4Ch]
  int v112; // [rsp+B8h] [rbp-48h]
  int v113; // [rsp+BCh] [rbp-44h]
  int v114; // [rsp+C0h] [rbp-40h]
  unsigned int v115; // [rsp+C8h] [rbp-38h]
  struct CContactState *v116; // [rsp+D0h] [rbp-30h]
  __int128 v117; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v118; // [rsp+F0h] [rbp-10h]
  __int128 v119; // [rsp+100h] [rbp+0h] BYREF
  __int64 v120; // [rsp+110h] [rbp+10h]
  unsigned int v121; // [rsp+170h] [rbp+70h]
  int v123; // [rsp+180h] [rbp+80h]
  int v124; // [rsp+188h] [rbp+88h]

  v2 = *((_DWORD *)a2 + 9);
  v116 = 0LL;
  v3 = 0;
  v105 = 0;
  v4 = 0;
  v121 = 0;
  v5 = 0;
  v6 = 1;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v7 = a2;
  v100 = 0;
  v107[0] = 0;
  v96 = 0;
  v94 = 0;
  v106 = 0;
  v123 = 0;
  v95 = 0;
  v97 = 0;
  v9 = *((_DWORD *)a2 + 16) & 0x70;
  v101 = v2;
  this[375].x = v9;
  CPTPEngine::HandleButtonSuppressionAndPendingUps((CPTPEngine *)this, a2, v2);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v92 = 0uLL;
    v93 = 0LL;
    v108 = 0uLL;
    v109 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, &v108);
  }
  x = this[412].x;
  if ( (x & 1) == 0 && (x & 2) == 0 && (x & 4) == 0 )
  {
    v11 = 0LL;
    v12 = 0;
    do
    {
      if ( v12 >= 6 )
        break;
      v13 = this[37 * v12 + 149].x;
      if ( (v13 & 1) != 0 && (v13 & 0x80u) == 0 )
        v11 = 1LL;
      ++v12;
    }
    while ( !(_DWORD)v11 );
    if ( !(_DWORD)v11 && *((_DWORD *)v7 + 12) != this[373].x + this[374].x )
    {
      CBasePTPEngine::SendInertiaOutput(this, v11);
      if ( *((_DWORD *)v7 + 10) )
        this[412].x &= 0xFEFFDFFF;
      if ( this[2].y )
        y = this[51].y;
      else
        y = 0;
      v15 = this[402];
      if ( *(_QWORD *)&v15 && *((_QWORD *)v7 + 1) > *(unsigned __int64 *)&v15 && y > 0 )
        CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 1);
      this[402] = *(struct tagPOINT *)v7;
      if ( *((_QWORD *)v7 + 2) > *((_QWORD *)v7 + 1) )
      {
        *(_QWORD *)&v108 = *((_QWORD *)v7 + 2);
        v93 = v109;
        v92 = v108;
        CBasePTPEngine::SendTelemetryOutput(this, 0LL, &v92);
      }
    }
  }
  v16 = this[375].x;
  v112 = v16 & 0x10;
  v111 = v112 != 0;
  v114 = v16 & 0x40;
  v113 = v16 & 0x20;
  v17 = this[412].x & 0xFFFBFFFF;
  v115 = (this[412].x & 0x40000u) >> 18;
  v124 = this[375].y;
  this[412].x = v17;
  if ( v2 )
    goto LABEL_185;
  this[374].x = 0;
  v18 = (char *)v7 + 52;
  v99 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    do
    {
      v19 = *((_DWORD *)v18 + 3);
      v20 = *((_DWORD *)v18 + 1) % this[2].x;
      v98 = v19;
      v110 = v20;
      v21 = &this[37 * v20 + 149];
      *((_DWORD *)v18 + 3) = v19 & 0xFFFFFF8F;
      v22 = v21->x;
      if ( (v21->x & 1) != 0 && ((v22 & 0x8000000) == 0 || (v19 & 0x60000) == 0) )
      {
        LODWORD(v108) = 0;
        v93 = v109;
        v92 = v108;
        CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v92);
        v22 = v21->x & 0xF7FFFFFE;
        v21->x = v22;
      }
      if ( (v22 & 0x8000000) == 0 )
      {
        v22 |= 0x8000000u;
        v97 = 1;
        v21->x = v22;
        v21[9] = *(struct tagPOINT *)(v18 + 80);
        v21[2] = *(struct tagPOINT *)(v18 + 40);
        v21[18].x = *((_DWORD *)v18 + 1);
      }
      v23 = 0;
      if ( (v22 & 1) == 0 )
      {
        v23 = (*((_DWORD *)v18 + 3) >> 23) & 4;
        if ( (unsigned int)CPTPEngine::PointInsideCurtainRegion((CPTPEngine *)this, *(struct tagPOINT *)(v18 + 40))
          && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, v7, 0x40u, 0, 0) )
        {
          v23 |= 2u;
        }
        if ( (this[412].x & 0x10000000) != 0
          && (this[27].y & 2) != 0
          && !PtInRect(&this[405], *((_QWORD *)v18 + 5))
          && (*(_QWORD *)v7 - *(_QWORD *)&v21[9] >= *(_QWORD *)&this[12]
                                                  * (unsigned __int64)(unsigned int)this[22].y
                                                  / 0x3E8
           || *((_DWORD *)v7 + 12) == 1
           || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(
                               (CPTPEngine *)this,
                               v7,
                               (struct CContactState *)v21)) )
        {
          v23 |= 1u;
        }
        v19 = v98;
        if ( v23 || (v98 & 0x40000) != 0 )
          *((_DWORD *)v18 + 3) = 0;
      }
      v21[36].y = v23;
      if ( *((_DWORD *)v18 + 3) )
      {
        CPTPEngine::UpdateTPStateIndicator(
          (CPTPEngine *)this,
          v7,
          (struct CContactState *)v21,
          (struct PTPEnginePointerNode *)v18,
          &v100);
        if ( (v21->x & 2) != 0 )
        {
          ++v96;
          v94 = v110;
          *(_QWORD *)&v108 = *(_QWORD *)v7;
          v123 = 1;
          v118 = v109;
          v117 = v108;
          CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v117);
          if ( v21[1].y < this[403].y )
          {
            v25 = CPTPEngine::PointInsideCurtainRegion((CPTPEngine *)this, v21[1]);
            v26 = v95;
            if ( !v25 )
              v26 = 1;
            v95 = v26;
          }
        }
        v27 = v121 + 1;
        if ( (*((_DWORD *)v18 + 3) & 0x40000) != 0 )
          v27 = v121;
        v121 = v27;
      }
      else if ( (v19 & 0x2000006) != 0 )
      {
        ++this[374].x;
      }
      else
      {
        v24 = v21->x;
        if ( (v21->x & 1) != 0 )
        {
          LODWORD(v108) = 0;
          v120 = v109;
          v119 = v108;
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v119);
          v21->x &= ~1u;
          v24 = v21->x;
        }
        v21->x = v24 & 0xF7FFFFFF;
      }
      v18 += 96;
      ++v99;
    }
    while ( v99 < *((_DWORD *)v7 + 12) );
    v3 = v100;
    v5 = v95;
    v4 = v96;
  }
  this[373].x = 0;
  v28 = (char *)v7 + 52;
  v29 = 0;
  v30 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    v31 = (char *)v7 + 64;
    do
    {
      v32 = 37LL * (unsigned int)(*((_DWORD *)v31 - 2) % this[2].x);
      v33 = this[v32 + 149].x;
      if ( (v33 & 1) != 0 )
      {
        if ( (*(_DWORD *)v31 & 0x40000) == 0 && (v33 & 0x80u) != 0 )
          ++this[373].x;
        if ( v123 )
        {
          this[v32 + 154] = *(struct tagPOINT *)(v31 + 28);
          this[v32 + 164] = *(struct tagPOINT *)v7;
          v34 = *((_DWORD *)v7 + 6);
          this[v32 + 149].x &= ~0x20000u;
          this[v32 + 165].x = v34;
        }
      }
      v31 += 96;
      ++v29;
    }
    while ( v29 < *((_DWORD *)v7 + 12) );
    v30 = this[373].x;
  }
  v35 = v121 - v30;
  this[373].y = v121 - v30;
  if ( v121 < 2 )
    goto LABEL_94;
  v36 = this[375].y;
  if ( v36 != 3 && !this[375].x )
  {
    GestureAndMarkGesturingContactsAsNonResting = CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (CPTPEngine *)this,
                                                    v7);
    v36 = this[375].y;
    v106 = GestureAndMarkGesturingContactsAsNonResting;
    v35 = this[373].y;
  }
  if ( v36 != 2 )
    goto LABEL_94;
  v38 = 37LL * (unsigned int)this[371].x;
  v39 = __CFSHR__(this[v38 + 149].x, 8) && v35;
  v40 = __CFSHR__(this[v38 + 149].x, 8) && this[v38 + 152].y >= this[403].y;
  if ( v39 || v5 )
  {
    v42 = v123;
  }
  else
  {
    v41 = !v40;
    v42 = v123;
    if ( v41 || !v123 )
      goto LABEL_95;
  }
  this[375].y = 1;
  if ( v42 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
LABEL_94:
    v42 = v123;
  }
LABEL_95:
  if ( (v97 || v42) && this[375].y == 1 )
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
  if ( v3 && *((_DWORD *)v7 + 12) == 1 )
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
  if ( !this[408].y || !v4 )
    goto LABEL_115;
  if ( v4 == 1 && (this[53].x & 4) != 0 )
  {
    v43 = v94;
    v44 = this[37 * v94 + 150];
    if ( (int)((HIDWORD(*(_QWORD *)&this[380]) - v44.y) * (HIDWORD(*(_QWORD *)&this[380]) - v44.y)
             + (*(_QWORD *)&this[380] - v44.x) * (*(_QWORD *)&this[380] - v44.x)) <= (unsigned __int64)(unsigned int)(this[24].x * this[24].x) )
    {
      v45 = 1;
      goto LABEL_110;
    }
  }
  else
  {
    v43 = v94;
  }
  v45 = 0;
LABEL_110:
  if ( this[409].y && !v45 )
    this[412].x &= ~8u;
  CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, *((_DWORD *)v7 + 6) - this[410].x, v45 ^ 1);
  if ( v45 )
  {
    v46 = this[409].y;
    this[409].y = 0;
    this[371].y = v46;
    this[37 * v43 + 149].x |= 0x4000u;
  }
LABEL_115:
  if ( this[375].y == 1 && this[371].y && this[373].y > 1u )
    CPTPEngine::SendMouseUpIfPending(
      (CPTPEngine *)this,
      (unsigned int *)&this[371].y,
      *((_DWORD *)v7 + 6) - this[386].y);
  if ( this[408].y )
  {
    v47 = 0;
    for ( i = (CPTPEngine *)&this[149]; i != (CPTPEngine *)&this[371]; i = (CPTPEngine *)((char *)i + 296) )
    {
      v49 = *(_DWORD *)i;
      if ( (*(_DWORD *)i & 1) != 0 && (v49 & 0x80u) != 0 && (v49 & 4) != 0 )
        v47 = 1;
    }
    if ( this[373].y || v47 )
      CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, *((_DWORD *)v7 + 6) - this[410].x, 1);
  }
  if ( this[373].y > 2u )
    this[412].x |= 0x100000u;
  for ( j = 0; j < *((_DWORD *)v7 + 12); v28 += 96 )
  {
    v51 = *((_DWORD *)v28 + 3);
    v52 = *((_DWORD *)v28 + 1) % this[2].x;
    v53 = &this[37 * v52 + 149];
    if ( v51 )
    {
      if ( (v53->x & 0x20000) != 0 && (this[375].y != 2 || v52 != this[371].x) )
      {
        v105 = 1;
        v116 = (struct CContactState *)&this[37 * v52 + 149];
      }
      v54 = this[375].y;
      if ( v54 == 2 && v52 == this[371].x && (v51 & 0x40000) != 0 )
      {
        this[412].x &= ~0x2000000u;
        v54 = 1;
        this[375].y = 1;
        if ( v121 )
        {
          CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
          v55 = (struct CContactState *)&this[149];
          v56 = 6LL;
          do
          {
            if ( (*(_DWORD *)v55 & 1) != 0 )
            {
              CPTPEngine::SetContactRestingState((CPTPEngine *)this, v55, 1);
              *(_DWORD *)v55 &= ~0x40000000u;
            }
            v55 = (struct CContactState *)((char *)v55 + 296);
            --v56;
          }
          while ( v56 );
          v54 = this[375].y;
        }
      }
      v57 = v54;
      if ( this[371].y )
      {
        if ( v54 == 5 && (*((_DWORD *)v28 + 3) & 0x40000) == 0 && v121 == 1 )
        {
          v58 = v53->x;
          if ( (v53->x & 0x80u) != 0 && (v58 & 4) == 0 && (v58 & 0x2000) == 0 && (v58 & 0x4000) == 0 )
          {
            this[375].y = 1;
            CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[371].y, 0);
            v57 = this[375].y;
          }
        }
      }
      if ( v57 == 2 )
        this[412].x |= 0x2000000u;
    }
    ++j;
  }
  v59 = v121;
  LOBYTE(v5) = 0;
  if ( (unsigned int)CPTPEngine::ProcessTapsFor3orMoreContacts((CPTPEngine *)this, v7, v121) )
    goto LABEL_235;
  v60 = this[374].x + v121;
  if ( v60 > 1 && (this[412].x & 0x200000) == 0 && (v123 || v97) )
  {
    v61 = this[2].x;
    if ( v61 )
    {
      v62 = 1;
      p_y = &this[185].y;
      v64 = v61;
      do
      {
        if ( (*(p_y - 73) & 0x8000000) != 0 && (*p_y & 0xFFFFFFFB) == 0 && v62 < v61 )
        {
          v65 = &this[37 * v62 + 158];
          v66 = v61 - v62;
          do
          {
            if ( (v65[-9].x & 0x8000000) != 0 && (v65[27].y & 0xFFFFFFFB) == 0 )
            {
              v67 = *(_QWORD *)(p_y - 55);
              v68 = *(_QWORD *)v65 - v67;
              if ( *(_QWORD *)v65 <= v67 )
                v68 = *(_QWORD *)(p_y - 55) - *(_QWORD *)v65;
              if ( v68 <= *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[22].y / 0x3E8 )
                this[412].x |= 0x200000u;
            }
            v65 += 37;
            --v66;
          }
          while ( v66 );
        }
        p_y += 74;
        ++v62;
        --v64;
      }
      while ( v64 );
      v7 = a2;
      LOBYTE(v5) = 0;
    }
  }
  v69 = this[412].x;
  if ( (v69 & 0x200000) != 0 && v60 == 1 )
  {
    v69 &= 0xFF9FFFFF;
    this[412].x = v69;
  }
  if ( (v69 & 0x2000) != 0 && (unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)this, v7, v111) )
    goto LABEL_234;
  v2 = v101;
LABEL_185:
  if ( (unsigned int)CPTPEngine::DoTPButtonProcessing(this, v7, v2, v121, &v102)
    && (unsigned int)CPTPEngine::DoTPDiscreteButtonProcessing((CPTPEngine *)this, v7, &v103, &v104) )
  {
    if ( v2 )
      goto LABEL_272;
    if ( !v102 && !v103 && !v104 || (v70 = this[375].y, v70 == 3) || v70 == 6 )
    {
      v71 = this[375].y;
      if ( !this[371].y || (v72 = 1, v71 == 1) )
        v72 = 0;
      v73 = v112;
      if ( v112 || v113 || v114 || v72 || (v74 = 1, !v105) )
        v74 = 0;
      v75 = this[373].y;
      if ( v75 == 2 && v71 != 3 && (this[412].x & 0x2000000) == 0 && v74 && v106 )
      {
        v76 = 1;
      }
      else
      {
        v76 = 0;
        v77 = 0;
        if ( v75 != 2 )
          goto LABEL_212;
      }
      if ( v74 || (v77 = 0, *((_DWORD *)v7 + 10)) )
        v77 = 1;
LABEL_212:
      if ( v71 != 3 && (v76 || v77) )
      {
        CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, v7, v116);
        v75 = this[373].y;
        if ( v75 == 2 )
          LOBYTE(v5) = 1;
      }
      v78 = this[375].y;
      if ( v78 == 3 || (_BYTE)v5 )
      {
        this[412].x &= ~0x2000000u;
        v79 = 3;
      }
      else
      {
        v79 = 1;
      }
      if ( (unsigned int)(v75 - 3) <= 1 && v79 != 3 && v74 || v78 == 6 )
      {
        CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, v7, v116);
        v79 = 6;
      }
      if ( v79 == 3 || v79 == 6 )
      {
        CPTPEngine::DoGestureProcessing((CPTPEngine *)this, v7, v107);
      }
      else
      {
        if ( this[373].y < 2u )
        {
          v80 = v124;
          v41 = v73 == 0;
          v59 = v121;
          if ( v41 && !v72 )
            CPTPEngine::DoTPMouseProcessing((__int64)this, (__int64 *)v7, v121, v124);
          goto LABEL_236;
        }
        this[375].y = 1;
      }
    }
  }
LABEL_234:
  v59 = v121;
LABEL_235:
  v80 = v124;
LABEL_236:
  v81 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    v82 = (char *)v7 + 64;
    do
    {
      v83 = 37LL * (unsigned int)(*((_DWORD *)v82 - 2) % this[2].x);
      v84 = this[v83 + 149].x;
      if ( (v84 & 1) != 0 && *(_DWORD *)v82 )
      {
        if ( (*(_DWORD *)v82 & 0x40000) != 0 )
        {
          if ( this[375].y == 2 && *((_DWORD *)v82 - 2) % this[2].x == this[371].x )
          {
            this[412].x &= ~0x2000000u;
            v84 = this[v83 + 149].x;
          }
          v85 = v84 & 0xFFFFFFFE;
          this[v83 + 149].x = v85;
          if ( (*(_DWORD *)v82 & 0x2000000) != 0 )
            ++this[374].x;
          else
            this[v83 + 149].x = v85 & 0xF7FFFFFF;
        }
        else
        {
          this[v83 + 159] = *(struct tagPOINT *)(v82 + 68);
          this[v83 + 152] = *(struct tagPOINT *)(v82 + 28);
        }
      }
      v82 += 96;
      ++v81;
    }
    while ( v81 < *((_DWORD *)v7 + 12) );
  }
  v86 = -__CFSHR__(this[412].x, 19);
  if ( __CFSHR__(this[412].x, 19) != v115 )
  {
    v92 = 0uLL;
    LODWORD(v93) = 0;
    if ( v86 )
      v87 = 2LL;
    else
      v87 = 3LL;
    CBasePTPEngine::SendEtwOutput(this, v87, &v92);
  }
  if ( this[375].y != 2 )
    this[412].x &= ~0x800000u;
  v88 = 0;
  v89 = 0;
  do
  {
    if ( v89 >= 6 )
      break;
    if ( (this[37 * v89 + 149].x & 1) != 0 )
      v88 = 1;
    ++v89;
  }
  while ( !v88 );
  if ( !v88 )
  {
    this[412].x &= 0xD78FFFFF;
    this[375].y = 1;
    if ( this[371].y )
      CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[371].y, 0);
    if ( v80 == 2 )
    {
      v90 = 37LL * (unsigned int)this[371].x;
      if ( (this[v90 + 149].x & 0x800) != 0
        && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)&this[v90 + 159] - *(_QWORD *)&this[v90 + 161]))
                   / *(_QWORD *)&this[12]) >= (unsigned int)this[65].y )
      {
        this[407] = this[v90 + 159];
      }
    }
    *(_QWORD *)&v117 = *(_QWORD *)v7;
    v120 = v118;
    v119 = v117;
    CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v119);
  }
  if ( v107[0] )
  {
    this[412].x &= 0xFF9FFFFF;
    this[375].y = 1;
    this[401] = *(struct tagPOINT *)v7;
  }
  this[372].x = v59;
LABEL_272:
  if ( (unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v91 = this[412].x;
    if ( (v91 & 1) != 0 || (v91 & 2) != 0 || (v91 & 4) != 0 || this[408].y || this[375].y != 1 )
    {
      v6 = 0;
    }
    else if ( (this[412].y & 1) == 0 )
    {
      v92 = 0uLL;
      v93 = 0LL;
      v117 = 0uLL;
      v118 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v117);
      this[412].x = this[412].x & 0x578FFFFF | 0x80000000;
    }
    this[412].y = v6 | this[412].y & 0xFFFFFFFE;
  }
  else
  {
    this[412].y |= 1u;
    v92 = 0uLL;
    v93 = 0LL;
    v117 = 0uLL;
    v118 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v117);
  }
}
