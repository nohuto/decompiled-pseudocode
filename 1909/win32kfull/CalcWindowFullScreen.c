/*
 * XREFs of CalcWindowFullScreen @ 0x1C0032BBC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0031684 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     CalcWindowsFullScreen @ 0x1C010B470 (CalcWindowsFullScreen.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     UnionRect @ 0x1C0032D48 (UnionRect.c)
 *     GetMonitorRectForWindow @ 0x1C0036864 (GetMonitorRectForWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall CalcWindowFullScreen(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  struct tagMONITOR *v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  v2 = 0LL;
  v3 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( !v1 )
    goto LABEL_6;
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      v2 = *(_QWORD *)(v6 + 24);
  }
  if ( v1 == v2 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v9 = _MonitorFromWindowInternal(a1, 2, 0);
    v10 = 1;
    if ( v9 )
    {
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 30) & 0xC4) == 0xC4 )
        v12 = *(_OWORD *)(v11 + 104);
      else
        v12 = *(_OWORD *)(v11 + 88);
      v19 = v12;
      v16 = *(_OWORD *)GetMonitorRectForWindow(&v16, v9, a1);
      UnionRect(&v17, &v19, &v16);
      v13 = v17 - v19;
      if ( v17 == (_QWORD)v19 )
        v13 = v18 - *((_QWORD *)&v19 + 1);
      if ( !v13 )
      {
        v3 = 1;
        v10 = 0;
      }
    }
    v14 = *((_QWORD *)a1 + 5);
    result = (*(_DWORD *)(v14 + 232) & 0x8000u) >> 15;
    if ( v3 != (_DWORD)result )
    {
      *(_DWORD *)(v14 + 232) = (v3 << 15) | *(_DWORD *)(v14 + 232) & 0xFFFF7FFF;
      if ( gpqForeground && *(struct tagWND **)(gpqForeground + 128LL) == a1 )
      {
        if ( v3 )
          EtwTraceForegroundWindowFullScreenStart(0LL);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL);
      }
      v15 = (unsigned int)(v10 + 53);
      return PostShellHookMessages(v15, *(_QWORD *)a1);
    }
  }
  else
  {
LABEL_6:
    v7 = *((_QWORD *)a1 + 5);
    result = *(unsigned int *)(v7 + 232);
    if ( (result & 0x8000) != 0 )
    {
      *(_DWORD *)(v7 + 232) = result & 0xFFFF7FFF;
      v15 = 54LL;
      return PostShellHookMessages(v15, *(_QWORD *)a1);
    }
  }
  return result;
}
