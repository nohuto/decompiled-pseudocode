/*
 * XREFs of NdisCloseAdapter @ 0x1C0117490
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C00ED960 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011A5A8 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     PktMonClientComponentUnregister @ 0x1C001A8C8 (PktMonClientComponentUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxz @ 0x1C005DFB8 (McTemplateK0jqxz.c)
 *     WPP_SF_qqZZ @ 0x1C005E910 (WPP_SF_qqZZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00B4308 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisCleanUpForProtocol @ 0x1C00EDFA0 (ndisCleanUpForProtocol.c)
 *     ndisMKillOpen @ 0x1C0116A68 (ndisMKillOpen.c)
 */

void __fastcall NdisCloseAdapter(int *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rbp
  int v11; // edx
  int v12; // eax
  void (__fastcall **BusInterface)(_QWORD); // rcx
  KIRQL v14; // al

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x1Au, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v6 = 0;
  while ( NextGlobalOpen && NextGlobalOpen != a2 )
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( !NextGlobalOpen )
  {
    *a1 = 0;
    goto LABEL_25;
  }
  MiniportHandle = a2->MiniportHandle;
  ProtocolHandle = a2->ProtocolHandle;
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qqZZ(
      0x1Bu,
      &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids,
      MiniportHandle,
      a2,
      &ProtocolHandle->Name,
      MiniportHandle->pAdapterInstanceName);
  if ( (byte_1C00A2081 & 2) != 0 )
    McTemplateK0jqxz(
      v8,
      v7,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      ProtocolHandle->Name.Buffer);
  PktMonClientComponentUnregister(&a2->PktMonComp.ListLink.Flink);
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    if ( !a2->PendingLegacyUnbind
      || (struct NDIS_BIND_LINK_BASE *)a2->Bind != Ndis::BindEngine::GetCurrentLink(&MiniportHandle->BindEngine) )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
      a2->OpenFlags |= 0x40000000u;
      KeReleaseSpinLock(&a2->SpinLock, v14);
      ExQueueWorkItem(&a2->UnsolicitedUnbindComplete, (WORK_QUEUE_TYPE)40);
LABEL_23:
      v12 = 259;
      goto LABEL_24;
    }
LABEL_18:
    a2->PendingLegacyUnbind = 0;
    if ( (MiniportHandle->PnPFlags & 0x2000) != 0 )
    {
      BusInterface = (void (__fastcall **)(_QWORD))MiniportHandle->BusInterface;
      if ( BusInterface )
        BusInterface[5](BusInterface[1]);
    }
    ndisCleanUpForProtocol(a2, v11);
    ndisMKillOpen((__int64)a2);
    goto LABEL_23;
  }
  a2->CallingFromNdis6Protocol = 0;
  if ( ProtocolHandle->MutexOwnerThread == KeGetCurrentThread() )
    goto LABEL_18;
  v12 = -1073741823;
LABEL_24:
  *a1 = v12;
  v6 = v12;
LABEL_25:
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)a2, v6);
}
