/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C013A350
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C0180A00 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C01872F0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMQueryDev @ 0x1C00729FC (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(char *a1, char *a2)
{
  char *v2; // rsi
  int v4; // edx
  int v5; // ebx
  _BYTE *v6; // rdi
  int v7; // edx
  __int64 v8; // r8
  PVOID v9; // rsi
  char *v10; // rdx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 106, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 104);
    RIMLockExclusive((__int64)(v6 + 568));
    if ( v6[81] || v6[82] )
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 107, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      v5 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
      if ( v5 >= 0 )
      {
        v9 = Object;
        if ( Object )
          v10 = (char *)Object + 88;
        else
          v10 = 0LL;
        if ( v10[48] == 2 )
          v5 = -1073741811;
        else
          v5 = RIMQueryDev((__int64)v6, (__int64)v10, v8);
        ObfDereferenceObject(v9);
      }
    }
    *((_QWORD *)v6 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 568, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v6 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v4, 1, 108, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v5);
  }
  return (unsigned int)v5;
}
