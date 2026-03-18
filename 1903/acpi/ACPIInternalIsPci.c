/*
 * XREFs of ACPIInternalIsPci @ 0x1C00A2790
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001884 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     IsPciDevice @ 0x1C00237B0 (IsPciDevice.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     IsNsobjPciBus @ 0x1C009D2C0 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInternalIsPci(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rsi
  void *v3; // rbx
  __int64 v5; // rax
  int v6; // r9d
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+68h] [rbp+10h] BYREF

  memset(Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v3 = (void *)(DeviceExtension + 8);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x102000000LL) != 0 )
    return 0LL;
  v5 = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( IsNsobjPciBus(*(volatile signed __int32 **)(v5 + 712)) == 1 )
  {
    ACPIInternalSetFlags(v3, 0x2000000uLL);
    return 0LL;
  }
  *(_DWORD *)&Event[24] = -1073741275;
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  v6 = IsPciDevice(
         *(volatile signed __int32 **)(DeviceExtension + 712),
         (__int64)AmlisuppCompletePassive,
         (__int64)Event,
         &v8);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    v6 = *(_DWORD *)&Event[24];
  }
  if ( v6 >= 0 && v8 == 1 )
    ACPIInternalSetFlags(v3, 0x100000000uLL);
  return (unsigned int)v6;
}
