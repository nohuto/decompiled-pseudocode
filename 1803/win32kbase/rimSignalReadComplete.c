/*
 * XREFs of rimSignalReadComplete @ 0x1C00FF81C
 * Callers:
 *     RIMCompleteSecondaryRimReads @ 0x1C00E0B30 (RIMCompleteSecondaryRimReads.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C00E1508 (RIMDoMobileKeyboardInvalidation.c)
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00FE314 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C00FE4B0 (rimDispatchCompleteFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     RIMArmWatchDog @ 0x1C00DDB24 (RIMArmWatchDog.c)
 *     WPP_RECORDER_SF_qdqqq @ 0x1C00E61EC (WPP_RECORDER_SF_qdqqq.c)
 *     RIMHandleTTMDeviceInput @ 0x1C00F6898 (RIMHandleTTMDeviceInput.c)
 */

int __fastcall rimSignalReadComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v4; // ecx
  int result; // eax
  int v7; // eax
  __int64 v8; // rdx
  int updated; // eax
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]

  v2 = *(_DWORD *)(a2 + 832);
  v4 = 0;
  if ( v2 == 1 || v2 == 2 && (*(_DWORD *)(*(_QWORD *)(a2 + 336) + 76LL) & gWakeOnDeviceTypes) == 0 )
    v4 = 1;
  if ( v4 )
  {
    result = WPP_RECORDER_SF_qq(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               0x14u,
               0xAu,
               (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
               a2,
               *(_QWORD *)(a2 + 16));
    *(_BYTE *)(a1 + 568) = 1;
  }
  else if ( *(_BYTE *)(a1 + 568) )
  {
    return WPP_RECORDER_SF_qq(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x14u,
             0xEu,
             (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
             a2,
             *(_QWORD *)(a2 + 16));
  }
  else
  {
    v7 = RIMHandleTTMDeviceInput(a2);
    if ( v7 < 0 )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0xBu,
        (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
        v7);
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *(LARGE_INTEGER *)(a1 + 696) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 704) = 1;
    RIMArmWatchDog();
    qword_1C01A1620 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(a2 + 480) + 24LL) != 7 )
    {
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
      if ( updated < 0 )
      {
        LODWORD(v10) = updated;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          0xCu,
          (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
          v10);
      }
    }
    LODWORD(v11) = *(_DWORD *)(a1 + 852) != 0;
    WPP_RECORDER_SF_qdqqq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      0x14u,
      0xDu,
      (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
      a1,
      v11,
      a2,
      *(_QWORD *)(a2 + 16),
      *(_QWORD *)(a1 + 632));
    *(_DWORD *)(a2 + 184) |= 0x40000000u;
    ZwSetEvent(*(HANDLE *)(a1 + 632), 0LL);
    result = ZwClose(*(HANDLE *)(a1 + 632));
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  return result;
}
