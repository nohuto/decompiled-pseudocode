/*
 * XREFs of RaidCreateUnit @ 0x1C0015258
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C00147A4 (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidUnitAllocateResources @ 0x1C001542C (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C00158A4 (RaidZeroUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C0016E40 (RaUnitSetQueueDepth.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001ED80 (RaidAdapterPoFxActivateComponent.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

NTSTATUS __fastcall RaidCreateUnit(__int64 a1, _QWORD *a2)
{
  __int64 RecommendedSharedDataAlignment; // rbp
  ULONG MaximumProcessorCount; // r14d
  NTSTATUS result; // eax
  char *DeviceExtension; // rbx
  void *v8; // rcx
  char v9; // al
  int Resources; // edi
  __int64 v11; // rcx
  char v12; // dl
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  result = IoCreateDevice(
             *(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 8) + 8LL),
             RecommendedSharedDataAlignment + ((MaximumProcessorCount + 44) << 6),
             0LL,
             0x2Du,
             0x180u,
             0,
             &DeviceObject);
  if ( result >= 0 )
  {
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    RaidZeroUnit(DeviceExtension);
    v8 = (void *)(-(__int64)(unsigned int)RecommendedSharedDataAlignment & (unsigned __int64)&DeviceExtension[RecommendedSharedDataAlignment + 2815]);
    *((_QWORD *)DeviceExtension + 4) = v8;
    memset(v8, 0, (unsigned __int64)MaximumProcessorCount << 6);
    *((_QWORD *)DeviceExtension + 3) = a1;
    *((_QWORD *)DeviceExtension + 1) = DeviceObject;
    *(_WORD *)(DeviceExtension + 1477) = 256;
    DeviceExtension[1479] = 1;
    DeviceObject->Flags |= 0x10u;
    DeviceObject->Flags |= 0x1000u;
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 1) + 152LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    *((_DWORD *)DeviceExtension + 12) = 0;
    v9 = (*(_BYTE *)(a1 + 4972) + 3) & 0xFC;
    if ( ((*(unsigned __int8 *)(a1 + 4972) + 3) & 0xFFFFFFFC) > 0xFF )
      v9 = -1;
    DeviceExtension[1476] = v9;
    Resources = RaidUnitAllocateResources(DeviceExtension);
    if ( Resources < 0 )
    {
      IoDeleteDevice(DeviceObject);
      return Resources;
    }
    else
    {
      RaUnitSetQueueDepth(
        DeviceExtension,
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 516LL),
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 512LL));
      v11 = *((_QWORD *)DeviceExtension + 3);
      v12 = DeviceExtension[161] & 0x7F;
      *((_QWORD *)DeviceExtension + 186) = 0LL;
      DeviceExtension[160] &= ~0x80u;
      DeviceExtension[161] = v12;
      DeviceExtension[437] = 1;
      if ( *(_QWORD *)(v11 + 5024) )
      {
        if ( (*(_BYTE *)(v11 + 109) & 4) == 0 )
        {
          DeviceExtension[161] = v12 | 8;
          RaidAdapterPoFxActivateComponent(v11, 0LL, 0LL);
        }
      }
      *((_DWORD *)DeviceExtension + 386) = 10;
      result = 0;
      *((_DWORD *)DeviceExtension + 387) = 25;
      *((_DWORD *)DeviceExtension + 388) = 125;
      *a2 = DeviceExtension;
    }
  }
  return result;
}
