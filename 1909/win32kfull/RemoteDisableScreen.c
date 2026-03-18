/*
 * XREFs of RemoteDisableScreen @ 0x1C010E540
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C010E33C (xxxRemoteStopScreenUpdates.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD v14[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-30h] BYREF

  v4 = gspdeskDisconnect;
  v5 = 0;
  memset(v14, 0, sizeof(v14));
  memset(v15, 0, sizeof(v15));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, a2, 9, 20, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( v4 )
  {
    if ( a1 == v4 )
    {
      *a4 = 1;
    }
    else
    {
      v8 = (void *)v4[5];
      LockObjectAssignment(gspdeskShouldBeForeground, a1);
      *a4 = 1;
      PushW32ThreadLock((__int64)v8, v15, UserDereferenceObject);
      if ( v8 )
        ObfReferenceObject(v8);
      PushW32ThreadLock((__int64)v4, v14, UserDereferenceObject);
      ObfReferenceObject(v4);
      v5 = xxxSwitchDesktop(v8, v4, 2LL, 0LL);
      PopAndFreeW32ThreadLock((__int64)v14, v9, v10);
      PopAndFreeW32ThreadLock((__int64)v15, v11, v12);
    }
  }
  return v5;
}
