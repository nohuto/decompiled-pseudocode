/*
 * XREFs of ndisLWMCreateMiniport @ 0x1C00F2A18
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C00F16A0 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0015520 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C002599C (--1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF__guid_ @ 0x1C0041BA0 (WPP_SF__guid_.c)
 *     WPP_SF_q_guid_d @ 0x1C00516B4 (WPP_SF_q_guid_d.c)
 *     WPP_SF_q_guid_ @ 0x1C006540C (WPP_SF_q_guid_.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00C7CB4 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisIfReadInterfaceAddDeviceParametersForLWMiniport @ 0x1C00E33D0 (ndisIfReadInterfaceAddDeviceParametersForLWMiniport.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C00F2BEC (ndisLWMOpenConfigurationKey.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 */

__int64 __fastcall ndisLWMCreateMiniport(_NDIS_M_DRIVER_BLOCK *a1, _GUID *a2, _QWORD *a3)
{
  _GUID v6; // xmm1
  int InterfaceAddDeviceParameters; // eax
  unsigned int v8; // edi
  unsigned __int16 v9; // cx
  int InterfaceAddDeviceParametersForLWMiniport; // eax
  int v11; // eax
  unsigned __int16 v12; // cx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-69h]
  HANDLE Handle[2]; // [rsp+30h] [rbp-59h] BYREF
  NDIS_ADDDEVICE_PARAMETERS v17; // [rsp+40h] [rbp-49h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q_guid_((__int64)a1, (__int64)a2, (__int64)a1, (__int64)a2);
  *a3 = 0LL;
  v6 = *a2;
  v17.IsPhysicalMediumAvailable = 0;
  memset(&v17.PhysicalMedium, 0, 33);
  v17.InterfaceGuid = v6;
  v17.MiniportAdapterContext = 0LL;
  *(_WORD *)&v17.IsHardwareLoopbackSupported = 0;
  *(_OWORD *)&v17.MiniBlock = 0LL;
  v17.NetLuid.Value = 0LL;
  InterfaceAddDeviceParameters = ndisIfReadInterfaceAddDeviceParameters(&v17.InterfaceGuid.Data1, 0LL);
  v8 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParameters);
  if ( v8 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_22;
    v9 = 135;
    goto LABEL_6;
  }
  InterfaceAddDeviceParametersForLWMiniport = ndisIfReadInterfaceAddDeviceParametersForLWMiniport((__int64)&v17);
  v8 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParametersForLWMiniport);
  if ( v8 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    {
      v9 = 136;
LABEL_6:
      WPP_SF__guid_(v9, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a2);
      goto LABEL_22;
    }
    goto LABEL_22;
  }
  if ( v17.IsLightWeight )
  {
    v17.MiniBlock = a1;
    Handle[0] = 0LL;
    v11 = ndisLWMOpenConfigurationKey(a2, Handle);
    v8 = NdisConvertNtStatusToNdisStatus(v11);
    if ( v8 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
        goto LABEL_20;
      v12 = 138;
    }
    else
    {
      v13 = ndisAddDevice(0LL, 0LL, (__int64)a3);
      v8 = NdisConvertNtStatusToNdisStatus(v13);
      if ( !v8 || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      {
LABEL_20:
        if ( Handle[0] )
          ZwClose(Handle[0]);
        goto LABEL_22;
      }
      v12 = 139;
    }
    WPP_SF__guid_(v12, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a2);
    goto LABEL_20;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    v9 = 137;
    goto LABEL_6;
  }
LABEL_22:
  NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&v17);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(v15) = v8;
    WPP_SF_q_guid_d(0x8Cu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a1, (__int64)a2, v15);
  }
  return v8;
}
