/*
 * XREFs of ndisPnPCancelRemoveDevice @ 0x1C009FAA8
 * Callers:
 *     ndisPnPCancelStopDevice @ 0x1C009FB9C (ndisPnPCancelStopDevice.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3D3C (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisPnPCancelRemoveDevice(__int64 a1)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx
  _DWORD v5[44]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      89,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
  }
  ndisInitializeNetPnPEvent(v5, 0LL);
  v5[2] = 3;
  result = ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v4,
             13,
             90,
             (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
             a1);
  }
  return result;
}
