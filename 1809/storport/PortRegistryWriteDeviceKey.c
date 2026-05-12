/*
 * XREFs of PortRegistryWriteDeviceKey @ 0x1C006BBB4
 * Callers:
 *     RaidUnitSavePowerCycleCount @ 0x1C001A7D8 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterHack @ 0x1C001C1F8 (RaidAdapterHack.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C001D374 (RaidUnitGetInitialTimestamp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C003E0DC (StorAdapterDeviceRegistryKeyProxy.c)
 *     ShimGetMsftId @ 0x1C0052230 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x1C006C958 (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryWriteWithHandle @ 0x1C006BC4C (PortRegistryWriteWithHandle.c)
 */

__int64 __fastcall PortRegistryWriteDeviceKey(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  NTSTATUS v9; // ebx
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
