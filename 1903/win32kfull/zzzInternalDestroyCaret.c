/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C0088BEC
 * Callers:
 *     zzzDestroyCaret @ 0x1C00868C0 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C0086A94 (xxxCreateCaret.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C008B4BC (zzzInternalHideCaret.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 */

__int64 zzzInternalDestroyCaret()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = zzzInternalHideCaret();
  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v1 + 352) )
  {
    result = FindTimer(*(_QWORD *)(v1 + 304), 0xFFFF, 2, 1, 0LL);
    *(_QWORD *)(v1 + 352) = 0LL;
  }
  v2 = v1 + 304;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_DWORD *)(v1 + 316) = 0;
  v3 = *(_QWORD *)(v1 + 304);
  if ( v3 )
  {
    v7 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v7;
    v8 = v3;
    HMLockObject(v3);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1(v5, v4, v6);
  }
  return result;
}
