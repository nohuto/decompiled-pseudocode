/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01505D8
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C00066C0 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01504D0 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01506C4 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  int v9; // [rsp+28h] [rbp-50h]
  CInpLockGuard *v10[8]; // [rsp+30h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v10,
    (DelayZonePalmRejection *)((char *)this + 120),
    0LL);
  v4 = 0;
  if ( a2 )
  {
    v5 = (__int64)*a2;
    if ( *a2 )
    {
      if ( *(_QWORD *)(v5 + 72) )
      {
        ObfDereferenceObject(*(PVOID *)(v5 + 72));
        v5 = (__int64)*a2;
      }
      if ( *(_QWORD *)(v5 + 80) )
      {
        ObfDereferenceObject(*(PVOID *)(v5 + 80));
        v5 = (__int64)*a2;
      }
      v6 = *(_QWORD *)v5;
      v7 = *(_QWORD **)(v5 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      Win32FreePool(v5);
      v9 = --*((_DWORD *)this + 23);
      WPP_RECORDER_SF_d(
        *((_QWORD *)this + 14),
        4u,
        0xDu,
        0x1Cu,
        (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
        v9);
      v4 = 1;
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v10);
  return v4;
}
