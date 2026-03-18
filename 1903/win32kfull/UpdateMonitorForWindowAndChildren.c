/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C00ED36C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0027220 (NtUserUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00ECFB0 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C00C7664 (BuildWindowListWithDpiBoundaryInfo.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00ED480 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00ED4B0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(__int64 a1, _QWORD *a2, struct tagBWL **a3, int a4)
{
  __int64 result; // rax
  struct tagBWL *v9; // rdi
  __int64 v10; // rdx
  struct tagFREELIST *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *i; // r14
  struct tagWND *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx

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
      v15 = (struct tagWND *)HMValidateHandleNoSecure(*i, v10, v12, v13);
      v16 = (__int64)v15;
      if ( v15 )
      {
        UpdateWindowMonitor(v15, a2);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v16)
            || (v17 = *(_QWORD *)(v16 + 40), (*(_DWORD *)(v17 + 232) & 0x8000000) != 0)
            && (*(_BYTE *)(v17 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v16 + 40) + 232LL) |= 0x4000000u;
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
