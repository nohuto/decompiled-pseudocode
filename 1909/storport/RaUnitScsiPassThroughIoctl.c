/*
 * XREFs of RaUnitScsiPassThroughIoctl @ 0x1C007507C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007654 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C00331C4 (McTemplateK0pd.c)
 *     McTemplateK0pddd @ 0x1C0033234 (McTemplateK0pddd.c)
 *     PortPassThroughSetAddress @ 0x1C0076B38 (PortPassThroughSetAddress.c)
 */

NTSTATUS __fastcall RaUnitScsiPassThroughIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  IRP *v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v8; // eax
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-48h]
  int MajorFunction; // [rsp+20h] [rbp-48h]
  int MinorFunction; // [rsp+28h] [rbp-40h]
  unsigned int LowPart; // [rsp+30h] [rbp-38h]
  GUID v15; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  *(_QWORD *)&v15.Data1 = 0LL;
  *(_QWORD *)v15.Data4 = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( (byte_1C0062743 & 1) != 0 )
    {
      CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      MinorFunction = CurrentStackLocation->MinorFunction;
      MajorFunction = CurrentStackLocation->MajorFunction;
      McTemplateK0pddd(
        (struct _MCGEN_TRACE_CONTEXT *)CurrentStackLocation->MinorFunction,
        &EventPassThrough,
        &v15,
        v5,
        MajorFunction,
        MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a4) = *(_BYTE *)(a1 + 98);
  LOBYTE(a3) = *(_BYTE *)(a1 + 97);
  LOBYTE(a2) = *(_BYTE *)(a1 + 96);
  v8 = PortPassThroughSetAddress(v5, a2, a3, a4);
  if ( v8 < 0 )
    return RaidCompleteRequestEx(v5, 0, 0xC0000010);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0062742 & 0x10) != 0 )
    {
      LODWORD(v11) = v8;
      McTemplateK0pd(v9, &EventNonReadWriteRequestComplete, &v15, v5, v11);
    }
  }
  ++v5->CurrentLocation;
  ++v5->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 8), v5);
}
