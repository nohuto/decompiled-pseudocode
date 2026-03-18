/*
 * XREFs of ?FindSegmentLocationOutsideRange@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00BFA18
 * Callers:
 *     ?ReserveOutsideRangeIfDisplayableCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C19D0 (-ReserveOutsideRangeIfDisplayableCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00C9398 (-ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::FindSegmentLocationOutsideRange(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax

  v6 = VIDMM_LINEAR_POOL::ReserveLocationOutsideRange(
         this[19],
         a3,
         a4,
         *((_QWORD *)a2 + 2),
         (void **)a2 + 26,
         (union _LARGE_INTEGER *)a2 + 27);
  v9 = v6;
  if ( v6 >= 0 )
  {
    *((_QWORD *)a2 + 28) = this;
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)v9;
  }
}
