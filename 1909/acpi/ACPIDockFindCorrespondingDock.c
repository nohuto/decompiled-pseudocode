/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x1C002BE40
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00518F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AD35C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C0011DE0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C00123A0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0012504 (ACPIExtListStartEnum.c)
 */

char *__fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  char *i; // rax
  char *v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  v10 = 0;
  v5[1] = 0LL;
  v5[0] = RootDeviceExtension + 752;
  v8 = 768LL;
  SpinLock = &AcpiDeviceTreeLock;
  *(_OWORD *)NewIrql = 0LL;
  v9 = 2;
  for ( i = ACPIExtListStartEnum((__int64)v5); ; i = ACPIExtListEnumNext((__int64)v5) )
  {
    v3 = i;
    if ( !ACPIExtListTestElement((__int64)v5, 1) )
      break;
    if ( !v3 || (*((_QWORD *)v3 + 1) & 0x200000000000000LL) != 0 && *((_QWORD *)v3 + 23) == a1 )
    {
      if ( v9 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      return v3;
    }
  }
  return v3;
}
