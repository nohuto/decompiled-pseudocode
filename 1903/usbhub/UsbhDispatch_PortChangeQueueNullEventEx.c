/*
 * XREFs of UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0014B10
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueNullEventEx(int a1, int a2, int a3, int a4, __int64 a5)
{
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, a3, a4, 0LL, 0, 0LL, a5);
}
