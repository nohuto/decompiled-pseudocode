/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C00CBF4C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C002D690 (NtUserUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00CBB90 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00CBC74 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x1C0068A30 (UpdateWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0068D34 (BuildWindowListWithDpiBoundaryInfo.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00CC060 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00CC090 (UpdateWindowPositionsForDpiBoundaryChange.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(__int64 a1, _QWORD *a2, struct tagBWL **a3, int a4)
{
  __int64 result; // rax
  struct tagBWL *v9; // rdi
  __int64 v10; // rdx
  struct tagFREELIST *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 *i; // r14
  struct tagWND *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx

  result = BuildHwndList((struct tagWND *)a1);
  v9 = (struct tagBWL *)result;
  if ( result )
  {
    v11 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(
                                  (struct tagWND *)a1,
                                  *(_QWORD *)(a1 + 104),
                                  result,
                                  0LL);
    for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
    {
      LOBYTE(v10) = 1;
      v14 = (struct tagWND *)HMValidateHandleNoSecure(*i, v10, v12);
      v15 = (__int64)v14;
      if ( v14 )
      {
        UpdateWindowMonitor(v14, a2);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v15)
            || (v16 = *(_QWORD *)(v15 + 40), (*(_DWORD *)(v16 + 232) & 0x8000000) != 0)
            && (*(_BYTE *)(v16 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v15 + 40) + 232LL) |= 0x4000000u;
          }
        }
      }
    }
    if ( v11 )
    {
      UpdateWindowPositionsForDpiBoundaryChange(v11);
      FreeListFree(v11);
    }
    if ( a3 )
      *a3 = v9;
    else
      FreeHwndList(v9);
    return 1LL;
  }
  return result;
}
