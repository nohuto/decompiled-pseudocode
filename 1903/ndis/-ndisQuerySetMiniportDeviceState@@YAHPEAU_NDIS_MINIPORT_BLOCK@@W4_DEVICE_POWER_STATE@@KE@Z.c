/*
 * XREFs of ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C00137C0
 * Callers:
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxqqt @ 0x1C00A6208 (McTemplateK0jqxqqt.c)
 *     WPP_RECORDER_SF_qZDLd @ 0x1C00A6518 (WPP_RECORDER_SF_qZDLd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C8E5C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _DEVICE_POWER_STATE a2,
        int a3,
        char a4)
{
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  unsigned int SetMiniport; // edi
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-E0h]
  enum _DEVICE_POWER_STATE v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[256]; // [rsp+60h] [rbp-A0h] BYREF

  v15 = a2;
  memset(v16, 0, 0xF8uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      52,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a1);
  }
  if ( (a1->Flags & 0x80u) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        53,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1);
    }
    return 0LL;
  }
  else
  {
    memset(v16, 0, 0xF8uLL);
    *(_DWORD *)&v16[88] |= 8u;
    *(_QWORD *)&v16[104] = &ndisIntReqGeneric;
    *(_DWORD *)v16 = 15466902;
    *(_DWORD *)&v16[32] = a3;
    *(_DWORD *)&v16[48] = 4;
    *(_DWORD *)&v16[8] = 0;
    *(_DWORD *)&v16[4] = a4 != 0;
    *(_QWORD *)&v16[40] = &v15;
    SetMiniport = ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v16, 0, 0LL, 0LL);
    if ( SetMiniport && SetMiniport != -1073741637 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZDLd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          v11,
          v12,
          v14,
          (char)a1,
          (__int64)a1->pAdapterInstanceName,
          a3,
          a4,
          SetMiniport);
      if ( (byte_1C00E8041 & 8) != 0 )
        McTemplateK0jqxqqt(
          v9,
          v8,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          SetMiniport,
          a3,
          a4);
    }
    if ( a4 && SetMiniport != -1073741637 && SetMiniport )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        14,
        55,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a1,
        SetMiniport);
    }
    return SetMiniport;
  }
}
