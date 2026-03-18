/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C011564C (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E5F50 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E7AEC (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  __int64 v5; // rcx
  unsigned int v8; // esi
  int v9; // r13d
  int v10; // eax
  struct tagRECT *v12; // r9
  char v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  HWND *i; // rbx
  int v17; // eax
  HWND *j; // rbx
  __int64 v19; // rbx
  struct tagRECT v20; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-28h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v8 = 0;
  v9 = 0;
  if ( *(_WORD *)(v5 + 286) )
    return 0LL;
  v10 = *(_DWORD *)(v5 + 232);
  if ( (v10 & 0x4000000) == 0 )
    return 0LL;
  *(_DWORD *)(v5 + 232) = v10 & 0xFBFFFFFF;
  *(_QWORD *)&v21.left = 0LL;
  *(_QWORD *)&v21.right = 0LL;
  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    v13 = 1;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    {
      GetRect((__int64)a1, (__int64)&v21, 66);
    }
    else if ( v12 )
    {
      v21 = *v12;
    }
    else
    {
      GetRect((__int64)a1, (__int64)&v21, 66);
      if ( a4 )
      {
        v14 = *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 284LL);
        if ( a4 != (_WORD)v14 )
        {
          v19 = *(_QWORD *)&v21.left;
          v20 = v21;
          if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v14, &v20, &v21) )
            ScaleDPIRect(&v21, (__m128i *)&v21, *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL), a4, v19, *(__int64 *)&v21.left);
        }
      }
    }
  }
  else
  {
    v13 = 0;
  }
  v15 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v15 + 288) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(v15 + 232) & 0x20000000) != 0 )
    {
      if ( a3 || (a3 = (struct tagBWL *)BuildHwndList(a1), v9 = 1, a3) )
      {
        for ( i = (HWND *)*((_QWORD *)a3 + 1); --i > (HWND *)a3 + 4; v8 |= xxxSendDpiChangedMessageToChildWindow(*i, 1) )
          ;
        if ( v13 )
        {
          v17 = xxxSendDpiChangedMessageToTopLevelWindow(a1, &v21);
        }
        else
        {
          v8 |= xxxSendDpiChangedMessageToChildWindow(*(HWND *)a1, 1);
          v17 = xxxSendDpiChangedMessageToChildWindow(*(HWND *)a1, 0);
        }
        v8 |= v17;
        for ( j = (HWND *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
          v8 |= xxxSendDpiChangedMessageToChildWindow(*j, 0);
        if ( v9 )
          FreeHwndList(a3);
      }
    }
    else if ( v13 )
    {
      return (unsigned int)xxxSendDpiChangedMessageToTopLevelWindow(a1, &v21);
    }
  }
  return v8;
}
