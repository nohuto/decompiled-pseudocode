/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C0111400
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C012D8E0 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  RIMDeadzone *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x1Fu, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 || *(_DWORD *)(a1 + 456) >= 5u )
  {
    v9 = -1073741811;
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x21u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
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
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x20u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
        Win32FreePool(v7);
      }
      else
      {
        v11 = 0LL;
        v12 = (_QWORD *)(a1 + 416);
        while ( *v12 )
        {
          v11 = (unsigned int)(v11 + 1);
          ++v12;
          if ( (unsigned int)v11 >= 5 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v10);
            goto LABEL_13;
          }
        }
        *(_QWORD *)(a1 + 8 * v11 + 416) = v7;
        ++*(_DWORD *)(a1 + 456);
        *a3 = (unsigned int)v11;
      }
    }
    else
    {
      v9 = -1073741801;
    }
  }
LABEL_13:
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x22u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids, v9);
  return (unsigned int)v9;
}
