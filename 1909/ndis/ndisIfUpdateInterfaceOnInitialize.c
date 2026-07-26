/*
 * XREFs of ndisIfUpdateInterfaceOnInitialize @ 0x1C0038CF4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001B148 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C0039370 (ndisIfGetRcvAddressFromMiniport.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0100580 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisNsiSyncMiniportMediaConnectStateNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109908 (-ndisNsiSyncMiniportMediaConnectStateNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C0109958 (ndisIfUpdateInterfaceHiddenFlag.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C011423C (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        __int64 a3)
{
  unsigned int IntegerData; // edi
  struct _NDIS_IF_BLOCK *v5; // rsi
  bool v7; // r13
  int v8; // edx
  unsigned int v9; // ebx
  KIRQL v10; // al
  int v11; // ecx
  unsigned int PnPFlags; // edx
  size_t v13; // rbx
  _IF_PHYSICAL_ADDRESS_LH *p_ifPhysAddress; // rax
  unsigned __int16 v15; // di
  size_t v16; // r8
  size_t v17; // r8
  unsigned __int16 v18; // ax
  size_t v19; // r8
  __int16 v20; // ax
  unsigned __int16 v21; // ax
  _NDIS_MEDIUM v22; // eax
  char v23; // di
  _NDIS_PHYSICAL_MEDIUM v24; // eax
  __int64 v25; // rdx
  KIRQL v26; // al
  KIRQL v27; // bl
  char v29; // [rsp+30h] [rbp-50h]
  unsigned __int8 ifDeviceWakeUpEnable; // [rsp+50h] [rbp-30h]
  int Status; // [rsp+54h] [rbp-2Ch] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp-28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+60h] [rbp-20h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-18h] BYREF
  char v35; // [rsp+C0h] [rbp+40h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+58h]

  v35 = 0;
  LOBYTE(IntegerData) = 0;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  v5 = a2;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      178,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v29,
      a3);
  }
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  v7 = 1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v9 = Status;
  if ( !Status )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NdisDeviceTypeStr, NdisParameterInteger);
    if ( !Status )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    Status = 0;
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v5->AccessType = *(_DWORD *)(a3 + 168);
    v5->DirectionType = *(_DWORD *)(a3 + 172);
    v5->ifConnectorPresent = *(_BYTE *)(a3 + 182);
    v5->ConnectionType = *(_DWORD *)(a3 + 176);
    v5->ifMtu = *(_DWORD *)(a3 + 16);
    v11 = 0;
    v5->Flags = 0;
    PnPFlags = a1->PnPFlags;
    NewIrql = v10;
    if ( (PnPFlags & 0x200000) != 0 )
    {
      v5->Flags = 1;
      v11 = 1;
      PnPFlags = a1->PnPFlags;
    }
    if ( (PnPFlags & 0x8000000) != 0 )
    {
      v11 |= 2u;
      v5->Flags = v11;
      PnPFlags = a1->PnPFlags;
    }
    v13 = 32LL;
    if ( (PnPFlags & 0x400000) != 0 )
    {
      v11 |= 0x20u;
      v5->Flags = v11;
    }
    if ( (IntegerData & 1) != 0 )
    {
      v11 |= 0x40u;
      v5->Flags = v11;
    }
    if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
    {
      v11 |= 0x100u;
      v5->Flags = v11;
    }
    v5->ifFlags = v11;
    p_ifPhysAddress = &v5->ifPhysAddress;
    v15 = *(_WORD *)(a3 + 92);
    if ( v5->ifPhysAddress.Length == v15 )
    {
      v16 = v15;
      if ( v15 >= 0x20u )
        v16 = 32LL;
      if ( !memcmp(v5->ifPhysAddress.Address, (const void *)(a3 + 126), v16) )
      {
        v17 = 32LL;
        if ( v15 < 0x20u )
          v17 = v15;
        v7 = memcmp(v5->PermanentPhysAddress.Address, (const void *)(a3 + 94), v17) != 0;
      }
      p_ifPhysAddress = &v5->ifPhysAddress;
    }
    if ( v15 >= 0x20u )
      v15 = 32;
    p_ifPhysAddress->Length = v15;
    v18 = *(_WORD *)(a3 + 92);
    v19 = v18;
    if ( v18 >= 0x20u )
      v19 = 32LL;
    memmove(v5->ifPhysAddress.Address, (const void *)(a3 + 126), v19);
    v20 = *(_WORD *)(a3 + 92);
    if ( (unsigned __int16)v20 >= 0x20u )
      v20 = 32;
    v5->PermanentPhysAddress.Length = v20;
    v21 = *(_WORD *)(a3 + 92);
    if ( v21 < 0x20u )
      v13 = v21;
    memmove(v5->PermanentPhysAddress.Address, (const void *)(a3 + 94), v13);
    v5->XmitLinkSpeed = *(_QWORD *)(a3 + 32);
    v5->RcvLinkSpeed = *(_QWORD *)(a3 + 48);
    v5->MediaConnectState = *(_DWORD *)(a3 + 56);
    v5->MediaDuplexState = *(_DWORD *)(a3 + 60);
    v5->SupportedStatistics = *(_DWORD *)(a3 + 184);
    v22 = *(_DWORD *)(a3 + 8);
    if ( v5->MediaType == v22 )
    {
      v23 = 0;
    }
    else
    {
      v5->MediaType = v22;
      v23 = 1;
      v35 = 1;
    }
    v24 = *(_DWORD *)(a3 + 12);
    if ( v5->PhysicalMediumType != v24 )
    {
      v5->PhysicalMediumType = v24;
      v23 = 1;
      v35 = 1;
    }
    ifDeviceWakeUpEnable = v5->ifDeviceWakeUpEnable;
    v5->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql);
    v25 = a1->PnPFlags >> 12;
    LOBYTE(v25) = (a1->PnPFlags & 0x1000) != 0;
    ndisIfUpdateInterfaceHiddenFlag(v5, v25);
    if ( v5->Source == NdisIfBlockSourcePersistedNetSetup )
    {
      if ( (v23 || v7) && (int)ndisIfWriteBackPersistedInterface(v5) < 0 )
      {
        v9 = -1073741823;
        goto LABEL_43;
      }
    }
    else
    {
      if ( v35 )
      {
        Status = ndisIfUpdatePersistedInterfaceInfo(
                   (unsigned __int8 *)&v5->NetLuid,
                   8u,
                   0x434u,
                   (unsigned __int8 *)&v5->MediaType);
        v9 = Status;
        if ( Status )
          goto LABEL_43;
      }
      if ( v7 )
      {
        Status = ndisIfUpdatePersistedInterfaceInfo(
                   (unsigned __int8 *)&v5->NetLuid,
                   0x44u,
                   0x440u,
                   (unsigned __int8 *)&v5->ifPhysAddress);
        v9 = Status;
        if ( Status )
          goto LABEL_43;
      }
    }
    v26 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v27 = v26;
    ndisIfSetInterfaceState((__int64)a1, 0, v26);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v27);
    ndisNsiSyncMiniportOperStatusNotification(a1);
    ndisNsiSyncMiniportMediaConnectStateNotification(a1);
    ndisIfGetRcvAddressFromMiniport(a1);
    if ( ifDeviceWakeUpEnable != v5->ifDeviceWakeUpEnable )
      ndisNsiScheduleIfBlockRodChangeNotification((__int64)v5, (__int64)&v5->ifDeviceWakeUpEnable, 1, 641);
    v9 = Status;
  }
LABEL_43:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0xB3u,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)v5,
      a3,
      v9);
  return v9;
}
