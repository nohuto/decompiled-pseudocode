/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C013C4D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C015A8A4 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  const struct tagRIMDEADZONE *v4; // rbx
  RIMDeadzone *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 32, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 || *(_DWORD *)(a1 + 456) >= 5u )
  {
    v9 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v9;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 34, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  else
  {
    v6 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL, 1853506642LL);
    v8 = (__int64)v6;
    if ( v6 )
    {
      v9 = RIMDeadzone::Initialize(v6, v4);
      if ( v9 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 33, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
        }
        Win32FreePool(v8);
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
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v7, v10);
            goto LABEL_18;
          }
        }
        *(_QWORD *)(a1 + 8 * v11 + 416) = v8;
        ++*(_DWORD *)(a1 + 456);
        *a3 = (unsigned int)v11;
      }
    }
    else
    {
      v9 = -1073741801;
    }
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v7, 1, 35, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids, v9);
  }
  return (unsigned int)v9;
}
