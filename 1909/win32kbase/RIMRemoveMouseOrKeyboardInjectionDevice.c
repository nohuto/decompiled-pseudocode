/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C013813C
 * Callers:
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // r8
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 44, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  v4 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 46, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  else
  {
    v6 = Object;
    if ( *((_BYTE *)Object + 136) >= 2u )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v5);
    v7 = v6[53];
    RIMLockExclusive(v7 + 104);
    if ( v7 )
    {
      if ( (*(_QWORD *)(v7 + 640) || *(_DWORD *)(v7 + 864)) && *(_QWORD *)(v7 + 32) != PsGetCurrentProcess(v9, v8) )
      {
        *((_DWORD *)v6 + 68) |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        *((_DWORD *)v6 + 72) |= 4u;
        qword_1C0215788 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v13 = *((_DWORD *)v6 + 68);
        if ( (v13 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
          v13 = *((_DWORD *)v6 + 68);
        }
        *((_DWORD *)v6 + 68) = v13 | 0x200000;
        ZwSetEvent(*(HANDLE *)(v7 + 384), 0LL);
        v4 = 0;
      }
      else if ( *(_BYTE *)(v7 + 81) || *(_BYTE *)(v7 + 82) )
      {
        v4 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 45, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
      else
      {
        v4 = RIMFreeDev(v7, v6 + 11);
      }
    }
    *(_QWORD *)(v7 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v4;
}
