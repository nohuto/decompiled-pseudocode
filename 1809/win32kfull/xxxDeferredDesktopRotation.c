/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C01F6FC0
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00BCA60 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 */

__int64 xxxDeferredDesktopRotation()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v0 = *(_QWORD **)(gptiCurrent + 456LL);
  v1 = v0[1];
  if ( v1 && (*(_DWORD *)(*(_QWORD *)v1 + 64LL) & 2) != 0 )
  {
    v2 = v0[33];
    v0[33] = 0LL;
    *(_DWORD *)(*(_QWORD *)v1 + 64LL) &= ~2u;
    if ( v2 )
      PushW32ThreadLock(v2, v7, (__int64)Win32FreePool);
    PushW32ThreadLock((__int64)v0, v6, UserDereferenceObject);
    ObfReferenceObject(v0);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v0, v2, *(_WORD *)(gpsi + 6996LL));
    PopAndFreeW32ThreadLock((__int64)v6, v3);
    if ( v2 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v7, v4);
  }
  return 0LL;
}
