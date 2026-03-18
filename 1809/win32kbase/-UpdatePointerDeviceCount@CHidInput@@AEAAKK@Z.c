/*
 * XREFs of ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C014D2CC
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B00 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B70 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::UpdatePointerDeviceCount(CHidInput *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v5; // edi
  int v6; // eax
  __int64 result; // rax

  v3 = a2;
  if ( (struct _KTHREAD *)qword_1C01D0C68 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = v3 - 1;
  if ( !v5 )
    return (unsigned int)++*((_DWORD *)this + 280);
  if ( v5 != 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    return *((unsigned int *)this + 280);
  }
  v6 = *((_DWORD *)this + 280);
  if ( !v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v6 = *((_DWORD *)this + 280);
  }
  result = (unsigned int)(v6 - 1);
  *((_DWORD *)this + 280) = result;
  return result;
}
