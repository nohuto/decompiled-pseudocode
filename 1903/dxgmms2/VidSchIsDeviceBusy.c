/*
 * XREFs of VidSchIsDeviceBusy @ 0x1C00146B4
 * Callers:
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C007D200 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0080838 (-IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00AC14C (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsDeviceBusy(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 1284) || *(_DWORD *)(a1 + 1272) )
    return 1;
  return v1;
}
