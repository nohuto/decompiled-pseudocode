/*
 * XREFs of NtUserCreateCaret @ 0x1C00DDAB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateCaret @ 0x1C00DDB70 (xxxCreateCaret.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int Caret; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  Caret = 0;
  if ( v8 )
  {
    v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    v18 = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    Caret = xxxCreateCaret(v8, a2, a3, a4, v17, v18);
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return Caret;
}
