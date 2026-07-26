/*
 * XREFs of ndisMDeleteMiniportBlockOnRemove @ 0x1C009A1C0
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x1C009DBC0 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfDeviceObjectCleanup @ 0x1C0119240 (ndisWdfDeviceObjectCleanup.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0095F28 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     NdisFreeRefCount @ 0x1C00C7B10 (NdisFreeRefCount.c)
 *     ndisMDeRegisterPDCTaskClient @ 0x1C011943C (ndisMDeRegisterPDCTaskClient.c)
 *     ?ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A6D8 (-ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011C408 (-ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFreeEventLog @ 0x1C01284FC (ndisFreeEventLog.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _QWORD *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  ULONG_PTR v17; // rcx
  __int64 v18; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v19; // rax
  _QWORD *v20; // rax

  if ( *(_QWORD *)(a1 + 4456) )
    ndisAoAcFree((struct _NDIS_MINIPORT_BLOCK *)a1);
  ndisMDeRegisterPDCTaskClient(a1);
  v2 = *(void **)(a1 + 3984);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 3984) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 4088);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(v3 + 24))(*(_QWORD *)(v3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 4088), 0);
    *(_QWORD *)(a1 + 4088) = 0LL;
  }
  v4 = *(void **)(a1 + 4208);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 4208) = 0LL;
    *(_WORD *)(a1 + 4200) = 0;
  }
  v5 = *(void **)(a1 + 4400);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 4400) = 0LL;
  }
  ndisPcwNotifyMiniportRemoval((struct _NDIS_MINIPORT_BLOCK *)a1);
  v6 = *(void **)(a1 + 3856);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(a1 + 3856) = 0LL;
  }
  v7 = *(void **)(a1 + 4408);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 4408) = 0LL;
  }
  v8 = *(void **)(a1 + 5360);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 5360) = 0LL;
  }
  v9 = *(void **)(a1 + 4000);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 4000) = 0LL;
  }
  v10 = *(void **)(a1 + 3784);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(a1 + 3784) = 0LL;
  }
  v11 = *(void **)(a1 + 3768);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(a1 + 3768) = 0LL;
  }
  v12 = *(void **)(a1 + 944);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(a1 + 944) = 0LL;
  }
  while ( 1 )
  {
    v13 = *(_QWORD **)(a1 + 872);
    if ( !v13 )
      break;
    *(_QWORD *)(a1 + 872) = *v13;
    ExFreePoolWithTag(v13, 0);
  }
  v14 = *(void **)(a1 + 1368);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a1 + 1368) = 0LL;
  }
  v15 = *(void **)(a1 + 1856);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a1 + 1856) = 0LL;
  }
  v16 = *(void **)(a1 + 4368);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a1 + 4368) = 0LL;
  }
  NdisFreeRefCount(*(_QWORD *)(a1 + 4888));
  v17 = *(_QWORD *)(a1 + 4896);
  *(_QWORD *)(a1 + 4888) = 0LL;
  NdisFreeRefCount(v17);
  v18 = *(_QWORD *)(a1 + 4472);
  *(_QWORD *)(a1 + 4896) = 0LL;
  ndisFreeEventLog(v18);
  v19 = ndisVerifierNdisDispatch;
  *(_QWORD *)(a1 + 4472) = 0LL;
  if ( v19 && *(_QWORD *)(a1 + 4960) )
  {
    ((void (*)(void))v19->NdisFreeVerifierContext)();
    *(_QWORD *)(a1 + 4960) = 0LL;
  }
  v20 = *(_QWORD **)(a1 + 5472);
  if ( v20 )
  {
    *v20 = 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 5472), 0);
    *(_QWORD *)(a1 + 5472) = 0LL;
  }
  _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK((_NDIS_MINIPORT_BLOCK *)a1);
  if ( (*(_DWORD *)(a1 + 120) & 0x100) != 0 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
