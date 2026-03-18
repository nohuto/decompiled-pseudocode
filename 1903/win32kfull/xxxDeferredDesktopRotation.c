/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C020D2D0
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0115BC0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 */

__int64 __fastcall xxxDeferredDesktopRotation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD **)(gptiCurrent + 448LL);
  v5 = v4[1];
  if ( v5 && (*(_DWORD *)(*(_QWORD *)v5 + 64LL) & 2) != 0 )
  {
    v6 = v4[33];
    v4[33] = 0LL;
    memset(v15, 0, 24);
    memset(v14, 0, sizeof(v14));
    *(_DWORD *)(*(_QWORD *)v5 + 64LL) &= ~2u;
    if ( v6 )
      PushW32ThreadLock(v6, v15, (__int64)Win32FreePool, a4);
    PushW32ThreadLock((__int64)v4, v14, UserDereferenceObject, a4);
    ObfReferenceObject(v4);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v4, v6, *(_WORD *)(gpsi + 6996LL), 1u);
    PopAndFreeW32ThreadLock((__int64)v14, v7, v8, v9);
    if ( v6 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v15, v10, v11, v12);
  }
  return 0LL;
}
