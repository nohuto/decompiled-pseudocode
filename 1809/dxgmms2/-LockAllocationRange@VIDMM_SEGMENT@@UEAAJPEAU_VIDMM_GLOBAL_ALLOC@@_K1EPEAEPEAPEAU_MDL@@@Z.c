/*
 * XREFs of ?LockAllocationRange@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00BD360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationRange(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
  v2[5] = 0LL;
  v2[6] = 0LL;
  v2[7] = 0LL;
  v2[3] = 270LL;
  v2[4] = 13LL;
  WdLogEvent5_WdCriticalError(v2);
  return 3223191809LL;
}
