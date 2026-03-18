/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C0041880
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C0041940 (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0042660 (DrvGetDisplayConfigBufferSizes.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int DisplayConfigBufferSizes; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = a1;
  v11 = 0;
  UserSessionSwitchEnterCrit(a1, (__int64)a2, a3);
  if ( gbVideoInitialized )
  {
    v5 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v6 = 65533LL;
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu || (unsigned int)GreIsDisconnectDeviceAttached() )
    {
      v9 = 0;
    }
    else
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(v4, &v11);
      v9 = DisplayConfigBufferSizes;
      if ( DisplayConfigBufferSizes < 0
        && DisplayConfigBufferSizes != -1073741811
        && DisplayConfigBufferSizes != -1073741801
        && DisplayConfigBufferSizes != -1073741790
        && DisplayConfigBufferSizes != -1073741776
        && DisplayConfigBufferSizes != -1073741637
        && (DisplayConfigBufferSizes <= -1073741586 || DisplayConfigBufferSizes > -1073741574) )
      {
        v9 = -1073741823;
      }
    }
    *a2 = v11;
  }
  else
  {
    v9 = -1073741823;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v6, (__int64)v5, v7);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v9;
}
