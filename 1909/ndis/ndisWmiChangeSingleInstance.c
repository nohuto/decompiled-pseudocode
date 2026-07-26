/*
 * XREFs of ndisWmiChangeSingleInstance @ 0x1C00A851C
 * Callers:
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 *     NdisWdfChangeSingleInstance @ 0x1C009EC60 (NdisWdfChangeSingleInstance.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001B148 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001CA48 (ndisCancelMediaDisconnectTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001CB1C (ndisSetMediaDisconnectTimer.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C001E30C (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ndisWmiGetGuid @ 0x1C002806C (ndisWmiGetGuid.c)
 *     NdisWriteConfiguration @ 0x1C002A770 (NdisWriteConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C002B160 (NdisOpenConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C00774F8 (ndisUpdateAndIndicatePMCapabilities.c)
 *     ndisWakeUpDevice @ 0x1C0077690 (ndisWakeUpDevice.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00777F4 (ndisWmiSetPMAdminConfig.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C0119D6C (ndisNDKHandleWmiChangeRequest.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  struct _NDIS_CO_VC_PTR_BLOCK *v6; // rbx
  int v7; // r13d
  unsigned int v8; // r15d
  __int64 v9; // r12
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  char v23; // r9
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  int v32; // edx
  __int64 v33; // rax
  void *v34; // rcx
  int v35; // edx
  int v36; // r10d
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // esi
  int v40; // eax
  int v41; // edx
  int Status; // [rsp+50h] [rbp-B0h] BYREF
  char v44[8]; // [rsp+58h] [rbp-A8h]
  struct _NDIS_CO_VC_PTR_BLOCK *v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp-88h] BYREF
  char v49[8]; // [rsp+80h] [rbp-80h]
  UNICODE_STRING Keyword; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+98h] [rbp-68h]
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp-60h] BYREF
  char v53[256]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v54[22]; // [rsp+1C0h] [rbp+C0h] BYREF

  v47 = a2;
  v4 = a2;
  memset(v53, 0, 0xF8uLL);
  *(_QWORD *)&Keyword.Length = 2097182LL;
  v6 = 0LL;
  *(_QWORD *)v44 = 0LL;
  Status = 0;
  v46 = 0LL;
  v7 = 0;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  v8 = 0;
  v9 = 0LL;
  *(_QWORD *)v49 = 0LL;
  Keyword.Buffer = L"PnPCapabilities";
  v45 = 0LL;
  memset(v54, 0, sizeof(v54));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      18,
      49,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      a1);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a3 + 44) & 0x80u) != 0 )
    goto LABEL_8;
  LODWORD(v6) = ndisWmiFindInstanceName(
                  &v45,
                  (struct _NDIS_MINIPORT_BLOCK *)a1,
                  (wchar_t *)(*(unsigned int *)(a3 + 48) + a3 + 2),
                  *(_WORD *)(*(unsigned int *)(a3 + 48) + a3));
  if ( (int)v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        18,
        50,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        a1);
    }
    goto LABEL_132;
  }
  v6 = v45;
  *(_QWORD *)v49 = v45;
  if ( !v45 )
  {
LABEL_8:
    v14 = *(_QWORD *)(a1 + 3768);
    if ( v14 )
    {
      ndisReferenceMiniportByName(v14 + 8);
      *(_QWORD *)v44 = v46;
    }
  }
  if ( !v4 )
  {
    ndisWmiGetGuid(&v47, a1, (_QWORD *)(a3 + 24), 0);
    v4 = v47;
    if ( !v47 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_15:
        LODWORD(v6) = -1073741811;
        goto LABEL_128;
      }
      v15 = v47 + 51;
LABEL_14:
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        18,
        v15,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        a1);
      goto LABEL_15;
    }
  }
  v16 = *(_DWORD *)(v4 + 24);
  if ( (v16 & 0x40000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        18,
        52,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        a1);
    }
    LODWORD(v6) = -1073741637;
    goto LABEL_128;
  }
  v11 = *(unsigned int *)(a3 + 60);
  v12 = a3 + *(unsigned int *)(a3 + 56);
  if ( !(_DWORD)v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v15 = 53;
    goto LABEL_14;
  }
  if ( (v16 & 0x200) != 0 )
  {
    if ( (unsigned int)v11 < 0x20 || *(_QWORD *)(v12 + 8) != *(_QWORD *)(a1 + 4024) )
    {
      LODWORD(v6) = -1073741811;
      goto LABEL_128;
    }
    v7 = *(_DWORD *)(v12 + 4);
    v8 = 32;
    v9 = *(_QWORD *)(v12 + 16);
    v13 = *(unsigned int *)(v12 + 24);
  }
  else
  {
    v13 = (unsigned int)Status;
  }
  if ( v6 || (v16 & 0x20000000) == 0 )
  {
    if ( (v16 & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          18,
          56,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          a1);
      }
      LODWORD(v6) = -1073741808;
      goto LABEL_128;
    }
    if ( *(_DWORD *)(v4 + 16) == 66076 && ((_DWORD)v11 != 4 || (*(_DWORD *)v12 & 0xFFFFF000) != 0) )
    {
      LODWORD(v6) = -1073741808;
      goto LABEL_128;
    }
    *(_DWORD *)&v53[88] |= 8u;
    v34 = &ndisIntReqWmi;
    v35 = v11 - v8;
    *(_QWORD *)&v53[104] = &ndisIntReqWmi;
    *(_DWORD *)v53 = 15466902;
    v36 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)&v53[32] = v36;
    if ( !v9 )
      v34 = *(void **)&v53[24];
    *(_QWORD *)&v53[24] = v34;
    *(_DWORD *)&v53[4] = 1;
    *(_DWORD *)&v53[8] = v7;
    *(_QWORD *)&v53[40] = v12 + v8;
    *(_DWORD *)&v53[48] = v35;
    *(_QWORD *)&v53[16] = v9;
    *(_DWORD *)&v53[12] = v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v35) = 4;
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v35,
        v12,
        57,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)v53,
        v36,
        a1);
    }
    if ( v6 || (v37 = *(_QWORD *)v44) == 0 )
      v37 = a1;
    Status = ndisQuerySetMiniportEx(v37, v6, (__int64)v53, 0, 0LL, 0LL);
    v39 = Status;
    if ( Status == -1071448017 )
    {
      if ( (*(_DWORD *)(v4 + 24) & 0x200) != 0 )
      {
LABEL_107:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v11,
            18,
            58,
            (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
            a1);
        }
        if ( (byte_1C00E8081 & 0x10) != 0 )
          McTemplateK0jqxqqq(
            v38,
            &ChangeInformationFailed,
            (const GUID *)(a1 + 4008),
            a1 + 4008,
            *(_DWORD *)(a1 + 4056),
            *(_QWORD *)(a1 + 4024),
            v39,
            1,
            0);
        if ( (*(_DWORD *)(v4 + 24) & 0x200) != 0 )
        {
          if ( (v39 & 0xC0010000) == 0xC0010000 )
          {
            v39 = (unsigned __int16)v39 | 0xC0230000;
            Status = v39;
          }
        }
        else if ( v39 != 259 && v39 != -2147483643 )
        {
          v40 = -1073741823;
          if ( v39 != -1073741823 && v39 != -1073741670 && v39 != -1073741637 )
          {
            if ( v39 == -1073676266 )
            {
              LODWORD(v6) = -1073741789;
            }
            else if ( v39 == -1073676268 )
            {
              LODWORD(v6) = -1073741306;
            }
            else
            {
              if ( v39 == -1073676267 )
                v40 = -1073741811;
              LODWORD(v6) = v40;
            }
            goto LABEL_128;
          }
        }
        LODWORD(v6) = v39;
LABEL_128:
        if ( *(_QWORD *)v49 )
          ndisDereferenceVcPtr(*(__int64 **)v49, v11, v12, v13);
        goto LABEL_130;
      }
      v39 = 0;
      Status = 0;
    }
    if ( !v39 )
    {
      LODWORD(v6) = 0;
      goto LABEL_128;
    }
    goto LABEL_107;
  }
  if ( (_DWORD)v11 == 4 )
  {
    v51 = *(_DWORD *)v12;
    if ( v51 > 1 )
      goto LABEL_34;
  }
  v17 = *(_QWORD *)v4 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
  if ( *(_QWORD *)v4 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
    v17 = *(_QWORD *)(v4 + 8) - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
  if ( !v17 )
  {
    LOBYTE(v11) = *(_BYTE *)v12;
    LODWORD(v6) = ndisNDKHandleWmiChangeRequest(a1, v11);
    goto LABEL_130;
  }
  v18 = *(_QWORD *)v4 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
  if ( *(_QWORD *)v4 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
    v18 = *(_QWORD *)(v4 + 8) - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
  if ( !v18 )
  {
    v19 = *(_DWORD *)(a1 + 124);
    if ( (v19 & 0x8001) == 1 && !*(_QWORD *)(a1 + 4456) )
    {
      v20 = *(_DWORD *)(a1 + 3864) & 0xEFFFFFFF;
      *(_DWORD *)(a1 + 3864) = v20;
      if ( *(_BYTE *)v12 )
      {
        v21 = *(_DWORD *)(a1 + 4420);
        if ( (v21 & 0x10) == 0 )
          *(_DWORD *)(a1 + 124) = v19 | 0x20;
        *(_DWORD *)(a1 + 3864) = v20 & 0xFFFFFFF7;
        if ( (v21 & 8) != 0 )
        {
          *(_DWORD *)(a1 + 1132) |= 1u;
          if ( *(_DWORD *)(a1 + 480) == 2 )
            ndisSetMediaDisconnectTimer(a1);
        }
        goto LABEL_51;
      }
      *(_DWORD *)(a1 + 1132) &= ~1u;
      *(_DWORD *)(a1 + 124) = v19 & 0xFFFFFFDF;
      *(_DWORD *)(a1 + 3864) = v20 | 0x18;
      ndisCancelMediaDisconnectTimer(a1);
      if ( *(_DWORD *)(a1 + 3868) == 1 || (*(_DWORD *)(a1 + 120) & 0x20000000) != 0 || (*(_DWORD *)(a1 + 4420) & 8) == 0 )
      {
LABEL_51:
        ndisUpdateAndIndicatePMCapabilities(a1);
        NdisOpenConfiguration(&Status, &ConfigurationHandle, *(NDIS_HANDLE *)(a1 + 4000));
        if ( Status >= 0 )
        {
          ParameterValue.ParameterData.IntegerData = *(_DWORD *)(a1 + 3864);
          NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
          NdisCloseConfiguration(ConfigurationHandle);
        }
        ndisInitializeNetPnPEvent(v54, 0LL);
        LODWORD(v54[1]) = 7;
        v54[2] = a1 + 984;
        LODWORD(v54[3]) = 4;
        ndisPnPNotifyAllTransports(a1);
        if ( ndisMReferenceIfBlock(a1, 0x10u) )
        {
          v22 = *(_QWORD *)(a1 + 4040);
          v23 = *(_BYTE *)(v22 + 1217);
          *(_BYTE *)(v22 + 1217) = *(_BYTE *)(a1 + 984) & 1;
          v24 = *(_QWORD *)(a1 + 4040);
          if ( v23 != *(_BYTE *)(v24 + 1217) )
            ndisNsiScheduleIfBlockRodChangeNotification(v24, v24 + 1217, 1, 641);
          ndisMDereferenceIfBlock(a1, MPIFREF_WMI);
        }
        goto LABEL_128;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v25,
          14,
          54,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          a1);
      }
      LODWORD(v6) = ndisWakeUpDevice(a1);
LABEL_64:
      if ( (int)v6 < 0 )
        goto LABEL_130;
      goto LABEL_51;
    }
    goto LABEL_63;
  }
  v26 = *(_QWORD *)v4 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
  if ( *(_QWORD *)v4 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
    v26 = *(_QWORD *)(v4 + 8) - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
  if ( v26 )
  {
    v29 = *(_QWORD *)v4 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
    if ( *(_QWORD *)v4 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
      v29 = *(_QWORD *)(v4 + 8) - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
    if ( v29 )
    {
      v33 = *(_QWORD *)v4 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
      if ( *(_QWORD *)v4 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
        v33 = *(_QWORD *)(v4 + 8) - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
      if ( !v33 )
      {
        LODWORD(v6) = ndisWmiSetPMAdminConfig((_DWORD *)a1, v12);
        goto LABEL_64;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          18,
          55,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          a1);
      }
LABEL_63:
      LODWORD(v6) = -1073741808;
      goto LABEL_64;
    }
    if ( (*(_DWORD *)(a1 + 124) & 0x4000001) == 0x4000001 && (unsigned int)(*(_DWORD *)(a1 + 1040) - 2) <= 2 )
    {
      v30 = *(_DWORD *)(a1 + 3864) & 0xEFFFFFFF;
      *(_DWORD *)(a1 + 3864) = v30;
      v31 = v30 & 0xFFFFFEFF;
      v32 = v30 | 0x100;
      if ( !*(_BYTE *)v12 )
        v32 = v31;
      *(_DWORD *)(a1 + 3864) = v32;
      goto LABEL_51;
    }
  }
  else
  {
    v27 = *(_DWORD *)(a1 + 124);
    if ( (v27 & 0x4000001) == 0x4000001 && !*(_QWORD *)(a1 + 4456) )
    {
      v28 = *(_DWORD *)(a1 + 3864) & 0xEFFFFFFF;
      *(_DWORD *)(a1 + 3864) = v28;
      if ( *(_BYTE *)v12 )
      {
        *(_DWORD *)(a1 + 124) = v27 | 0x40;
        *(_DWORD *)(a1 + 3864) = v28 & 0xFFFFFFEF;
      }
      else
      {
        *(_DWORD *)(a1 + 124) = v27 & 0xFFFFFFBF;
        *(_DWORD *)(a1 + 3864) = v28 | 0x10;
        ndisCancelWaitWake(a1);
      }
      goto LABEL_51;
    }
  }
LABEL_34:
  LODWORD(v6) = -1073741808;
LABEL_130:
  if ( *(_QWORD *)v44 )
    ndisDereferenceMiniport(*(__int64 *)v44, 0x5Fu);
LABEL_132:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v41) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v41,
      18,
      59,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      a1,
      (char)v6);
  }
  return (unsigned int)v6;
}
