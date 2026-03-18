/*
 * XREFs of ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007DE14
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::NeedsApertureForLock(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 19);
  return (v2 & 0xD0000) == 0 && (*(_BYTE *)(1560LL * (v2 & 0x3F) + *((_QWORD *)this + 5023) + 437) & 0x40) != 0;
}
