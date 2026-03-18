/*
 * XREFs of NtUserPaintDesktop @ 0x1C01F3330
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C010C1E8 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL);
    v13[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v13;
    v13[1] = v4;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v2 = xxxInternalPaintDesktop(v4, a1, 1);
    ThreadUnlock1(v6, v5, v7);
  }
  else
  {
    UserSetLastError(0LL, gptiCurrent);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
