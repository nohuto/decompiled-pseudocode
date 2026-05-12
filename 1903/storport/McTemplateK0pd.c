/*
 * XREFs of McTemplateK0pd @ 0x1C0031DD4
 * Callers:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F99C (RaUnitAtaPassThroughIoctl.c)
 *     RaidAdapterPnpIrp @ 0x1C0012660 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00128A0 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001F2D4 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C00345D4 (RaidAdapterQueryIdIrp.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C004665C (RaUnitStorageSetPropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C006A660 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C006A970 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006F31C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C00719A0 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C007310C (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C00731B0 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0073524 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00741AC (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00742F8 (RaUnitStorageBreakReservationIoctl.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG McTemplateK0pd(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite(a1, a2, a3, 3u, &v4);
}
