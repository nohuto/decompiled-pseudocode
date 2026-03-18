/*
 * XREFs of ?DeviceAcceleratorInitialize@@YAJXZ @ 0x1C00057EC
 * Callers:
 *     InputInitialize @ 0x1C0005874 (InputInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 DeviceAcceleratorInitialize(void)
{
  unsigned int v0; // ebx
  CDeviceAcceleration **i; // rdi
  unsigned int DefaultMouseSensitivity; // esi
  __int64 v3; // rax

  v0 = 0;
  for ( i = &qword_1C01C3098; ; i += 3 )
  {
    if ( (int)IsEditionGetDefaultMouseSensitivitySupported() >= 0 )
      DefaultMouseSensitivity = EditionGetDefaultMouseSensitivity(v0);
    else
      DefaultMouseSensitivity = 10;
    if ( *((_DWORD *)i + 2) != v0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *i )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v3 = ((__int64 (__fastcall *)(_QWORD))*(i - 1))(DefaultMouseSensitivity);
    *i = (CDeviceAcceleration *)v3;
    if ( !v3 )
      break;
    if ( ++v0 >= 2 )
      return 0LL;
  }
  return 3221225473LL;
}
