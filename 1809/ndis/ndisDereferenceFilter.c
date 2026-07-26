/*
 * XREFs of ndisDereferenceFilter @ 0x1C005AE80
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     ndisFilterAttachCleanUp @ 0x1C005C06C (ndisFilterAttachCleanUp.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0014880 (NdisNblTrackerDeregisterComponent.c)
 *     ndisDereferenceFilterDriver @ 0x1C0016FB0 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00FC18C (ndisDeinitializeZeroBasedRef.c)
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
    v10 = (void *)P[84];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      P[84] = 0LL;
    }
    v11 = (void *)P[97];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      P[97] = 0LL;
    }
    v12 = (void *)P[98];
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      P[98] = 0LL;
    }
    ndisDeinitializeZeroBasedRef(P + 40);
    NdisNblTrackerDeregisterComponent(P[83]);
    v13 = (void *)P[6];
    P[83] = 0LL;
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      P[6] = 0LL;
    }
    v14 = (void *)P[54];
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      P[54] = 0LL;
    }
    v15 = ndisVerifierNdisDispatch;
    *(_BYTE *)P = 0;
    if ( v15 && P[99] )
    {
      ((void (*)(void))v15->NdisFreeVerifierContext)();
      P[99] = 0LL;
    }
    v16 = (struct NDISWATCHDOG__ *)P[24];
    if ( v16 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v16);
    v17 = (void *)P[5];
    if ( v17 )
      ExFreePoolWithTag(v17, 0x7274534Bu);
    ExFreePoolWithTag(P, 0);
    ndisDereferenceFilterDriver(v3);
  }
}
