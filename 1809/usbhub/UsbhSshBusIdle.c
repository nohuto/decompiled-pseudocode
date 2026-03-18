/*
 * XREFs of UsbhSshBusIdle @ 0x1C0042A6C
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x1C005B570 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

LONG __fastcall UsbhSshBusIdle(__int64 a1)
{
  volatile __int64 *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r10

  v2 = (volatile __int64 *)FdoExt(a1);
  Log(a1, 2048, 1114863917, 0LL, _InterlockedExchange64(v2 + 411, 0LL));
  return UsbhDecHubBusy(a1, v3, v4);
}
