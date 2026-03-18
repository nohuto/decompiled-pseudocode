/*
 * XREFs of NtUserRemoveProp @ 0x1C00DE220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserRemoveProp(HWND a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  struct tagWND *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = 0LL;
  EnterCrit(0LL, 1LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v10, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v10) )
  {
    v5 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v10);
    v7 = *((_QWORD *)v5 + 18);
    if ( (_WORD)v2 == word_1C032A65C )
      *(_QWORD *)(*((_QWORD *)v5 + 5) + 312LL) = 0LL;
    v4 = RealInternalRemoveProp(v7, v2, 0LL, v6);
  }
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v10);
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
