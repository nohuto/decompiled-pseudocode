/*
 * XREFs of RemoteRedrawScreen @ 0x1C0160EE8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C010DF50 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 *     RemotePassthruDisable @ 0x1C0212710 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0212810 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02129E0 (RemoteShadowStart.c)
 *     NtUserRemoteRedrawScreen @ 0x1C02334D0 (NtUserRemoteRedrawScreen.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoteRedrawScreen(int a1)
{
  void *v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v11[10]; // [rsp+60h] [rbp-9h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 9, 19, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      memset(v11, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v11[1]);
      v11[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v11[3]) = 66;
      LOBYTE(v11[6]) = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 1LL, 0LL, v11);
    }
    else
    {
      KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v1 = *(void **)(gspdeskShouldBeForeground + 40LL);
      if ( (*(_DWORD *)(gspdeskShouldBeForeground + 48LL) & 8) == 0 )
      {
        v2 = *(_QWORD *)(gspdeskShouldBeForeground + 40LL);
        memset(v9, 0, sizeof(v9));
        memset(v10, 0, sizeof(v10));
        PushW32ThreadLock(v2, v10, UserDereferenceObject);
        if ( v1 )
          ObfReferenceObject(v1);
        PushW32ThreadLock(gspdeskShouldBeForeground, v9, UserDereferenceObject);
        v3 = gspdeskShouldBeForeground;
        if ( gspdeskShouldBeForeground )
        {
          ObfReferenceObject(gspdeskShouldBeForeground);
          v3 = gspdeskShouldBeForeground;
        }
        xxxSwitchDesktop((__int64)v1, v3, 2);
        PopAndFreeW32ThreadLock((__int64)v9, v4, v5);
        PopAndFreeW32ThreadLock((__int64)v10, v6, v7);
      }
      LockObjectAssignment(gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
