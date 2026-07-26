/*
 * XREFs of ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BB0C0
 * Callers:
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00BA7F4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAF40 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00BB80C (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcStartRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned __int64 *p_CurrentRefStartTime; // r8
  int *ComponentRefCounts; // r9

  v1 = MEMORY[0xFFFFF78000000008];
  if ( a1->ComponentRefCounts[15] <= 0 )
  {
    v2 = 0;
    p_CurrentRefStartTime = &a1->CsRefTimes[0].CurrentRefStartTime;
    ComponentRefCounts = a1->ComponentRefCounts;
    do
    {
      if ( *ComponentRefCounts > 0 && (v2 || a1->ActiveRef == 1) )
        *p_CurrentRefStartTime = v1;
      ++v2;
      ++ComponentRefCounts;
      p_CurrentRefStartTime += 2;
    }
    while ( v2 < 0x11 );
  }
  else
  {
    a1->CsRefTimes[15].CurrentRefStartTime = MEMORY[0xFFFFF78000000008];
  }
}
