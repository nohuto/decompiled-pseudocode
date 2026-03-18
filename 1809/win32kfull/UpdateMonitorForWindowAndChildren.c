/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C01051A8
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0078020 (NtUserUpdateLayeredWindow.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0104E20 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0104F04 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC (BuildWindowListWithDpiBoundaryInfo.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01052C0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C01052F0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(__int64 a1, _QWORD *a2, struct tagBWL **a3, int a4)
{
  __int64 result; // rax
  struct tagBWL *v9; // rdi
  __int64 v10; // rdx
  struct tagFREELIST *v11; // rsi
  unsigned __int64 *i; // r14
  struct tagWND *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx

  result = (__int64)BuildHwndList((struct tagWND *)a1, 1, 0LL);
  v9 = (struct tagBWL *)result;
  if ( result )
  {
    v11 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(
                                  (struct tagWND *)a1,
                                  *(_QWORD *)(a1 + 80),
                                  result,
                                  0LL);
    for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
    {
      LOBYTE(v10) = 1;
      v13 = (struct tagWND *)HMValidateHandleNoSecure(*i, v10);
      v14 = (__int64)v13;
      if ( v13 )
      {
        UpdateWindowMonitor(v13, a2);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v14)
            || (v15 = *(_QWORD *)(v14 + 40), (*(_DWORD *)(v15 + 232) & 0x8000000) != 0)
            && (*(_BYTE *)(v15 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v14 + 40) + 232LL) |= 0x4000000u;
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
