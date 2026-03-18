/*
 * XREFs of ?VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C021BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend(struct VMBCHANNEL__ *a1)
{
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend", (wchar_t *)L"%p", a1);
}
