/*
 * XREFs of ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01504D0
 * Callers:
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C00EE6A0 (NtUserDestroyPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01505D8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0156D4C (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

bool __fastcall DelayZonePalmRejection::RemoveDelayZoneFromList(DelayZonePalmRejection *this, int a2)
{
  char *v4; // rcx
  char *v5; // rax
  char *v6; // rbx
  __int128 v7; // xmm6
  bool v8; // bl
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  CInpLockGuard *v14[10]; // [rsp+40h] [rbp-58h] BYREF
  struct CPalmRejectZoneInfo *v15; // [rsp+A0h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v14,
    (DelayZonePalmRejection *)((char *)this + 120),
    0LL);
  v4 = (char *)this + 72;
  v5 = (char *)*((_QWORD *)this + 9);
  if ( v5 == (char *)this + 72 )
    goto LABEL_10;
  do
  {
    v6 = v5;
    if ( *((_DWORD *)v5 + 14) == a2 )
      break;
    v5 = *(char **)v5;
  }
  while ( v5 != v4 );
  if ( v5 == v4
    || (v15 = (struct CPalmRejectZoneInfo *)v6) == 0LL
    || *((struct _KTHREAD **)v6 + 2) != KeGetCurrentThread() )
  {
LABEL_10:
    v8 = 0;
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 14), 4u, 0xDu, 0x1Du, (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids);
    v7 = *(_OWORD *)(v6 + 24);
    v8 = DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v15);
    if ( v8 )
    {
      v10 = *((_QWORD *)this + 17);
      if ( v10 )
      {
        v11 = *((unsigned int *)this + 1);
        v13 = v7;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v10, v11, v9, 4LL, &v13);
      }
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v14);
  return v8;
}
