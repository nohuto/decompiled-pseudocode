/*
 * XREFs of PnpAllocateCriticalMemory @ 0x1406EEB64
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8AC (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x1406EDA28 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x1406EDF2C (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x1406EE97C (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1406EE9D4 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1406EEAE8 (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x1406EEBB4 (PnpResizeTargetDeviceBlock.c)
 *     PnpSetTargetDeviceRemove @ 0x1406EEC90 (PnpSetTargetDeviceRemove.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140840138 (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
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
