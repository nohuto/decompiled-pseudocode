/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C015FBA8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ?CrossedTPDisallowRightPressThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C015A0EC (-CrossedTPDisallowRightPressThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C015A15C (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C015A3C4 (-CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C015CAEC (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C015F14C (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C015F298 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C015F5E8 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 */

void __fastcall CPTPEngine::UpdateTPStateIndicator(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct PTPEnginePointerNode *a4,
        int *a5)
{
  unsigned __int64 v5; // rbx
  int v6; // ebp
  __int64 v8; // r13
  struct PTPInput *v13; // rdx
  int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r9d
  struct PTPInput *v19; // rdx
  unsigned int v20; // r14d
  int v21; // r15d
  int v22; // r12d
  int v23; // r14d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  int v26; // r15d
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // r8d
  int v34; // ecx
  char v35; // al

  v5 = *((_QWORD *)a4 + 5);
  v6 = 0;
  v8 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    if ( !*((_DWORD *)this + 5)
      || !*((_DWORD *)this + 103)
      || !*((_DWORD *)this + 6)
      || PtInRect((_DWORD *)this + 12, v5) )
    {
      *(_DWORD *)a3 |= 0x800u;
      CPTPEngine::TPAAPSetCurtainState(this, 0);
    }
    v13 = (struct PTPInput *)*((unsigned int *)this + 824);
    if ( ((unsigned int)v13 & 0x4000000) != 0
      && (unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)this + 774)) > *((_DWORD *)this + 90) )
    {
      LODWORD(v13) = (unsigned int)v13 & 0xFBFFFFFF;
      *((_DWORD *)this + 824) = (_DWORD)v13;
    }
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 806, v5) )
    {
      v14 |= 0x40u;
      *(_DWORD *)a3 = v14;
    }
    if ( (v14 & 1) != 0 )
    {
      CPTPEngine::UpdateContactRestingState(this, v13, (struct tagPOINT)v5, v8, a3);
      v20 = *(_DWORD *)a3 & 0xFFFFFFFD;
      *(_DWORD *)a3 = v20;
      if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
      {
        v21 = v20;
        if ( (v20 & 4) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 0) )
        {
          v21 = v20 | 4;
          *(_DWORD *)a3 = v20 | 4;
          *((_QWORD *)a3 + 4) = v5;
          *a5 = 1;
        }
        v22 = v21;
        if ( (v21 & 8) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 1) )
        {
          v22 = v21 | 8;
          *(_DWORD *)a3 = v21 | 8;
        }
        v23 = v22;
        if ( (v22 & 0x20000) == 0 )
        {
          v24 = *((_QWORD *)a3 + 5);
          v25 = HIDWORD(v24);
          if ( SHIDWORD(v24) < SHIDWORD(v5) )
            LODWORD(v25) = HIDWORD(v24);
          if ( *((unsigned int *)this + 88) * (__int64)(((int)v25 - HIDWORD(v5)) * ((int)v25 - HIDWORD(v5)))
             + (unsigned __int64)*((unsigned int *)this + 89) * ((int)v24 - (int)v5) * ((int)v24 - (int)v5) >= *((unsigned int *)this + 88) * (unsigned __int64)*((unsigned int *)this + 89) )
          {
            v23 = v22 | 0x20000;
            *(_DWORD *)a3 = v22 | 0x20000;
          }
        }
        v26 = v23;
        if ( (v23 & 0x400000) == 0 && CPTPEngine::CrossedTPTapWarpBackThreshold(this, a3, (struct tagPOINT)v5) )
        {
          v26 = v23 | 0x400000;
          *(_DWORD *)a3 = v23 | 0x400000;
        }
        v20 = v26;
        if ( (v26 & 0x4000000) == 0 && CPTPEngine::CrossedTPDisallowRightPressThreshold(this, a3, (struct tagPOINT)v5) )
        {
          v20 = v26 | 0x4000000;
          *(_DWORD *)a3 = v26 | 0x4000000;
        }
      }
      v27 = *((_QWORD *)this + 388);
      v28 = v8 - *((_QWORD *)a3 + 8);
      v29 = v20 & 0xFFFFFFDF | (*((_QWORD *)this + 390) < v28 ? 0x20 : 0);
      *(_DWORD *)a3 = v29;
      v30 = v29 & 0xFFFBFFFF | (*((_QWORD *)this + 391) < v28 ? 0x40000 : 0);
      *(_DWORD *)a3 = v30;
      v31 = v30 & 0xFFF7FFFF | (*((_QWORD *)this + 392) < v28 ? 0x80000 : 0);
      *(_DWORD *)a3 = v31;
      v32 = v31 & 0xFFEFFFFF | (*((_QWORD *)this + 393) < v28 ? 0x100000 : 0);
      *(_DWORD *)a3 = v32;
      v33 = v32 & 0xFFDFFFFF | (*((_QWORD *)this + 391) < (unsigned __int64)(v8 - v27) ? 0x200000 : 0);
      *(_DWORD *)a3 = v33;
      v34 = v33;
      if ( (v33 & 0x10) == 0 && (unsigned __int64)(v8 - *((_QWORD *)a3 + 9)) > *((_QWORD *)this + 389) )
      {
        v34 = v33 | 0x10;
        *(_DWORD *)a3 = v33 | 0x10;
        *a5 = 1;
      }
      v35 = v34;
      if ( (v34 & 0x800000) == 0 && v28 > *((_QWORD *)this + 394) )
      {
        v35 = v34;
        *(_DWORD *)a3 = v34 | 0x800000;
      }
      if ( v35 >= 0
        && (*((_DWORD *)this + 824) & 0x20000) != 0
        && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 12), v8, a3) )
      {
        CPTPEngine::TPAAPSetCurtainState(this, 0);
      }
    }
    else
    {
      v15 = v14 & 0xFFE1FFE3;
      *((_QWORD *)a3 + 8) = v8;
      *(_DWORD *)a3 = v15;
      *((_QWORD *)a3 + 11) = v8;
      *((_QWORD *)a3 + 13) = v8;
      v16 = v15 & 0xF8FFE5FC | 3;
      *((_QWORD *)a3 + 15) = v8;
      *((_DWORD *)a3 + 33) = *((_DWORD *)a4 + 16);
      *((_DWORD *)a3 + 32) = *((_DWORD *)a4 + 16);
      *((_QWORD *)a3 + 1) = v5;
      *((_QWORD *)a3 + 5) = v5;
      *((_QWORD *)a3 + 6) = v5;
      *((_QWORD *)a3 + 7) = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a3 = v16;
      *((_DWORD *)a3 + 34) = 0;
      if ( !*((_DWORD *)this + 743) || (v17 = 0x2000, *((_DWORD *)this + 751) == 1) )
        v17 = 0;
      *((_DWORD *)a3 + 35) = 0;
      v18 = v16 & 0x1F3E1A3F | v17 & 0x1F3E3A3F | 0xC0000000;
      *(_DWORD *)a3 = v18;
      if ( (unsigned int)(*((_DWORD *)this + 751) - 1) <= 1
        && *(_QWORD *)a2 - *((_QWORD *)this + 401) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 98)
                                                    / 0x3E8 )
      {
        v6 = 0x10000000;
      }
      *(_DWORD *)a3 = v6 | v18 & 0xEFFFFFFF;
      CPTPEngine::SetupDragRectsForContact(this, a3);
      CPTPEngine::UpdateContactRestingState(this, v19, (struct tagPOINT)v5, v8, a3);
    }
  }
}
