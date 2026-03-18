/*
 * XREFs of ACPIBusIrpQueryPower @ 0x1C004B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x1C001ED60 (AMLIIsNamedChildPresent.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0051180 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIBusIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rax
  __int64 *v6; // rsi
  int v7; // edx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_15;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) != 0 )
    goto LABEL_14;
  v6 = *(__int64 **)(DeviceExtension + 712);
  if ( ACPIDockIsDockDevice(v6) )
    goto LABEL_15;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 2u:
      v7 = 826951007;
LABEL_13:
      if ( !AMLIIsNamedChildPresent(v6, v7) )
        break;
LABEL_15:
      ACPIDispatchPowerIrpSuccess(a1, a2);
      return 259LL;
    case 3u:
      v7 = 843728223;
      goto LABEL_13;
    case 4u:
      v7 = 860505439;
      goto LABEL_13;
    case 5u:
      v7 = 877282655;
      goto LABEL_13;
  }
LABEL_14:
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
