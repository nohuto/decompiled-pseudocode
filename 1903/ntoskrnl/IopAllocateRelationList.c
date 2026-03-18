/*
 * XREFs of IopAllocateRelationList @ 0x1407310EC
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x14072ED00 (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14072FA4C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14072FE3C (PnpInvalidateRelationsInList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408624E8 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x140731144 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x1407311AC (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x1407312D4 (PnpAllocateCriticalMemory.c)
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
