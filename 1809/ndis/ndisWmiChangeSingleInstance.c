/*
 * XREFs of ndisWmiChangeSingleInstance @ 0x1C00F59FC
 * Callers:
 *     ndisWMIDispatch @ 0x1C00B537C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C0009C20 (ndisWmiGetGuid.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     ndisCancelWaitWake @ 0x1C0011794 (ndisCancelWaitWake.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0017000 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C600 (ndisCancelMediaDisconnectTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0025324 (ndisSetMediaDisconnectTimer.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004BB4C (ndisUpdateAndIndicatePMCapabilities.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00BBE1C (ndisMiniportPMParametersUpdated.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisWriteConfiguration @ 0x1C00C4940 (NdisWriteConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C00C6DD0 (NdisOpenConfiguration.c)
 *     ndisWakeUpDevice @ 0x1C00E8E08 (ndisWakeUpDevice.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00E8F6C (ndisWmiSetPMAdminConfig.c)
 *     ndisWmiFindInstanceName @ 0x1C00F62C0 (ndisWmiFindInstanceName.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00F7980 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 *     ndisDereferenceVcPtr @ 0x1C011E8EC (ndisDereferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v2; // r13d
  int InstanceName; // ebx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  __int64 v7; // rdx
  PVOID v8; // r9
  __int64 v9; // r14
  unsigned __int16 v10; // cx
  int v11; // ecx
  unsigned int v12; // r12d
  __int64 v13; // rsi
  PVOID v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int PnPFlags; // ecx
  unsigned int v18; // eax
  unsigned int WSyncFlags; // edx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned int PnPCapabilities; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 ifDeviceWakeUpEnable; // r8
  _NDIS_IF_BLOCK *v31; // rcx
  void *v32; // rcx
  unsigned int v33; // r12d
  struct _NDIS_MINIPORT_BLOCK *v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // esi
  int v37; // eax
  int Status; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-ACh]
  PVOID P; // [rsp+58h] [rbp-A8h]
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-A0h] BYREF
  void *v43; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Keyword; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v49[248]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v50; // [rsp+1B0h] [rbp+B0h] BYREF
  int v51; // [rsp+1B8h] [rbp+B8h]
  _NDIS_PNP_CAPABILITIES *p_PMCapabilities61; // [rsp+1C0h] [rbp+C0h]
  int v53; // [rsp+1C8h] [rbp+C8h]

  v46 = 0LL;
  v43 = 0LL;
  v2 = 0;
  ConfigurationHandle = 0LL;
  v40 = 0;
  Status = 0;
  *(_DWORD *)&Keyword.Length = 2097182;
  v44 = 0LL;
  v45 = 0LL;
  Keyword.Buffer = L"PnPCapabilities";
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_q(0x31u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
  {
    P = 0LL;
    v43 = 0LL;
LABEL_9:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths);
      v44 = (struct _NDIS_MINIPORT_BLOCK *)v45;
    }
LABEL_11:
    ndisWmiGetGuid(&v46, (__int64)a1, (_QWORD *)(a2 + 24), 0);
    v9 = v46;
    if ( !v46 )
    {
      if ( (unsigned __int8)byte_1C00A0261 < 2u )
      {
LABEL_15:
        InstanceName = -1073741811;
        goto LABEL_122;
      }
      v10 = (_WORD)v8 + 51;
LABEL_14:
      WPP_SF_q(v10, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
      goto LABEL_15;
    }
    v11 = *(_DWORD *)(v46 + 24);
    if ( (v11 & 0x40000000) != 0 )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 2u )
        WPP_SF_q(0x34u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
      InstanceName = -1073741637;
      goto LABEL_122;
    }
    v12 = *(_DWORD *)(a2 + 60);
    v13 = a2 + *(unsigned int *)(a2 + 56);
    if ( !v12 )
    {
      if ( (unsigned __int8)byte_1C00A0261 < 2u )
        goto LABEL_15;
      v10 = 53;
      goto LABEL_14;
    }
    if ( (v11 & 0x200) != 0 )
    {
      if ( v12 < 0x20 || *(_QWORD *)(v13 + 8) != a1->NetLuid.Value )
        goto LABEL_15;
      v2 = 32;
      v14 = *(PVOID *)(v13 + 16);
      Status = *(_DWORD *)(v13 + 4);
      v40 = *(_DWORD *)(v13 + 24);
    }
    else
    {
      v14 = ConfigurationHandle;
    }
    if ( P == v8 && (v11 & 0x20000000) != 0 )
    {
      InstanceName = 0;
      if ( v12 == 4 )
      {
        v40 = *(_DWORD *)v13;
        if ( v40 > 1 )
          goto LABEL_32;
      }
      v15 = *(_QWORD *)v46 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
      if ( *(_QWORD *)v46 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
        v15 = *(_QWORD *)(v46 + 8) - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
      if ( !v15 )
      {
        LOBYTE(v7) = *(_BYTE *)v13;
        InstanceName = ndisNDKHandleWmiChangeRequest(a1, v7);
        goto LABEL_124;
      }
      v16 = *(_QWORD *)v46 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
      if ( *(_QWORD *)v46 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
        v16 = *(_QWORD *)(v46 + 8) - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
      if ( !v16 )
      {
        PnPFlags = a1->PnPFlags;
        if ( (PnPFlags & 0x8001) == 1 && !a1->AoAc )
        {
          v18 = a1->PnPCapabilities & 0xEFFFFFFF;
          a1->PnPCapabilities = v18;
          if ( *(_BYTE *)v13 )
          {
            WSyncFlags = a1->WSyncFlags;
            if ( (WSyncFlags & 0x10) == 0 )
              a1->PnPFlags = PnPFlags | 0x20;
            a1->PnPCapabilities = v18 & 0xFFFFFFF7;
            if ( (WSyncFlags & 8) == 0 )
              goto LABEL_79;
            a1->PMCurrentParameters.WakeUpFlags |= 1u;
            if ( a1->MediaConnectState == MediaConnectStateDisconnected )
              ndisSetMediaDisconnectTimer((__int64)a1);
          }
          else
          {
            a1->PMCurrentParameters.WakeUpFlags &= ~1u;
            a1->PnPFlags = PnPFlags & 0xFFFFFFDF;
            a1->PnPCapabilities = v18 | 0x18;
            ndisCancelMediaDisconnectTimer((__int64)a1);
            if ( a1->CurrentDevicePowerState != PowerDeviceD0
              && (a1->Flags & 0x20000000) == 0
              && (a1->WSyncFlags & 8) != 0 )
            {
              if ( (unsigned __int8)byte_1C00A025D >= 4u )
                WPP_SF_q(0x36u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
              InstanceName = ndisWakeUpDevice((__int64)a1);
            }
          }
          ndisMiniportPMParametersUpdated((__int64)a1);
          goto LABEL_78;
        }
        goto LABEL_77;
      }
      v20 = *(_QWORD *)v46 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
      if ( *(_QWORD *)v46 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
        v20 = *(_QWORD *)(v46 + 8) - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
      if ( v20 )
      {
        v23 = *(_QWORD *)v46 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
        if ( *(_QWORD *)v46 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
          v23 = *(_QWORD *)(v46 + 8) - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
        if ( v23 )
        {
          v27 = *(_QWORD *)v46 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
          if ( *(_QWORD *)v46 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
            v27 = *(_QWORD *)(v46 + 8) - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
          if ( !v27 )
          {
            InstanceName = ndisWmiSetPMAdminConfig(a1, v13);
            goto LABEL_78;
          }
          if ( (unsigned __int8)byte_1C00A0261 >= 2u )
            WPP_SF_q(0x37u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
LABEL_77:
          InstanceName = -1073741808;
LABEL_78:
          if ( InstanceName < 0 )
          {
LABEL_124:
            if ( v44 )
              ndisDereferenceMiniport((__int64)v44, 0x5Fu);
            goto LABEL_126;
          }
LABEL_79:
          ndisUpdateAndIndicatePMCapabilities((__int64)a1);
          NdisOpenConfiguration(&Status, &ConfigurationHandle, a1->ConfigurationHandle);
          if ( Status >= 0 )
          {
            PnPCapabilities = a1->PnPCapabilities;
            ParameterValue.ParameterType = NdisParameterInteger;
            ParameterValue.ParameterData.IntegerData = PnPCapabilities;
            NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
            NdisCloseConfiguration(ConfigurationHandle);
          }
          ndisInitializeNetPnPEvent(&v50, 0LL);
          v51 = 7;
          p_PMCapabilities61 = &a1->PMCapabilities61;
          v53 = 4;
          ndisPnPNotifyAllTransports(a1);
          if ( ndisMReferenceIfBlock((__int64)a1, 0x10u) )
          {
            IfBlock = a1->IfBlock;
            ifDeviceWakeUpEnable = IfBlock->ifDeviceWakeUpEnable;
            IfBlock->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
            v31 = a1->IfBlock;
            if ( ifDeviceWakeUpEnable != v31->ifDeviceWakeUpEnable )
              ndisNsiScheduleIfBlockRodChangeNotification((__int64)v31, (__int64)&v31->ifDeviceWakeUpEnable, 1, 641);
            ndisMDereferenceIfBlock((__int64)a1, MPIFREF_WMI);
          }
          goto LABEL_122;
        }
        if ( (a1->PnPFlags & 0x4000001) == 0x4000001
          && (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
        {
          v24 = a1->PnPCapabilities & 0xEFFFFFFF;
          a1->PnPCapabilities = v24;
          v25 = v24 & 0xFFFFFEFF;
          v26 = v24 | 0x100;
          if ( !*(_BYTE *)v13 )
            v26 = v25;
          a1->PnPCapabilities = v26;
          goto LABEL_79;
        }
      }
      else
      {
        v21 = a1->PnPFlags;
        if ( (v21 & 0x4000001) == 0x4000001 && !a1->AoAc )
        {
          v22 = a1->PnPCapabilities & 0xEFFFFFFF;
          a1->PnPCapabilities = v22;
          if ( *(_BYTE *)v13 )
          {
            a1->PnPFlags = v21 | 0x40;
            a1->PnPCapabilities = v22 & 0xFFFFFFEF;
          }
          else
          {
            a1->PnPFlags = v21 & 0xFFFFFFBF;
            a1->PnPCapabilities = v22 | 0x10;
            ndisCancelWaitWake((__int64)a1);
          }
          goto LABEL_79;
        }
      }
LABEL_32:
      InstanceName = -1073741808;
      goto LABEL_124;
    }
    if ( (v11 & 1) == 0 )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 2u )
        WPP_SF_q(0x38u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
      goto LABEL_88;
    }
    if ( *(_DWORD *)(v46 + 16) == 66076 && (v12 != 4 || (*(_DWORD *)v13 & 0xFFFFF000) != 0) )
    {
LABEL_88:
      InstanceName = -1073741808;
      goto LABEL_122;
    }
    memset(v49, 0, sizeof(v49));
    *(_DWORD *)&v49[88] |= 8u;
    v32 = &ndisIntReqWmi;
    v33 = v12 - v2;
    *(_QWORD *)&v49[104] = &ndisIntReqWmi;
    *(_DWORD *)v49 = 15466902;
    *(_DWORD *)&v49[32] = *(_DWORD *)(v46 + 16);
    *(_DWORD *)&v49[8] = Status;
    *(_DWORD *)&v49[4] = 1;
    *(_QWORD *)&v49[40] = v13 + v2;
    if ( !v14 )
      v32 = *(void **)&v49[24];
    *(_DWORD *)&v49[12] = v40;
    *(_DWORD *)&v49[48] = v33;
    *(_QWORD *)&v49[16] = v14;
    *(_QWORD *)&v49[24] = v32;
    if ( P || (v34 = v44) == 0LL )
      v34 = a1;
    Status = ndisQuerySetMiniport(v34, P, (struct _NDIS_OID_REQUEST *)v49, 0LL, 0LL);
    v36 = Status;
    if ( Status == -1071448017 )
    {
      if ( (*(_DWORD *)(v9 + 24) & 0x200) != 0 )
        goto LABEL_101;
      v36 = 0;
      Status = 0;
    }
    if ( !v36 )
    {
      InstanceName = 0;
      goto LABEL_122;
    }
LABEL_101:
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0x39u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
    if ( (byte_1C00A2081 & 0x10) != 0 )
      McTemplateK0jqxqdq(
        v35,
        &ChangeInformationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v36,
        144,
        0);
    if ( (*(_DWORD *)(v9 + 24) & 0x200) != 0 )
    {
      if ( (v36 & 0xC0010000) == 0xC0010000 )
      {
        v36 = (unsigned __int16)v36 | 0xC0230000;
        Status = v36;
      }
    }
    else if ( v36 != 259 && v36 != -2147483643 )
    {
      v37 = -1073741823;
      if ( v36 != -1073741823 && v36 != -1073741670 && v36 != -1073741637 )
      {
        if ( v36 == -1073676266 )
        {
          InstanceName = -1073741789;
        }
        else if ( v36 == -1073676268 )
        {
          InstanceName = -1073741306;
        }
        else
        {
          if ( v36 == -1073676267 )
            v37 = -1073741811;
          InstanceName = v37;
        }
        goto LABEL_122;
      }
    }
    InstanceName = v36;
LABEL_122:
    if ( P )
      ndisDereferenceVcPtr(P);
    goto LABEL_124;
  }
  InstanceName = ndisWmiFindInstanceName(
                   &v43,
                   a1,
                   *(unsigned int *)(a2 + 48) + a2 + 2,
                   *(unsigned __int16 *)(*(unsigned int *)(a2 + 48) + a2));
  if ( InstanceName >= 0 )
  {
    P = v43;
    if ( v43 )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( (unsigned __int8)byte_1C00A0261 >= 2u )
    WPP_SF_q(0x32u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
LABEL_126:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qD(0x3Au, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1, InstanceName);
  return (unsigned int)InstanceName;
}
