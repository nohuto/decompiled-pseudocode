/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C0063D14
 * Callers:
 *     zzzDestroyCaret @ 0x1C0063850 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C0063BA8 (xxxCreateCaret.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     zzzInternalHideCaret @ 0x1C003AA10 (zzzInternalHideCaret.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 */

void zzzInternalDestroyCaret()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  zzzInternalHideCaret();
  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v0 + 344) )
  {
    FindTimer(*(_QWORD *)(v0 + 296), 0xFFFF, 2, 1, 0LL);
    *(_QWORD *)(v0 + 344) = 0LL;
  }
  v1 = v0 + 296;
  *(_QWORD *)(v0 + 336) = 0LL;
  *(_DWORD *)(v0 + 308) = 0;
  v2 = *(_QWORD *)(v0 + 296);
  if ( v2 )
  {
    v6[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v6;
    v6[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    HMAssignmentUnlock(v1);
    xxxWindowEvent(0x8001u, v2, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    ThreadUnlock1(v4, v3, v5);
  }
}
