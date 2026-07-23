/*
 * XREFs of PnprIsProcessorDevice @ 0x1408363AC
 * Callers:
 *     PnprAddDeviceResources @ 0x140835510 (PnprAddDeviceResources.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x140587930 (IoGetDevicePropertyData.c)
 *     IoGetDeviceInterfaces @ 0x1405A0F10 (IoGetDeviceInterfaces.c)
 */

char __fastcall PnprIsProcessorDevice(PDEVICE_OBJECT Pdo, char a2, unsigned int *a3, void *a4)
{
  char v5; // bl
  unsigned int Data; // [rsp+40h] [rbp-18h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-14h] BYREF
  PVOID P; // [rsp+48h] [rbp-10h] BYREF
  ULONG Type; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 )
  {
    if ( IoGetDeviceInterfaces(&GUID_DEVICE_PROCESSOR, Pdo, 0, (PZZWSTR *)&P) >= 0 )
    {
      if ( *(_WORD *)P )
      {
        ExFreePoolWithTag(P, 0);
        if ( IoGetDevicePropertyData(Pdo, &PROCESSOR_NUMBER_PKEY, 0, 0, 4u, &Data, &RequiredSize, &Type) >= 0
          && Type == 7
          && (int)HalGetProcessorIdByNtNumber(Data, a4) >= 0 )
        {
          *a3 = Data;
          return 1;
        }
      }
    }
  }
  else if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 4u, a4, &RequiredSize, &Type) >= 0
         && Type == 7 )
  {
    *a3 = -1;
    return 1;
  }
  return v5;
}
