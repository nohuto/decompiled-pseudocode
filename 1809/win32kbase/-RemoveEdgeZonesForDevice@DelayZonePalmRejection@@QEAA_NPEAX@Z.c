/*
 * XREFs of ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01506C4
 * Callers:
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C0150970 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01505D8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(DelayZonePalmRejection *this, void *a2)
{
  struct CPalmRejectZoneInfo *v4; // rbx
  struct CPalmRejectZoneInfo *v5; // rax
  CInpLockGuard *v7[8]; // [rsp+30h] [rbp-48h] BYREF
  struct CPalmRejectZoneInfo *v8; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (DelayZonePalmRejection *)((char *)this + 120),
    0LL);
  v4 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  WPP_RECORDER_SF_q(
    *((_QWORD *)this + 14),
    4u,
    0xDu,
    0x1Eu,
    (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
    a2);
  while ( v4 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v5 = v4;
    v8 = v4;
    v4 = *(struct CPalmRejectZoneInfo **)v4;
    if ( *((void **)v5 + 12) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v8);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v7);
  return 1;
}
