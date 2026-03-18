/*
 * XREFs of ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197AA8
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C0197690 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0067544 (PtInRect.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01943DC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C0194794 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01949C4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01956A0 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0195BA8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C0196618 (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C0196774 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0196A88 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C0196CA8 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C0196D10 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0196E90 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01976A8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197A08 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0198A6C (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0198B50 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C0198FB0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0199184 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C01992E0 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0199554 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C0199704 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0199DA8 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
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
  unsigned __int64 v16; // rax
  LONG v17; // ecx
  unsigned int v18; // eax
  char *v19; // r13
  int v20; // r12d
  __int64 v21; // rcx
  struct tagPOINT *v22; // r15
  unsigned int v23; // ecx
  int v24; // r14d
  unsigned int v25; // eax
  BOOL v26; // eax
  int v27; // ecx
  unsigned int v28; // eax
  char *v29; // r13
  unsigned int v30; // r9d
  LONG v31; // ecx
  char *v32; // r8
  __int64 v33; // rdx
  LONG v34; // ecx
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // ecx
  int GestureAndMarkGesturingContactsAsNonResting; // eax
  __int64 v39; // r8
  bool v40; // dl
  bool v41; // al
  bool v42; // zf
  int v43; // eax
  unsigned int v44; // r15d
  int v45; // ecx
  int v46; // r8d
  int v47; // r14d
  LONG v48; // eax
  char v49; // cl
  CPTPEngine *i; // rax
  int v51; // edx
  unsigned int j; // r15d
  int v53; // r8d
  unsigned int v54; // edx
  struct tagPOINT *v55; // r14
  int v56; // ecx
  struct CContactState *v57; // rdx
  __int64 v58; // r10
  int v59; // edx
  LONG v60; // eax
  LONG v61; // r13d
  unsigned int v62; // r13d
  unsigned int v63; // r14d
  unsigned int v64; // r10d
  LONG *p_y; // r11
  __int64 v66; // r12
  struct tagPOINT *v67; // r9
  __int64 v68; // r15
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // r8
  LONG v71; // eax
  LONG v72; // eax
  LONG v73; // r8d
  int v74; // r12d
  int v75; // r13d
  int v76; // r14d
  LONG v77; // ecx
  int v78; // edx
  char v79; // al
  LONG v80; // edx
  int v81; // r8d
  int v82; // r14d
  unsigned int v83; // r10d
  char *v84; // r8
  __int64 v85; // r9
  LONG v86; // ecx
  unsigned int v87; // ecx
  int v88; // ecx
  __int64 v89; // rdx
  int v90; // edx
  unsigned int v91; // r8d
  __int64 v92; // rcx
  int v93; // esi
  unsigned int v94; // eax
  unsigned int v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+34h] [rbp-CCh]
  int v97; // [rsp+38h] [rbp-C8h]
  int v98; // [rsp+3Ch] [rbp-C4h]
  __int128 v99; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v100; // [rsp+50h] [rbp-B0h]
  __int128 v101; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v102; // [rsp+70h] [rbp-90h]
  unsigned int v103; // [rsp+84h] [rbp-7Ch]
  int v104; // [rsp+88h] [rbp-78h] BYREF
  int v105; // [rsp+8Ch] [rbp-74h]
  int v106; // [rsp+90h] [rbp-70h] BYREF
  int v107; // [rsp+94h] [rbp-6Ch] BYREF
  int v108; // [rsp+98h] [rbp-68h] BYREF
  int v109; // [rsp+9Ch] [rbp-64h]
  int v110; // [rsp+A0h] [rbp-60h]
  int v111[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int128 v112; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v113; // [rsp+C0h] [rbp-40h]
  int v114; // [rsp+D0h] [rbp-30h]
  int v115; // [rsp+D4h] [rbp-2Ch]
  int v116; // [rsp+D8h] [rbp-28h]
  int v117; // [rsp+DCh] [rbp-24h]
  int v118; // [rsp+E0h] [rbp-20h]
  unsigned int v119; // [rsp+E8h] [rbp-18h]
  struct CContactState *v120; // [rsp+F0h] [rbp-10h]
  __int128 v121; // [rsp+100h] [rbp+0h] BYREF
  __int64 v122; // [rsp+110h] [rbp+10h]
  __int128 v123; // [rsp+120h] [rbp+20h] BYREF
  __int64 v124; // [rsp+130h] [rbp+30h]
  _OWORD v125[6]; // [rsp+140h] [rbp+40h]
  unsigned int v126; // [rsp+1B0h] [rbp+B0h]
  int v128; // [rsp+1C0h] [rbp+C0h]
  int v129; // [rsp+1C8h] [rbp+C8h]

  v2 = *((_DWORD *)a2 + 9);
  v120 = 0LL;
  v3 = 0;
  v109 = 0;
  v4 = 0;
  v126 = 0;
  v5 = 0;
  v6 = 1;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v7 = a2;
  v104 = 0;
  v111[0] = 0;
  v97 = 0;
  v95 = 0;
  v110 = 0;
  v128 = 0;
  v96 = 0;
  v98 = 0;
  v9 = *((_DWORD *)a2 + 17) & 0x70;
  v105 = v2;
  this[371].x = v9;
  CPTPEngine::HandleButtonSuppressionAndPendingUps((CPTPEngine *)this, a2, v2);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v101 = 0uLL;
    v102 = 0LL;
    v99 = 0uLL;
    v100 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, &v99);
  }
  x = this[407].x;
  if ( (x & 1) == 0 && (x & 2) == 0 && (x & 4) == 0 )
  {
    v11 = 0LL;
    v12 = 0;
    do
    {
      if ( v12 >= 6 )
        break;
      v13 = this[37 * v12 + 145].x;
      if ( (v13 & 1) != 0 && (v13 & 0x80u) == 0 )
        v11 = 1LL;
      ++v12;
    }
    while ( !(_DWORD)v11 );
    if ( !(_DWORD)v11 && *((_DWORD *)v7 + 12) != this[369].x + this[370].x )
    {
      CBasePTPEngine::SendInertiaOutput(this, v11);
      if ( *((_DWORD *)v7 + 10) )
        this[407].x &= 0xFEFFDFFF;
      if ( this[2].y )
        y = this[51].y;
      else
        y = 0;
      v15 = this[398];
      if ( *(_QWORD *)&v15 && *((_QWORD *)v7 + 1) > *(unsigned __int64 *)&v15 && y > 0 )
        CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 1);
      this[398] = *(struct tagPOINT *)v7;
      v16 = *((_QWORD *)v7 + 2);
      if ( v16 > *((_QWORD *)v7 + 1) )
      {
        v99 = v16;
        v100 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
        CBasePTPEngine::SendTelemetryOutput(this, 0LL, &v99);
      }
    }
  }
  v17 = this[371].x;
  v116 = v17 & 0x10;
  v115 = v116 != 0;
  v118 = v17 & 0x40;
  v117 = v17 & 0x20;
  v18 = this[407].x & 0xFFFBFFFF;
  v119 = (this[407].x & 0x40000u) >> 18;
  v129 = this[371].y;
  this[407].x = v18;
  if ( v2 )
    goto LABEL_184;
  this[370].x = 0;
  v19 = (char *)v7 + 56;
  v103 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    do
    {
      v20 = *((_DWORD *)v19 + 3);
      v21 = 37LL * (unsigned int)(*((_DWORD *)v19 + 1) % this[2].x);
      v114 = *((_DWORD *)v19 + 1) % this[2].x;
      v22 = &this[v21 + 145];
      *((_DWORD *)v19 + 3) = v20 & 0xFFFFFF8F;
      v23 = v22->x;
      if ( (v22->x & 1) != 0 && ((v23 & 0x8000000) == 0 || (v20 & 0x60000) == 0) )
      {
        v101 = 0uLL;
        v102 = 0LL;
        v121 = 0uLL;
        v122 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v121);
        v23 = v22->x & 0xF7FFFFFE;
        v22->x = v23;
      }
      if ( (v23 & 0x8000000) == 0 )
      {
        v23 |= 0x8000000u;
        v98 = 1;
        v22->x = v23;
        v22[9] = *(struct tagPOINT *)(v19 + 80);
        v22[2] = *(struct tagPOINT *)(v19 + 40);
        v22[18].x = *((_DWORD *)v19 + 1);
      }
      v24 = 0;
      if ( (v23 & 1) == 0 )
      {
        v24 = (*((_DWORD *)v19 + 3) >> 23) & 4;
        if ( !PtInRect(&this[6], *((_QWORD *)v19 + 5))
          && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, v7, 0x40u, 0, 0) )
        {
          v24 |= 2u;
        }
        if ( (this[27].y & 2) != 0
          && !PtInRect(&this[401], *((_QWORD *)v19 + 5))
          && (*(_QWORD *)v7 - *(_QWORD *)&v22[9] >= *(_QWORD *)&this[12]
                                                  * (unsigned __int64)(unsigned int)this[22].y
                                                  / 0x3E8
           || *((_DWORD *)v7 + 12) == 1
           || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(
                               (CPTPEngine *)this,
                               v7,
                               (struct CContactState *)v22)) )
        {
          v24 |= 1u;
        }
        if ( v24 || (v20 & 0x40000) != 0 )
          *((_DWORD *)v19 + 3) = 0;
      }
      v22[36].y = v24;
      if ( *((_DWORD *)v19 + 3) )
      {
        CPTPEngine::UpdateTPStateIndicator(
          (CPTPEngine *)this,
          v7,
          (struct CContactState *)v22,
          (struct PTPEnginePointerNode *)v19,
          &v104);
        if ( (v22->x & 2) != 0 )
        {
          ++v97;
          *(_OWORD *)((char *)v125 + 8) = 0LL;
          v95 = v114;
          *(_QWORD *)&v125[0] = *(_QWORD *)v7;
          v128 = 1;
          v112 = v125[0];
          v113 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)((char *)v125 + 8), *(__m128d *)((char *)v125 + 8));
          CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v112);
          if ( v22[1].y < this[399].y )
          {
            v26 = PtInRect(&this[6], *(_QWORD *)&v22[1]);
            v27 = v96;
            if ( v26 )
              v27 = 1;
            v96 = v27;
          }
        }
        v28 = v126 + 1;
        if ( (*((_DWORD *)v19 + 3) & 0x40000) != 0 )
          v28 = v126;
        v126 = v28;
      }
      else if ( (v20 & 0x2000006) != 0 )
      {
        ++this[370].x;
      }
      else
      {
        v25 = v22->x;
        if ( (v22->x & 1) != 0 )
        {
          v99 = 0uLL;
          v100 = 0LL;
          v123 = 0uLL;
          v124 = 0LL;
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v123);
          v25 = v22->x & 0xFFFFFFFE;
        }
        v22->x = v25 & 0xF7FFFFFF;
      }
      v19 += 96;
      ++v103;
    }
    while ( v103 < *((_DWORD *)v7 + 12) );
    v3 = v104;
    v5 = v96;
    v4 = v97;
  }
  this[369].x = 0;
  v29 = (char *)v7 + 56;
  v30 = 0;
  v31 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    v32 = (char *)v7 + 68;
    do
    {
      v33 = 37LL * (unsigned int)(*((_DWORD *)v32 - 2) % this[2].x);
      v34 = this[v33 + 145].x;
      if ( (v34 & 1) != 0 )
      {
        if ( (*(_DWORD *)v32 & 0x40000) == 0 && (v34 & 0x80u) != 0 )
          ++this[369].x;
        if ( v128 )
        {
          this[v33 + 150] = *(struct tagPOINT *)(v32 + 28);
          this[v33 + 160] = *(struct tagPOINT *)v7;
          v35 = *((_DWORD *)v7 + 6);
          this[v33 + 145].x &= ~0x20000u;
          this[v33 + 161].x = v35;
        }
      }
      v32 += 96;
      ++v30;
    }
    while ( v30 < *((_DWORD *)v7 + 12) );
    v31 = this[369].x;
  }
  v36 = v126 - v31;
  this[369].y = v126 - v31;
  if ( v126 < 2 )
    goto LABEL_93;
  v37 = this[371].y;
  if ( v37 != 3 && !this[371].x )
  {
    GestureAndMarkGesturingContactsAsNonResting = CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (CPTPEngine *)this,
                                                    v7);
    v37 = this[371].y;
    v110 = GestureAndMarkGesturingContactsAsNonResting;
    v36 = this[369].y;
  }
  if ( v37 != 2 )
    goto LABEL_93;
  v39 = 37LL * (unsigned int)this[367].x;
  v40 = __CFSHR__(this[v39 + 145].x, 8) && v36;
  v41 = __CFSHR__(this[v39 + 145].x, 8) && this[v39 + 148].y >= this[399].y;
  if ( v40 || v5 )
  {
    v43 = v128;
  }
  else
  {
    v42 = !v41;
    v43 = v128;
    if ( v42 || !v128 )
      goto LABEL_94;
  }
  this[371].y = 1;
  if ( v43 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
LABEL_93:
    v43 = v128;
  }
LABEL_94:
  if ( (v98 || v43) && this[371].y == 1 )
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
  if ( v3 && *((_DWORD *)v7 + 12) == 1 )
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
  if ( !this[404].x || !v4 )
    goto LABEL_114;
  if ( v4 == 1 && (this[53].x & 4) != 0 )
  {
    v44 = v95;
    v45 = *(_QWORD *)&this[376] - *(_QWORD *)&this[37 * v95 + 146];
    v46 = HIDWORD(*(_QWORD *)&this[376]) - HIDWORD(*(_QWORD *)&this[37 * v95 + 146]);
    if ( v46 * v46 + v45 * v45 <= (unsigned __int64)(unsigned int)(this[24].x * this[24].x) )
    {
      v47 = 1;
      goto LABEL_109;
    }
  }
  else
  {
    v44 = v95;
  }
  v47 = 0;
LABEL_109:
  if ( this[405].x && !v47 )
    this[407].x &= ~8u;
  CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, v47 ^ 1);
  if ( v47 )
  {
    v48 = this[405].x;
    this[405].x = 0;
    this[367].y = v48;
    this[37 * v44 + 145].x |= 0x4000u;
  }
LABEL_114:
  if ( this[371].y == 1 && this[367].y && this[369].y > 1u )
    CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[367].y);
  if ( this[404].x )
  {
    v49 = 0;
    for ( i = (CPTPEngine *)&this[145]; i != (CPTPEngine *)&this[367]; i = (CPTPEngine *)((char *)i + 296) )
    {
      v51 = *(_DWORD *)i;
      if ( (*(_DWORD *)i & 1) != 0 && (v51 & 0x80u) != 0 && (v51 & 4) != 0 )
        v49 = 1;
    }
    if ( this[369].y || v49 )
      CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, 1);
  }
  if ( this[369].y > 2u )
    this[407].x |= 0x100000u;
  for ( j = 0; j < *((_DWORD *)v7 + 12); v29 += 96 )
  {
    v53 = *((_DWORD *)v29 + 3);
    v54 = *((_DWORD *)v29 + 1) % this[2].x;
    v55 = &this[37 * v54 + 145];
    if ( v53 )
    {
      if ( (v55->x & 0x20000) != 0 && (this[371].y != 2 || v54 != this[367].x) )
      {
        v109 = 1;
        v120 = (struct CContactState *)&this[37 * v54 + 145];
      }
      v56 = this[371].y;
      if ( v56 == 2 && v54 == this[367].x && (v53 & 0x40000) != 0 )
      {
        this[407].x &= ~0x2000000u;
        v56 = 1;
        this[371].y = 1;
        if ( v126 )
        {
          CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v7);
          v57 = (struct CContactState *)&this[145];
          v58 = 6LL;
          do
          {
            if ( (*(_DWORD *)v57 & 1) != 0 )
            {
              CPTPEngine::SetContactRestingState((CPTPEngine *)this, v57, 1);
              *(_DWORD *)v57 &= ~0x40000000u;
            }
            v57 = (struct CContactState *)((char *)v57 + 296);
            --v58;
          }
          while ( v58 );
          v56 = this[371].y;
        }
      }
      v59 = v56;
      if ( this[367].y )
      {
        if ( v56 == 5 && (*((_DWORD *)v29 + 3) & 0x40000) == 0 && v126 == 1 )
        {
          v60 = v55->x;
          if ( (v55->x & 0x80u) != 0 && (v60 & 4) == 0 && (v60 & 0x2000) == 0 && (v60 & 0x4000) == 0 )
          {
            this[371].y = 1;
            CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[367].y);
            v59 = this[371].y;
          }
        }
      }
      if ( v59 == 2 )
        this[407].x |= 0x2000000u;
    }
    ++j;
  }
  v61 = v126;
  LOBYTE(v5) = 0;
  if ( (unsigned int)CPTPEngine::ProcessTapsFor3orMoreContacts((CPTPEngine *)this, v7, v126) )
    goto LABEL_234;
  v62 = this[370].x + v126;
  if ( v62 > 1 && (this[407].x & 0x200000) == 0 && (v128 || v98) )
  {
    v63 = this[2].x;
    if ( v63 )
    {
      v64 = 1;
      p_y = &this[181].y;
      v66 = v63;
      do
      {
        if ( (*(p_y - 73) & 0x8000000) != 0 && (*p_y & 0xFFFFFFFB) == 0 && v64 < v63 )
        {
          v67 = &this[37 * v64 + 154];
          v68 = v63 - v64;
          do
          {
            if ( (v67[-9].x & 0x8000000) != 0 && (v67[27].y & 0xFFFFFFFB) == 0 )
            {
              v69 = *(_QWORD *)(p_y - 55);
              v70 = *(_QWORD *)v67 - v69;
              if ( *(_QWORD *)v67 <= v69 )
                v70 = *(_QWORD *)(p_y - 55) - *(_QWORD *)v67;
              if ( v70 <= *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[22].y / 0x3E8 )
                this[407].x |= 0x200000u;
            }
            v67 += 37;
            --v68;
          }
          while ( v68 );
        }
        p_y += 74;
        ++v64;
        --v66;
      }
      while ( v66 );
      v7 = a2;
      LOBYTE(v5) = 0;
    }
  }
  v71 = this[407].x;
  if ( (v71 & 0x200000) != 0 && v62 == 1 )
  {
    v71 &= 0xFF9FFFFF;
    this[407].x = v71;
  }
  if ( (v71 & 0x2000) != 0 && (unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)this, v7, v115) )
    goto LABEL_233;
  v2 = v105;
LABEL_184:
  if ( (unsigned int)CPTPEngine::DoTPButtonProcessing(this, v7, v2, v126, &v106)
    && (unsigned int)CPTPEngine::DoTPDiscreteButtonProcessing((CPTPEngine *)this, v7, &v107, &v108) )
  {
    if ( v2 )
      goto LABEL_270;
    if ( !v106 && !v107 && !v108 || (v72 = this[371].y, v72 == 3) || v72 == 6 )
    {
      v73 = this[371].y;
      if ( !this[367].y || (v74 = 1, v73 == 1) )
        v74 = 0;
      v75 = v116;
      if ( v116 || v117 || v118 || v74 || (v76 = 1, !v109) )
        v76 = 0;
      v77 = this[369].y;
      if ( v77 == 2 && v73 != 3 && (this[407].x & 0x2000000) == 0 && v76 && v110 )
      {
        v78 = 1;
      }
      else
      {
        v78 = 0;
        v79 = 0;
        if ( v77 != 2 )
          goto LABEL_211;
      }
      if ( v76 || (v79 = 0, *((_DWORD *)v7 + 10)) )
        v79 = 1;
LABEL_211:
      if ( v73 != 3 && (v78 || v79) )
      {
        CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, v7, v120);
        v77 = this[369].y;
        if ( v77 == 2 )
          LOBYTE(v5) = 1;
      }
      v80 = this[371].y;
      if ( v80 == 3 || (_BYTE)v5 )
      {
        this[407].x &= ~0x2000000u;
        v81 = 3;
      }
      else
      {
        v81 = 1;
      }
      if ( (unsigned int)(v77 - 3) <= 1 && v81 != 3 && v76 || v80 == 6 )
      {
        CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, v7, v120);
        v81 = 6;
      }
      if ( v81 == 3 || v81 == 6 )
      {
        CPTPEngine::DoGestureProcessing((CPTPEngine *)this, v7, v111);
      }
      else
      {
        if ( this[369].y < 2u )
        {
          v82 = v129;
          v42 = v75 == 0;
          v61 = v126;
          if ( v42 && !v74 )
            CPTPEngine::DoTPMouseProcessing((__int64)this, (__int64 *)v7, v126, v129);
          goto LABEL_235;
        }
        this[371].y = 1;
      }
    }
  }
LABEL_233:
  v61 = v126;
LABEL_234:
  v82 = v129;
LABEL_235:
  v83 = 0;
  if ( *((_DWORD *)v7 + 12) )
  {
    v84 = (char *)v7 + 68;
    do
    {
      v85 = 37LL * (unsigned int)(*((_DWORD *)v84 - 2) % this[2].x);
      v86 = this[v85 + 145].x;
      if ( (v86 & 1) != 0 && *(_DWORD *)v84 )
      {
        if ( (*(_DWORD *)v84 & 0x40000) != 0 )
        {
          if ( this[371].y == 2 && *((_DWORD *)v84 - 2) % this[2].x == this[367].x )
          {
            this[407].x &= ~0x2000000u;
            v86 = this[v85 + 145].x;
          }
          v87 = v86 & 0xFFFFFFFE;
          this[v85 + 145].x = v87;
          if ( (*(_DWORD *)v84 & 0x2000000) != 0 )
            ++this[370].x;
          else
            this[v85 + 145].x = v87 & 0xF7FFFFFF;
        }
        else
        {
          this[v85 + 155] = *(struct tagPOINT *)(v84 + 68);
          this[v85 + 148] = *(struct tagPOINT *)(v84 + 28);
        }
      }
      v84 += 96;
      ++v83;
    }
    while ( v83 < *((_DWORD *)v7 + 12) );
  }
  v88 = -__CFSHR__(this[407].x, 19);
  if ( __CFSHR__(this[407].x, 19) != v119 )
  {
    v101 = 0uLL;
    LODWORD(v102) = 0;
    v89 = 2LL;
    if ( !v88 )
      v89 = 3LL;
    CBasePTPEngine::SendEtwOutput(this, v89, &v101);
  }
  if ( this[371].y != 2 )
    this[407].x &= ~0x800000u;
  v90 = 0;
  v91 = 0;
  do
  {
    if ( v91 >= 6 )
      break;
    if ( (this[37 * v91 + 145].x & 1) != 0 )
      v90 = 1;
    ++v91;
  }
  while ( !v90 );
  if ( !v90 )
  {
    this[407].x &= 0xE78FFFFF;
    this[371].y = 1;
    if ( this[367].y )
      CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[367].y);
    if ( v82 == 2 )
    {
      v92 = 37LL * (unsigned int)this[367].x;
      if ( (this[v92 + 145].x & 0x800) != 0
        && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)&this[v92 + 155] - *(_QWORD *)&this[v92 + 157]))
                   / *(_QWORD *)&this[12]) >= (unsigned int)this[62].x )
      {
        this[403] = this[v92 + 155];
      }
    }
    v112 = *(unsigned __int64 *)v7;
    v113 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
    CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v112);
  }
  if ( v111[0] )
  {
    this[407].x &= 0xFF9FFFFF;
    this[371].y = 1;
    this[397] = *(struct tagPOINT *)v7;
  }
  this[368].x = v61;
LABEL_270:
  v93 = this[407].x;
  if ( (unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    if ( (v93 & 1) != 0 || (v93 & 2) != 0 || (v93 & 4) != 0 || this[404].x || this[371].y != 1 )
      v6 = 0;
    v94 = v93;
    if ( v6 )
    {
      if ( v93 >= 0 )
      {
        v99 = 0uLL;
        v100 = 0LL;
        v112 = 0uLL;
        v113 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v112);
        v94 = this[407].x & 0xA78FFFFF | 0x40000000;
      }
    }
    this[407].x = (v6 << 31) | v94 & 0x7FFFFFFF;
  }
  else
  {
    v99 = 0uLL;
    v100 = 0LL;
    v112 = 0uLL;
    this[407].x = v93 | 0x80000000;
    v113 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v112);
  }
}
