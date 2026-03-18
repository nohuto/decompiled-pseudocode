/*
 * XREFs of RemoteDisableScreen @ 0x1C00EA398
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00EA1E8 (xxxRemoteStopScreenUpdates.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  unsigned int v4; // ebx
  void *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = gspdeskDisconnect;
  v4 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( a1 == v2 )
  {
    if ( v2 )
      gbDesktopLocked = 1;
  }
  else if ( v2 )
  {
    v5 = (void *)v2[5];
    LockObjectAssignment(&gspdeskShouldBeForeground, a1);
    gbDesktopLocked = 1;
    PushW32ThreadLock((__int64)v5, v10, UserDereferenceObject);
    if ( v5 )
      ObfReferenceObject(v5);
    PushW32ThreadLock((__int64)v2, v9, UserDereferenceObject);
    ObfReferenceObject(v2);
    v4 = xxxSwitchDesktop((__int64)v5, (__int64)v2, 2, 0);
    PopAndFreeW32ThreadLock((__int64)v9, v6);
    PopAndFreeW32ThreadLock((__int64)v10, v7);
  }
  return v4;
}
