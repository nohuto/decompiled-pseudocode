/*
 * XREFs of PnpAllocateCriticalMemory @ 0x1407312D4
 * Callers:
 *     PnpResizeTargetDeviceBlock @ 0x14072F7E8 (PnpResizeTargetDeviceBlock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14072FA4C (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x14072FBB4 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x1407300EC (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x1407310EC (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140731144 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x140731258 (PiEventAllocateVetoBuffer.c)
 *     PnpSetTargetDeviceRemove @ 0x140731324 (PnpSetTargetDeviceRemove.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14087BB8C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpAllocateCriticalMemory(int a1, POOL_TYPE a2, SIZE_T a3, ULONG a4)
{
  ULONG i; // r8d
  PVOID result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a4; ; i = a4 )
  {
    result = ExAllocatePoolWithTag(a2, a3, i);
    if ( result || (a1 & 0xFFFFFFFB) == 0 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
