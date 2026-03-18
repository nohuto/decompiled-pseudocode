/*
 * XREFs of ACPIIrpInvokeDispatchRoutine @ 0x1C009E5D0
 * Callers:
 *     ACPIBusIrpQueryPnpDeviceState @ 0x1C009E590 (ACPIBusIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryCapabilities @ 0x1C009E5B0 (ACPIBusIrpQueryCapabilities.c)
 *     ACPIBusIrpEject @ 0x1C00AA050 (ACPIBusIrpEject.c)
 *     ACPIBusIrpSetLock @ 0x1C00AA2E0 (ACPIBusIrpSetLock.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIIrpInvokeDispatchRoutine(
        ULONG_PTR a1,
        IRP *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(ULONG_PTR, IRP *, _QWORD, _QWORD),
        char a5)
{
  __int64 DeviceExtension; // rsi
  int Status; // eax
  unsigned int v10; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Status = a2->IoStatus.Status;
  v10 = -1073741637;
  if ( Status < 0 )
  {
    if ( Status != -1073741637 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( a5 )
LABEL_3:
    v10 = a4(a1, a2, 0LL, 0LL);
LABEL_4:
  if ( (*(_BYTE *)(DeviceExtension + 8) & 0x20) == 0 )
  {
    if ( v10 == 259 )
      return v10;
    if ( v10 != -1073741637 )
      a2->IoStatus.Status = v10;
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741637 )
      return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
    goto LABEL_8;
  }
  if ( v10 != 259 )
  {
    if ( v10 == -1073741637 )
      v10 = a2->IoStatus.Status;
    else
      a2->IoStatus.Status = v10;
LABEL_8:
    IofCompleteRequest(a2, 0);
  }
  return v10;
}
