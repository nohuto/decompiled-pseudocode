/*
 * XREFs of ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00AABAC
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006B6DC (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2)
{
  int v4; // edi
  bool v6; // [rsp+48h] [rbp+10h] BYREF
  struct VIDMM_ALLOC *v7; // [rsp+50h] [rbp+18h] BYREF

  *((_BYTE *)a2 + 50) |= 2u;
  v4 = VIDMM_GLOBAL::PageInDeviceInternal(this, a2, 0, &v6, &v7);
  if ( v4 >= 0 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
  *((_BYTE *)a2 + 50) &= ~2u;
  return (unsigned int)v4;
}
