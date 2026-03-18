/*
 * XREFs of RIMRemoveInputOfType @ 0x1C0059BC0
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C005B550 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0058258 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMRemoveDevOfInputType @ 0x1C005B43C (RIMRemoveDevOfInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C005B520 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall RIMRemoveInputOfType(char *a1, unsigned int a2)
{
  unsigned int v2; // edi
  int v4; // edx
  int v5; // ebx
  _DWORD *v6; // rsi
  int v7; // edx
  unsigned int v8; // eax
  int v10; // r9d
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 20, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v6 + 81) || *((_BYTE *)v6 + 82) )
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v10 = 23;
    }
    else if ( v2 && ((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0 )
    {
      if ( (v2 & v6[21]) != 0 )
      {
        RIMRemoveDevOfInputType(v6, v2);
        v8 = RimInputTypeToDeviceType(v2);
        v5 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v6, v8);
        v6[21] &= ~v2;
LABEL_11:
        *((_QWORD *)v6 + 14) = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 26, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v6);
        goto LABEL_12;
      }
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v10 = 21;
    }
    else
    {
      v5 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v10 = 22;
    }
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, v10, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
    goto LABEL_11;
  }
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v4, 1, 24, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v5);
  }
  return (unsigned int)v5;
}
