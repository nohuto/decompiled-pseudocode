/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C004DDB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C004DAA0 (UserRemoteConnectedSessionUsingXddm.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C004FFF4 (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0050200 (DrvGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  int DisplayConfigBufferSizes; // eax
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0;
  EnterSharedCrit(0, 1);
  if ( gbVideoInitialized )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    if ( ((unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached() )
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a1, &v10);
      if ( DisplayConfigBufferSizes < 0
        && DisplayConfigBufferSizes != -1073741811
        && DisplayConfigBufferSizes != -1073741801
        && DisplayConfigBufferSizes != -1073741790
        && DisplayConfigBufferSizes != -1073741776
        && DisplayConfigBufferSizes != -1073741637
        && (DisplayConfigBufferSizes <= -1073741586 || DisplayConfigBufferSizes > -1073741574) )
      {
        DisplayConfigBufferSizes = -1073741823;
      }
      v4 = DisplayConfigBufferSizes;
    }
    *a2 = v10;
  }
  else
  {
    v4 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
