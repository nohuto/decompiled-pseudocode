/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C02359A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     SetDisplayAffinity @ 0x1C0244BFC (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v6, v5) )
    {
      v12 = 5LL;
LABEL_14:
      UserSetLastError(v12, v9, v10, v11);
      goto LABEL_15;
    }
    v13 = *(_QWORD *)(v8 + 104);
    if ( v13 && (*(_DWORD *)(*(_QWORD *)(v13 + 16) + 1224LL) & 0x40000) != 0 )
      v8 = *(_QWORD *)(v8 + 104);
    if ( !(unsigned int)IsTopLevelWindow(v8) || a2 && (a2 & 1) == 0 )
    {
      v12 = 87LL;
      goto LABEL_14;
    }
    if ( !(unsigned int)SetDisplayAffinity((struct tagWND *)v8) )
    {
      v12 = 8LL;
      goto LABEL_14;
    }
    v7 = 1LL;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
