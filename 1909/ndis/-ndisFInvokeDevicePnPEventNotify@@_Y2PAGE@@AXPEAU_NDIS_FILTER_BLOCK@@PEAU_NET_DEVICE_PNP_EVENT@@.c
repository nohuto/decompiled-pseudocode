/*
 * XREFs of ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C00FC748
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0014B60 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisFInvokeDevicePnPEventNotify(struct _NDIS_FILTER_BLOCK *a1, struct _NET_DEVICE_PNP_EVENT *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rbp
  struct _NET_DEVICE_PNP_EVENT *v3; // rdi
  _NDIS_DEVICE_PNP_EVENT DevicePnPEvent; // esi
  int v6; // edx
  char v7[4]; // [rsp+30h] [rbp-28h]

  FilterDriver = a1->FilterDriver;
  v3 = a2;
  DevicePnPEvent = a2->DevicePnPEvent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = a2->DevicePnPEvent;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      119,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      v7[0]);
  }
  FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler(a1->FilterModuleContext, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      13,
      120,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      DevicePnPEvent);
  }
}
