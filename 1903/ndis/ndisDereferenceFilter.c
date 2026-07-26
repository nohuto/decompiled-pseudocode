/*
 * XREFs of ndisDereferenceFilter @ 0x1C008E05C
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007C9F0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ndisFilterAttachCleanUp @ 0x1C008F4AC (ndisFilterAttachCleanUp.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0090B40 (ndisStackExpansionFallbackWorker.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C0022950 (NdisNblTrackerDeregisterComponent.c)
 *     ndisDereferenceFilterDriver @ 0x1C0029C14 (ndisDereferenceFilterDriver.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C01284D4 (ndisDeinitializeZeroBasedRef.c)
 */

void __fastcall ndisDereferenceFilter(KSPIN_LOCK *P, unsigned __int8 a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *v3; // rsi
  KIRQL v4; // al
  KSPIN_LOCK *v5; // rcx
  PVOID *v6; // rdx
  KIRQL v7; // r8
  void **i; // rdx
  KSPIN_LOCK *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v15; // rax
  struct NDISWATCHDOG__ *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdx

  if ( ndisDereferenceRef(P + 9, a2) )
  {
    v3 = (_NDIS_FILTER_DRIVER_BLOCK *)P[2];
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    v5 = (KSPIN_LOCK *)ndisGlobalFilterList;
    v6 = &ndisGlobalFilterList;
    while ( v5 )
    {
      if ( v5 == P )
      {
        *v6 = (PVOID)P[13];
        break;
      }
      v6 = (PVOID *)(v5 + 13);
      v5 = (KSPIN_LOCK *)v5[13];
    }
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
    v7 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
    for ( i = (void **)&v3->FilterQueue; ; i = (void **)(v9 + 1) )
    {
      v9 = (KSPIN_LOCK *)*i;
      if ( !*i )
        break;
      if ( v9 == P )
      {
        *i = (void *)P[1];
        break;
      }
    }
    KeReleaseSpinLock(&v3->Lock, v7);
    v10 = (void *)P[83];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      P[83] = 0LL;
    }
    v11 = (void *)P[96];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      P[96] = 0LL;
    }
    v12 = (void *)P[97];
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      P[97] = 0LL;
    }
    ndisDeinitializeZeroBasedRef(P + 39);
    NdisNblTrackerDeregisterComponent(P[82]);
    v13 = (void *)P[6];
    P[82] = 0LL;
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      P[6] = 0LL;
    }
    v14 = (void *)P[53];
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      P[53] = 0LL;
    }
    v15 = ndisVerifierNdisDispatch;
    *(_BYTE *)P = 0;
    if ( v15 && P[98] )
    {
      ((void (*)(void))v15->NdisFreeVerifierContext)();
      P[98] = 0LL;
    }
    v16 = (struct NDISWATCHDOG__ *)P[23];
    if ( v16 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v16);
    v17 = (void *)P[5];
    P[5] = 0LL;
    if ( v17 )
      ExFreePoolWithTag(v17, 0x7274534Bu);
    ExFreePoolWithTag(P, 0);
    ndisDereferenceFilterDriver(v3, v18, 3u);
  }
}
