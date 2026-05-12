/*
 * XREFs of RaidInitializeDma @ 0x1C006FA8C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C001A4B0 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C0021ADC (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C0021F10 (StorPortGetUncachedExtension.c)
 * Callees:
 *     RaidAreDriversDmarCompatible @ 0x1C002209C (RaidAreDriversDmarCompatible.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaidInitializeDma(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, char a5)
{
  bool v8; // si
  int v9; // ecx
  int v10; // eax
  char v11; // al
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+20h] [rbp-50h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v8 = a5 || (*(_DWORD *)(a3 + 220) & 8) != 0;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v9 = 3;
  if ( v8 )
  {
    DeviceDescription.DmaRequestLine = 0;
    v10 = 3;
    DeviceDescription.DeviceAddress.QuadPart = 0LL;
    DeviceDescription.Version = 3;
  }
  else
  {
    DeviceDescription.DemandMode = *(_BYTE *)(a3 + 88);
    DeviceDescription.Dma32BitAddresses = *(_BYTE *)(a3 + 87);
    DeviceDescription.DmaSpeed = *(_DWORD *)(a3 + 44);
    v10 = 2;
  }
  *(_DWORD *)(a1 + 28) = v10;
  DeviceDescription.DmaChannel = *(_DWORD *)(a3 + 32);
  DeviceDescription.InterfaceType = *(_DWORD *)(a3 + 8);
  DeviceDescription.BusNumber = *(_DWORD *)(a3 + 4);
  DeviceDescription.DmaWidth = *(_DWORD *)(a3 + 40);
  DeviceDescription.ScatterGather = *(_BYTE *)(a3 + 81);
  DeviceDescription.Master = *(_BYTE *)(a3 + 82);
  DeviceDescription.DmaPort = *(_DWORD *)(a3 + 36);
  DeviceDescription.MaximumLength = *(_DWORD *)(a3 + 24);
  v11 = *(_BYTE *)(a3 + 144);
  DeviceDescription.AutoInitialize = 0;
  if ( v11 == 1 )
  {
    v9 = 2;
  }
  else if ( (unsigned __int8)(v11 - 2) > 2u )
  {
    *(_DWORD *)(a1 + 24) = 1;
    if ( v8 )
      DeviceDescription.DmaAddressWidth = 32;
    else
      DeviceDescription.Dma64BitAddresses = 0;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 24) = v9;
  if ( v8 )
    DeviceDescription.DmaAddressWidth = 64;
  else
    DeviceDescription.Dma64BitAddresses = 1;
LABEL_11:
  DmaAdapter = IoGetDmaAdapter(a2, &DeviceDescription, (PULONG)(a1 + 12));
  *(_QWORD *)a1 = DmaAdapter;
  if ( !DmaAdapter )
    return 3221225626LL;
  *(_BYTE *)(a1 + 8) = RaidAreDriversDmarCompatible(a2);
  return 0LL;
}
