/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00F97E4
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C00F9920 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01AE294 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01B0038 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  __int64 v5; // rcx
  unsigned int v8; // r14d
  int v9; // r12d
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  HWND *i; // rbx
  HWND *j; // rbx
  __int64 v16; // rbx
  struct tagRECT v17; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-28h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v8 = 0;
  v9 = 0;
  if ( *(_WORD *)(v5 + 286) )
    return 0LL;
  v10 = *(_DWORD *)(v5 + 232);
  if ( (v10 & 0x4000000) == 0 )
    return 0LL;
  *(_DWORD *)(v5 + 232) = v10 & 0xFBFFFFFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
  {
    GetRect((__int64)a1, &v18.left, 66);
  }
  else if ( a2 )
  {
    v18 = *a2;
  }
  else
  {
    GetRect((__int64)a1, &v18.left, 66);
    if ( a4 )
    {
      v12 = *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 284LL);
      if ( a4 != (_WORD)v12 )
      {
        v16 = *(_QWORD *)&v18.left;
        v17 = v18;
        if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v12, &v17, &v18) )
          ScaleDPIRect(&v18, (__m128i *)&v18, *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL), a4, v16, *(__int64 *)&v18.left);
      }
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 && (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( (*(_DWORD *)(v13 + 232) & 0x20000000) != 0 )
    {
      if ( a3 || (a3 = BuildHwndList(a1, 1, 0LL), v9 = 1, a3) )
      {
        for ( i = (HWND *)*((_QWORD *)a3 + 1); --i > (HWND *)a3 + 4; v8 |= xxxSendDpiChangedMessageToChildWindow(*i, 1) )
          ;
        v8 |= xxxSendDpiChangedMessageToTopLevelWindow(a1, &v18);
        for ( j = (HWND *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
          v8 |= xxxSendDpiChangedMessageToChildWindow(*j, 0);
        if ( v9 )
          FreeHwndList(a3);
      }
    }
    else
    {
      return (unsigned int)xxxSendDpiChangedMessageToTopLevelWindow(a1, &v18);
    }
  }
  return v8;
}
