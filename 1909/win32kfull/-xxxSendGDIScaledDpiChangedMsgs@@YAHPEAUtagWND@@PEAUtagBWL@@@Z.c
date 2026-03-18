/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E5F9C
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E5ED0 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  int v6; // ebp
  struct tagBWL *v7; // rbx
  int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 *i; // rdi

  v4 = 0;
  v5 = *((_QWORD *)a1 + 5);
  v6 = 0;
  v7 = a2;
  v8 = *(_DWORD *)(v5 + 232);
  if ( (v8 & 0x4000000) == 0 )
    return 0LL;
  *(_DWORD *)(v5 + 232) = v8 & 0xFBFFFFFF;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11) + 448) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13) + 448)
                                    + 8LL)
                      + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000 )
      {
        if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
        {
          if ( v7 || (v7 = (struct tagBWL *)BuildHwndList(a1), v6 = 1, v7) )
          {
            v4 = xxxSendGDIScaledDpiChangedMessage(*(_QWORD *)a1, v14, v15);
            for ( i = (unsigned __int64 *)((char *)v7 + 40); (unsigned __int64)i < *((_QWORD *)v7 + 1); ++i )
              v4 |= xxxSendGDIScaledDpiChangedMessage(*i, v16, v17);
            if ( v6 )
              FreeHwndList(v7);
          }
        }
      }
    }
  }
  return v4;
}
