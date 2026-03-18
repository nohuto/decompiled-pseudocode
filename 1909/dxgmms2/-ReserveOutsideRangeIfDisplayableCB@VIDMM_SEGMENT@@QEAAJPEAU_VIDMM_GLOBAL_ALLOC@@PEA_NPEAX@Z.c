/*
 * XREFs of ?ReserveOutsideRangeIfDisplayableCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C1670
 * Callers:
 *     <none>
 * Callees:
 *     ?FindSegmentLocationOutsideRange@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00BF6B8 (-FindSegmentLocationOutsideRange@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveOutsideRangeIfDisplayableCB(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rbx
  int SegmentLocationOutsideRange; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  LODWORD(v4) = 0;
  if ( *(int *)(*((_QWORD *)a2 + 63) + 12LL) > 0 && (**((_DWORD **)a2 + 63) & 0x200) == 0 )
  {
    SegmentLocationOutsideRange = VIDMM_SEGMENT::FindSegmentLocationOutsideRange(this, a2, *a4, a4[1]);
    v4 = SegmentLocationOutsideRange;
    if ( SegmentLocationOutsideRange < 0 )
    {
      v8 = WdLogNewEntry5_WdWarning(v7, v6);
      *(_QWORD *)(v8 + 24) = v4;
      WdLogEvent5_WdWarning(v8);
    }
  }
  return (unsigned int)v4;
}
