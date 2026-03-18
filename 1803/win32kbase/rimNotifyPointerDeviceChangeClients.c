/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C00E9E28
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1C0058974 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  __int64 result; // rax
  unsigned int v14; // edi

  v4 = 0;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL);
  v9 = a3[26];
  if ( a1[374] != v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v4 = 32;
          else
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
        }
        else
        {
          v4 = 16;
        }
      }
      else
      {
        v4 = 8;
      }
    }
    else
    {
      v4 = 4;
    }
  }
  if ( a1[375] != a3[27] )
  {
    switch ( a3[28] )
    {
      case 2:
        v4 |= 0x80u;
        break;
      case 3:
        v4 |= 0x40u;
        break;
      case 4:
        v4 |= 0x800u;
        break;
      default:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0xAu,
          (__int64)&WPP_938c38feb455315d552f88149bc6281f_Traceguids);
        break;
    }
  }
  if ( a1[377] != a3[29] || a1[378] != a3[30] )
    v4 |= 0x400u;
  result = (unsigned int)a3[31];
  if ( a1[379] != (_DWORD)result || (result = (unsigned int)a3[32], a1[380] != (_DWORD)result) )
    v4 |= 0x200u;
  v14 = v4 | 0x100;
  if ( !a4 )
    v14 = v4;
  if ( v14 )
  {
    result = IsPostPointerEventMessageSupported();
    if ( (int)result >= 0 )
      return PostPointerEventMessage(a2, 568LL, v14, 1LL);
  }
  return result;
}
