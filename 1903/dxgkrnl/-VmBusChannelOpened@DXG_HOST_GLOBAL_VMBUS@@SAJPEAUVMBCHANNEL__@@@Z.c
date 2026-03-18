/*
 * XREFs of ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C021B850
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened(struct VMBCHANNEL__ *a1)
{
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened", (wchar_t *)L"%p", a1);
  return 0LL;
}
