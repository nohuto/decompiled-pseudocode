/*
 * XREFs of xxxSetMenu @ 0x1C014DB3C
 * Callers:
 *     NtUserSetMenu @ 0x1C014D990 (NtUserSetMenu.c)
 * Callees:
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C006BABC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall xxxSetMenu(struct tagWND *a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  int v4; // edi

  v4 = a3;
  LOBYTE(a4) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
  if ( (_BYTE)a4 == 64 )
  {
    UserSetLastError(1436LL, (__int64)a2, a3, a4);
    return 0LL;
  }
  else
  {
    LockWndMenuWorker((__int64)a1, 0, a2);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    {
      if ( v4 )
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
    }
    return 1LL;
  }
}
