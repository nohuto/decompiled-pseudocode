/*
 * XREFs of ndisMCleanupMiniportBlockOnStop @ 0x1C00F01D8
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00BC300 (ndisInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0014880 (NdisNblTrackerDeregisterComponent.c)
 *     ndisFreePerProcessorSlot @ 0x1C0025620 (ndisFreePerProcessorSlot.c)
 *     ?ndisRssV2Uninitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00808DC (-ndisRssV2Uninitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     EthDeleteFilter @ 0x1C00F3B04 (EthDeleteFilter.c)
 *     nullDeleteFilter @ 0x1C00F3F84 (nullDeleteFilter.c)
 */

void __fastcall ndisMCleanupMiniportBlockOnStop(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  void *v15; // rcx

  ndisRssV2Uninitialize((struct _NDIS_MINIPORT_BLOCK *)a1);
  v2 = *(void **)(a1 + 4128);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 4128) = 0LL;
  }
  v3 = *(void **)(a1 + 4304);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 4304) = 0LL;
  }
  v4 = *(void **)(a1 + 3168);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 3168) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 464) || (v5 = *(void **)(a1 + 400)) == 0LL )
  {
    v6 = *(void **)(a1 + 400);
    if ( !v6 )
      goto LABEL_13;
    nullDeleteFilter(v6);
  }
  else
  {
    EthDeleteFilter(v5);
  }
  *(_QWORD *)(a1 + 400) = 0LL;
LABEL_13:
  v7 = *(void **)(a1 + 600);
  if ( v7 )
  {
    nullDeleteFilter(v7);
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  v8 = *(void **)(a1 + 1776);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 1776) = 0LL;
  }
  v9 = *(void **)(a1 + 496);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    *(_DWORD *)(a1 + 200) = 0;
  }
  v10 = *(void **)(a1 + 3104);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(a1 + 3104) = 0LL;
    *(_DWORD *)(a1 + 3112) = 0;
  }
  v11 = *(void **)(a1 + 3424);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(a1 + 3424) = 0LL;
    *(_DWORD *)(a1 + 3432) = 0;
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 360));
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_WORD *)(a1 + 360) = 0;
  }
  v12 = *(_QWORD *)(a1 + 4112);
  if ( v12 )
  {
    NdisNblTrackerDeregisterComponent(v12);
    *(_QWORD *)(a1 + 4112) = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 3936);
  if ( v13 )
  {
    NdisNblTrackerDeregisterComponent(v13);
    *(_QWORD *)(a1 + 3936) = 0LL;
  }
  v14 = *(_QWORD *)(a1 + 3320);
  if ( v14 )
  {
    ndisFreePerProcessorSlot(v14, 0x527374uLL);
    *(_QWORD *)(a1 + 3320) = 0LL;
  }
  v15 = *(void **)(a1 + 1992);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a1 + 1992) = 0LL;
  }
}
