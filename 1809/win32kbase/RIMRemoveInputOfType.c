/*
 * XREFs of RIMRemoveInputOfType @ 0x1C00525A0
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C0094A30 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0050744 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMRemoveDevOfInputType @ 0x1C00892D4 (RIMRemoveDevOfInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C0093E40 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall RIMRemoveInputOfType(char *a1, unsigned int a2)
{
  int v4; // esi
  _DWORD *v5; // rbx
  unsigned int v6; // eax
  unsigned __int16 v8; // r9
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x14u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) || *((_BYTE *)v5 + 82) )
    {
      v4 = -1073741637;
      v8 = 23;
    }
    else if ( a2 && ((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0 )
    {
      if ( (a2 & v5[21]) != 0 )
      {
        RIMRemoveDevOfInputType(v5, a2);
        v6 = RimInputTypeToDeviceType(a2);
        v4 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v5, v6);
        v5[21] &= ~a2;
LABEL_9:
        *((_QWORD *)v5 + 14) = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 26, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v5);
        goto LABEL_10;
      }
      v4 = -1073741637;
      v8 = 21;
    }
    else
    {
      v4 = -1073741811;
      v8 = 22;
    }
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, v8, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    goto LABEL_9;
  }
LABEL_10:
  v9 = v4;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x18u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v9);
  return (unsigned int)v4;
}
