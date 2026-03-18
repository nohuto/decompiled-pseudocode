/*
 * XREFs of NtUserPaintDesktop @ 0x1C021A960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxInternalPaintDesktop @ 0x1C012D518 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
    v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v14;
    v14[1] = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v4 = xxxInternalPaintDesktop(v6, a1, 1);
    ThreadUnlock1(v8, v7);
  }
  else
  {
    UserSetLastError(0LL, gptiCurrent, v2, v3);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v4;
}
