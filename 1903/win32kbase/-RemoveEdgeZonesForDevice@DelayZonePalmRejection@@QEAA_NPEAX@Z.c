/*
 * XREFs of ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0183650
 * Callers:
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C0183920 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C0183558 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(DelayZonePalmRejection *this, void *a2)
{
  int v4; // edx
  struct CPalmRejectZoneInfo *v5; // rbx
  struct CPalmRejectZoneInfo *v6; // rax
  CInpLockGuard *v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-10h]
  struct CPalmRejectZoneInfo *v10; // [rsp+50h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v8,
    (DelayZonePalmRejection *)((char *)this + 112));
  v5 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q((_DWORD)gBaseLog, v4, 8, 29, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids, a2);
  }
  while ( v5 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v6 = v5;
    v10 = v5;
    v5 = *(struct CPalmRejectZoneInfo **)v5;
    if ( *((void **)v6 + 12) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v10);
  }
  if ( !v9 )
    CInpLockGuard::UnLock(v8);
  return 1;
}
