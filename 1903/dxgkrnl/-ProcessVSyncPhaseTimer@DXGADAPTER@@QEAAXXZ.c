/*
 * XREFs of ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C00FCE44
 * Callers:
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00FCD20 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C00150C0 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 */

void __fastcall DXGADAPTER::ProcessVSyncPhaseTimer(DXGADAPTER *this)
{
  char *v1; // rbx

  v1 = (char *)this + 3848;
  DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 3848));
  if ( *((_DWORD *)this + 920) == 1 )
  {
    DXGADAPTER::DdiControlInterrupt2(this, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, 1);
  }
  else
  {
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
