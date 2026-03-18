/*
 * XREFs of ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C0183440
 * Callers:
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0116B30 (NtUserDestroyPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C0183558 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C018F8F0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

bool __fastcall DelayZonePalmRejection::RemoveDelayZoneFromList(DelayZonePalmRejection *this, int a2)
{
  int v4; // edx
  char *v5; // r8
  char *v6; // rax
  char *v7; // rbx
  __int128 v8; // xmm6
  bool v9; // bl
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  CInpLockGuard *v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  struct CPalmRejectZoneInfo *v17; // [rsp+70h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v14,
    (DelayZonePalmRejection *)((char *)this + 112));
  v5 = (char *)this + 72;
  v6 = (char *)*((_QWORD *)this + 9);
  if ( v6 == (char *)this + 72 )
    goto LABEL_12;
  do
  {
    v7 = v6;
    if ( *((_DWORD *)v6 + 14) == a2 )
      break;
    v6 = *(char **)v6;
  }
  while ( v6 != v5 );
  if ( v6 == v5
    || (v17 = (struct CPalmRejectZoneInfo *)v7) == 0LL
    || *((struct _KTHREAD **)v7 + 2) != KeGetCurrentThread() )
  {
LABEL_12:
    v9 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v4, 8, 28, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids);
    }
    v8 = *(_OWORD *)(v7 + 24);
    v9 = DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v17);
    if ( v9 )
    {
      v11 = *((_QWORD *)this + 20);
      if ( v11 )
      {
        v12 = *((unsigned int *)this + 1);
        v16 = v8;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v11, v12, v10, 4LL, &v16);
      }
    }
  }
  if ( !v15 )
    CInpLockGuard::UnLock(v14);
  return v9;
}
