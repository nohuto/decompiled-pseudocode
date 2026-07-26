/*
 * XREFs of ndisNotifyDevicePowerStateChange @ 0x1C0014248
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001295C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5A10 (ndisWdfDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     McTemplateK0qqq @ 0x1C007D5F8 (McTemplateK0qqq.c)
 */

void __fastcall ndisNotifyDevicePowerStateChange(__int64 a1, int a2)
{
  int v2; // esi
  GUID *v4; // r9
  PVOID v5; // rdi
  NTSTATUS v6; // eax
  int v7; // edx
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  unsigned int v9; // ebp
  GUID *v10; // r9
  int v11; // edx
  PVOID v12; // rdi
  _WORD *v13; // rcx
  NTSTATUS v14; // eax
  struct _MCGEN_TRACE_CONTEXT *v15; // rcx
  unsigned int v16; // ebp
  char v17; // [rsp+30h] [rbp-28h]
  PVOID WnodeEventItem; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      50,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      a1,
      v17);
  }
  v4 = &GUID_NDIS_NOTIFY_DEVICE_POWER_ON;
  if ( v2 != 1 )
    v4 = &GUID_NDIS_NOTIFY_DEVICE_POWER_OFF;
  ndisSetupWmiNode(
    a1,
    *(_QWORD *)(a1 + 3856),
    *(unsigned __int16 *)(a1 + 3808) + 2,
    (_DWORD)v4,
    (__int64)&WnodeEventItem);
  v5 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    memmove(
      (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14),
      *(const void **)(a1 + 3816),
      *(unsigned __int16 *)(a1 + 3808));
    v6 = IoWMIWriteEvent(v5);
    v9 = v6;
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          14,
          51,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          v6);
      }
      if ( (byte_1C00E8041 & 0x10) != 0 )
        McTemplateK0qqq(v8, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4008), v9, 0x10005u, 0);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v10 = &GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX;
  if ( v2 != 1 )
    v10 = &GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX;
  ndisSetupWmiNode(
    a1,
    *(_QWORD *)(a1 + 3856),
    *(unsigned __int16 *)(a1 + 3808) + 2,
    (_DWORD)v10,
    (__int64)&WnodeEventItem);
  v12 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v13 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
    *v13 = *(_WORD *)(a1 + 3808);
    memmove(v13 + 1, *(const void **)(a1 + 3816), *(unsigned __int16 *)(a1 + 3808));
    v14 = IoWMIWriteEvent(v12);
    v16 = v14;
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          14,
          52,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          v14);
      }
      if ( (byte_1C00E8041 & 0x10) != 0 )
        McTemplateK0qqq(v15, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4008), v16, 0x10006u, 0);
      ExFreePoolWithTag(v12, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      14,
      53,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      a1,
      v2);
  }
}
