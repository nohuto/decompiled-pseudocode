/*
 * XREFs of RemoteRedrawScreen @ 0x1C0158694
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 *     RemotePassthruDisable @ 0x1C01FB940 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C01FBA10 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01FBBB0 (RemoteShadowStart.c)
 *     NtUserRemoteRedrawScreen @ 0x1C021B9D0 (NtUserRemoteRedrawScreen.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 */

__int64 RemoteRedrawScreen()
{
  void *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdx
  _QWORD v4[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v0 = (void *)*((_QWORD *)gspdeskShouldBeForeground + 5);
      if ( (*((_DWORD *)gspdeskShouldBeForeground + 12) & 8) == 0 )
      {
        PushW32ThreadLock((__int64)v0, v5, UserDereferenceObject);
        if ( v0 )
          ObfReferenceObject(v0);
        PushW32ThreadLock((__int64)gspdeskShouldBeForeground, v4, UserDereferenceObject);
        if ( gspdeskShouldBeForeground )
          ObfReferenceObject(gspdeskShouldBeForeground);
        xxxSwitchDesktop((__int64)v0, (__int64)gspdeskShouldBeForeground, 2, 0);
        PopAndFreeW32ThreadLock((__int64)v4, v1);
        PopAndFreeW32ThreadLock((__int64)v5, v2);
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
