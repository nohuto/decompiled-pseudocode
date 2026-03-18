/*
 * XREFs of CleanMonitorsAndWindowsSnapshot @ 0x1C01DA1B4
 * Callers:
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C011C1F0 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     DeleteMonitorsAndWindowsSnapShot @ 0x1C01DA240 (DeleteMonitorsAndWindowsSnapShot.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01DA358 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanMonitorsAndWindowsSnapshot(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    result = Win32FreePool(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v1 )
  {
    result = Win32FreePool(*(_QWORD *)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
