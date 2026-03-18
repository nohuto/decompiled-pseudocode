/*
 * XREFs of xxxSetSystemMenu @ 0x1C01556FC
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C0155590 (NtUserSetSystemMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E554C (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNPositionSysMenu @ 0x1C015576C (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  _QWORD *v7; // rdx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 160);
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
