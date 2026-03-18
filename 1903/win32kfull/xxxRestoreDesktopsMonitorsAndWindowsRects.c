/*
 * XREFs of xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C015FEC4
 * Callers:
 *     xxxRemoteReconnect @ 0x1C015EF70 (xxxRemoteReconnect.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAD10 (xxxRestoreMonitorsAndWindowsRects.c)
 */

__int64 __fastcall xxxRestoreDesktopsMonitorsAndWindowsRects(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  int v5; // ebp
  _QWORD *v7; // rbx
  _QWORD **v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  v5 = 0;
  memset(v19, 0, 24);
  while ( v4 && v5 >= 0 )
  {
    v7 = *a2;
    if ( *a2 != a2 )
    {
      while ( 1 )
      {
        v9 = (_QWORD **)*v7;
        if ( (_QWORD *)v7[5] == v4 )
          break;
        v7 = (_QWORD *)*v7;
        if ( v9 == a2 )
          goto LABEL_5;
      }
      memset(v18, 0, sizeof(v18));
      if ( v9[1] != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      PushW32ThreadLock((__int64)v7, v19, (__int64)DeleteMonitorsAndWindowsSnapShot, a4);
      PushW32ThreadLock((__int64)v4, v18, UserDereferenceObject, v11);
      ObfReferenceObject(v4);
      v5 = xxxRestoreMonitorsAndWindowsRects(v7, v4);
      PopAndFreeW32ThreadLock((__int64)v18, v12, v13, v14);
      PopAndFreeAlwaysW32ThreadLock((__int64)v19, v15, v16, v17);
    }
LABEL_5:
    v4 = (_QWORD *)v4[4];
  }
  return (unsigned int)v5;
}
