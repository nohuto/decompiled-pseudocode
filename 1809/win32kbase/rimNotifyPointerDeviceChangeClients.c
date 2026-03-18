/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C01142EC
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1C0114428 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ApiSetPostPointerEventMessage @ 0x1C0164890 (ApiSetPostPointerEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned int __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int result; // eax

  v4 = 0;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL, a3);
  v9 = a3[26];
  if ( a1[462] != v9 )
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
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
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
  v13 = a3[27];
  if ( a1[463] != v13 )
  {
    v14 = v13 - 2;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          v4 |= 0x800u;
        else
          WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xAu, (__int64)&WPP_29b2d95337ca3c6b60bf6989ded744e8_Traceguids);
      }
      else
      {
        v4 |= 0x40u;
      }
    }
    else
    {
      v4 |= 0x80u;
    }
  }
  if ( a1[465] != a3[29] || a1[466] != a3[30] )
    v4 |= 0x400u;
  if ( a1[467] != a3[31] || a1[468] != a3[32] )
    v4 |= 0x200u;
  result = v4 | 0x100;
  if ( !a4 )
    result = v4;
  if ( result )
    return ApiSetPostPointerEventMessage(a2, a2, result);
  return result;
}
