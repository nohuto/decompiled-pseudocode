/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FDF44 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0016670 (ndisReferenceMiniportByHandle.c)
 *     ndisSetupWmiNode @ 0x1C00172D4 (ndisSetupWmiNode.c)
 *     PktMonClientComponentUnregister @ 0x1C001A8C8 (PktMonClientComponentUnregister.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0024818 (ndisHandleFilterHandlersChange.c)
 *     ndisCloseRef @ 0x1C00258F8 (ndisCloseRef.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 *     ndisFilterAttachCleanUp @ 0x1C005C06C (ndisFilterAttachCleanUp.c)
 *     ndisReferenceFilterByHandle @ 0x1C005C744 (ndisReferenceFilterByHandle.c)
 *     WPP_SF_qqZZ @ 0x1C005E910 (WPP_SF_qqZZ.c)
 *     McTemplateK0juqjzzz @ 0x1C007A6B0 (McTemplateK0juqjzzz.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B8F1C (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 *     ndisFInvokeDetach @ 0x1C00EC904 (ndisFInvokeDetach.c)
 *     ndisFNotifyDetach @ 0x1C00EC974 (ndisFNotifyDetach.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FE054 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_FILTER_BLOCK *a2)
{
  char v2; // bp
  char v4; // r15
  char v6; // dl
  PVOID v7; // r14
  char *v8; // rbx
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  signed int v10; // ebx
  KIRQL v11; // al
  _NDIS_FILTER_BLOCK *LowerFilter; // rax
  KIRQL v13; // al
  PVOID WnodeEventItem; // [rsp+90h] [rbp+18h] BYREF
  struct NDISWATCHDOG__ *v15; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Bu, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( ndisReferenceFilterByHandle((KSPIN_LOCK *)&a2->Header.Type, v6) )
  {
    v2 = 1;
    if ( ndisReferenceMiniportByHandle(a1, 0) )
    {
      v4 = 1;
      ndisFNotifyDetach((__int64)a2);
      ndisCloseRef(&a2->PnPRef.SpinLock);
      ndisSetupWmiNode(
        (__int64)a1,
        (const void **)a2->FilterFriendlyName,
        a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 4 + a1->BindPaths->Paths[0].Length,
        (__int128 *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL,
        &WnodeEventItem);
      v7 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v8 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
        memmove(
          v8,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length);
        memmove(
          &v8[a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 2],
          a1->BindPaths->Paths[0].Buffer,
          a1->BindPaths->Paths[0].Length);
        v10 = IoWMIWriteEvent(v7);
        if ( v10 < 0 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_(0x2Cu, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids);
          if ( (byte_1C00A2081 & 1) != 0 )
            McTemplateK0qqq(v9, &FilterRemovalIndicationFailed, &a2->InterfaceGuid, v10, 0x6A1u, 0);
          ExFreePoolWithTag(v7, 0);
        }
      }
      v11 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      a2->Flags |= 0x100u;
      a2->LockThread = 0LL;
      a2->LockDbg = 0;
      KeReleaseSpinLock(&a2->Lock, v11);
      a2->State = NdisFilterDetaching;
      if ( (byte_1C00A2083 & 1) != 0 )
        McTemplateK0juqjzzz(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName._Myptr,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          6,
          175,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName._Myptr->Buffer,
          a2->FilterFriendlyName->Buffer);
      ndisFilterWaitForPnPComplete(a2);
      PktMonClientComponentUnregister(&a2->PktMonComp.ListLink.Flink);
      ndisMakeWatchdog(
        (struct _NDIS_REFCOUNT_BLOCK **)&v15,
        a2,
        (_NDIS_REFCOUNT_STACK_ENTRY)20,
        a2->FilterDriver->DefaultFilterCharacteristics.DetachHandler,
        0x41EB0u,
        0LL);
      ndisFInvokeDetach((__int64)a2);
      if ( v15 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v15);
      if ( (unsigned __int8)byte_1C00A0258 >= 4u )
        WPP_SF_qqZZ(
          0x2Du,
          &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids,
          a1,
          a2,
          &a2->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
          a1->pAdapterInstanceName);
      while ( a2->StatusIndicationsQueued )
        NdisMSleep(0x3E8u);
      if ( (a2->Flags & 0x8000) != 0 )
      {
        LowerFilter = a2->LowerFilter;
        if ( LowerFilter )
        {
          a1->MediaType = LowerFilter->MediaType;
          a1->PhysicalMediumType = a2->LowerFilter->PhysicalMediaType;
        }
        else
        {
          a1->MediaType = a1->MiniportMediaType;
          a1->PhysicalMediumType = a1->MiniportPhysicalMediumType;
        }
      }
      v13 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      a2->Flags &= ~0x100u;
      a2->LockThread = 0LL;
      a2->LockDbg = 0;
      LOBYTE(a2->Flags) = 0;
      a2->Flags |= 8u;
      KeReleaseSpinLock(&a2->Lock, v13);
      a2->State = NdisFilterDetached;
      if ( (byte_1C00A2083 & 1) != 0 )
        McTemplateK0juqjzzz(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName._Myptr,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          0,
          240,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName._Myptr->Buffer,
          a2->FilterFriendlyName->Buffer);
      if ( (a2->Flags & 0x8000) != 0 )
        --a1->MediaChangeFilters;
      ndisFilterAttachCleanUp(a2, (__int64)a1, 1);
      ndisDereferenceMiniport((__int64)a1, 0x28u);
    }
  }
  ndisHandleFilterHandlersChange((__int64)a1);
  if ( v2 )
  {
    a2->Miniport = 0LL;
    ndisDereferenceFilter((KSPIN_LOCK *)&a2->Header.Type, 0);
  }
  if ( v4 )
    ndisDereferenceMiniport((__int64)a1, 0x29u);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Eu, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, (__int64)a2);
}
