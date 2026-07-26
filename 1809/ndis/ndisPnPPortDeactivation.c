/*
 * XREFs of ndisPnPPortDeactivation @ 0x1C003E02C
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00F4190 (NdisMNetPnPEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     ndisFindPortByPortNumber @ 0x1C003DA68 (ndisFindPortByPortNumber.c)
 *     ndisRollbackPortDeactivation @ 0x1C003E5B8 (ndisRollbackPortDeactivation.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int *v5; // r15
  unsigned int v6; // esi
  KIRQL v7; // r14
  unsigned int PnPFlags; // eax
  unsigned __int64 *p_Lock; // rcx
  __int64 v10; // rcx
  unsigned int Flags; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned int *v15; // r12
  __int64 *PortByPortNumber; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v21; // [rsp+40h] [rbp-108h]
  KIRQL NewIrql; // [rsp+44h] [rbp-104h]
  _BYTE v23[4]; // [rsp+50h] [rbp-F8h] BYREF
  int v24; // [rsp+54h] [rbp-F4h]
  int v25; // [rsp+58h] [rbp-F0h]
  __int64 v26; // [rsp+60h] [rbp-E8h]
  int v27; // [rsp+68h] [rbp-E0h]

  v2 = 0;
  v21 = 0;
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_q(0x18u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
  v5 = *(unsigned int **)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 24) >> 2;
  if ( v5 && v6 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    NewIrql = v7;
    a1->MiniportThread = KeGetCurrentThread();
    PnPFlags = a1->PnPFlags;
    a1->LockDbg = 2360062;
    if ( (PnPFlags & 0x80u) == 0 || *v5 )
    {
      v14 = 0LL;
      v15 = v5;
      while ( *v15 )
      {
        PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, *v15);
        if ( !PortByPortNumber )
        {
          v2 = -1071448019;
          ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), (unsigned int)v14);
          v21 = 0;
          if ( (unsigned __int8)byte_1C00A0266 >= 2u )
            WPP_SF_qD(0x1Eu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, v5[v14]);
          if ( (byte_1C00A2084 & 0x40) != 0 )
            McTemplateK0jqxqd(
              v18,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              v5[v14]);
          goto LABEL_42;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 4 )
        {
          v2 = -1071448018;
          ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), (unsigned int)v14);
          v21 = 0;
          if ( (unsigned __int8)byte_1C00A0266 >= 2u )
            WPP_SF_qD(0x1Fu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, v5[v14]);
          if ( (byte_1C00A2084 & 0x40) != 0 )
            McTemplateK0jqxqd(
              v17,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              7,
              v5[v14]);
          goto LABEL_42;
        }
        ++v21;
        --a1->NumberOfActivePorts;
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        *((_DWORD *)PortByPortNumber + 4) = 2;
        if ( (unsigned __int8)byte_1C00A0266 >= 5u )
          WPP_SF_qD(0x20u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, *v15);
        v14 = (unsigned int)(v14 + 1);
        ++v15;
        if ( (unsigned int)v14 >= v6 )
          goto LABEL_42;
      }
      v2 = -1071448019;
      ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), (unsigned int)v14);
      v21 = 0;
      if ( (unsigned __int8)byte_1C00A0266 >= 2u )
        WPP_SF_q(0x1Du, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
      if ( (byte_1C00A2084 & 0x40) != 0 )
        McTemplateK0jqxqd(
          v19,
          &PnPPortDeactivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          5,
          0);
LABEL_42:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, NewIrql);
      if ( v21 )
      {
        ndisInitializeNetPnPEvent(v23, 0LL);
        v24 = *(_DWORD *)(a2 + 4);
        v26 = *(_QWORD *)(a2 + 16);
        v27 = *(_DWORD *)(a2 + 24);
        v25 = 11;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
      }
    }
    else
    {
      p_Lock = &a1->Lock;
      if ( v6 <= 1 )
      {
        Flags = a1->Flags;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        if ( (Flags & 0x10000) != 0 )
        {
          a1->Flags &= ~0x10000u;
          KeReleaseSpinLock(p_Lock, v7);
          ndisMSetMiniportReadyForBinding(a1, 0LL, 0x8000LL);
          if ( (unsigned __int8)byte_1C00A0266 >= 4u )
            WPP_SF_q(0x1Cu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
          if ( byte_1C00A2081 < 0 )
            McTemplateK0jqxq(
              v13,
              &DefaultPortDeactivated,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              66);
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v7);
          v2 = -1071448018;
          if ( (unsigned __int8)byte_1C00A0266 >= 2u )
            WPP_SF_q(0x1Bu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
          if ( (byte_1C00A2084 & 0x40) != 0 )
            McTemplateK0jqxqd(
              v12,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              6,
              0);
        }
      }
      else
      {
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(p_Lock, v7);
        if ( (unsigned __int8)byte_1C00A0266 >= 2u )
          WPP_SF_q(0x1Au, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
        if ( (byte_1C00A2084 & 0x40) != 0 )
          McTemplateK0jqxqd(
            v10,
            &PnPPortDeactivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            5,
            0);
        v2 = -1071448019;
      }
    }
  }
  else
  {
    v2 = -1073741811;
    if ( (unsigned __int8)byte_1C00A0266 >= 2u )
      WPP_SF_q(0x19u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
    if ( (byte_1C00A2084 & 0x40) != 0 )
      McTemplateK0jqxqd(
        (__int64)a1,
        &PnPPortDeactivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_q(0x21u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
  return v2;
}
