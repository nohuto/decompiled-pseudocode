/*
 * XREFs of UsbhSshExitSx @ 0x1C0004DD0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00047C0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 */

LONG __fastcall UsbhSshExitSx(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx

  v4 = FdoExt(a1);
  KeWaitForSingleObject((PVOID)(v4 + 3160), Executive, 0, 0, 0LL);
  v5 = _InterlockedExchange64((volatile __int64 *)(v4 + 3304), 0LL);
  Log(a1, 0x10000, 1213429805, 0, v5);
  UsbhDecHubBusy(a1, v6, v5);
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), v4 + 3200, 2000, 0, a2, 2001228627);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3160), 16, 1, 0);
}
