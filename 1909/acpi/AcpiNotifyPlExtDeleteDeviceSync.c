/*
 * XREFs of AcpiNotifyPlExtDeleteDeviceSync @ 0x1C005B32C
 * Callers:
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C002BD9C (ACPIBuildProcessNotifyPepDeleteDevice.c)
 * Callees:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C005B130 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 */

__int64 __fastcall AcpiNotifyPlExtDeleteDeviceSync(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v5 = AcpiNotifyPlExtDeleteDeviceAsync(a1, a2, v4, (__int64)&Object);
  if ( v5 == 259 )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v5;
}
