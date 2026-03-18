/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E611C
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E6050 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // rcx
  int v7; // ebp
  struct tagBWL *v8; // rbx
  int v9; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 *i; // rdi

  v5 = 0;
  v6 = *((_QWORD *)a1 + 5);
  v7 = 0;
  v8 = a2;
  v9 = *(_DWORD *)(v6 + 232);
  if ( (v9 & 0x4000000) == 0 )
    return 0LL;
  *(_DWORD *)(v6 + 232) = v9 & 0xFBFFFFFF;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 448) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16)
                                                + 448)
                                    + 8LL)
                      + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000 )
      {
        if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
        {
          if ( v8 || (v8 = (struct tagBWL *)BuildHwndList(a1), v7 = 1, v8) )
          {
            v5 = xxxSendGDIScaledDpiChangedMessage(*(_QWORD *)a1, v17, v18, v19);
            for ( i = (unsigned __int64 *)((char *)v8 + 40); (unsigned __int64)i < *((_QWORD *)v8 + 1); ++i )
              v5 |= xxxSendGDIScaledDpiChangedMessage(*i, v20, v21, v22);
            if ( v7 )
              FreeHwndList(v8);
          }
        }
      }
    }
  }
  return v5;
}
