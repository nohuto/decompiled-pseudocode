/*
 * XREFs of ndisIfUpdateInterfaceOnInitialize @ 0x1C001589C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C0015E48 (ndisIfGetRcvAddressFromMiniport.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0017000 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BA990 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C00BD644 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00BD698 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C00BD6EC (ndisIfUpdateInterfaceHiddenFlag.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00E2894 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IntegerData; // edi
  bool v7; // r13
  unsigned int v8; // ebx
  KIRQL v9; // al
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  size_t v13; // rbx
  unsigned __int16 *v14; // rax
  unsigned __int16 v15; // di
  size_t v16; // r8
  size_t v17; // r8
  unsigned __int16 v18; // ax
  size_t v19; // r8
  __int16 v20; // ax
  unsigned __int16 v21; // ax
  int v22; // eax
  char v23; // di
  int v24; // eax
  __int64 v25; // rdx
  KIRQL v26; // al
  __int64 v27; // r8
  KIRQL v28; // bl
  char v30; // [rsp+30h] [rbp-30h]
  int Status; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+40h] [rbp-20h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+48h] [rbp-18h] BYREF
  char v35; // [rsp+A0h] [rbp+40h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+58h]

  v35 = 0;
  LOBYTE(IntegerData) = 0;
  ConfigurationHandle = 0LL;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqq(177LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2, a3);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  v7 = 1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v8 = Status;
  if ( !Status )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NdisDeviceTypeStr, NdisParameterInteger);
    if ( !Status )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    Status = 0;
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    *(_DWORD *)(a2 + 1340) = *(_DWORD *)(a1 + 3748);
    v10 = *(_DWORD *)(a1 + 3752);
    *(_DWORD *)(a2 + 1348) = -1;
    *(_DWORD *)(a2 + 1344) = v10;
    *(_DWORD *)(a2 + 528) = *(_DWORD *)(a3 + 168);
    *(_DWORD *)(a2 + 532) = *(_DWORD *)(a3 + 172);
    *(_BYTE *)(a2 + 556) = *(_BYTE *)(a3 + 182);
    *(_DWORD *)(a2 + 536) = *(_DWORD *)(a3 + 176);
    *(_DWORD *)(a2 + 1120) = *(_DWORD *)(a3 + 16);
    v11 = 0;
    *(_DWORD *)(a2 + 1336) = 0;
    NewIrql = v9;
    v12 = *(_DWORD *)(a1 + 124);
    if ( (v12 & 0x200000) != 0 )
    {
      *(_DWORD *)(a2 + 1336) = 1;
      v11 = 1;
      v12 = *(_DWORD *)(a1 + 124);
    }
    if ( (v12 & 0x8000000) != 0 )
    {
      v11 |= 2u;
      *(_DWORD *)(a2 + 1336) = v11;
      v12 = *(_DWORD *)(a1 + 124);
    }
    v13 = 32LL;
    if ( (v12 & 0x400000) != 0 )
    {
      v11 |= 0x20u;
      *(_DWORD *)(a2 + 1336) = v11;
    }
    if ( (IntegerData & 1) != 0 )
    {
      v11 |= 0x40u;
      *(_DWORD *)(a2 + 1336) = v11;
    }
    if ( (*(_DWORD *)(a1 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a1 + 2700) & 0x200) != 0 )
    {
      v11 |= 0x100u;
      *(_DWORD *)(a2 + 1336) = v11;
    }
    *(_DWORD *)(a2 + 560) = v11;
    v14 = (unsigned __int16 *)(a2 + 1124);
    v15 = *(_WORD *)(a3 + 92);
    if ( *(_WORD *)(a2 + 1124) == v15 )
    {
      v16 = v15;
      if ( v15 >= 0x20u )
        v16 = 32LL;
      if ( !memcmp((const void *)(a2 + 1126), (const void *)(a3 + 126), v16) )
      {
        v17 = 32LL;
        if ( v15 < 0x20u )
          v17 = v15;
        v7 = memcmp((const void *)(a2 + 1160), (const void *)(a3 + 94), v17) != 0;
      }
      v14 = (unsigned __int16 *)(a2 + 1124);
    }
    if ( v15 >= 0x20u )
      v15 = 32;
    *v14 = v15;
    v18 = *(_WORD *)(a3 + 92);
    v19 = v18;
    if ( v18 >= 0x20u )
      v19 = 32LL;
    memmove((void *)(a2 + 1126), (const void *)(a3 + 126), v19);
    v20 = *(_WORD *)(a3 + 92);
    if ( (unsigned __int16)v20 >= 0x20u )
      v20 = 32;
    *(_WORD *)(a2 + 1158) = v20;
    v21 = *(_WORD *)(a3 + 92);
    if ( v21 < 0x20u )
      v13 = v21;
    memmove((void *)(a2 + 1160), (const void *)(a3 + 94), v13);
    *(_QWORD *)(a2 + 1200) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(a2 + 1208) = *(_QWORD *)(a3 + 48);
    *(_DWORD *)(a2 + 1220) = *(_DWORD *)(a3 + 56);
    *(_DWORD *)(a2 + 1224) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(a2 + 1424) = *(_DWORD *)(a3 + 184);
    v22 = *(_DWORD *)(a3 + 8);
    if ( *(_DWORD *)(a2 + 564) == v22 )
    {
      v23 = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 564) = v22;
      v23 = 1;
      v35 = 1;
    }
    v24 = *(_DWORD *)(a3 + 12);
    if ( *(_DWORD *)(a2 + 568) != v24 )
    {
      *(_DWORD *)(a2 + 568) = v24;
      v23 = 1;
      v35 = 1;
    }
    v30 = *(_BYTE *)(a2 + 1217);
    *(_BYTE *)(a2 + 1217) = *(_BYTE *)(a1 + 984) & 1;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql);
    v25 = *(_DWORD *)(a1 + 124) >> 12;
    LOBYTE(v25) = (*(_DWORD *)(a1 + 124) & 0x1000) != 0;
    ndisIfUpdateInterfaceHiddenFlag(a2, v25);
    if ( *(_DWORD *)(a2 + 1408) == 1 )
    {
      if ( (v23 || v7) && (int)ndisIfWriteBackPersistedInterface((struct _NDIS_IF_BLOCK *)a2) < 0 )
      {
        v8 = -1073741823;
        goto LABEL_43;
      }
    }
    else
    {
      if ( v35 )
      {
        Status = ndisIfUpdatePersistedInterfaceInfo(
                   (unsigned __int8 *)(a2 + 1312),
                   8u,
                   0x434u,
                   (unsigned __int8 *)(a2 + 564));
        v8 = Status;
        if ( Status )
          goto LABEL_43;
      }
      if ( v7 )
      {
        Status = ndisIfUpdatePersistedInterfaceInfo(
                   (unsigned __int8 *)(a2 + 1312),
                   0x44u,
                   0x440u,
                   (unsigned __int8 *)(a2 + 1124));
        v8 = Status;
        if ( Status )
          goto LABEL_43;
      }
    }
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    LOBYTE(v27) = v26;
    *(_DWORD *)(a1 + 1864) = 2245791;
    v28 = v26;
    ndisIfSetInterfaceState(a1, 0LL, v27);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v28);
    ndisNsiSyncMiniportOperStatusNotification(a1);
    ndisNsiSyncMiniportMediaConnectStateNotification(a1);
    ndisIfGetRcvAddressFromMiniport(a1);
    if ( v30 != *(_BYTE *)(a2 + 1217) )
      ndisNsiScheduleIfBlockRodChangeNotification(a2, a2 + 1217, 1LL, 641LL);
    v8 = Status;
  }
LABEL_43:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqqL(178LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2, a3, v8);
  return v8;
}
