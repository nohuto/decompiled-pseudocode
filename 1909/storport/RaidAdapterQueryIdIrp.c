/*
 * XREFs of RaidAdapterQueryIdIrp @ 0x1C00359C4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00126FC (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C0012360 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C00331C4 (McTemplateK0pd.c)
 */

NTSTATUS __fastcall RaidAdapterQueryIdIrp(__int64 a1, IRP *a2)
{
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v7.Data1 = 0LL;
    *(_QWORD *)v7.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1C0062742 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd(v4, &EventPnpRequestComplete, &v7, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
