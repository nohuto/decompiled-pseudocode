/*
 * XREFs of NtUserInvalidateRgn @ 0x1C00F9B10
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  if ( v6 )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v16;
    v16[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v11 = xxxRedrawWindow((struct tagWND *)v6, 0LL, a2, a3 != 0 ? 5 : 1);
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
