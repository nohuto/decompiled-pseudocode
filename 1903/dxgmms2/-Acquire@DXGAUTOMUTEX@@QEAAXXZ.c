/*
 * XREFs of ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00022C0
 * Callers:
 *     ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0064DD0 (-MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00650E0 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006554C (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0066A10 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C0066CF0 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0066EEC (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0067370 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C00811C0 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C0081630 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C0082B00 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083F60 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C00BAFC0 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 *     ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z @ 0x1C00BB3F0 (-MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00BB470 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00BB518 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C00BB7BC (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00BB9F0 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00BBD10 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C00BBD60 (-UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 */

void __fastcall DXGAUTOMUTEX::Acquire(DXGAUTOMUTEX *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( *((_BYTE *)this + 8) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v5[3] = 275LL;
    v5[4] = 4LL;
    v5[5] = this;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  v2 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v2 + 16) == KeGetCurrentThread() )
  {
    v6 = *(_DWORD *)(v2 + 24);
    if ( v6 <= 0 )
    {
      v7 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v7 + 24) = 558LL;
      WdLogEvent5_WdAssertion(v7);
      v6 = *(_DWORD *)(v2 + 24);
    }
    v4 = v6 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2, 0LL) )
    {
      if ( bTracingEnabled && *(_DWORD *)(v2 + 28) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v3, "g");
      _InterlockedIncrement64((volatile signed __int64 *)(v2 + 8));
      ExAcquirePushLockExclusiveEx(v2, 0LL);
    }
    if ( *(_QWORD *)(v2 + 16) )
    {
      v8 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v8 + 24) = 582LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( *(_DWORD *)(v2 + 24) )
    {
      v9 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v9 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v9);
    }
    *(_QWORD *)(v2 + 16) = KeGetCurrentThread();
    v4 = 1;
  }
  *(_DWORD *)(v2 + 24) = v4;
  *((_BYTE *)this + 8) = 1;
}
