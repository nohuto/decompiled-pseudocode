/*
 * XREFs of NdisCloseAdapter @ 0x1C0138530
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C0092940 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     PktMonClientComponentUnregister @ 0x1C0023D0C (PktMonClientComponentUnregister.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0027CDC (WPP_RECORDER_SF_qqZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0jqxz @ 0x1C0092828 (McTemplateK0jqxz.c)
 *     ndisCleanUpForProtocol @ 0x1C0093804 (ndisCleanUpForProtocol.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00FC47C (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisMKillOpen @ 0x1C01379FC (ndisMKillOpen.c)
 */

void __fastcall NdisCloseAdapter(int *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_OPEN_BLOCK *v2; // rdi
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rbp
  int v12; // eax
  void (__fastcall **BusInterface)(_QWORD); // rcx
  KIRQL v14; // al
  char v15; // [rsp+28h] [rbp-40h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      26,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      v15);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = *(struct _NDIS_OPEN_BLOCK **)ndisGlobalOpenList;
  v6 = 0;
  while ( NextGlobalOpen && NextGlobalOpen != v2 )
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( !NextGlobalOpen )
  {
    *a1 = 0;
    goto LABEL_25;
  }
  MiniportHandle = v2->MiniportHandle;
  ProtocolHandle = v2->ProtocolHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      v9,
      0x1Bu,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)MiniportHandle,
      (char)v2,
      &ProtocolHandle->Name.Length,
      &MiniportHandle->pAdapterInstanceName->Length);
  if ( (byte_1C00E8081 & 2) != 0 )
    McTemplateK0jqxz(
      v8,
      v7,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      ProtocolHandle->Name.Buffer);
  PktMonClientComponentUnregister(&v2->PktMonComp.CompHandle);
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    if ( !v2->PendingLegacyUnbind
      || (struct NDIS_BIND_LINK_BASE *)v2->Bind != Ndis::BindEngine::GetCurrentLink(&MiniportHandle->BindEngine) )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&v2->SpinLock);
      v2->OpenFlags |= 0x40000000u;
      KeReleaseSpinLock(&v2->SpinLock, v14);
      ExQueueWorkItem(&v2->UnsolicitedUnbindComplete, (WORK_QUEUE_TYPE)40);
LABEL_23:
      v12 = 259;
      goto LABEL_24;
    }
LABEL_18:
    v2->PendingLegacyUnbind = 0;
    if ( (MiniportHandle->PnPFlags & 0x2000) != 0 )
    {
      BusInterface = (void (__fastcall **)(_QWORD))MiniportHandle->BusInterface;
      if ( BusInterface )
        BusInterface[5](BusInterface[1]);
    }
    ndisCleanUpForProtocol(v2);
    ndisMKillOpen((__int64)v2);
    goto LABEL_23;
  }
  v2->CallingFromNdis6Protocol = 0;
  if ( ProtocolHandle->MutexOwnerThread == KeGetCurrentThread() )
    goto LABEL_18;
  v12 = -1073741823;
LABEL_24:
  *a1 = v12;
  v6 = v12;
LABEL_25:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      6,
      28,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)v2,
      v6);
  }
}
