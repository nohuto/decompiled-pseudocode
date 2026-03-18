/*
 * XREFs of NtUserPaintDesktop @ 0x1C0232910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C0138D90 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
    v12[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v12;
    v12[2] = 0LL;
    v12[1] = v6;
    if ( v6 )
      HMLockObject(v6);
    v4 = xxxInternalPaintDesktop(v6, a1, 1);
    ThreadUnlock1(v8, v7, v9);
  }
  else
  {
    UserSetLastError(0LL, gptiCurrent, v2, v3);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
