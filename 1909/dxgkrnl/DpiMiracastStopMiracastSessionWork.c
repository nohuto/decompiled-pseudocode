/*
 * XREFs of DpiMiracastStopMiracastSessionWork @ 0x1C02A5DB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF90 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DpiMiracastStopMiracastSessionWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // r8

  DpiMiracastStopMiracastSessionSync(
    *(char **)Context,
    *((_BYTE *)Context + 8),
    (union _LARGE_INTEGER *)Context + 2,
    0LL,
    *((_DWORD *)Context + 6),
    0);
  DpiMiracastReleaseMiracastDeviceContext(*(int **)Context, (__int64)DpiMiracastStopMiracastSessionAsync, v4);
  ExFreePoolWithTag(Context, 0);
}
