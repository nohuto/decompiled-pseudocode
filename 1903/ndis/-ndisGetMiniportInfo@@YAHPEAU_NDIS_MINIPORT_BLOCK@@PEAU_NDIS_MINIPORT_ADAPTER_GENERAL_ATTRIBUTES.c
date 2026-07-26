/*
 * XREFs of ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00962E8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisQueryDeviceOid @ 0x1C00121B0 (ndisQueryDeviceOid.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 *     ndisQueryOidList @ 0x1C00339D4 (ndisQueryOidList.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C0037FBC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 *     McTemplateK0jqxb6 @ 0x1C0097C60 (McTemplateK0jqxb6.c)
 *     WPP_RECORDER_SF_qDDDDDD @ 0x1C0098E58 (WPP_RECORDER_SF_qDDDDDD.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00AAF48 (ndisGetMiniportOffloadCapability.c)
 *     ndisMDoMiniportOp @ 0x1C0108AA8 (ndisMDoMiniportOp.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C0117134 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisGetMiniportInfo(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2,
        int *a3,
        unsigned __int8 *a4,
        int *a5)
{
  unsigned int v7; // r12d
  char v8; // r13
  int v9; // edx
  unsigned int *p_DriverVersion; // r9
  int v11; // eax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  _NDIS_MEDIUM MediaType; // ecx
  _BYTE *v14; // rdx
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rcx
  int v25; // eax
  int v26; // edx
  __int64 v27; // rcx
  char v28; // si
  unsigned int v29; // ecx
  unsigned __int16 v30; // ax
  _NDIS_MEDIUM v31; // eax
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // r14d
  unsigned int *PoolWithTag; // rax
  unsigned int *v36; // r15
  NDIS_STATUS v37; // eax
  PVOID v38; // r14
  unsigned __int16 Length; // cx
  int ParameterType; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int Status[2]; // [rsp+68h] [rbp-98h] BYREF
  PVOID ConfigurationHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING Keyword; // [rsp+90h] [rbp-70h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp-60h] BYREF
  int *v48; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v49; // [rsp+B0h] [rbp-50h]
  _OWORD v50[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _NDIS_PNP_CAPABILITIES v51; // [rsp+D8h] [rbp-28h] BYREF
  SIZE_T v52[32]; // [rsp+F0h] [rbp-10h] BYREF

  v48 = a3;
  v49 = a4;
  *(_QWORD *)Status = a5;
  v7 = -1073741823;
  v8 = 0;
  memset(v50, 0, sizeof(v50));
  *(_QWORD *)&Keyword.Length = 1048590LL;
  Keyword.Buffer = L"*IfType";
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  ConfigurationHandle = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      13,
      164,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  }
  *a5 = 1;
  p_DriverVersion = &a1->DriverHandle->DriverVersion;
  if ( !*p_DriverVersion )
  {
    LOBYTE(v9) = 1;
    v11 = ndisMDoMiniportOp((_DWORD)a1, v9, 65814, (_DWORD)p_DriverVersion, 4, 1, 1);
    DriverHandle = a1->DriverHandle;
    ndisWriteDriverNDISVersionToServiceKey(
      DriverHandle->MajorNdisVersion,
      DriverHandle->MinorNdisVersion,
      v11 == 0,
      HIWORD(DriverHandle->DriverVersion),
      (unsigned __int16)DriverHandle->DriverVersion,
      (__int64)&DriverHandle->ServiceName);
  }
  MediaType = a1->MediaType;
  LODWORD(v14) = 6;
  if ( MediaType == NdisMedium802_3 )
  {
    a2->IfType = 6;
    *(_QWORD *)&a2->AccessType = 2LL;
LABEL_26:
    a2->SupportedPacketFilters = 47;
    goto LABEL_27;
  }
  v15 = MediaType - 3;
  if ( !v15 )
  {
    a2->IfType = 23;
    goto LABEL_24;
  }
  v16 = v15 - 5;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 )
    {
      a2->IfType = 1;
      *(_QWORD *)&a2->AccessType = 3LL;
      a2->ConnectionType = NET_IF_CONNECTION_DEMAND;
      a2->SupportedPacketFilters = 47;
      goto LABEL_28;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 3;
          if ( v21 )
          {
            *(_QWORD *)&a2->AccessType = 2LL;
            a2->ConnectionType = NET_IF_CONNECTION_DEDICATED;
            a2->SupportedPacketFilters = 47;
            if ( v21 == 1 )
              a2->IfType = 71;
            else
              a2->IfType = 1;
            goto LABEL_28;
          }
          *(_QWORD *)&a2->AccessType = 3LL;
          a2->IfType = 131;
          goto LABEL_26;
        }
        a2->IfType = 1;
LABEL_24:
        *(_QWORD *)&a2->AccessType = 3LL;
        a2->ConnectionType = NET_IF_CONNECTION_DEMAND;
        a2->SupportedPacketFilters = 1;
        goto LABEL_28;
      }
      a2->AccessType = NET_IF_ACCESS_POINT_TO_POINT;
      a2->DirectionType = NET_IF_DIRECTION_RECEIVEONLY;
    }
    else
    {
      *(_QWORD *)&a2->AccessType = 3LL;
    }
    a2->IfType = 1;
    a2->SupportedPacketFilters = 1;
  }
  else
  {
    *(_QWORD *)&a2->AccessType = 4LL;
    a2->IfType = 37;
    a2->SupportedPacketFilters = 39;
  }
LABEL_27:
  a2->ConnectionType = NET_IF_CONNECTION_DEDICATED;
LABEL_28:
  v22 = a1->MediaType;
  if ( (int)v22 >= 0 && ((int)v22 >= 20 || (_DWORD)v22 != 3 && ndisMediaTypeCl[v22]) )
  {
    LOBYTE(v14) = 1;
    v23 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 65797, (int)a2 + 64, 4, 1, 1);
    if ( v23 )
    {
      if ( a1->MediaType < NdisMediumMax )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v14,
            13,
            165,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids);
        }
        if ( (byte_1C00E8043 & 0x10) != 0 )
          McTemplateK0jqxqqq(
            16LL,
            &OidQueryFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            5,
            v23,
            1);
        goto LABEL_110;
      }
      a2->LookaheadSize = 0;
    }
  }
  LOBYTE(v14) = 1;
  ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 65798, (_DWORD)a2 + 16, 4, 1, 1);
  v24 = a1->MediaType;
  if ( (unsigned int)v24 <= 0x13 && (v14 = ndisMediaTypeCl, ndisMediaTypeCl[v24]) || (_DWORD)v24 == 3 )
  {
    LOBYTE(v14) = 1;
    v23 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 65811, (int)a2 + 80, 4, 3, 1);
    if ( v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v14,
          13,
          166,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1);
      }
      if ( (byte_1C00E8043 & 0x10) != 0 )
        McTemplateK0jqxqqq(
          16LL,
          &OidQueryFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          19,
          v23,
          2);
      goto LABEL_110;
    }
  }
  if ( (a1->SendFlags & 1) != 0 )
  {
    v42 = 16;
    LOBYTE(v14) = 1;
    v25 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 65813, (unsigned int)&v42, 4, 2, 1);
    v28 = v25;
    if ( v25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v26,
          13,
          167,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1);
      }
      LODWORD(v14) = 16;
      if ( (byte_1C00E8043 & 0x10) != 0 )
      {
        McTemplateK0jqxqqq(
          v27,
          &OidQueryFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          21,
          v28,
          3);
        LODWORD(v14) = 16;
      }
      v29 = 16;
      v42 = 16;
    }
    else
    {
      v29 = v42;
      LODWORD(v14) = 16;
    }
    v30 = 16;
    if ( v29 < 0x10 )
      v30 = v29;
    a1->MaxSendPackets = v30;
  }
  v31 = a1->MediaType;
  if ( v31 == NdisMedium802_3 )
  {
    LOBYTE(v14) = 1;
    v23 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 16843012, (int)a2 + 88, 4, 7, 1);
    if ( v23 )
    {
      v8 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v14,
          13,
          168,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1);
      }
      if ( (byte_1C00E8043 & 0x10) != 0 )
        McTemplateK0jqxqqq(
          16LL,
          &OidQueryFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          4,
          v23,
          4);
    }
    else
    {
      a2->MacAddressLength = 6;
      LOBYTE(v14) = 1;
      v23 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 16843010, (int)a2 + 126, 6, 9, 1);
      if ( v23 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v14,
            13,
            169,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            (char)a1);
        }
        if ( (byte_1C00E8043 & 0x10) != 0 )
          McTemplateK0jqxqqq(
            16LL,
            &OidQueryFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            2,
            v23,
            5);
        v8 = 1;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDDDDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2->CurrentMacAddress[3],
            a2->CurrentMacAddress[2],
            a2->CurrentMacAddress[1],
            ParameterType,
            (char)a1,
            a2->CurrentMacAddress[0],
            a2->CurrentMacAddress[1],
            a2->CurrentMacAddress[2],
            a2->CurrentMacAddress[3],
            a2->CurrentMacAddress[4],
            a2->CurrentMacAddress[5]);
        if ( Microsoft_Windows_NDISEnableBits < 0 )
          McTemplateK0jqxb6(
            v32,
            (_DWORD)v14,
            (_DWORD)a1 + 4008,
            (_DWORD)a1 + 4008,
            a1->IfIndex,
            a1->NetLuid.Value,
            (__int64)a2->CurrentMacAddress);
        LOBYTE(v14) = 1;
        v23 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 16843009, (int)a2 + 94, a2->MacAddressLength, 9, 1);
        if ( v23 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v14,
              13,
              171,
              (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
              (char)a1);
          }
          if ( (byte_1C00E8043 & 0x10) != 0 )
            McTemplateK0jqxqqq(
              16LL,
              &OidQueryFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              1,
              v23,
              6);
LABEL_87:
          v8 = 1;
          goto LABEL_93;
        }
        LOBYTE(v14) = 1;
        v23 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 66050, (int)a2 + 12, 4, 10, 1);
        if ( v23 )
        {
          v23 = 0;
          a2->PhysicalMediumType = NdisPhysicalMediumUnspecified;
        }
        else if ( a2->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
        {
          a2->IfType = 71;
        }
        ndisGetMiniportOffloadCapability((char)a1);
      }
    }
LABEL_93:
    if ( v23 )
      goto LABEL_110;
    goto LABEL_94;
  }
  if ( v31 == NdisMediumWan )
  {
    a2->MacAddressLength = 6;
    LOBYTE(v14) = 1;
    v23 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, 67174658, (int)a2 + 126, 6, 23, 1);
    if ( !v23 )
    {
      *(_DWORD *)a2->PermanentMacAddress = *(_DWORD *)a2->CurrentMacAddress;
      *(_WORD *)&a2->PermanentMacAddress[4] = *(_WORD *)&a2->CurrentMacAddress[4];
      goto LABEL_94;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v14,
        13,
        172,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        (char)a1);
    }
    if ( (byte_1C00E8043 & 0x10) != 0 )
      McTemplateK0jqxqqq(
        16LL,
        &OidQueryFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        2,
        v23,
        7);
    goto LABEL_87;
  }
  v23 = 0;
LABEL_94:
  if ( ((a1->PnPFlags & 0x8001) != 0 || (a1->DriverHandle->Flags & 1) != 0)
    && a1->MediaType <= (unsigned int)NdisMediumIP )
  {
    *(_QWORD *)&v51.Flags = 0LL;
    *(_QWORD *)&v51.WakeUpCapabilities.MinPatternWakeUp = 0LL;
    LOBYTE(v14) = 1;
    v33 = ndisMDoMiniportOp((_DWORD)a1, (_DWORD)v14, -50265856, (unsigned int)&v51, 16, 25, 0);
    **(_DWORD **)Status = v33;
    if ( !v33 )
      ndisConvertPnpCapabilitiesToPM(&v51, a2->PowerManagementCapabilitiesEx);
  }
  a2->IfConnectorPresent = (a1->PnPFlags & 0x200000) != 0;
  *(_QWORD *)&a2->MediaConnectState = 1LL;
  a2->MaxXmitLinkSpeed = 0x40000000LL;
  a2->XmitLinkSpeed = 0x40000000LL;
  a2->MaxRcvLinkSpeed = 0x40000000LL;
  a2->RcvLinkSpeed = 0x40000000LL;
  *(_QWORD *)&v50[0] = 0LL;
  v50[1] = 0LL;
  *((_QWORD *)&v50[0] + 1) = a1;
  memset(v52, 0, 0xF8uLL);
  if ( (((unsigned int)ndisQueryDeviceOid((__int64)v50, v52, 65793, 0LL, 0) + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    v34 = v52[7];
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, LODWORD(v52[7]), 0x2020444Eu);
    v36 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned int)ndisQueryDeviceOid((__int64)v50, v52, 65793, (__int64)PoolWithTag, v34) )
      {
        a1->SupportedOidList = v36;
        a1->SupportedOidListLength = v34;
      }
    }
  }
  ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)v50);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v37 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v38 = ConfigurationHandle;
  v7 = v37;
  Status[0] = v37;
  if ( !v37 )
  {
    NdisReadConfiguration(Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    v7 = Status[0];
    if ( !Status[0] )
    {
      LODWORD(v14) = 1;
      Length = ParameterValue->ParameterData.StringData.Length;
      if ( Length != 1 )
        a2->IfType = Length;
      v7 = 0;
    }
  }
  if ( v38 )
    NdisCloseConfiguration(v38);
LABEL_110:
  *v48 = v23;
  *v49 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v14,
      13,
      173,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v7);
  }
  return v7;
}
