/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x1C002E01C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002DAE0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C002DCE0 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004B990 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C001A4B4 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001A96C (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002DD7C (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  char *i; // rax
  ULONG_PTR v2; // rbx
  char result; // al
  _QWORD v4[6]; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+50h] [rbp-18h]

  v4[1] = 0LL;
  v4[0] = a1 + 752;
  v4[5] = 768LL;
  v4[2] = &AcpiDeviceTreeLock;
  v5 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v4); ; i = ACPIExtListEnumNext((__int64)v4) )
  {
    v2 = (ULONG_PTR)i;
    result = ACPIExtListTestElement((__int64)v4, 1);
    if ( !result )
      break;
    ACPIInitResetDeviceExtension(v2);
  }
  return result;
}
