/*
 * XREFs of ndisPowerIrpWorker @ 0x1C00F5600
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_qs @ 0x1C0069858 (WPP_SF_qs.c)
 *     WPP_SF_qsD @ 0x1C00698C4 (WPP_SF_qsD_ea_1C00698C4.c)
 *     ndisSetPower @ 0x1C00B887C (ndisSetPower.c)
 *     ndisQueryPower @ 0x1C010A6B4 (ndisQueryPower.c)
 */

void __fastcall ndisPowerIrpWorker(PIRP Irp, __int64 a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DEVICE_OBJECT *DeviceObject; // rax
  ULONG_PTR DeviceExtension; // rdi
  const char *v6; // r9
  unsigned int Power; // eax
  const char *v8; // r9
  int v9; // [rsp+20h] [rbp-18h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceObject = CurrentStackLocation->DeviceObject;
  DeviceExtension = (ULONG_PTR)DeviceObject->DeviceExtension;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
  {
    v6 = "SET";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v6 = "QUERY";
    WPP_SF_qs(0x8Fu, a2, (__int64)DeviceObject->DeviceExtension, v6);
  }
  if ( CurrentStackLocation->MinorFunction == 3 )
    Power = ndisQueryPower(Irp);
  else
    Power = ndisSetPower(Irp, (__int64)CurrentStackLocation, DeviceExtension);
  if ( (Power & 0xC0000000) == 0xC0000000 && (unsigned __int8)byte_1C00A025D >= 2u )
  {
    v8 = "Set";
    v9 = Power;
    if ( CurrentStackLocation->MinorFunction != 2 )
      v8 = "Query";
    WPP_SF_qsD(Power, (__int64)"Query", DeviceExtension, v8, v9);
  }
  ndisDereferenceMiniport(DeviceExtension, 0xDu);
}
