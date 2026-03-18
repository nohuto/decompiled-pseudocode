/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C020D020
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 * Callees:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0010E80 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 */

__int64 xxxDeferredDesktopRotation()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v0 = *(_QWORD **)(gptiCurrent + 448LL);
  v1 = v0[1];
  if ( v1 && (*(_DWORD *)(*(_QWORD *)v1 + 64LL) & 2) != 0 )
  {
    v2 = v0[33];
    v0[33] = 0LL;
    memset(v9, 0, 24);
    memset(v8, 0, sizeof(v8));
    *(_DWORD *)(*(_QWORD *)v1 + 64LL) &= ~2u;
    if ( v2 )
      PushW32ThreadLock(v2, v9, (__int64)Win32FreePool);
    PushW32ThreadLock((__int64)v0, v8, UserDereferenceObject);
    ObfReferenceObject(v0);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v0, v2, *(_WORD *)(gpsi + 6996LL), 1u);
    PopAndFreeW32ThreadLock((__int64)v8, v3, v4);
    if ( v2 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v9, v5, v6);
  }
  return 0LL;
}
