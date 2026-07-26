/*
 * XREFs of ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00BB80C
 * Callers:
 *     ?ndisCsResiliencyCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C007BE30 (-ndisCsResiliencyCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAEB0 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BB0C0 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisCsResiliencyChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  unsigned __int8 v2; // bl
  KIRQL v3; // al
  KIRQL v4; // r10
  _NDIS_NIC_ACTIVE_STATE ActiveState; // ecx

  AoAc = a1->AoAc;
  v2 = ndisCsResiliency;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->IsInCsResiliency = v2;
  v4 = v3;
  if ( v2 )
  {
    ActiveState = AoAc->ActiveState;
    if ( (ActiveState & 0xFFFFFFFC) == 0 && ActiveState != NdisNicQuiet )
    {
      AoAc->CurrentCsResiliencyStartTime = MEMORY[0xFFFFF78000000008];
      ndisAoAcStartRefTimeStats(AoAc);
    }
  }
  else
  {
    ndisAoAcPauseRefTimeStats(AoAc);
    if ( AoAc->CurrentCsResiliencyStartTime )
    {
      AoAc->TotalCsResiliencyTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentCsResiliencyStartTime;
      AoAc->CurrentCsResiliencyStartTime = 0LL;
    }
  }
  KeReleaseSpinLock(&AoAc->Lock, v4);
}
