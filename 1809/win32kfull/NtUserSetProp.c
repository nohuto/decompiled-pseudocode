/*
 * XREFs of NtUserSetProp @ 0x1C00B66B0
 * Callers:
 *     <none>
 * Callees:
 *     SetSharedPropForFilteredProcesses @ 0x1C0003AB4 (SetSharedPropForFilteredProcesses.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00B6874 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetProp(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int16 AtomFromAtomTable; // dx
  __int64 v15; // rbx
  __int64 GlobalAtomTableOfWindow; // rax
  int v18; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v11 = 0;
  v12 = v6;
  if ( v6 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL);
    if ( *(_QWORD *)(v13 + 24) != v6 )
    {
      if ( !gbEnforceUIPI || (v13 = *(unsigned int *)(*(_QWORD *)(v6 + 16) + 488LL), (v13 & 0xC) != 0) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        v22 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL);
        v23 = *(unsigned int *)(v22 + 780);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 780) != (_DWORD)v23
          || (v24 = PsGetCurrentProcessWin32Process(v23),
              v22 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL),
              v13 = *(unsigned int *)(v22 + 784),
              *(_DWORD *)(v24 + 784) != (_DWORD)v13) )
        {
          UserSetLastError(5LL, v22, v20, v21);
          goto LABEL_9;
        }
      }
    }
    AtomFromAtomTable = word_1C0317660;
    if ( !word_1C0317660 )
    {
      GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(v12);
      if ( GlobalAtomTableOfWindow )
      {
        AtomFromAtomTable = UserFindAtomFromAtomTable(
                              GlobalAtomTableOfWindow,
                              L"Microsoft.Windows.WindowFactory.ViewId");
        word_1C0317660 = AtomFromAtomTable;
      }
    }
    if ( (_WORD)a2 == AtomFromAtomTable )
    {
      *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = a3;
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL);
      if ( v15 != PsGetCurrentProcessWin32Process(v13) && (*(_DWORD *)(v15 + 820) & 0x1000000) != 0 )
      {
        KeStackAttachProcess(*(PRKPROCESS *)v15, &ApcState);
        v18 = SetSharedPropForFilteredProcesses(v12, a2, a3);
        KeUnstackDetachProcess(&ApcState);
        if ( v18 == 1 )
        {
          v11 = 1;
          goto LABEL_9;
        }
      }
    }
    v11 = RealInternalSetProp(v12 + 120, (unsigned __int16)a2, a3, HIWORD(a2) != 0 ? 2 : 0);
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
