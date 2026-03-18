/*
 * XREFs of ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00C85D0
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00C9464 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00C9564 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0156B3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C0006778 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::WaitForVerticalBlankEvent(DXGADAPTER **this)
{
  bool v1; // al
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned int v4; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  v1 = DXGADAPTER::SupportHWVSync(this[2]);
  v3 = *(_QWORD *)(v2 + 112);
  Timeout.QuadPart = v1 ? -1000000LL : -5000000LL;
  return KeWaitForSingleObject((PVOID)(3968LL * v4 + v3 + 912), UserRequest, 0, 0, &Timeout);
}
