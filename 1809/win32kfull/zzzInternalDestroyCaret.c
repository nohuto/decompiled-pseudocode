/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C00DDCEC
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     zzzDestroyCaret @ 0x1C00DD7F0 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C00DDB70 (xxxCreateCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     zzzInternalHideCaret @ 0x1C0073DD4 (zzzInternalHideCaret.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 */

void zzzInternalDestroyCaret()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  zzzInternalHideCaret();
  v0 = *(_QWORD *)(gptiCurrent + 432LL);
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
    v5[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v5;
    v5[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    HMAssignmentUnlock(v1);
    xxxWindowEvent(0x8001u, v2, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    ThreadUnlock1(v4, v3);
  }
}
