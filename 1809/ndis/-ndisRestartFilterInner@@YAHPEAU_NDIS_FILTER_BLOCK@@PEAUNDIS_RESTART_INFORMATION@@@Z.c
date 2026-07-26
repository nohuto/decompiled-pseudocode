/*
 * XREFs of ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010F82C
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00CF8F8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qqZZ @ 0x1C005E910 (WPP_SF_qqZZ.c)
 *     McTemplateK0juqjzzz @ 0x1C007A6B0 (McTemplateK0juqjzzz.c)
 *     ndisFInvokeRestart @ 0x1C00CFA04 (ndisFInvokeRestart.c)
 */

__int64 __fastcall ndisRestartFilterInner(struct _NDIS_FILTER_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v5; // al
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  unsigned int v7; // edi
  KIRQL v8; // al
  _NDIS_MINIPORT_BLOCK *v10; // rcx
  KIRQL v11; // al
  _BYTE v12[40]; // [rsp+58h] [rbp-9h] BYREF
  int v13; // [rsp+80h] [rbp+1Fh] BYREF
  _NDIS_MEDIUM MediaType; // [rsp+84h] [rbp+23h]
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // [rsp+88h] [rbp+27h]
  struct NDIS_RESTART_INFORMATION *v16; // [rsp+90h] [rbp+2Fh]
  unsigned int IfIndex; // [rsp+98h] [rbp+37h]
  _NET_LUID_LH v18; // [rsp+A0h] [rbp+3Fh]

  Miniport = a1->Miniport;
  memset(v12, 0, sizeof(v12));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xFu, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, (__int64)a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = 0LL;
  a1->LockDbg = 0;
  LOBYTE(a1->Flags) = 0;
  a1->Flags |= 0x20u;
  KeReleaseSpinLock(&a1->Lock, v5);
  a1->State = NdisFilterRestarting;
  if ( (byte_1C00A2083 & 1) != 0 )
    McTemplateK0juqjzzz(
      (__int64)&a1->Miniport->InterfaceGuid,
      (__int64)a1->FilterInstanceName._Myptr,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      3,
      174,
      (__int64)&a1->Miniport->InterfaceGuid,
      a1->Miniport->pAdapterInstanceName->Buffer,
      a1->FilterInstanceName._Myptr->Buffer,
      a1->FilterFriendlyName->Buffer);
  KeInitializeEvent((PRKEVENT)&v12[16], NotificationEvent, 0);
  LowerFilter = a1->LowerFilter;
  a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)v12;
  v13 = 3146139;
  v16 = a2;
  if ( LowerFilter )
  {
    MediaType = LowerFilter->MediaType;
    PhysicalMediaType = LowerFilter->PhysicalMediaType;
    IfIndex = LowerFilter->IfIndex;
    v18.Value = (ULONG64)LowerFilter->IfBlock->NetLuid;
  }
  else
  {
    v10 = a1->Miniport;
    MediaType = v10->MiniportMediaType;
    PhysicalMediaType = v10->MiniportPhysicalMediumType;
    IfIndex = v10->IfIndex;
    v18.Value = (ULONG64)v10->NetLuid;
  }
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qqZZ(
      0x10u,
      &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids,
      Miniport,
      a1,
      &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
      Miniport->pAdapterInstanceName);
  v7 = ndisFInvokeRestart((__int64)a1, (__int64)&v13);
  if ( v7 == 259 )
  {
    KeWaitForSingleObject(&v12[16], Executive, 0, 0, 0LL);
    v7 = *(_DWORD *)&v12[8];
  }
  a1->AsyncOpContext = 0LL;
  if ( v7 )
  {
    a1->State = NdisFilterPaused;
    if ( (byte_1C00A2083 & 1) != 0 )
      McTemplateK0juqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._Myptr,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        224,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._Myptr->Buffer,
        a1->FilterFriendlyName->Buffer);
    v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 4u;
    KeReleaseSpinLock(&a1->Lock, v11);
  }
  else
  {
    a1->IfBlock->AccessType = a2->General.AccessType;
    a1->IfBlock->ConnectionType = a2->General.ConnectionType;
    a1->IfBlock->ifMtu = a2->General.MtuSize;
    v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 0x10u;
    KeReleaseSpinLock(&a1->Lock, v8);
    a1->State = NdisFilterRunning;
    if ( (byte_1C00A2083 & 1) != 0 )
      McTemplateK0juqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._Myptr,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        4,
        7,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._Myptr->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x11u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, (__int64)a1, v7);
  return v7;
}
