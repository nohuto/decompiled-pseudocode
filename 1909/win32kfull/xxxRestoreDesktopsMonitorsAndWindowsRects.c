/*
 * XREFs of xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0160E84
 * Callers:
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAB90 (xxxRestoreMonitorsAndWindowsRects.c)
 */

__int64 __fastcall xxxRestoreDesktopsMonitorsAndWindowsRects(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rdi
  int v3; // ebp
  _QWORD *v5; // rbx
  _QWORD **v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  memset(v14, 0, 24);
  while ( v2 && v3 >= 0 )
  {
    v5 = *a2;
    if ( *a2 != a2 )
    {
      while ( 1 )
      {
        v7 = (_QWORD **)*v5;
        if ( (_QWORD *)v5[5] == v2 )
          break;
        v5 = (_QWORD *)*v5;
        if ( v7 == a2 )
          goto LABEL_5;
      }
      memset(v13, 0, sizeof(v13));
      if ( v7[1] != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
      PushW32ThreadLock((__int64)v5, v14, (__int64)DeleteMonitorsAndWindowsSnapShot);
      PushW32ThreadLock((__int64)v2, v13, UserDereferenceObject);
      ObfReferenceObject(v2);
      v3 = xxxRestoreMonitorsAndWindowsRects(v5, v2);
      PopAndFreeW32ThreadLock((__int64)v13, v9, v10);
      PopAndFreeAlwaysW32ThreadLock((__int64)v14, v11, v12);
    }
LABEL_5:
    v2 = (_QWORD *)v2[4];
  }
  return (unsigned int)v3;
}
