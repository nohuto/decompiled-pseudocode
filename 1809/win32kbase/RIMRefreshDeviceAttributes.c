/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C010F3C0
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C014E5F0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0153340 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMQueryDev @ 0x1C0088FEC (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(char *a1, char *a2)
{
  int v4; // ebx
  _BYTE *v5; // rdi
  __int64 v6; // r8
  PVOID v7; // rsi
  char *v8; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x6Cu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    RIMLockExclusive((__int64)(v5 + 568));
    if ( v5[81] || v5[82] )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x6Du, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      v4 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v4 >= 0 )
      {
        v7 = Object;
        if ( Object )
          v8 = (char *)Object + 88;
        else
          v8 = 0LL;
        if ( v8[48] == 2 )
          v4 = -1073741811;
        else
          v4 = RIMQueryDev((__int64)v5, (__int64)v8, v6);
        ObfDereferenceObject(v7);
      }
    }
    *((_QWORD *)v5 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 568, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v5 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x6Eu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v4);
  return (unsigned int)v4;
}
