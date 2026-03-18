/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01DE658
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01DDCE0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01DE44C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01DEA84 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 *     _ScrollDC @ 0x1C00F8D1C (_ScrollDC.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0132880 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01DDE24 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01DE1E8 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01DE224 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 */

void __fastcall xxxPaintIconsInSwitchWindow(
        struct tagWND *a1,
        struct tagSwitchWndInfo *a2,
        HDC a3,
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
  int v16; // r13d
  int v17; // r14d
  __int64 DCEx; // rax
  __int64 v19; // r9
  int v20; // r8d
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // r8d
  int v24; // r15d
  int v25; // r14d
  int v26; // ecx
  __int64 v27; // rdx
  int v28; // eax
  int v29; // r13d
  int v30; // ecx
  __int64 v31; // rdi
  HDC v32; // r12
  __int64 v33; // r8
  HWND *v34; // rdi
  __int16 KeyState; // ax
  __int16 AsyncKeyState; // ax
  __int64 v37; // rax
  __int64 TopLevelCreatorWindow; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct tagSwitchWndInfo *v48; // rax
  HWND *PrevPhwnd; // rax
  bool v50; // cc
  int v51; // eax
  unsigned int v52; // eax
  int v53; // [rsp+50h] [rbp-71h]
  unsigned int v54; // [rsp+50h] [rbp-71h]
  unsigned int v55; // [rsp+54h] [rbp-6Dh]
  int v56; // [rsp+54h] [rbp-6Dh]
  unsigned int v57; // [rsp+58h] [rbp-69h]
  int v58; // [rsp+5Ch] [rbp-65h]
  RECT v59; // [rsp+60h] [rbp-61h] BYREF
  HWND *v60; // [rsp+70h] [rbp-51h]
  struct tagWND *v61; // [rsp+78h] [rbp-49h]
  HDC v62; // [rsp+80h] [rbp-41h]
  _QWORD v63[3]; // [rsp+88h] [rbp-39h] BYREF
  struct tagRECT v64; // [rsp+A0h] [rbp-21h] BYREF

  v9 = a9;
  v10 = 0LL;
  v62 = a3;
  v12 = *((_DWORD *)a2 + 29);
  v61 = a1;
  v14 = a3;
  *(_QWORD *)&v59.left = a3;
  v15 = 0;
  v16 = v12 - *((_DWORD *)a2 + 28);
  v57 = v12;
  v58 = *((_DWORD *)a2 + 28);
  v17 = 0;
  if ( !a3 )
  {
    DCEx = _GetDCEx(a1, 0LL, 0x10000LL);
    v12 = v57;
    v10 = 0LL;
    v14 = (HDC)DCEx;
    *(_QWORD *)&v59.left = DCEx;
  }
  v19 = *((unsigned int *)a2 + 21);
  v20 = *((_DWORD *)a2 + 22);
  v55 = *((_DWORD *)a2 + 21);
  v53 = v20;
  if ( a7 )
  {
    v21 = *((_DWORD *)a2 + 15) * v12;
    v22 = v12 * *((_DWORD *)a2 + 14);
    v64.top = *((_DWORD *)a2 + 22);
    v64.left = v19;
    v64.bottom = v20 + v21;
    v23 = -v12;
    v64.right = v19 + v22;
    if ( !a8 )
      v23 = v12;
    ScrollDC(v14, 0, v23, &v64, &v64, 0LL, 0LL);
    v10 = 0LL;
    if ( a8 )
      v15 = *((_DWORD *)a2 + 15) - 1;
    v24 = *((_DWORD *)a2 + 14);
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v24 * (*((_DWORD *)a2 + 15) - 1), 1);
    else
      PrevTaskIndex = *((_DWORD *)a2 + 13);
    v20 = v53;
    v19 = v55;
  }
  else
  {
    v24 = a6;
  }
  if ( a9 )
  {
    v25 = PrevTaskIndex - *((_DWORD *)a2 + 13);
    if ( v25 < 0 )
      v25 += *((_DWORD *)a2 + 10);
    v26 = *((_DWORD *)a2 + 14);
    v15 = v25 / v26;
    if ( v25 / v26 >= *((_DWORD *)a2 + 15) )
    {
      v32 = *(HDC *)&v59.left;
      goto LABEL_49;
    }
    v17 = v25 % v26;
  }
  v27 = (unsigned int)(v16 >> 31);
  v28 = v16 / 2;
  v29 = v16 / 2 + v19 + v17 * v57;
  v56 = v28 + v19;
  v30 = v15 * v57;
  v31 = PrevTaskIndex;
  v32 = *(HDC *)&v59.left;
  v33 = (unsigned int)(v28 + v30 + v20);
  v54 = v33;
  v34 = (HWND *)(*((_QWORD *)a2 + 2) + 32LL + 8 * v31);
  v60 = v34;
  if ( v24 )
  {
    while ( 1 )
    {
      --v24;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v10 )
        goto LABEL_53;
      KeyState = GetKeyState(0x12u, v27, v33, v19);
      v10 = 0LL;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_53:
        AsyncKeyState = _GetAsyncKeyState(18LL, v27, v33);
        v10 = 0LL;
        if ( AsyncKeyState >= 0 )
          break;
      }
      LOBYTE(v27) = 1;
      v37 = HMValidateHandleNoSecure((unsigned __int64)*v34, v27);
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
LABEL_47:
          DrawIconEx(v32, v29, v54, (__int64)v9, v58, v58, (int)v10, *(_QWORD *)(gpsi + 4816LL), 3);
          goto LABEL_36;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v40 + 40) + 21LL) & 2) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39);
          v63[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v63;
          v63[1] = v40;
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
          v44 = v61;
          if ( v61 )
            v45 = *(_QWORD *)v61;
          else
            LODWORD(v45) = 0;
          xxxSendMessageCallback(
            (struct tagWND *)v40,
            55LL,
            0LL,
            0LL,
            (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))DrawIconCallBack,
            (unsigned int)v45,
            0,
            0,
            1);
          ThreadUnlock1(v47, v46);
          v48 = Getpswi(v44);
          v10 = 0LL;
          if ( v48 != a2 || v24 > *((_DWORD *)a2 + 14) )
            break;
          goto LABEL_34;
        }
        v9 = (struct tagCURSOR *)qword_1C030E080;
      }
      if ( v9 )
        goto LABEL_47;
LABEL_34:
      if ( a7 == (_DWORD)v10 )
        goto LABEL_37;
      v59.top = v54;
      v59.left = v29;
      v59.right = v58 + v29;
      v59.bottom = v54 + v58;
      FillRect(v32, &v59, *(HBRUSH *)(gpsi + 4816LL));
LABEL_36:
      v10 = 0LL;
LABEL_37:
      if ( v24 <= 0 )
        break;
      v9 = v10;
      PrevPhwnd = NextPrevPhwnd(a2, v60, 1);
      v33 = v54;
      v27 = (unsigned int)(v17 + 1);
      v50 = (int)v27 < *((_DWORD *)a2 + 14);
      v34 = PrevPhwnd;
      v19 = v57;
      v17 = (int)v10;
      v60 = PrevPhwnd;
      if ( v50 )
        v17 = v27;
      v51 = v57 + v29;
      v29 = v56;
      if ( v50 )
        v29 = v51;
      v52 = v54 + v57;
      if ( v50 )
        v52 = v54;
      v54 = v52;
    }
  }
LABEL_49:
  if ( v62 == (HDC)v10 )
    _ReleaseDC(v32);
}
