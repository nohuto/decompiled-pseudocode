/*
 * XREFs of ndisMCleanupMiniportBlockOnStop @ 0x1C009A0C0
 * Callers:
 *     ndisInitializeAdapter @ 0x1C002CA38 (ndisInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0022950 (NdisNblTrackerDeregisterComponent.c)
 *     ndisFreePerProcessorSlot @ 0x1C003E2E0 (ndisFreePerProcessorSlot.c)
 *     EthDeleteFilter @ 0x1C00A19AC (EthDeleteFilter.c)
 *     nullDeleteFilter @ 0x1C00A3978 (nullDeleteFilter.c)
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
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  ULONG_PTR v15; // rcx
  void *v16; // rcx

  v2 = *(void **)(a1 + 5704);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 5704) = 0LL;
  }
  v3 = *(void **)(a1 + 4096);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 4096) = 0LL;
  }
  v4 = *(void **)(a1 + 4264);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 4264) = 0LL;
  }
  v5 = *(void **)(a1 + 3152);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 3152) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 464) || (v6 = *(void **)(a1 + 400)) == 0LL )
  {
    v7 = *(void **)(a1 + 400);
    if ( !v7 )
      goto LABEL_15;
    nullDeleteFilter(v7);
  }
  else
  {
    EthDeleteFilter(v6);
  }
  *(_QWORD *)(a1 + 400) = 0LL;
LABEL_15:
  v8 = *(void **)(a1 + 600);
  if ( v8 )
  {
    nullDeleteFilter(v8);
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  v9 = *(void **)(a1 + 1776);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 1776) = 0LL;
  }
  v10 = *(void **)(a1 + 496);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    *(_DWORD *)(a1 + 200) = 0;
  }
  v11 = *(void **)(a1 + 3088);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(a1 + 3088) = 0LL;
    *(_DWORD *)(a1 + 3096) = 0;
  }
  v12 = *(void **)(a1 + 3400);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(a1 + 3400) = 0LL;
    *(_DWORD *)(a1 + 3408) = 0;
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 360));
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_WORD *)(a1 + 360) = 0;
  }
  v13 = *(_QWORD *)(a1 + 4080);
  if ( v13 )
  {
    NdisNblTrackerDeregisterComponent(v13);
    *(_QWORD *)(a1 + 4080) = 0LL;
  }
  v14 = *(_QWORD *)(a1 + 3904);
  if ( v14 )
  {
    NdisNblTrackerDeregisterComponent(v14);
    *(_QWORD *)(a1 + 3904) = 0LL;
  }
  v15 = *(_QWORD *)(a1 + 3296);
  if ( v15 )
  {
    ndisFreePerProcessorSlot(v15, 0x527374uLL);
    *(_QWORD *)(a1 + 3296) = 0LL;
  }
  v16 = *(void **)(a1 + 1984);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a1 + 1984) = 0LL;
  }
}
