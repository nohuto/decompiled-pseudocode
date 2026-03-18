/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C0137EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  char *v2; // rsi
  int v4; // edx
  int v5; // edi
  HANDLE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  _DWORD *v14; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 47, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v5 >= 0 )
  {
    v6 = (HANDLE *)Object;
    RIMLockExclusive((__int64)Object + 104);
    v5 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 49, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      v9 = Object;
      if ( (v6[80] || *((_DWORD *)v6 + 216)) && v6[4] != (HANDLE)PsGetCurrentProcess(v8, v7) )
      {
        v9[68] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v9[72] |= 4u;
        qword_1C0215788 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v13 = v9[68];
        if ( (v13 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
          v13 = v9[68];
        }
        v9[68] = v13 | 0x200000;
        ZwSetEvent(v6[48], 0LL);
        v5 = 0;
      }
      else if ( *((_BYTE *)v6 + 81) || *((_BYTE *)v6 + 82) )
      {
        v5 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 48, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
        }
      }
      else
      {
        if ( v9 )
          v14 = v9 + 22;
        else
          v14 = 0LL;
        v5 = RIMFreeDev(v6, v14);
      }
      ObfDereferenceObject(v9);
    }
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v4, 1, 50, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v5);
  }
  return (unsigned int)v5;
}
