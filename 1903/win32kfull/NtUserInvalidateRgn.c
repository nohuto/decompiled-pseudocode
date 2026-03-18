/*
 * XREFs of NtUserInvalidateRgn @ 0x1C011D410
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    v14 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v14;
    v15 = v6;
    HMLockObject(v6);
    v8 = xxxRedrawWindow(v9, 0LL, a2, a3 != 0 ? 5 : 1);
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
