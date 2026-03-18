/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C010F560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  int v4; // esi
  HANDLE *v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  _DWORD *v12; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x2Fu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = (HANDLE *)Object;
    RIMLockExclusive((__int64)Object + 104);
    v4 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
    if ( v4 < 0 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x31u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      v7 = Object;
      if ( (v5[80] || *((_DWORD *)v5 + 216)) && v5[4] != (HANDLE)PsGetCurrentProcess(v6) )
      {
        v7[68] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v7[72] |= 4u;
        qword_1C01D0F90 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v11 = v7[68];
        if ( (v11 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
          v11 = v7[68];
        }
        v7[68] = v11 | 0x200000;
        ZwSetEvent(v5[48], 0LL);
        v4 = 0;
      }
      else if ( *((_BYTE *)v5 + 81) || *((_BYTE *)v5 + 82) )
      {
        v4 = -1073741637;
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x30u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      }
      else
      {
        if ( v7 )
          v12 = v7 + 22;
        else
          v12 = 0LL;
        v4 = RIMFreeDev(v5, v12);
      }
      ObfDereferenceObject(v7);
    }
    v5[14] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x32u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v4);
  return (unsigned int)v4;
}
