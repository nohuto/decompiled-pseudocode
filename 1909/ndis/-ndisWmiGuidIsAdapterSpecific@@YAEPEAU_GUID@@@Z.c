/*
 * XREFs of ?ndisWmiGuidIsAdapterSpecific@@YAEPEAU_GUID@@@Z @ 0x1C00A76B4
 * Callers:
 *     ndisWmiQueryAllData @ 0x1C00A8EDC (ndisWmiQueryAllData.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisWmiGuidIsAdapterSpecific(struct _GUID *a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx

  result = 0;
  v2 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
    v2 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
  if ( !v2 )
    return 1;
  v3 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
    v3 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
  if ( !v3 )
    return 1;
  v4 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
    v4 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
  if ( !v4 )
    return 1;
  v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
    v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
  if ( !v5 )
    return 1;
  v6 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
    v6 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
  if ( !v6 )
    return 1;
  v7 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
    v7 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
  if ( !v7 )
    return 1;
  v8 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
    v8 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
  if ( !v8 )
    return 1;
  v9 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
    v9 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
  if ( !v9 )
    return 1;
  v10 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
    v10 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
  if ( !v10 )
    return 1;
  v11 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
    v11 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
  if ( !v11 )
    return 1;
  return result;
}
