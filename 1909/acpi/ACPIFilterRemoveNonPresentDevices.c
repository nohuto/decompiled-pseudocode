/*
 * XREFs of ACPIFilterRemoveNonPresentDevices @ 0x1C0011E50
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008F850 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00A1AF0 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1C00123A0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0012504 (ACPIExtListStartEnum.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00311A4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     IsPciBus @ 0x1C00939A8 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 */

void __fastcall ACPIFilterRemoveNonPresentDevices(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  bool v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  v16 = 0;
  v11[1] = 0LL;
  v11[0] = a1 + 752;
  v14 = 768LL;
  SpinLock = &AcpiDeviceTreeLock;
  *(_OWORD *)NewIrql = 0LL;
  v15 = 1;
  for ( i = ACPIExtListStartEnum(v11); ; i = ACPIExtListEnumNext(v11) )
  {
    v4 = i;
    if ( *(_QWORD *)&NewIrql[8] + v14 == v11[0] )
      break;
    if ( v15 == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&NewIrql[8] + 684LL) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&NewIrql[8] + 684LL));
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    if ( (*(_BYTE *)(v4 + 8) & 0x60) == 0x40 )
    {
      v5 = 0LL;
      if ( *a2 )
      {
        while ( *(_QWORD *)(v4 + 736) != *(_QWORD *)&a2[2 * v5 + 2] )
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *a2 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v6 = *(_QWORD *)(v4 + 952) & 0x8000LL;
        v7 = (*(_QWORD *)(v4 + 952) & 0x8000) != 0;
        if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v4 + 720)) || v6 )
        {
          LOBYTE(v9) = v7;
          EnableDisableRegions(*(_QWORD *)(v4 + 712), 0LL, v9);
        }
        v10 = *(_DWORD *)(v4 + 952);
        *(_DWORD *)(v4 + 320) = 5;
        if ( (*(_QWORD *)&v10 & 0x800000LL) != 0 )
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFFFFFFFFF7FFuLL);
        else
          _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x800uLL);
        LOBYTE(v8) = 1;
        ACPIInitStopDevice(v4, v8);
        ACPIThermalReleaseCoolingInterfaces(v4);
        ACPIBuildSurpriseRemovedExtension(v4);
      }
    }
  }
  if ( v15 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
}
