/*
 * XREFs of ndisNotifyDevicePowerStateChange @ 0x1C00B8B70
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010508 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C00172D4 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 */

void __fastcall ndisNotifyDevicePowerStateChange(__int64 a1, int a2)
{
  __int128 *v4; // r9
  PVOID v5; // rsi
  NTSTATUS v6; // eax
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned int v8; // ebp
  __int128 *v9; // r9
  PVOID v10; // rsi
  _WORD *v11; // rcx
  NTSTATUS v12; // eax
  struct _MCGEN_TRACE_CONTEXT *v13; // rcx
  unsigned int v14; // ebp
  PVOID WnodeEventItem; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(0x34u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, a1, a2);
  v4 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON;
  if ( a2 != 1 )
    v4 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF;
  ndisSetupWmiNode(a1, *(const void ***)(a1 + 3888), *(unsigned __int16 *)(a1 + 3840) + 2, v4, &WnodeEventItem);
  v5 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    memmove(
      (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14),
      *(const void **)(a1 + 3848),
      *(unsigned __int16 *)(a1 + 3840));
    v6 = IoWMIWriteEvent(v5);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 2u )
        WPP_SF_D(0x35u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v6);
      if ( (byte_1C00A2081 & 0x10) != 0 )
        McTemplateK0qqq(v7, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4040), v8, 0x1275u, 0);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v9 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX;
  if ( a2 != 1 )
    v9 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX;
  ndisSetupWmiNode(a1, *(const void ***)(a1 + 3888), *(unsigned __int16 *)(a1 + 3840) + 2, v9, &WnodeEventItem);
  v10 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v11 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
    *v11 = *(_WORD *)(a1 + 3840);
    memmove(v11 + 1, *(const void **)(a1 + 3848), *(unsigned __int16 *)(a1 + 3840));
    v12 = IoWMIWriteEvent(v10);
    v14 = v12;
    if ( v12 < 0 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 2u )
        WPP_SF_D(0x36u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v12);
      if ( (byte_1C00A2081 & 0x10) != 0 )
        McTemplateK0qqq(v13, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4040), v14, 0x12A3u, 0);
      ExFreePoolWithTag(v10, 0);
    }
  }
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(0x37u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, a1, a2);
}
