/*
 * XREFs of PopDirectedDripsUmInitialize @ 0x14075F6C4
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140A09208 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400025C0 (RtlInitializeGenericTableAvl.c)
 */

void PopDirectedDripsUmInitialize()
{
  qword_140436D38 = 0LL;
  PopDirectedDripsUmLock = 0LL;
  PopDirectedDripsUmTestDeviceCount = 0;
  RtlInitializeGenericTableAvl(
    &PopDirectedDripsUmTestDeviceTable,
    PopDirectedDripsUmTestDeviceCompare,
    PopDirectedDripsUmTestDeviceAllocate,
    PopDirectedDripsUmTestDeviceFree,
    0LL);
  PopDirectedDripsUmTestPermissive = 0;
}
