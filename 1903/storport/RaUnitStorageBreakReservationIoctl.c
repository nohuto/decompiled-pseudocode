/*
 * XREFs of RaUnitStorageBreakReservationIoctl @ 0x1C00742F8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0031DD4 (McTemplateK0pd.c)
 *     PortAllowIrpFromPdoToFdo @ 0x1C0074D90 (PortAllowIrpFromPdoToFdo.c)
 */

__int64 __fastcall RaUnitStorageBreakReservationIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx
  unsigned int v5; // edi
  int Status; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( (int)PortAllowIrpFromPdoToFdo(*(_QWORD *)(v2 + 8)) < 0 )
  {
    v5 = -1073741808;
    RaidCompleteRequestEx(a2, 0, 0xC0000010);
  }
  else
  {
    if ( StorEtwLoggingEnabled )
    {
      *(_QWORD *)&v8.Data1 = 0LL;
      *(_QWORD *)v8.Data4 = 0LL;
      IoGetActivityIdIrp(a2, &v8);
      if ( (byte_1C0061742 & 0x10) != 0 )
      {
        Status = a2->IoStatus.Status;
        McTemplateK0pd(v4, &EventNonReadWriteRequestComplete, &v8, a2, Status);
      }
    }
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), a2);
  }
  return v5;
}
