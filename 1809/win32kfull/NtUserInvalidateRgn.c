/*
 * XREFs of NtUserInvalidateRgn @ 0x1C00C7210
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v11;
    v11[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v7 = xxxRedrawWindow((struct tagWND *)v2);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
