/*
 * XREFs of ACPIFilterRemoveNonPresentDevices @ 0x1C001A524
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008D7E0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C009F63C (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C001A96C (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00304E0 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 *     IsPciBus @ 0x1C0096BA0 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
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
  KIRQL NewIrql; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]

  v11[1] = 0LL;
  v11[0] = a1 + 752;
  v15 = 768LL;
  SpinLock = &AcpiDeviceTreeLock;
  v16 = 1;
  for ( i = ACPIExtListStartEnum(v11); ; i = ACPIExtListEnumNext(v11) )
  {
    v4 = i;
    if ( v14 + v15 == v11[0] )
      break;
    if ( v16 == 1 )
    {
      if ( *(_DWORD *)(v14 + 684) )
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 684));
      KeReleaseSpinLock(SpinLock, NewIrql);
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
  if ( v16 )
    KeReleaseSpinLock(SpinLock, NewIrql);
}
