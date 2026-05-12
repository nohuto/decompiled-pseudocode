/*
 * XREFs of PortRegistryWriteDeviceKey @ 0x1C006AAF8
 * Callers:
 *     RaidUnitSavePowerCycleCount @ 0x1C001230C (RaidUnitSavePowerCycleCount.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C001BB98 (RaidUnitGetInitialTimestamp.c)
 *     RaidAdapterHack @ 0x1C001CFD8 (RaidAdapterHack.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C003A624 (StorAdapterDeviceRegistryKeyProxy.c)
 *     ShimGetMsftId @ 0x1C0050A60 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x1C006D634 (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryWriteWithHandle @ 0x1C006AA14 (PortRegistryWriteWithHandle.c)
 */

__int64 __fastcall PortRegistryWriteDeviceKey(
        struct _DEVICE_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        ULONG a4,
        void *a5,
        ULONG a6)
{
  int v9; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  v9 = IoOpenDeviceRegistryKey(a1, 1u, 0x20006u, &Handle);
  if ( v9 >= 0 )
  {
    v9 = PortRegistryWriteWithHandle(Handle, a2, a3, a4, a5, a6);
    ZwClose(Handle);
  }
  return (unsigned int)v9;
}
