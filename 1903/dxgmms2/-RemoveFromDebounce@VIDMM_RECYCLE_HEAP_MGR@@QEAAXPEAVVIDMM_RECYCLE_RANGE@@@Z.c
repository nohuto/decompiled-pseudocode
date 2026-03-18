/*
 * XREFs of ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00697C0
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0064E60 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006554C (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0066BEC (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00674BC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0067958 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068E48 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0069320 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084030 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  int v5; // eax
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rax
  _QWORD *v8; // rax

  v2 = (_QWORD *)((char *)a2 + 104);
  v3 = *((_QWORD *)a2 + 13);
  if ( *(struct VIDMM_RECYCLE_RANGE **)(v3 + 8) != (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104)
    || (v4 = (_QWORD *)*((_QWORD *)a2 + 14), (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  *((_QWORD *)a2 + 14) = 0LL;
  *((_QWORD *)a2 + 12) = 0LL;
  v5 = *((_DWORD *)a2 + 16);
  if ( v5 == 5 )
  {
    v6 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5);
    v7 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v6);
  }
  else
  {
    if ( (unsigned int)(v5 - 3) > 1 )
      return;
    v6 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5);
    v7 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v6);
  }
  if ( (__int64)(v6 + v7) < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2);
      v8[3] = 270LL;
      v8[4] = 9LL;
      v8[5] = 0LL;
      v8[6] = 0LL;
      v8[7] = 0LL;
      WdLogEvent5_WdCriticalError(v8);
    }
  }
}
