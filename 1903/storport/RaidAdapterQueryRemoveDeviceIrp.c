/*
 * XREFs of RaidAdapterQueryRemoveDeviceIrp @ 0x1C007310C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012660 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C00122C4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0031DD4 (McTemplateK0pd.c)
 */

NTSTATUS __fastcall RaidAdapterQueryRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 88), 4);
  a2->IoStatus.Status = 0;
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v7.Data1 = 0LL;
    *(_QWORD *)v7.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1C0061742 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd(v4, &EventPnpRequestComplete, &v7, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
