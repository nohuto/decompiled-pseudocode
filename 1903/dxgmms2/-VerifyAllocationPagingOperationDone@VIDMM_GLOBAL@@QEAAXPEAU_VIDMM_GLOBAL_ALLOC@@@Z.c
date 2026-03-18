/*
 * XREFs of ?VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B1840
 * Callers:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C0083830 (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z.c)
 * Callees:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005BD28 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VerifyAllocationPagingOperationDone(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax

  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, a2, 0) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3);
    v5[3] = 270LL;
    v5[4] = 32LL;
    v5[5] = a2;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
}
