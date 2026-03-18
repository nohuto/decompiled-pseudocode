/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C01D2640
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2230 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 */

__int64 xxxDeferredDesktopRotation()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  v0 = *(_QWORD **)(gptiCurrent + 448LL);
  v1 = v0[1];
  if ( v1 && (*(_DWORD *)(*(_QWORD *)v1 + 52LL) & 2) != 0 )
  {
    v2 = v0[33];
    v0[33] = 0LL;
    *(_DWORD *)(*(_QWORD *)v1 + 52LL) &= ~2u;
    if ( v2 )
      PushW32ThreadLock(v2, v6, (__int64)Win32FreePool);
    PushW32ThreadLock((__int64)v0, v5, UserDereferenceObject);
    ObfReferenceObject(v0);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v0, v2, *(_WORD *)(gpsi + 6996LL), 1LL);
    PopAndFreeW32ThreadLock((__int64)v5, v3);
    if ( v2 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v6);
  }
  return 0LL;
}
