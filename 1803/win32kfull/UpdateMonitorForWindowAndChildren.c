/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C00E8258
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00724D0 (NtUserUpdateLayeredWindow.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E7EC8 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E7FA8 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 */

struct tagBWL *__fastcall UpdateMonitorForWindowAndChildren(_QWORD *a1, _QWORD *a2, struct tagBWL **a3, int a4)
{
  struct tagBWL *result; // rax
  __int64 v8; // rdx
  struct tagBWL *v9; // rsi
  unsigned __int64 *i; // rdi
  struct tagWND *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx

  result = BuildHwndList(a1, 1, 0LL);
  v9 = result;
  if ( result )
  {
    for ( i = (unsigned __int64 *)((char *)result + 32); *i != 1; ++i )
    {
      LOBYTE(v8) = 1;
      v11 = (struct tagWND *)HMValidateHandleNoSecure(*i, v8);
      v12 = (__int64)v11;
      if ( v11 )
      {
        UpdateWindowMonitor(v11, a2);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v12)
            || (v13 = *(_QWORD *)(v12 + 40), (*(_DWORD *)(v13 + 232) & 0x8000000) != 0)
            && (*(_BYTE *)(v13 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v12 + 40) + 232LL) |= 0x4000000u;
          }
        }
      }
    }
    if ( a3 )
      *a3 = v9;
    else
      FreeHwndList(v9);
    return (struct tagBWL *)1;
  }
  return result;
}
