/*
 * XREFs of ndisPnPQueryRemoveDevice @ 0x1C009FA60
 * Callers:
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3E2C (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ndisPnPQueryStopDevice @ 0x1C013A6F8 (ndisPnPQueryStopDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisPnPQueryRemoveDevice(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ebx
  _DWORD v5[44]; // [rsp+40h] [rbp-C8h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      87,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1,
      *(_DWORD *)(a1 + 1800));
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x40000000) != 0 )
  {
    v3 = -1073741823;
  }
  else
  {
    ndisInitializeNetPnPEvent(v5, 0LL);
    v5[2] = 2;
    v3 = ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      88,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1,
      v3);
  }
  return v3;
}
