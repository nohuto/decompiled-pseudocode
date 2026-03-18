/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C0183558
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0036724 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C0183440 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0183650 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  int v7; // edx
  int v8; // eax
  char v9; // bl
  CInpLockGuard *v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v11,
    (DelayZonePalmRejection *)((char *)this + 112));
  if ( a2 && (v4 = (__int64)*a2) != 0 )
  {
    if ( *(_QWORD *)(v4 + 72) )
    {
      ObfDereferenceObject(*(PVOID *)(v4 + 72));
      v4 = (__int64)*a2;
    }
    if ( *(_QWORD *)(v4 + 80) )
    {
      ObfDereferenceObject(*(PVOID *)(v4 + 80));
      v4 = (__int64)*a2;
    }
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD **)(v4 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    Win32FreePool(v4);
    v8 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 23) = v8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v7, 8, 27, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids, v8);
    }
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( !v12 )
    CInpLockGuard::UnLock(v11);
  return v9;
}
