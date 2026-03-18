/*
 * XREFs of NtUserDeferWindowDpiChanges @ 0x1C01398B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C008F63C (_SetDeferredDpiStateForWindowAndChildren.c)
 */

__int64 __fastcall NtUserDeferWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  _BOOL8 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v12 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v12;
      v13 = v2;
      HMLockObject(v2);
      v10 = *(_QWORD *)(v5 + 40);
      if ( (*(_DWORD *)(v10 + 288) & 0xF) == 2 )
      {
        if ( *(_WORD *)(v10 + 286) )
        {
          v11 = (*(_DWORD *)(v5 + 304) & 1) == 0;
          *(_DWORD *)(v5 + 304) |= 1u;
          v4 = v11;
        }
        else
        {
          v4 = SetDeferredDpiStateForWindowAndChildren((struct tagWND *)v5, 1, 1);
        }
      }
      else
      {
        UserSetLastError(87LL, v7, v8, v9);
      }
      ThreadUnlock1(v11, v7, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
