/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140733534
 * Callers:
 *     PnpResizeTargetDeviceBlock @ 0x140731A48 (PnpResizeTargetDeviceBlock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731CAC (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x140731E14 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x14073234C (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x14073334C (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1407333A4 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1407334B8 (PiEventAllocateVetoBuffer.c)
 *     PnpSetTargetDeviceRemove @ 0x140733584 (PnpSetTargetDeviceRemove.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14087B28C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
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
