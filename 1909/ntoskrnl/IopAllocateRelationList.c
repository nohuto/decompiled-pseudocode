/*
 * XREFs of IopAllocateRelationList @ 0x14073334C
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140730F60 (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731CAC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14073209C (PnpInvalidateRelationsInList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140861BE8 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x1407333A4 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x14073340C (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x140733534 (PnpAllocateCriticalMemory.c)
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
