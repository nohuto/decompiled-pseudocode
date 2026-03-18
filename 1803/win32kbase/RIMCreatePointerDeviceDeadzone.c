/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C00E7B60
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C0105BD4 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  RIMDeadzone *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  _QWORD *v11; // rax

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x1Fu,
    (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 || *(_DWORD *)(a1 + 456) >= 5u )
  {
    v9 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x21u,
      (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
  }
  else
  {
    v6 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL, 0x6E7A4452u);
    v7 = (__int64)v6;
    if ( v6 )
    {
      v9 = RIMDeadzone::Initialize(v6, a2);
      if ( v9 < 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x20u,
          (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
        Win32FreePool(v7);
      }
      else
      {
        v10 = 0LL;
        v11 = (_QWORD *)(a1 + 416);
        while ( *v11 )
        {
          v10 = (unsigned int)(v10 + 1);
          ++v11;
          if ( (unsigned int)v10 >= 5 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8);
            goto LABEL_13;
          }
        }
        *(_QWORD *)(a1 + 8 * v10 + 416) = v7;
        ++*(_DWORD *)(a1 + 456);
        *a3 = (unsigned int)v10;
      }
    }
    else
    {
      v9 = -1073741801;
    }
  }
LABEL_13:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x22u,
    (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
    v9);
  return (unsigned int)v9;
}
