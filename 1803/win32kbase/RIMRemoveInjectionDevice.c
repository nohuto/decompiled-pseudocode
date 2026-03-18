/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C00E53B0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, __int64 a2)
{
  int v4; // esi
  HANDLE *v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  _DWORD *v11; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x2Fu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = (HANDLE *)Object;
    RIMLockExclusive((__int64)Object + 96);
    v4 = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, &Object);
    if ( v4 < 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x31u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      v7 = Object;
      if ( (v5[78] || *((_DWORD *)v5 + 212)) && v5[4] != (HANDLE)PsGetCurrentProcess(v6) )
      {
        v7[66] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v7[70] |= 4u;
        qword_1C01A1640 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v10 = v7[66];
        if ( (v10 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
          v10 = v7[66];
        }
        v7[66] = v10 | 0x200000;
        ZwSetEvent(v5[47], 0LL);
        v4 = 0;
      }
      else if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
      {
        v4 = -1073741637;
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x30u,
          (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      }
      else
      {
        if ( v7 )
          v11 = v7 + 20;
        else
          v11 = 0LL;
        v4 = RIMFreeDev(v5, v11);
      }
      ObfDereferenceObject(v7);
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x32u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v4);
  return (unsigned int)v4;
}
