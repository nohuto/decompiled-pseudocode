/*
 * XREFs of ndisPnPPortDeactivation @ 0x1C006272C
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00A4310 (NdisMNetPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1C0061624 (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     ndisFindPortByPortNumber @ 0x1C0062034 (ndisFindPortByPortNumber.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rcx
  unsigned int *v7; // r15
  unsigned int v8; // esi
  KIRQL v9; // bp
  KSPIN_LOCK *p_Lock; // rcx
  __int64 v11; // rcx
  unsigned int Flags; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ebp
  unsigned int *v16; // r12
  __int64 *PortByPortNumber; // rax
  int v18; // edx
  __int16 v19; // r10
  int v20; // edx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  int v24; // edx
  int v26; // [rsp+40h] [rbp-108h]
  KIRQL NewIrql; // [rsp+44h] [rbp-104h]
  _QWORD v28[22]; // [rsp+50h] [rbp-F8h] BYREF

  v26 = 0;
  v4 = 0;
  memset(v28, 0, sizeof(v28));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      23,
      24,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)a1);
  }
  v7 = *(unsigned int **)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 24) >> 2;
  if ( v7 && v8 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    NewIrql = v9;
    a1->MiniportThread = KeGetCurrentThread();
    if ( (a1->PnPFlags & 0x80u) == 0 || *v7 )
    {
      v15 = 0;
      v16 = v7;
      while ( *v16 )
      {
        PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, *v16);
        if ( !PortByPortNumber )
        {
          v4 = -1071448019;
          ndisRollbackPortDeactivation(a1, *(unsigned int **)(a2 + 16), v15);
          v26 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = 2;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v22,
              23,
              30,
              (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
              (char)a1,
              v7[v15]);
          }
          if ( (byte_1C00E8044 & 0x40) != 0 )
            McTemplateK0jqxqd(
              v23,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              v7[v15]);
          goto LABEL_43;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 4 )
        {
          v4 = -1071448018;
          ndisRollbackPortDeactivation(a1, *(unsigned int **)(a2 + 16), v15);
          v26 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 2;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v20,
              23,
              31,
              (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
              (char)a1,
              v7[v15]);
          }
          if ( (byte_1C00E8044 & 0x40) != 0 )
            McTemplateK0jqxqd(
              v21,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              7,
              v7[v15]);
          goto LABEL_43;
        }
        ++v26;
        --a1->NumberOfActivePorts;
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        *((_DWORD *)PortByPortNumber + 4) = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) != v19 )
        {
          LOBYTE(v18) = 5;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            23,
            32,
            (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
            (char)a1,
            *v16);
        }
        ++v15;
        ++v16;
        if ( v15 >= v8 )
          goto LABEL_43;
      }
      v4 = -1071448019;
      ndisRollbackPortDeactivation(a1, *(unsigned int **)(a2 + 16), v15);
      v26 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v24,
          23,
          29,
          (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
          (char)a1);
      }
      if ( (byte_1C00E8044 & 0x40) != 0 )
        McTemplateK0jqxqd(
          0LL,
          &PnPPortDeactivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          5,
          0);
LABEL_43:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, NewIrql);
      if ( v26 )
      {
        ndisInitializeNetPnPEvent(v28, 0LL);
        HIDWORD(v28[0]) = *(_DWORD *)(a2 + 4);
        v28[2] = *(_QWORD *)(a2 + 16);
        LODWORD(v28[3]) = *(_DWORD *)(a2 + 24);
        LODWORD(v28[1]) = 11;
        ndisDevicePnPEventNotifyFiltersAndAllTransports((__int64)a1, (__int64)v28);
      }
    }
    else
    {
      p_Lock = &a1->Lock;
      if ( v8 <= 1 )
      {
        Flags = a1->Flags;
        a1->MiniportThread = 0LL;
        if ( (Flags & 0x10000) != 0 )
        {
          a1->Flags &= ~0x10000u;
          KeReleaseSpinLock(p_Lock, v9);
          ndisMSetMiniportReadyForBinding((char)a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v5,
              23,
              28,
              (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
              (char)a1);
          }
          if ( byte_1C00E8041 < 0 )
            McTemplateK0jqxq(
              v14,
              &DefaultPortDeactivated,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              1);
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v9);
          v4 = -1071448018;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v5,
              23,
              27,
              (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
              (char)a1);
          }
          if ( (byte_1C00E8044 & 0x40) != 0 )
            McTemplateK0jqxqd(
              v13,
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
        KeReleaseSpinLock(p_Lock, v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v5) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v5,
            23,
            26,
            (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
            (char)a1);
        }
        if ( (byte_1C00E8044 & 0x40) != 0 )
          McTemplateK0jqxqd(
            v11,
            &PnPPortDeactivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            5,
            0);
        v4 = -1071448019;
      }
    }
  }
  else
  {
    v4 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        23,
        25,
        (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
        (char)a1);
    }
    if ( (byte_1C00E8044 & 0x40) != 0 )
      McTemplateK0jqxqd(
        v6,
        &PnPPortDeactivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      23,
      33,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)a1);
  }
  return v4;
}
