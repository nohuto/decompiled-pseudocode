/*
 * XREFs of IopAllocateRelationList @ 0x1406EE97C
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8AC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1406EDCB0 (PnpInvalidateRelationsInList.c)
 *     PnpBuildRemovalRelationList @ 0x1406EF2D4 (PnpBuildRemovalRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140827FEC (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x1406EE9D4 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x1406EEA3C (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x1406EEB64 (PnpAllocateCriticalMemory.c)
 */

_BYTE *__fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = (_BYTE *)PnpAllocateCriticalMemory(a1, 1LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      CriticalMemory[8] = 0;
    }
    else
    {
      IopFreeRelationList(CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
