/*
 * XREFs of ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C015F064
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C015A680 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C015C438 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C015C9FC (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C015F5E8 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::SetContactRestingState(CPTPEngine *this, struct CContactState *a2, int a3)
{
  int v3; // r9d
  int v4; // r8d

  v3 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 && -__CFSHR__(v3, 8) != a3 )
  {
    v4 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)((_BYTE)a3 << 7)) & 0x80;
    *(_DWORD *)a2 = v4;
    if ( (v4 & 0x80u) == 0 )
    {
      *(_DWORD *)a2 = v4 | 0xC0000000;
      ++*((_DWORD *)this + 747);
      --*((_DWORD *)this + 746);
    }
    else
    {
      ++*((_DWORD *)this + 746);
      --*((_DWORD *)this + 747);
    }
  }
}
