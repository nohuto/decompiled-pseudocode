/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C010F79C
 * Callers:
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // r8
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x2Cu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x2Eu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
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
      if ( (*(_QWORD *)(v7 + 640) || *(_DWORD *)(v7 + 864)) && *(_QWORD *)(v7 + 32) != PsGetCurrentProcess(v8) )
      {
        *((_DWORD *)v6 + 68) |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        *((_DWORD *)v6 + 72) |= 4u;
        qword_1C01D0F90 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v12 = *((_DWORD *)v6 + 68);
        if ( (v12 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
          v12 = *((_DWORD *)v6 + 68);
        }
        *((_DWORD *)v6 + 68) = v12 | 0x200000;
        ZwSetEvent(*(HANDLE *)(v7 + 384), 0LL);
        v4 = 0;
      }
      else if ( *(_BYTE *)(v7 + 81) || *(_BYTE *)(v7 + 82) )
      {
        v4 = -1073741637;
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x2Du, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
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
