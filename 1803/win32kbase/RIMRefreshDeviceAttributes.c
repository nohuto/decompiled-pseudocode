/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C00E4610
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012AFC0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0131A70 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMQueryDev @ 0x1C00F80CC (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(char *a1, __int64 a2)
{
  int v4; // ebx
  _BYTE *v5; // rdi
  PVOID v6; // rsi
  char *v7; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x6Du,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    RIMLockExclusive((__int64)(v5 + 552));
    if ( v5[73] || v5[75] )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x6Eu,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      v4 = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, &Object);
      if ( v4 >= 0 )
      {
        v6 = Object;
        if ( Object )
          v7 = (char *)Object + 80;
        else
          v7 = 0LL;
        if ( v7[48] == 2 )
          v4 = -1073741811;
        else
          v4 = RIMQueryDev(v5);
        ObfDereferenceObject(v6);
      }
    }
    *((_QWORD *)v5 + 70) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 552, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v5 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x6Fu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v4);
  return (unsigned int)v4;
}
