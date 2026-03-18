/*
 * XREFs of xxxSetSystemMenu @ 0x1C014D6A0
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C014D560 (NtUserSetSystemMenu.c)
 * Callees:
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C006BABC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     MNPositionSysMenu @ 0x1C014D710 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  _QWORD *v7; // rdx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 136);
    if ( LockWndMenuWorker(a1, 1u, a2) )
      DestroyMenu(v6);
    v7 = a2[2];
    if ( !v7 )
      v7 = (_QWORD *)**a2;
    MNPositionSysMenu(a1, v7);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437LL, (__int64)a2, a3, a4);
    return 0LL;
  }
}
