/*
 * XREFs of SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01C711C
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01C6F70 (CleanMonitorsAndWindowsSnapshot.c)
 *     SnapshotWindowRects @ 0x1C01C71F4 (SnapshotWindowRects.c)
 */

__int64 __fastcall SnapShotDesktopsMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  result = 0LL;
  while ( v2 )
  {
    v5 = Win32AllocPool(48LL, 1919775573LL);
    v6 = (_QWORD *)v5;
    if ( !v5 )
      return 3221225495LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    v7 = SnapshotMonitorRects();
    v6[2] = v7;
    if ( !v7 )
      goto LABEL_6;
    v8 = SnapshotWindowRects(v2, v6 + 4);
    v6[3] = v8;
    if ( !v8 )
    {
      CleanMonitorsAndWindowsSnapshot((__int64)v6);
LABEL_6:
      Win32FreePool(v6);
      result = 3221225495LL;
      goto LABEL_7;
    }
    v6[5] = v2;
    result = 0LL;
    v9 = *(_QWORD **)(a2 + 8);
    if ( *v9 != a2 )
      __fastfail(3u);
    *v6 = a2;
    v6[1] = v9;
    *v9 = v6;
    *(_QWORD *)(a2 + 8) = v6;
LABEL_7:
    v2 = *(_QWORD *)(v2 + 32);
  }
  return result;
}
