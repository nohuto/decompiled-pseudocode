/*
 * XREFs of NtUserDeferWindowDpiChanges @ 0x1C012F250
 * Callers:
 *     <none>
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00732C0 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDeferWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // r9
  __int64 v9; // rcx
  _BOOL8 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x2FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v11;
      v11[1] = v2;
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      v9 = *(_QWORD *)(v2 + 40);
      if ( (*(_DWORD *)(v9 + 288) & 0xF) == 2 )
      {
        if ( *(_WORD *)(v9 + 286) )
        {
          v10 = (*(_DWORD *)(v2 + 288) & 1) == 0;
          *(_DWORD *)(v2 + 288) |= 1u;
          v6 = v10;
        }
        else
        {
          v6 = SetDeferredDpiStateForWindowAndChildren((struct tagWND *)v2, 1, 1);
        }
      }
      else
      {
        UserSetLastError(87LL, v3, v5, v2);
      }
      ThreadUnlock1(v10, v3);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v7);
  return v6;
}
