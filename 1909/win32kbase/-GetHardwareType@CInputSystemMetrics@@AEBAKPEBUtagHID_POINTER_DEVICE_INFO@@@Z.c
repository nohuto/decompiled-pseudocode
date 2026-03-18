/*
 * XREFs of ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C018DD18
 * Callers:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C018DD6C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::GetHardwareType(
        CInputSystemMetrics *this,
        const struct tagHID_POINTER_DEVICE_INFO *a2)
{
  int v2; // eax
  unsigned int v4; // edx
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 6);
  if ( v2 <= 0 )
    goto LABEL_11;
  if ( v2 <= 4 )
  {
    v4 = 129;
  }
  else
  {
    if ( v2 != 5 )
    {
      if ( v2 == 6 )
      {
        v4 = 136;
        goto LABEL_8;
      }
LABEL_11:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a2);
      return 0LL;
    }
    v4 = 132;
  }
LABEL_8:
  result = v4 | 0x40;
  if ( *((_DWORD *)a2 + 180) <= 1u )
    return v4;
  return result;
}
