/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F43BC
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F3740 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F41DC (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4800 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 *     _DrawIconEx @ 0x1C00226D0 (_DrawIconEx.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     _ScrollDC @ 0x1C0069628 (_ScrollDC.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0137820 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01F3F80 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F3FBC (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
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
  __int64 v12; // r9
  HDC v14; // r10
  int v15; // edi
  int v16; // r14d
  unsigned int v17; // ecx
  __int64 DCEx; // rax
  int v19; // r8d
  LONG v20; // r13d
  int v21; // eax
  LONG v22; // eax
  int v23; // r8d
  int v24; // r12d
  int v25; // r14d
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // r13d
  int v30; // ecx
  __int64 v31; // rdi
  HDC v32; // r15
  __int64 v33; // r8
  HWND *v34; // rdi
  __int16 KeyState; // ax
  __int16 AsyncKeyState; // ax
  __int64 v37; // rax
  __int64 TopLevelCreatorWindow; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  HWND *PrevPhwnd; // rax
  bool v50; // cc
  unsigned int v51; // eax
  unsigned int v52; // eax
  int v53; // [rsp+50h] [rbp-71h]
  unsigned int v54; // [rsp+50h] [rbp-71h]
  unsigned int v55; // [rsp+54h] [rbp-6Dh]
  int v56; // [rsp+58h] [rbp-69h]
  unsigned int v57; // [rsp+58h] [rbp-69h]
  unsigned int v58; // [rsp+5Ch] [rbp-65h]
  int v59; // [rsp+60h] [rbp-61h]
  HDC v60; // [rsp+68h] [rbp-59h]
  RECT v61; // [rsp+70h] [rbp-51h] BYREF
  HWND *v62; // [rsp+80h] [rbp-41h]
  struct tagWND *v63; // [rsp+88h] [rbp-39h]
  __int64 v64; // [rsp+90h] [rbp-31h] BYREF
  __int64 v65; // [rsp+98h] [rbp-29h]
  __int64 v66; // [rsp+A0h] [rbp-21h]
  struct tagRECT v67; // [rsp+A8h] [rbp-19h] BYREF

  v9 = a9;
  LODWORD(v10) = 0;
  *(_QWORD *)&v67.left = 0LL;
  *(_QWORD *)&v67.right = 0LL;
  v64 = 0LL;
  v12 = (__int64)a1;
  v65 = 0LL;
  v66 = 0LL;
  v14 = a3;
  *(_QWORD *)&v61.left = 0LL;
  v15 = 0;
  *(_QWORD *)&v61.right = 0LL;
  v16 = 0;
  v63 = a1;
  v17 = *((_DWORD *)a2 + 29);
  v60 = a3;
  v55 = v17;
  v58 = *((_DWORD *)a2 + 28);
  v56 = v17 - v58;
  if ( a3 )
  {
    v59 = 0;
  }
  else
  {
    v59 = 1;
    DCEx = _GetDCEx(v12, 0LL, 0x10000LL);
    v17 = v55;
    LODWORD(v10) = 0;
    v14 = (HDC)DCEx;
    v60 = (HDC)DCEx;
  }
  v19 = *((_DWORD *)a2 + 22);
  v20 = *((_DWORD *)a2 + 21);
  v53 = v19;
  if ( a7 )
  {
    v67.top = *((_DWORD *)a2 + 22);
    v21 = *((_DWORD *)a2 + 14) * v17;
    v67.left = v20;
    v67.right = v20 + v21;
    v22 = v19 + v17 * *((_DWORD *)a2 + 15);
    v23 = -v17;
    v67.bottom = v22;
    if ( !a8 )
      v23 = v17;
    ScrollDC(v14, 0, v23, &v67, &v67, 0LL, 0LL);
    LODWORD(v10) = 0;
    if ( a8 )
      v15 = *((_DWORD *)a2 + 15) - 1;
    v24 = *((_DWORD *)a2 + 14);
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v24 * (*((_DWORD *)a2 + 15) - 1), 1);
    else
      PrevTaskIndex = *((_DWORD *)a2 + 13);
    v19 = v53;
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
      v32 = v60;
      goto LABEL_48;
    }
    v16 = v25 % v26;
  }
  v28 = (unsigned int)(v56 >> 31);
  v27 = v56 / 2;
  LODWORD(v28) = v56 % 2;
  v57 = v56 / 2 + v20;
  v29 = v57 + v16 * v55;
  v30 = v15 * v55;
  v31 = PrevTaskIndex;
  v32 = v60;
  v33 = (unsigned int)(v27 + v30 + v19);
  v54 = v33;
  v34 = (HWND *)(*((_QWORD *)a2 + 2) + 32LL + 8 * v31);
  v62 = v34;
  if ( v24 )
  {
    while ( 1 )
    {
      --v24;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v10 )
        goto LABEL_52;
      KeyState = GetKeyState(0x12u, v28, v33, v12);
      LODWORD(v10) = 0;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_52:
        AsyncKeyState = _GetAsyncKeyState(18LL, v28, v33);
        LODWORD(v10) = 0;
        if ( AsyncKeyState >= 0 )
          break;
      }
      LOBYTE(v28) = 1;
      v37 = HMValidateHandleNoSecure((unsigned __int64)*v34, v28, v33);
      v10 = 0LL;
      if ( v37 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v37);
        v41 = TopLevelCreatorWindow;
        if ( v9
          || (v42 = *(_QWORD *)(*(_QWORD *)(TopLevelCreatorWindow + 40) + 272LL)) != 0
          && (v43 = HMValidateHandleNoRip(v42, 3), v10 = 0LL, (v9 = (struct tagCURSOR *)v43) != 0LL)
          || (v9 = *(struct tagCURSOR **)(*(_QWORD *)(v41 + 136) + 80LL)) != 0LL )
        {
LABEL_46:
          DrawIconEx(v60, v29, v54, (__int64)v9, v58, v58, (int)v10, *(_QWORD *)(gpsi + 4816LL), 3);
          goto LABEL_35;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v41 + 40) + 21LL) & 2) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40);
          v64 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v64;
          v65 = v41;
          HMLockObject(v41);
          LODWORD(v45) = (_DWORD)v63;
          if ( v63 )
            v45 = *(_QWORD *)v63;
          xxxSendMessageCallback(
            (struct tagWND *)v41,
            0x37u,
            0LL,
            0LL,
            (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))DrawIconCallBack,
            (unsigned int)v45,
            0,
            0,
            1);
          ThreadUnlock1(v47, v46, v48);
          v10 = 0LL;
          goto LABEL_33;
        }
        v9 = (struct tagCURSOR *)qword_1C0320F90;
      }
      if ( v9 )
        goto LABEL_46;
LABEL_33:
      if ( a7 == (_DWORD)v10 )
        goto LABEL_36;
      v61.top = v54;
      v61.left = v29;
      v61.right = v58 + v29;
      v61.bottom = v54 + v58;
      FillRect(v60, &v61, *(HBRUSH *)(gpsi + 4816LL));
LABEL_35:
      v10 = 0LL;
LABEL_36:
      if ( v24 <= 0 )
        break;
      v9 = v10;
      PrevPhwnd = NextPrevPhwnd(a2, v62, 1);
      v33 = v54;
      v28 = (unsigned int)(v16 + 1);
      v50 = (int)v28 < *((_DWORD *)a2 + 14);
      v34 = PrevPhwnd;
      v12 = v55;
      v16 = (int)v10;
      v62 = PrevPhwnd;
      if ( v50 )
        v16 = v28;
      v51 = v55 + v29;
      v29 = v57;
      if ( v50 )
        v29 = v51;
      v52 = v54 + v55;
      if ( v50 )
        v52 = v54;
      v54 = v52;
    }
  }
LABEL_48:
  if ( v59 != (_DWORD)v10 )
    _ReleaseDC(v32);
}
