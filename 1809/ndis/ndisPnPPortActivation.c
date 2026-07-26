/*
 * XREFs of ndisPnPPortActivation @ 0x1C003DA98
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00F4190 (NdisMNetPnPEvent.c)
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     ndisFindPortByPortNumber @ 0x1C003DA68 (ndisFindPortByPortNumber.c)
 *     ndisRollbackPortActivation @ 0x1C003E524 (ndisRollbackPortActivation.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisPnPPortActivation(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v3; // esi
  int v4; // r14d
  __int64 v6; // rdx
  KIRQL v7; // r12
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int Flags; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r10d
  __int64 *PortByPortNumber; // rax
  __int64 v17; // rcx
  int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // rcx
  _BYTE v22[4]; // [rsp+40h] [rbp-F8h] BYREF
  int v23; // [rsp+44h] [rbp-F4h]
  int v24; // [rsp+48h] [rbp-F0h]
  __int64 v25; // [rsp+50h] [rbp-E8h]
  int v26; // [rsp+58h] [rbp-E0h]

  v3 = 0;
  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_q(0xEu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2359724;
  v8 = *(__int64 **)(a2 + 16);
  if ( v8 )
  {
    if ( (a1->PnPFlags & 0x80u) == 0 || *((_DWORD *)v8 + 9) )
    {
      while ( 1 )
      {
        v15 = *((_DWORD *)v8 + 9);
        if ( !v15 )
          break;
        PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, v15);
        if ( !PortByPortNumber )
        {
          if ( (unsigned __int8)byte_1C00A0266 >= 2u )
            WPP_SF_qD(0x14u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, v18);
          if ( (byte_1C00A2083 & 0x20) != 0 )
            McTemplateK0jqxqd(
              v17,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              *((_DWORD *)v8 + 9));
          v3 = -1071448019;
          ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v8);
          v4 = 0;
          goto LABEL_49;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 2 )
        {
          v3 = -1071448018;
          ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v8);
          v4 = 0;
          if ( (unsigned __int8)byte_1C00A0266 >= 2u )
            WPP_SF_qD(0x15u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, *((_DWORD *)v8 + 9));
          if ( (byte_1C00A2083 & 0x20) != 0 )
            McTemplateK0jqxqd(
              v19,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              4,
              *((_DWORD *)v8 + 9));
          goto LABEL_49;
        }
        ++a1->NumberOfActivePorts;
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        v8[1] = (__int64)PortByPortNumber;
        *((_DWORD *)PortByPortNumber + 4) = 4;
        *(_OWORD *)(PortByPortNumber + 3) = *((_OWORD *)v8 + 2);
        *(_OWORD *)(PortByPortNumber + 5) = *((_OWORD *)v8 + 3);
        *(_OWORD *)(PortByPortNumber + 7) = *((_OWORD *)v8 + 4);
        *(_OWORD *)(PortByPortNumber + 9) = *((_OWORD *)v8 + 5);
        if ( (v8[5] & 1) != 0 )
        {
          *((_DWORD *)PortByPortNumber + 17) = a1->DefaultSendControlState;
          *((_DWORD *)PortByPortNumber + 18) = a1->DefaultRcvControlState;
          *((_DWORD *)PortByPortNumber + 19) = a1->DefaultSendAuthorizationState;
          *((_DWORD *)PortByPortNumber + 20) = a1->DefaultRcvAuthorizationState;
        }
        ++v4;
        if ( (unsigned __int8)byte_1C00A0266 >= 5u )
          WPP_SF_qD(0x16u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, *((_DWORD *)v8 + 9));
        v8 = (__int64 *)*v8;
        if ( !v8 )
          goto LABEL_49;
      }
      v3 = -1071448019;
      ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v8);
      v4 = 0;
      if ( (unsigned __int8)byte_1C00A0266 >= 2u )
        WPP_SF_q(0x13u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
      if ( (byte_1C00A2083 & 0x20) != 0 )
        McTemplateK0jqxqd(
          v20,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          0);
LABEL_49:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v7);
      if ( v4 )
      {
        ndisInitializeNetPnPEvent(v22, 0LL);
        v23 = *(_DWORD *)(a2 + 4);
        v25 = *(_QWORD *)(a2 + 16);
        v26 = *(_DWORD *)(a2 + 24);
        v24 = 10;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
      }
    }
    else if ( *v8 )
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v7);
      v3 = -1071448019;
      if ( (unsigned __int8)byte_1C00A0266 >= 2u )
        WPP_SF_q(0x10u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
      if ( (byte_1C00A2083 & 0x20) != 0 )
        McTemplateK0jqxqd(
          v10,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          0);
    }
    else
    {
      Flags = a1->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v7);
        v3 = -1071448018;
        if ( (unsigned __int8)byte_1C00A0266 >= 2u )
          WPP_SF_q(0x11u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
        if ( (byte_1C00A2083 & 0x20) != 0 )
          McTemplateK0jqxqd(
            v12,
            &PnPPortActivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            2,
            0);
      }
      else
      {
        a1->Flags = Flags | 0x10000;
        if ( (v8[5] & 1) == 0 )
        {
          a1->DefaultPortSendControlState = *((_DWORD *)v8 + 19);
          a1->DefaultPortRcvControlState = *((_DWORD *)v8 + 20);
          a1->DefaultPortSendAuthorizationState = *((_DWORD *)v8 + 21);
          a1->DefaultPortRcvAuthorizationState = *((_DWORD *)v8 + 22);
        }
        LOBYTE(v6) = 1;
        ndisIfSetInterfaceState((__int64)a1, v6, v7);
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v7);
        if ( (unsigned __int8)byte_1C00A0266 >= 4u )
          WPP_SF_q(0x12u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
        if ( byte_1C00A2081 < 0 )
          McTemplateK0jqxq(
            v14,
            (const EVENT_DESCRIPTOR *)"$'",
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            23);
        LOBYTE(v13) = 1;
        ndisMSetMiniportReadyForBinding(a1, v13, 0x8000LL);
      }
    }
  }
  else
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v7);
    v3 = -1073741811;
    if ( (unsigned __int8)byte_1C00A0266 >= 2u )
      WPP_SF_q(0xFu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1);
    if ( (byte_1C00A2083 & 0x20) != 0 )
      McTemplateK0jqxqd(
        v9,
        &PnPPortActivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_qD(0x17u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)a1, v3);
  return v3;
}
