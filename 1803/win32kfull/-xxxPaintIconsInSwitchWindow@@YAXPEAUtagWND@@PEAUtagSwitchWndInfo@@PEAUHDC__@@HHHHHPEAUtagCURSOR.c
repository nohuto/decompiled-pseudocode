/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01BAF00 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01BB928 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01BBEE4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _ScrollDC @ 0x1C002D2F8 (_ScrollDC.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C010F8B0 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01BB6D0 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01BB70C (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 */

void __fastcall xxxPaintIconsInSwitchWindow(
        struct tagWND *a1,
        struct tagSwitchWndInfo *a2,
        unsigned __int64 a3,
        int PrevTaskIndex,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagCURSOR *a9)
{
  struct tagCURSOR *v9; // rsi
  struct tagCURSOR *v10; // r11
  unsigned int v12; // edx
  HDC v14; // r10
  int v15; // edi
  __int64 DCEx; // rax
  int v17; // r12d
  LONG v18; // r13d
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // r8d
  int v22; // r15d
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  bool v26; // cc
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // r12d
  int v30; // ecx
  __int64 v31; // rdi
  HDC v32; // r14
  unsigned int v33; // r13d
  HWND *PrevPhwnd; // rdi
  __int16 KeyState; // ax
  __int16 AsyncKeyState; // ax
  __int64 v37; // rax
  __int64 TopLevelCreatorWindow; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  bool v48; // cc
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  int v52; // [rsp+50h] [rbp-71h]
  unsigned int v53; // [rsp+54h] [rbp-6Dh]
  int v54; // [rsp+58h] [rbp-69h]
  unsigned int v55; // [rsp+58h] [rbp-69h]
  unsigned int v56; // [rsp+5Ch] [rbp-65h]
  RECT v57; // [rsp+60h] [rbp-61h] BYREF
  HWND *v58; // [rsp+70h] [rbp-51h]
  __int64 v59; // [rsp+78h] [rbp-49h]
  HDC v60; // [rsp+80h] [rbp-41h]
  _QWORD v61[3]; // [rsp+88h] [rbp-39h] BYREF
  struct tagRECT v62; // [rsp+A0h] [rbp-21h] BYREF

  v9 = a9;
  v10 = 0LL;
  v59 = (__int64)a1;
  v12 = *((_DWORD *)a2 + 29);
  v60 = (HDC)a3;
  *(_QWORD *)&v57.left = a3;
  v14 = (HDC)a3;
  v52 = 0;
  v53 = v12;
  v15 = 0;
  v56 = *((_DWORD *)a2 + 28);
  v54 = v12 - v56;
  if ( !a3 )
  {
    DCEx = _GetDCEx(a1, 0LL, 0x10000LL);
    v12 = v53;
    v10 = 0LL;
    v14 = (HDC)DCEx;
    *(_QWORD *)&v57.left = DCEx;
  }
  v17 = *((_DWORD *)a2 + 21);
  v18 = *((_DWORD *)a2 + 22);
  if ( a7 )
  {
    v19 = *((_DWORD *)a2 + 15) * v12;
    v20 = v12 * *((_DWORD *)a2 + 14);
    v21 = -v12;
    v62.left = *((_DWORD *)a2 + 21);
    v62.top = v18;
    v62.bottom = v18 + v19;
    v62.right = v17 + v20;
    if ( !a8 )
      v21 = v12;
    ScrollDC(v14, 0, v21, (__m128i *)&v62, &v62, 0LL, 0LL);
    v10 = 0LL;
    if ( a8 )
      v15 = *((_DWORD *)a2 + 15) - 1;
    v22 = *((_DWORD *)a2 + 14);
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v22 * (*((_DWORD *)a2 + 15) - 1), 1);
    else
      PrevTaskIndex = *((_DWORD *)a2 + 13);
  }
  else
  {
    v22 = a6;
  }
  if ( a9 )
  {
    v23 = PrevTaskIndex - *((_DWORD *)a2 + 13);
    if ( v23 < 0 )
      v23 += *((_DWORD *)a2 + 10);
    a3 = *((unsigned int *)a2 + 14);
    v24 = v23 / (int)a3;
    v25 = *((_DWORD *)a2 + 15);
    v26 = v23 / (int)a3 < v25;
    if ( v23 / (int)a3 < v25 )
    {
      a3 = (unsigned int)(v24 * a3);
      v52 = v23 - a3;
      v26 = v24 < v25;
    }
    if ( !v26 )
    {
      v32 = *(HDC *)&v57.left;
      goto LABEL_48;
    }
    v15 = v24;
  }
  v28 = (unsigned int)(v54 >> 31);
  v27 = v54 / 2;
  LODWORD(v28) = v54 % 2;
  v55 = v54 / 2 + v17;
  v29 = v55 + v52 * v53;
  v30 = v15 * v53;
  v31 = PrevTaskIndex;
  v32 = *(HDC *)&v57.left;
  v33 = v27 + v30 + v18;
  PrevPhwnd = (HWND *)(*((_QWORD *)a2 + 2) + 32LL + 8 * v31);
  v58 = PrevPhwnd;
  if ( v22 )
  {
    while ( 1 )
    {
      --v22;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v10 )
        goto LABEL_52;
      KeyState = GetKeyState(0x12u, v28);
      v10 = 0LL;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_52:
        AsyncKeyState = _GetAsyncKeyState(18LL, v28, a3);
        v10 = 0LL;
        if ( AsyncKeyState >= 0 )
          break;
      }
      LOBYTE(v28) = 1;
      v37 = HMValidateHandleNoSecure((unsigned __int64)*PrevPhwnd, v28);
      v10 = 0LL;
      if ( v37 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v37);
        v40 = TopLevelCreatorWindow;
        if ( v9
          || (v41 = *(_QWORD *)(*(_QWORD *)(TopLevelCreatorWindow + 40) + 272LL)) != 0
          && (LOBYTE(v39) = 3, v42 = HMValidateHandleNoRip(v41, v39), v10 = 0LL, (v9 = (struct tagCURSOR *)v42) != 0LL)
          || (v9 = *(struct tagCURSOR **)(*(_QWORD *)(v40 + 112) + 80LL)) != 0LL )
        {
LABEL_46:
          DrawIconEx(v32, v29, v33, (__int64)v9, v56, v56, (unsigned int)v10, *(_QWORD *)(gpsi + 4816LL), 3);
          goto LABEL_35;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v40 + 40) + 21LL) & 2) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39);
          v61[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v61;
          v61[1] = v40;
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
          v44 = v59;
          if ( v59 )
            v44 = *(unsigned int *)v59;
          xxxSendMessageCallback((struct tagWND *)v40, 55LL, 0LL, 0LL, (__int64)DrawIconCallBack, v44, 0, 0, 1);
          ThreadUnlock1(v46, v45, v47);
          v10 = 0LL;
          goto LABEL_33;
        }
        v9 = (struct tagCURSOR *)qword_1C031D8E8;
      }
      if ( v9 )
        goto LABEL_46;
LABEL_33:
      if ( a7 == (_DWORD)v10 )
        goto LABEL_36;
      v57.left = v29;
      v57.top = v33;
      v57.right = v29 + v56;
      v57.bottom = v56 + v33;
      FillRect(v32, &v57, *(HBRUSH *)(gpsi + 4816LL));
LABEL_35:
      v10 = 0LL;
LABEL_36:
      if ( v22 <= 0 )
        break;
      v9 = v10;
      PrevPhwnd = NextPrevPhwnd(a2, v58, 1);
      a3 = v53;
      v28 = (unsigned int)(v52 + 1);
      v48 = (int)v28 < *((_DWORD *)a2 + 14);
      v58 = PrevPhwnd;
      v49 = (int)v10;
      if ( v48 )
        v49 = v52 + 1;
      v52 = v49;
      v50 = v29 + v53;
      v29 = v55;
      if ( v48 )
        v29 = v50;
      v51 = v53 + v33;
      if ( v48 )
        v51 = v33;
      v33 = v51;
    }
  }
LABEL_48:
  if ( v60 == (HDC)v10 )
    _ReleaseDC(v32);
}
