/*
 * XREFs of PortRegistryWriteDeviceKey @ 0x1C006B9F8
 * Callers:
 *     RaidUnitSavePowerCycleCount @ 0x1C00123A8 (RaidUnitSavePowerCycleCount.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C0018FC4 (RaidUnitGetInitialTimestamp.c)
 *     RaidAdapterHack @ 0x1C001A7A8 (RaidAdapterHack.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C003BA14 (StorAdapterDeviceRegistryKeyProxy.c)
 *     ShimGetMsftId @ 0x1C0051BE0 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x1C006DD44 (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryWriteWithHandle @ 0x1C006B914 (PortRegistryWriteWithHandle.c)
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
