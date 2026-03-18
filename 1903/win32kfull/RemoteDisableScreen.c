/*
 * XREFs of RemoteDisableScreen @ 0x1C0133A40
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C013383C (xxxRemoteStopScreenUpdates.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  void *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v18[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-30h] BYREF

  v4 = gspdeskDisconnect;
  v5 = 0;
  memset(v18, 0, sizeof(v18));
  memset(v19, 0, sizeof(v19));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, a2, 9, 20, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
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
      PushW32ThreadLock((__int64)v8, v19, UserDereferenceObject, v9);
      if ( v8 )
        ObfReferenceObject(v8);
      PushW32ThreadLock((__int64)v4, v18, UserDereferenceObject, v10);
      ObfReferenceObject(v4);
      v5 = xxxSwitchDesktop((__int64)v8, (__int64)v4, 2, 0LL);
      PopAndFreeW32ThreadLock((__int64)v18, v11, v12, v13);
      PopAndFreeW32ThreadLock((__int64)v19, v14, v15, v16);
    }
  }
  return v5;
}
