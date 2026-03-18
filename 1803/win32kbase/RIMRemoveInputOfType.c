/*
 * XREFs of RIMRemoveInputOfType @ 0x1C00E55D0
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C0127A50 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RimInputTypeToDeviceType @ 0x1C00E5EE0 (RimInputTypeToDeviceType.c)
 *     RIMRemoveDevOfInputType @ 0x1C00F822C (RIMRemoveDevOfInputType.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00FB4D4 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 */

__int64 __fastcall RIMRemoveInputOfType(char *a1, unsigned int a2)
{
  int v4; // esi
  _DWORD *v5; // rbx
  unsigned int v6; // eax
  unsigned __int16 v7; // r9
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x14u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
    {
      v4 = -1073741637;
      v7 = 23;
    }
    else if ( a2 && ((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0 )
    {
      if ( (a2 & v5[19]) != 0 )
      {
        RIMRemoveDevOfInputType(v5, a2);
        v6 = RimInputTypeToDeviceType(a2);
        v4 = RIMUnRegisterForInputDeviceTypeClassNotifications(v5, v6);
        v5[19] &= ~a2;
LABEL_13:
        *((_QWORD *)v5 + 13) = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 24, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v5);
        goto LABEL_14;
      }
      v4 = -1073741637;
      v7 = 21;
    }
    else
    {
      v4 = -1073741811;
      v7 = 22;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      v7,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    goto LABEL_13;
  }
LABEL_14:
  v9 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x18u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v9);
  return (unsigned int)v4;
}
