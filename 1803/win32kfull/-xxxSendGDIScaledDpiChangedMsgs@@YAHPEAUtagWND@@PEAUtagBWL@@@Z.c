/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01AE400
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01AE358 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  int v5; // ebp
  struct tagBWL *v6; // rbx
  int v7; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 *i; // rdi

  v3 = 0;
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v6 = a2;
  v7 = *(_DWORD *)(v4 + 232);
  if ( (v7 & 0x4000000) == 0 )
    return 0LL;
  *(_DWORD *)(v4 + 232) = v7 & 0xFBFFFFFF;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9) + 448) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 448)
                                    + 8LL)
                      + 52LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000 )
      {
        if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
        {
          if ( v6 || (v6 = BuildHwndList(a1, 1, 0LL), v5 = 1, v6) )
          {
            v3 = xxxSendGDIScaledDpiChangedMessage(*(_QWORD *)a1, v11);
            for ( i = (unsigned __int64 *)((char *)v6 + 40); (unsigned __int64)i < *((_QWORD *)v6 + 1); ++i )
              v3 |= xxxSendGDIScaledDpiChangedMessage(*i, v12);
            if ( v5 )
              FreeHwndList(v6);
          }
        }
      }
    }
  }
  return v3;
}
