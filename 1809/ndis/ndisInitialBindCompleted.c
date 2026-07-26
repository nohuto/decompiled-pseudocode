/*
 * XREFs of ndisInitialBindCompleted @ 0x1C001DC88
 * Callers:
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 * Callees:
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE1DC (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisIsSystemBooting@@YAEXZ @ 0x1C00C95D4 (-ndisIsSystemBooting@@YAEXZ.c)
 */

void __fastcall ndisInitialBindCompleted(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rcx

  if ( *(_BYTE *)(a1 + 2003) )
  {
    if ( !ndisIsSystemBooting() )
      ndisMExitInitMode(v1, RunSynchronous);
  }
}
