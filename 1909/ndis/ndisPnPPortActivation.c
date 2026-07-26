/*
 * XREFs of ndisPnPPortActivation @ 0x1C0062234
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00A44E0 (NdisMNetPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z @ 0x1C0061718 (-ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     ndisFindPortByPortNumber @ 0x1C0062204 (ndisFindPortByPortNumber.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisPnPPortActivation(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  int v5; // r14d
  int v6; // edx
  KIRQL v7; // r12
  struct _NDIS_PORT *v8; // rdi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  unsigned int PortNumber; // edx
  __int64 *PortByPortNumber; // rax
  int v18; // edx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  char v25; // [rsp+30h] [rbp-108h]
  _QWORD v26[22]; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0;
  v5 = 0;
  memset(v26, 0, sizeof(v26));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      23,
      14,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      a1);
  }
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v8 = *(struct _NDIS_PORT **)(a2 + 16);
  if ( v8 )
  {
    if ( (*(_DWORD *)(a1 + 124) & 0x80u) == 0 || v8->PortCharacteristics.PortNumber )
    {
      while ( 1 )
      {
        PortNumber = v8->PortCharacteristics.PortNumber;
        if ( !PortNumber )
          break;
        PortByPortNumber = ndisFindPortByPortNumber(a1, PortNumber);
        v19 = (__int64)PortByPortNumber;
        if ( !PortByPortNumber )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = v18;
            LOBYTE(v18) = 2;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
              23,
              20,
              (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
              a1,
              v25);
          }
          if ( (byte_1C00E8083 & 0x20) != 0 )
            McTemplateK0jqxqd(
              v19,
              &PnPPortActivationFailed,
              (const GUID *)(a1 + 4008),
              a1 + 4008,
              *(_DWORD *)(a1 + 4056),
              *(_QWORD *)(a1 + 4024),
              3,
              v8->PortCharacteristics.PortNumber);
          v4 = -1071448019;
          ndisRollbackPortActivation((struct _NDIS_MINIPORT_BLOCK *)a1, *(struct _NDIS_PORT **)(a2 + 16), v8);
          v5 = 0;
          goto LABEL_50;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 2 )
        {
          v4 = -1071448018;
          ndisRollbackPortActivation((struct _NDIS_MINIPORT_BLOCK *)a1, *(struct _NDIS_PORT **)(a2 + 16), v8);
          v5 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 2;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v20,
              23,
              21,
              (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
              a1,
              v8->PortCharacteristics.PortNumber);
          }
          if ( (byte_1C00E8083 & 0x20) != 0 )
            McTemplateK0jqxqd(
              v21,
              &PnPPortActivationFailed,
              (const GUID *)(a1 + 4008),
              a1 + 4008,
              *(_DWORD *)(a1 + 4056),
              *(_QWORD *)(a1 + 4024),
              4,
              v8->PortCharacteristics.PortNumber);
          goto LABEL_50;
        }
        ++*(_DWORD *)(a1 + 2752);
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        v8->NdisReserved = PortByPortNumber;
        *((_DWORD *)PortByPortNumber + 4) = 4;
        *(_OWORD *)(PortByPortNumber + 3) = *(_OWORD *)&v8->PortCharacteristics.Header.Type;
        *(_OWORD *)(PortByPortNumber + 5) = *(_OWORD *)&v8->PortCharacteristics.MediaConnectState;
        *(_OWORD *)(PortByPortNumber + 7) = *(_OWORD *)&v8->PortCharacteristics.RcvLinkSpeed;
        *(_OWORD *)(PortByPortNumber + 9) = *(_OWORD *)&v8->PortCharacteristics.RcvControlState;
        if ( (v8->PortCharacteristics.Flags & 1) != 0 )
        {
          *((_DWORD *)PortByPortNumber + 17) = *(_DWORD *)(a1 + 3304);
          *((_DWORD *)PortByPortNumber + 18) = *(_DWORD *)(a1 + 3308);
          *((_DWORD *)PortByPortNumber + 19) = *(_DWORD *)(a1 + 3312);
          *((_DWORD *)PortByPortNumber + 20) = *(_DWORD *)(a1 + 3316);
        }
        ++v5;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          LOBYTE(v18) = 5;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            23,
            22,
            (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
            a1,
            v8->PortCharacteristics.PortNumber);
        }
        v8 = v8->Next;
        if ( !v8 )
          goto LABEL_50;
      }
      v4 = -1071448019;
      ndisRollbackPortActivation((struct _NDIS_MINIPORT_BLOCK *)a1, *(struct _NDIS_PORT **)(a2 + 16), v8);
      v5 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          23,
          19,
          (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
          a1);
      }
      if ( (byte_1C00E8083 & 0x20) != 0 )
        McTemplateK0jqxqd(
          v23,
          &PnPPortActivationFailed,
          (const GUID *)(a1 + 4008),
          a1 + 4008,
          *(_DWORD *)(a1 + 4056),
          *(_QWORD *)(a1 + 4024),
          1,
          0);
LABEL_50:
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
      if ( v5 )
      {
        ndisInitializeNetPnPEvent(v26, 0LL);
        HIDWORD(v26[0]) = *(_DWORD *)(a2 + 4);
        v26[2] = *(_QWORD *)(a2 + 16);
        LODWORD(v26[3]) = *(_DWORD *)(a2 + 24);
        LODWORD(v26[1]) = 10;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)v26);
      }
    }
    else if ( v8->Next )
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
      v4 = -1071448019;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          23,
          16,
          (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
          a1);
      }
      if ( (byte_1C00E8083 & 0x20) != 0 )
        McTemplateK0jqxqd(
          v11,
          &PnPPortActivationFailed,
          (const GUID *)(a1 + 4008),
          a1 + 4008,
          *(_DWORD *)(a1 + 4056),
          *(_QWORD *)(a1 + 4024),
          1,
          0);
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 120);
      if ( (v12 & 0x10000) != 0 )
      {
        *(_QWORD *)(a1 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
        v4 = -1071448018;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            23,
            17,
            (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
            a1);
        }
        if ( (byte_1C00E8083 & 0x20) != 0 )
          McTemplateK0jqxqd(
            v13,
            &PnPPortActivationFailed,
            (const GUID *)(a1 + 4008),
            a1 + 4008,
            *(_DWORD *)(a1 + 4056),
            *(_QWORD *)(a1 + 4024),
            2,
            0);
      }
      else
      {
        *(_DWORD *)(a1 + 120) = v12 | 0x10000;
        if ( (v8->PortCharacteristics.Flags & 1) == 0 )
        {
          *(_DWORD *)(a1 + 3320) = v8->PortCharacteristics.SendControlState;
          *(_DWORD *)(a1 + 3324) = v8->PortCharacteristics.RcvControlState;
          *(_DWORD *)(a1 + 3328) = v8->PortCharacteristics.SendAuthorizationState;
          *(_DWORD *)(a1 + 3332) = v8->PortCharacteristics.RcvAuthorizationState;
        }
        ndisIfSetInterfaceState(a1, 1, v7);
        *(_QWORD *)(a1 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v14,
            23,
            18,
            (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
            a1);
        }
        if ( byte_1C00E8081 < 0 )
          McTemplateK0jqxq(
            v15,
            (const EVENT_DESCRIPTOR *)"$'",
            (const GUID *)(a1 + 4008),
            a1 + 4008,
            *(_DWORD *)(a1 + 4056),
            *(_QWORD *)(a1 + 4024),
            1);
        ndisMSetMiniportReadyForBinding(a1);
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
    v4 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        23,
        15,
        (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
        a1);
    }
    if ( (byte_1C00E8083 & 0x20) != 0 )
      McTemplateK0jqxqd(
        v10,
        &PnPPortActivationFailed,
        (const GUID *)(a1 + 4008),
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        0,
        0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      23,
      23,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      a1,
      v4);
  }
  return v4;
}
