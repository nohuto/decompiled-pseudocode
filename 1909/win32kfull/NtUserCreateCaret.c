/*
 * XREFs of NtUserCreateCaret @ 0x1C00F5E10
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateCaret @ 0x1C00F5EF4 (xxxCreateCaret.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int Caret; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  Caret = 0;
  v11 = v8;
  if ( v8 )
  {
    v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    v17 = v8;
    HMLockObject(v8);
    Caret = xxxCreateCaret(v11, a2, a3, a4);
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v9);
  return Caret;
}
