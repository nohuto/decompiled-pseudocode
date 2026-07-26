/*
 * XREFs of ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     ndisGetTimeInterval @ 0x1C0013CF0 (ndisGetTimeInterval.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C00A6248 (ndisWdmSendOidPmParametersForSx.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00FC6F0 (ndisMInvokeDevicePowerNotify.c)
 */

__int64 __fastcall ndisMPowerPolicy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _DEVICE_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3,
        enum _DEVICE_POWER_STATE *a4,
        unsigned __int8 a5)
{
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // edi
  __int64 v6; // rsi
  enum _DEVICE_POWER_STATE v10; // r14d
  __int64 EnabledWoLPacketPatterns; // rcx
  int v12; // r9d
  int v14; // r9d
  const EVENT_DESCRIPTOR *v15; // rdx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  int v17; // ecx
  unsigned int v18; // edi
  unsigned int PnPFlags; // eax
  int v20; // edx
  __int64 v21; // rcx
  char v22; // [rsp+28h] [rbp-D8h]
  char v23; // [rsp+30h] [rbp-D0h]
  unsigned int v24; // [rsp+40h] [rbp-C0h]
  _QWORD v25[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[20]; // [rsp+150h] [rbp+50h] BYREF

  MinMagicPacketWakeUp = NdisDeviceStateUnspecified;
  v6 = a2;
  v24 = 0;
  memset(v26, 0, sizeof(v26));
  v10 = PowerDeviceD3;
  EnabledWoLPacketPatterns = (__int64)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      128,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1,
      v23);
    EnabledWoLPacketPatterns = (__int64)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids;
  }
  if ( (_DWORD)v6 == 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        129,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    if ( byte_1C00E8083 < 0 )
      McTemplateK0jqxq(
        EnabledWoLPacketPatterns,
        &PowerShutdownMiniport,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
    *a4 = PowerDeviceD3;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v14 = 130;
LABEL_28:
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      v14,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
    return 0LL;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        131,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    if ( byte_1C00E8083 < 0 )
      McTemplateK0jqxq(
        EnabledWoLPacketPatterns,
        &PowerWakeUpDevice,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        2);
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x800u;
      a1->TotalSystemSleepTimeMs += ndisGetTimeInterval((_LARGE_INTEGER *)&a1->LastSystemSleepTime.QuadPart);
    }
    *a4 = PowerDeviceD0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v14 = 132;
    goto LABEL_28;
  }
  if ( !a5 )
  {
    a1->PnPFlags |= 0x800u;
    a1->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
  }
  if ( (a1->PnPFlags & 0x20) == 0 || !ndisIsMiniportStarted(a1) || a1->PnPDeviceState != NdisPnPDeviceStarted )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        133,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    if ( (byte_1C00E8081 & 8) != 0 )
      McTemplateK0jqxq(
        EnabledWoLPacketPatterns,
        &PowerPolicySetD3,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
    *a4 = PowerDeviceD3;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v22 = (char)a1;
    v12 = 134;
    goto LABEL_18;
  }
  if ( (unsigned int)(a1->CurrentDevicePowerState - 2) <= 2 )
  {
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x400u;
      ndisCancelWaitWake((__int64)a1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        135,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    return 2147483663LL;
  }
  if ( (_DWORD)v6 == 5 )
  {
    if ( a3 == PowerSystemShutdown )
    {
      if ( !a5 )
      {
        a1->PnPFlags &= ~0x400u;
        ndisCancelWaitWake((__int64)a1);
      }
      *a4 = PowerDeviceD3;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 136;
      goto LABEL_17;
    }
    if ( ndisAoAcCapable || ndisAoAcTest )
    {
      if ( !a5 )
      {
        a1->PnPFlags &= ~0x400u;
        ndisCancelWaitWake((__int64)a1);
      }
      *a4 = PowerDeviceD3;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 137;
LABEL_17:
      v22 = (char)a1;
LABEL_18:
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        v12,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v22);
      return 0LL;
    }
  }
  if ( (a1->PnPFlags & 0x40) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        138,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1,
        0);
    }
    if ( (byte_1C00E8081 & 8) != 0 )
    {
      v15 = (const EVENT_DESCRIPTOR *)&PowerWakeNotEnabled;
LABEL_53:
      McTemplateK0jqxq(
        EnabledWoLPacketPatterns,
        v15,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
      goto LABEL_107;
    }
    goto LABEL_107;
  }
  a2 = a1->DeviceCaps.DeviceState[v6];
  if ( (int)v6 >= 5 && ((int)v6 > a1->DeviceCaps.SystemWake || a2 > a1->DeviceCaps.DeviceWake) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        139,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    if ( (byte_1C00E8081 & 8) != 0 )
    {
      v15 = (const EVENT_DESCRIPTOR *)&PowerHibernateOrShutdown;
      goto LABEL_53;
    }
LABEL_107:
    if ( a5 )
    {
LABEL_115:
      *a4 = PowerDeviceD3;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x93u,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)a1,
          v6,
          4);
      if ( (byte_1C00E8081 & 8) != 0 )
        McTemplateK0jqxqd(
          EnabledWoLPacketPatterns,
          &PowerPolicyStates,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          v6,
          *a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          14,
          148,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)a1);
      }
      return v24;
    }
LABEL_108:
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
    {
      memset((char *)v25 + 1, 0, 0xF7uLL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v20,
          14,
          146,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)a1);
      }
      if ( (byte_1C00E8081 & 8) != 0 )
        McTemplateK0jqxq(
          v21,
          &PowerDisableWakeup,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1);
      *(_DWORD *)v26 = 1311360;
      *(_OWORD *)&v26[4] = 0LL;
      memset(v25, 0, 0xF8uLL);
      LODWORD(v25[11]) |= 8u;
      LODWORD(v25[1]) = 0;
      v25[13] = &ndisIntReqGeneric;
      v25[0] = 0x100EC0196LL;
      v25[5] = v26;
      LODWORD(v25[4]) = -50265847;
      LODWORD(v25[6]) = 20;
      ndisQuerySetMiniport((__int64)a1, 0LL, (__int64)v25, 0, 0LL);
    }
    goto LABEL_115;
  }
  EnabledWoLPacketPatterns = a1->PMCurrentParameters.EnabledWoLPacketPatterns;
  if ( (EnabledWoLPacketPatterns & 2) != 0 && a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp )
    MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
  if ( (EnabledWoLPacketPatterns & 0xFFFFFFFD) != 0 )
  {
    MinPatternWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp;
    if ( MinPatternWakeUp )
    {
      if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified || MinMagicPacketWakeUp > MinPatternWakeUp )
        MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp;
    }
  }
  if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        140,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    if ( (byte_1C00E8081 & 8) != 0 )
    {
      v15 = (const EVENT_DESCRIPTOR *)&PowerPolicyPatternNotEnabled;
      goto LABEL_53;
    }
    goto LABEL_107;
  }
  EnabledWoLPacketPatterns = (unsigned int)a1->DeviceCaps.DeviceWake;
  if ( MinMagicPacketWakeUp <= (int)EnabledWoLPacketPatterns )
    EnabledWoLPacketPatterns = (unsigned int)MinMagicPacketWakeUp;
  if ( (int)v6 > a1->DeviceCaps.SystemWake || a2 > (int)EnabledWoLPacketPatterns || a2 == PowerDeviceUnspecified )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        141,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    if ( (byte_1C00E8082 & 0x40) != 0 )
      McTemplateK0jqxq(
        EnabledWoLPacketPatterns,
        &PowerPolicyError,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        2);
    v24 = -1073741823;
    goto LABEL_107;
  }
  EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
  if ( (_DWORD)EnabledWoLPacketPatterns )
  {
    v17 = EnabledWoLPacketPatterns - 1;
    if ( v17 )
    {
      EnabledWoLPacketPatterns = (unsigned int)(v17 - 1);
      if ( (_DWORD)EnabledWoLPacketPatterns )
      {
        if ( (_DWORD)EnabledWoLPacketPatterns != 1 )
        {
LABEL_88:
          v18 = -1073741823;
          v24 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a2) = 2;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              a2,
              14,
              142,
              (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
              (char)a1,
              v6);
          }
          if ( (byte_1C00E8082 & 0x40) != 0 )
            McTemplateK0jqxq(
              EnabledWoLPacketPatterns,
              &PowerPolicyError,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3);
          goto LABEL_93;
        }
        if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x2000) != 0 )
          goto LABEL_83;
      }
      EnabledWoLPacketPatterns = 4098LL;
      if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x1002) == 0x1002 )
      {
        v10 = PowerDeviceD2;
        goto LABEL_83;
      }
    }
    EnabledWoLPacketPatterns = 2049LL;
    if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x801) == 0x801 )
    {
      v10 = PowerDeviceD1;
      goto LABEL_83;
    }
  }
  if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x400) == 0 )
    goto LABEL_88;
  v10 = PowerDeviceD0;
LABEL_83:
  if ( a2 <= v10 )
  {
    v18 = 0;
  }
  else
  {
    v18 = -1073741823;
    v24 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        143,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1,
        v6);
    }
    if ( (byte_1C00E8082 & 0x40) != 0 )
      McTemplateK0jqxq(
        EnabledWoLPacketPatterns,
        &PowerPolicyError,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        4);
  }
LABEL_93:
  if ( !a5 )
  {
    ndisMInvokeDevicePowerNotify((__int64)a1, v10);
    if ( (unsigned int)ndisWdmSendOidPmParametersForSx((__int64)a1) )
      goto LABEL_108;
  }
  *a4 = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x90u,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1,
      v6,
      v10);
  if ( (byte_1C00E8081 & 8) != 0 )
    McTemplateK0jqxqd(
      EnabledWoLPacketPatterns,
      &PowerPolicyStates,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      v6,
      *a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      145,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
  }
  return v18;
}
