/*
 * XREFs of ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00224F0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C00CDAF0 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00EDB50 (NdisRegisterProtocol.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A570 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C00CDEC4 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisQueryDriverImageName @ 0x1C00CDF48 (ndisQueryDriverImageName.c)
 *     ?SetDirty@BindEngine@Ndis@@QEAAXXZ @ 0x1C0106D58 (-SetDirty@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisRegisterProtocolDriverCommon(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // al
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  KIRQL v5; // bl
  __int64 v6; // rcx
  Ndis::BindEngine *v7; // rcx

  a1->OpenQueue = 0LL;
  ndisQueryDriverImageName(&a1->Name, &a1->ImageName);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  a1->NextProtocol = ndisProtocolList;
  ndisProtocolList = a1;
  KeReleaseSpinLock(&ndisProtocolListLock, v2);
  ObfReferenceObject(ndisDriverObject);
  NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(&a1->Bind._p->_t, a1, RunAsynchronous);
  if ( (a1->Flags & 0x80000000) != 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v4 = ndisMiniportList;
    v5 = v3;
    while ( v4 )
    {
      if ( ndisMDoesMiniportNeedCoNdisNdProxy(v4) && v4->PnPDeviceState == NdisPnPDeviceStarted )
      {
        if ( ndisReferenceMiniport(v6) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v5);
          Ndis::BindEngine::BeginPolicyUpdates(&v4->BindEngine);
          Ndis::BindEngine::SetDirty(&v4->BindEngine);
          Ndis::BindEngine::EndPolicyUpdates(v7);
          Ndis::BindEngine::ApplyBindChanges(&v4->BindEngine, RunAsynchronous, 0);
          v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport((__int64)v4, 0x37u);
        }
      }
      v4 = v4->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v5);
  }
}
