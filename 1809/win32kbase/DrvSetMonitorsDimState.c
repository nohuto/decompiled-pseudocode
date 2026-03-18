/*
 * XREFs of DrvSetMonitorsDimState @ 0x1C00937B8
 * Callers:
 *     PowerUnDimMonitor @ 0x1C009780C (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0099C10 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C00E2618 (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0041C40 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0041E08 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetMonitorsDimState(char a1)
{
  wchar_t *i; // rdi
  __int64 j; // rsi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  char InputBuffer; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+88h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  InputBuffer = a1;
  UpdateMonitorDevices();
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 54); j = (unsigned int)(j + 1) )
    {
      if ( (int)((__int64 (__fastcall *)(wchar_t *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C01CDA80)(
                  i + 124,
                  *(unsigned int *)(*((_QWORD *)i + 28) + 20 * j + 4),
                  &Object,
                  &DeviceObject) >= 0 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324D7u, &InputBuffer, 1u, 0LL, 0, &v5, 1u, 0);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(Object);
      }
    }
  }
}
