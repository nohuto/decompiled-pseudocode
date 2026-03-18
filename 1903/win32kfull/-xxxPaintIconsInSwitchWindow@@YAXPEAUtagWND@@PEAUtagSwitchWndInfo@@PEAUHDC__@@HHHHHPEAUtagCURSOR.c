/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F453C
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F38C0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F435C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4980 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     _DrawIconEx @ 0x1C002CFB4 (_DrawIconEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     _ScrollDC @ 0x1C00C7F58 (_ScrollDC.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C013D894 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01F4100 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F413C (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
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
  __int64 v36; // r9
  __int16 AsyncKeyState; // ax
  __int64 v38; // rax
  __int64 TopLevelCreatorWindow; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  HWND *PrevPhwnd; // rax
  bool v52; // cc
  unsigned int v53; // eax
  unsigned int v54; // eax
  int v55; // [rsp+50h] [rbp-71h]
  unsigned int v56; // [rsp+50h] [rbp-71h]
  unsigned int v57; // [rsp+54h] [rbp-6Dh]
  int v58; // [rsp+58h] [rbp-69h]
  unsigned int v59; // [rsp+58h] [rbp-69h]
  unsigned int v60; // [rsp+5Ch] [rbp-65h]
  int v61; // [rsp+60h] [rbp-61h]
  HDC v62; // [rsp+68h] [rbp-59h]
  RECT v63; // [rsp+70h] [rbp-51h] BYREF
  HWND *v64; // [rsp+80h] [rbp-41h]
  struct tagWND *v65; // [rsp+88h] [rbp-39h]
  __int64 v66; // [rsp+90h] [rbp-31h] BYREF
  __int64 v67; // [rsp+98h] [rbp-29h]
  __int64 v68; // [rsp+A0h] [rbp-21h]
  struct tagRECT v69; // [rsp+A8h] [rbp-19h] BYREF

  v9 = a9;
  LODWORD(v10) = 0;
  *(_QWORD *)&v69.left = 0LL;
  *(_QWORD *)&v69.right = 0LL;
  v66 = 0LL;
  v12 = (__int64)a1;
  v67 = 0LL;
  v68 = 0LL;
  v14 = a3;
  *(_QWORD *)&v63.left = 0LL;
  v15 = 0;
  *(_QWORD *)&v63.right = 0LL;
  v16 = 0;
  v65 = a1;
  v17 = *((_DWORD *)a2 + 29);
  v62 = a3;
  v57 = v17;
  v60 = *((_DWORD *)a2 + 28);
  v58 = v17 - v60;
  if ( a3 )
  {
    v61 = 0;
  }
  else
  {
    v61 = 1;
    DCEx = _GetDCEx(v12, 0LL, 0x10000LL);
    v17 = v57;
    LODWORD(v10) = 0;
    v14 = (HDC)DCEx;
    v62 = (HDC)DCEx;
  }
  v19 = *((_DWORD *)a2 + 22);
  v20 = *((_DWORD *)a2 + 21);
  v55 = v19;
  if ( a7 )
  {
    v69.top = *((_DWORD *)a2 + 22);
    v21 = *((_DWORD *)a2 + 14) * v17;
    v69.left = v20;
    v69.right = v20 + v21;
    v22 = v19 + v17 * *((_DWORD *)a2 + 15);
    v23 = -v17;
    v69.bottom = v22;
    if ( !a8 )
      v23 = v17;
    ScrollDC(v14, 0, v23, &v69, &v69, 0LL, 0LL);
    LODWORD(v10) = 0;
    if ( a8 )
      v15 = *((_DWORD *)a2 + 15) - 1;
    v24 = *((_DWORD *)a2 + 14);
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v24 * (*((_DWORD *)a2 + 15) - 1), 1);
    else
      PrevTaskIndex = *((_DWORD *)a2 + 13);
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
      v32 = v62;
      goto LABEL_48;
    }
    v16 = v25 % v26;
  }
  v28 = (unsigned int)(v58 >> 31);
  v27 = v58 / 2;
  LODWORD(v28) = v58 % 2;
  v59 = v58 / 2 + v20;
  v29 = v59 + v16 * v57;
  v30 = v15 * v57;
  v31 = PrevTaskIndex;
  v32 = v62;
  v33 = (unsigned int)(v27 + v30 + v19);
  v56 = v33;
  v34 = (HWND *)(*((_QWORD *)a2 + 2) + 32LL + 8 * v31);
  v64 = v34;
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
      v38 = HMValidateHandleNoSecure((unsigned __int64)*v34, v28, v33, v36);
      v10 = 0LL;
      if ( v38 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v38);
        v43 = TopLevelCreatorWindow;
        if ( v9
          || (v44 = *(_QWORD *)(*(_QWORD *)(TopLevelCreatorWindow + 40) + 272LL)) != 0
          && (LOBYTE(v40) = 3,
              v45 = HMValidateHandleNoRip(v44, v40, v41, v42),
              v10 = 0LL,
              (v9 = (struct tagCURSOR *)v45) != 0LL)
          || (v9 = *(struct tagCURSOR **)(*(_QWORD *)(v43 + 136) + 80LL)) != 0LL )
        {
LABEL_46:
          DrawIconEx(v62, v29, v56, (__int64)v9, v60, v60, (int)v10, *(_QWORD *)(gpsi + 4816LL), 3);
          goto LABEL_35;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 21LL) & 2) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42);
          v66 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v66;
          v67 = v43;
          HMLockObject(v43);
          LODWORD(v47) = (_DWORD)v65;
          if ( v65 )
            v47 = *(_QWORD *)v65;
          xxxSendMessageCallback(
            (struct tagWND *)v43,
            0x37u,
            0LL,
            0LL,
            (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))DrawIconCallBack,
            (unsigned int)v47,
            0,
            0,
            1);
          ThreadUnlock1(v49, v48, v50);
          v10 = 0LL;
          goto LABEL_33;
        }
        v9 = (struct tagCURSOR *)qword_1C0322F90;
      }
      if ( v9 )
        goto LABEL_46;
LABEL_33:
      if ( a7 == (_DWORD)v10 )
        goto LABEL_36;
      v63.top = v56;
      v63.left = v29;
      v63.right = v60 + v29;
      v63.bottom = v56 + v60;
      FillRect(v62, &v63, *(HBRUSH *)(gpsi + 4816LL));
LABEL_35:
      v10 = 0LL;
LABEL_36:
      if ( v24 <= 0 )
        break;
      v9 = v10;
      PrevPhwnd = NextPrevPhwnd(a2, v64, 1);
      v33 = v56;
      v28 = (unsigned int)(v16 + 1);
      v52 = (int)v28 < *((_DWORD *)a2 + 14);
      v34 = PrevPhwnd;
      v12 = v57;
      v16 = (int)v10;
      v64 = PrevPhwnd;
      if ( v52 )
        v16 = v28;
      v53 = v57 + v29;
      v29 = v59;
      if ( v52 )
        v29 = v53;
      v54 = v56 + v57;
      if ( v52 )
        v54 = v56;
      v56 = v54;
    }
  }
LABEL_48:
  if ( v61 != (_DWORD)v10 )
    _ReleaseDC(v32);
}
