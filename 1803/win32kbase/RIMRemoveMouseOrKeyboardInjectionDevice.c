/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00E5724
 * Callers:
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // esi
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x2Cu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = RawInputManagerDeviceObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x2Eu,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  }
  else
  {
    v5 = Object;
    if ( *((_BYTE *)Object + 128) >= 2u )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    v6 = v5[52];
    RIMLockExclusive(v6 + 96);
    if ( v6 )
    {
      if ( (*(_QWORD *)(v6 + 624) || *(_DWORD *)(v6 + 848)) && *(_QWORD *)(v6 + 32) != PsGetCurrentProcess(v7) )
      {
        *((_DWORD *)v5 + 66) |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        *((_DWORD *)v5 + 70) |= 4u;
        qword_1C01A1640 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v10 = *((_DWORD *)v5 + 66);
        if ( (v10 & 0x200000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
          v10 = *((_DWORD *)v5 + 66);
        }
        *((_DWORD *)v5 + 66) = v10 | 0x200000;
        ZwSetEvent(*(HANDLE *)(v6 + 376), 0LL);
        v4 = 0;
      }
      else if ( *(_BYTE *)(v6 + 73) || *(_BYTE *)(v6 + 75) )
      {
        v4 = -1073741637;
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x2Du,
          (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      }
      else
      {
        v4 = RIMFreeDev(v6, v5 + 10);
      }
    }
    *(_QWORD *)(v6 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
