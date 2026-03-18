/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C004A070
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C004A12C (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C004A220 (DrvGetDisplayConfigBufferSizes.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C00A5F98 (UserRemoteConnectedSessionUsingXddm.c)
 *     ??0EnterLeaveCritShared@@QEAA@XZ @ 0x1C00A8208 (--0EnterLeaveCritShared@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  int DisplayConfigBufferSizes; // eax
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v9 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared((EnterLeaveCritShared *)&v8);
  if ( gbVideoInitialized )
  {
    v5 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    if ( ((unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached() )
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a1, &v9);
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
    *a2 = v9;
  }
  else
  {
    v4 = -1073741823;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
