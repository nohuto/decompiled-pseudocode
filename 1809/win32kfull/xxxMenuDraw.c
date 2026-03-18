/*
 * XREFs of xxxMenuDraw @ 0x1C00AA7E0
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00A6E80 (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C020A3D0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C0232510 (xxxMenuBarDraw.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 *     GreSetBkMode @ 0x1C007BDE4 (GreSetBkMode.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C00A70F4 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00A7138 (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C00A72C0 (GreSetTextAlign.c)
 *     xxxSendUAHMenuMessage @ 0x1C00A7340 (xxxSendUAHMenuMessage.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00A8448 (xxxSendUAHInitMenuMessage.c)
 *     xxxDrawMenuItem @ 0x1C00AAA94 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00AAC44 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v3; // r12d
  ULONG_PTR v4; // rdi
  char v7; // r14
  int v8; // r13d
  int v9; // r15d
  int TextAlign; // eax
  __int64 v11; // rdx
  _DWORD **v12; // rcx
  int v13; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  struct tagITEM *v17; // r14
  unsigned int v18; // r15d
  int v19; // r13d
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  char v26; // r15
  __int64 v27; // rax
  int v28; // eax
  int v29; // ecx
  _DWORD *v30; // r8
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // [rsp+30h] [rbp-69h]
  __int64 v34; // [rsp+38h] [rbp-61h] BYREF
  RECT v35; // [rsp+40h] [rbp-59h] BYREF
  int v36; // [rsp+50h] [rbp-49h]
  int v37; // [rsp+54h] [rbp-45h]
  RECT v38; // [rsp+58h] [rbp-41h] BYREF
  __int64 v39; // [rsp+68h] [rbp-31h]
  __int64 v40; // [rsp+70h] [rbp-29h]
  _QWORD v41[3]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v42[3]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v43[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v44; // [rsp+108h] [rbp+6Fh]
  int v45; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  v4 = a3;
  v44 = 0;
  v7 = 0;
  v8 = 0;
  v39 = gptiCurrent;
  v34 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL) & 1;
  v36 = v9;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 80);
  GreGetDCPoint(a1, 4LL, &v34);
  GetDPIMETRICS((struct tagWND *)v4);
  v40 = GreSelectFont(a1);
  TextAlign = GreGetTextAlign(a1);
  v12 = *(_DWORD ***)(a2 + 88);
  v37 = TextAlign;
  if ( v12 && (**v12 & 0x2000) != 0 )
    GreSetTextAlign(a1, TextAlign | 0x100);
  v13 = *(_DWORD *)(gpsi + 4584LL);
  if ( *(_DWORD *)(gpsi + 4648LL) == v13 && *(_DWORD *)(gpsi + 4632LL) == v13 )
  {
    v33 = 49162;
    v45 = 49157;
  }
  else
  {
    v33 = 10;
    v45 = 5;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  v42[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  v16 = v42;
  *(_QWORD *)(ThreadWin32Thread + 416) = v42;
  v42[1] = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
    goto LABEL_40;
  if ( gihmodUserApiHook >= 0 && v9 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(v41, a2),
          v41[2] = 0LL,
          v7 = 1,
          v26 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage(v4, (__int64)v41)) )
    {
      v26 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v41, v15);
    if ( !v26 )
    {
      v4 = *(_QWORD *)(a2 + 80);
      ThreadLockExchange(v4, v42);
      goto LABEL_14;
    }
    xxxSendUAHMenuMessage(v4);
LABEL_40:
    v8 = GreSetBkMode(a1, 1);
    v44 = v8;
  }
LABEL_14:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v27 = MNGetpItemFromIndex(a2, *(unsigned int *)(a2 + 116));
    v17 = (struct tagITEM *)v27;
    if ( v27 )
      v28 = *(_DWORD *)(*(_QWORD *)v27 + 68LL);
    else
      v28 = 0;
    GreSetViewportOrg(a1, v34, HIDWORD(v34) - v28);
    v18 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v17 = *(struct tagITEM **)(a2 + 88);
    v18 = 0;
  }
  if ( v18 < *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
  {
    v19 = v36;
    while ( 1 )
    {
      if ( !v17 )
      {
LABEL_27:
        v8 = v44;
        break;
      }
      v20 = **(_DWORD **)v17;
      LOWORD(v21) = v20;
      if ( (v20 & 0x20) != 0 && v19 )
      {
        if ( (v20 & 0x2000) != 0 && v18 )
          v29 = *(_DWORD *)(*((_QWORD *)v17 - 12) + 64LL);
        else
          v29 = *(_DWORD *)(*(_QWORD *)v17 + 64LL);
        v35.top = 0;
        v35.left = v29 - 3;
        v35.right = v29 - 1;
        v35.bottom = *(_DWORD *)(a2 + 68);
        DrawEdge(a1, &v35, 2, v45);
        v21 = **(_DWORD **)v17;
      }
      if ( (v21 & 0x800) == 0 || (v21 & 0x100) != 0 && *(_WORD *)(v39 + 632) >= 0x400u || (unsigned int)MNIsUAHMenu(a2) )
      {
        SmartObjStackRefBase<tagMENU>::Init(v43, a2);
        v43[2] = 0LL;
        if ( v4 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 232LL) & 0x8000000) != 0 )
            GetWindowDpiLastNotify(v4);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v22) & 0xF) != 0 )
        {
          PsGetCurrentProcessWin32Process(v32);
        }
        xxxDrawMenuItem(a1, 0, v4);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v43, v24);
        if ( (unsigned int)MNGetpItemIndex(a2, (__int64)v17) == -1 )
          goto LABEL_26;
      }
      else
      {
        v31 = v30[16];
        v38.top = (v30[19] >> 1) - 1 + v30[17];
        v38.left = v31 + 1;
        v38.right = v30[18] - 1 + v31;
        v38.bottom = v38.top + 2;
        DrawEdge(a1, &v38, 2, v33);
        MNDrawInsertionBar(a1, v17);
      }
      if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
      {
        v3 += *(_DWORD *)(*(_QWORD *)v17 + 76LL);
        if ( v3 > *(_DWORD *)(a2 + 68) )
          goto LABEL_27;
      }
LABEL_26:
      v17 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v18);
      if ( v18 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
        goto LABEL_27;
    }
  }
  ThreadUnlock1(v16, v15);
  if ( v8 )
    GreSetBkMode(a1, v8);
  GreSetViewportOrg(a1, v34, SHIDWORD(v34));
  GreSetTextAlign(a1, v37);
  return GreSelectFont(a1);
}
