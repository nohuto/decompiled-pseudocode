/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0199DA8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197AA8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0067544 (PtInRect.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01944C8 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C019470C (-CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C0196E0C (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C0199408 (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0199554 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C01998B8 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 */

void __fastcall CPTPEngine::UpdateTPStateIndicator(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct PTPEnginePointerNode *a4,
        int *a5)
{
  unsigned __int64 v5; // rbx
  int v6; // r15d
  __int64 v8; // r13
  struct PTPInput *v12; // rdx
  int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  int v16; // r9d
  unsigned int v17; // r9d
  struct PTPInput *v18; // rdx
  unsigned int v19; // ebp
  int v20; // r12d
  int v21; // r14d
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // r8d
  int v31; // ecx

  v5 = *((_QWORD *)a4 + 5);
  v6 = 0;
  v8 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    if ( !*((_DWORD *)this + 5) || !*((_DWORD *)this + 103) || PtInRect((_DWORD *)this + 12, v5) )
    {
      *(_DWORD *)a3 |= 0x800u;
      CPTPEngine::TPAAPSetCurtainState(this, 0);
    }
    v12 = (struct PTPInput *)*((unsigned int *)this + 814);
    if ( ((unsigned int)v12 & 0x4000000) != 0
      && (unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)this + 765)) > *((_DWORD *)this + 90) )
    {
      LODWORD(v12) = (unsigned int)v12 & 0xFBFFFFFF;
      *((_DWORD *)this + 814) = (_DWORD)v12;
    }
    v13 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 798, v5) )
    {
      v13 |= 0x40u;
      *(_DWORD *)a3 = v13;
    }
    if ( (v13 & 1) != 0 )
    {
      CPTPEngine::UpdateContactRestingState(this, v12, (struct tagPOINT)v5, v8, a3);
      v19 = *(_DWORD *)a3 & 0xFFFFFFFD;
      *(_DWORD *)a3 = v19;
      if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
      {
        v20 = v19;
        if ( (v19 & 4) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 0) )
        {
          v20 = v19 | 4;
          *(_DWORD *)a3 = v19 | 4;
          *((_QWORD *)a3 + 4) = v5;
          *a5 = 1;
        }
        v21 = v20;
        if ( (v20 & 8) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 1) )
        {
          v21 = v20 | 8;
          *(_DWORD *)a3 = v20 | 8;
        }
        if ( (v21 & 0x20000) == 0
          && *((unsigned int *)this + 89) * (__int64)(int)((*((_QWORD *)a3 + 5) - v5) * (*((_QWORD *)a3 + 5) - v5))
           + (unsigned __int64)*((unsigned int *)this + 88)
           * (int)((HIDWORD(*((_QWORD *)a3 + 5)) - HIDWORD(v5)) * (HIDWORD(*((_QWORD *)a3 + 5)) - HIDWORD(v5))) >= *((unsigned int *)this + 88) * (unsigned __int64)*((unsigned int *)this + 89) )
        {
          v21 |= 0x20000u;
          *(_DWORD *)a3 = v21;
        }
        v19 = v21;
        if ( (v21 & 0x400000) == 0 && CPTPEngine::CrossedTPTapWarpBackThreshold(this, a3, (struct tagPOINT)v5) )
        {
          v19 = v21 | 0x400000;
          *(_DWORD *)a3 = v21 | 0x400000;
        }
        if ( (v19 & 0x4000000) == 0 )
        {
          v22 = (unsigned int)(*((_DWORD *)this + 82) * *((_DWORD *)this + 82));
          v23 = (unsigned int)(*((_DWORD *)this + 83) * *((_DWORD *)this + 83));
          if ( v22 * (int)((HIDWORD(*((_QWORD *)a3 + 1)) - HIDWORD(v5)) * (HIDWORD(*((_QWORD *)a3 + 1)) - HIDWORD(v5)))
             + v23 * (int)((*((_QWORD *)a3 + 1) - v5) * (*((_QWORD *)a3 + 1) - v5)) >= (unsigned __int64)(v22 * v23) )
          {
            v19 |= 0x4000000u;
            *(_DWORD *)a3 = v19;
          }
        }
      }
      v24 = *((_QWORD *)this + 384);
      v25 = v8 - *((_QWORD *)a3 + 8);
      v26 = v19 & 0xFFFFFFDF | (*((_QWORD *)this + 386) < v25 ? 0x20 : 0);
      *(_DWORD *)a3 = v26;
      v27 = v26 & 0xFFFBFFFF | (*((_QWORD *)this + 387) < v25 ? 0x40000 : 0);
      *(_DWORD *)a3 = v27;
      v28 = v27 & 0xFFF7FFFF | (*((_QWORD *)this + 388) < v25 ? 0x80000 : 0);
      *(_DWORD *)a3 = v28;
      v29 = v28 & 0xFFEFFFFF | (*((_QWORD *)this + 389) < v25 ? 0x100000 : 0);
      *(_DWORD *)a3 = v29;
      v30 = v29 & 0xFFDFFFFF | (*((_QWORD *)this + 387) < (unsigned __int64)(v8 - v24) ? 0x200000 : 0);
      *(_DWORD *)a3 = v30;
      v31 = v30;
      if ( (v30 & 0x10) == 0 && (unsigned __int64)(v8 - *((_QWORD *)a3 + 9)) > *((_QWORD *)this + 385) )
      {
        v31 = v30 | 0x10;
        *(_DWORD *)a3 = v30 | 0x10;
        *a5 = 1;
      }
      if ( (v31 & 0x800000) == 0 && v25 > *((_QWORD *)this + 390) )
      {
        v31 |= 0x800000u;
        *(_DWORD *)a3 = v31;
      }
      if ( (v31 & 0x80u) == 0
        && (*((_DWORD *)this + 814) & 0x20000) != 0
        && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 12), v8, a3) )
      {
        CPTPEngine::TPAAPSetCurtainState(this, 0);
      }
    }
    else
    {
      v14 = v13 & 0xFFE1FFE3;
      *((_QWORD *)a3 + 8) = v8;
      *(_DWORD *)a3 = v14;
      *((_QWORD *)a3 + 11) = v8;
      *((_QWORD *)a3 + 13) = v8;
      v15 = v14 & 0xF8FFE5FC | 3;
      *((_QWORD *)a3 + 15) = v8;
      *((_DWORD *)a3 + 33) = *((_DWORD *)a4 + 16);
      *((_DWORD *)a3 + 32) = *((_DWORD *)a4 + 16);
      *((_QWORD *)a3 + 1) = v5;
      *((_QWORD *)a3 + 5) = v5;
      *((_QWORD *)a3 + 6) = v5;
      *((_QWORD *)a3 + 7) = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a3 = v15;
      *((_DWORD *)a3 + 34) = 0;
      if ( !*((_DWORD *)this + 735) || (v16 = 0x2000, *((_DWORD *)this + 743) == 1) )
        v16 = 0;
      *((_DWORD *)a3 + 35) = 0;
      v17 = v15 & 0x1F3E1A3F | v16 & 0x1F3E3A3F | 0xC0000000;
      *(_DWORD *)a3 = v17;
      if ( (unsigned int)(*((_DWORD *)this + 743) - 1) <= 1
        && *(_QWORD *)a2 - *((_QWORD *)this + 397) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 98)
                                                    / 0x3E8 )
      {
        v6 = 0x10000000;
      }
      *(_DWORD *)a3 = v6 | v17 & 0xEFFFFFFF;
      CPTPEngine::SetupDragRectsForContact(this, a3);
      CPTPEngine::UpdateContactRestingState(this, v18, (struct tagPOINT)v5, v8, a3);
    }
  }
}
