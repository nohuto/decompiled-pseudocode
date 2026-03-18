/*
 * XREFs of RemoteRedrawScreen @ 0x1C015FF28
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0133450 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C015EF70 (xxxRemoteReconnect.c)
 *     RemotePassthruDisable @ 0x1C0212C50 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0212D50 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0212F20 (RemoteShadowStart.c)
 *     NtUserRemoteRedrawScreen @ 0x1C0233AF0 (NtUserRemoteRedrawScreen.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoteRedrawScreen(int a1)
{
  __int64 v1; // r9
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[3]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v15[10]; // [rsp+60h] [rbp-9h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 9, 19, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      memset(v15, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v15[1]);
      v15[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v15[3]) = 66;
      LOBYTE(v15[6]) = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 1LL, 0LL, v15);
    }
    else
    {
      KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v2 = *(void **)(gspdeskShouldBeForeground + 40LL);
      if ( (*(_DWORD *)(gspdeskShouldBeForeground + 48LL) & 8) == 0 )
      {
        v3 = *(_QWORD *)(gspdeskShouldBeForeground + 40LL);
        memset(v13, 0, sizeof(v13));
        memset(v14, 0, sizeof(v14));
        PushW32ThreadLock(v3, v14, UserDereferenceObject, v1);
        if ( v2 )
          ObfReferenceObject(v2);
        PushW32ThreadLock(gspdeskShouldBeForeground, v13, UserDereferenceObject, v4);
        v5 = gspdeskShouldBeForeground;
        if ( gspdeskShouldBeForeground )
        {
          ObfReferenceObject(gspdeskShouldBeForeground);
          v5 = gspdeskShouldBeForeground;
        }
        xxxSwitchDesktop((__int64)v2, v5, 2, 0LL);
        PopAndFreeW32ThreadLock((__int64)v13, v6, v7, v8);
        PopAndFreeW32ThreadLock((__int64)v14, v9, v10, v11);
      }
      LockObjectAssignment(gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
