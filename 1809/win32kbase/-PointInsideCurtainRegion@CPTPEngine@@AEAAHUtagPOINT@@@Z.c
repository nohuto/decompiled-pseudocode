/*
 * XREFs of ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C015CB70
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C015F5E8 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::PointInsideCurtainRegion(CPTPEngine *this, struct tagPOINT a2)
{
  unsigned int v3; // r8d

  if ( !*((_DWORD *)this + 6) )
    return 0LL;
  LOBYTE(v3) = !PtInRect((_DWORD *)this + 12, *(_QWORD *)&a2);
  return v3;
}
