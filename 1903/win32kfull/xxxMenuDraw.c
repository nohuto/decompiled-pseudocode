/*
 * XREFs of xxxMenuDraw @ 0x1C00F9420
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00F912C (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0221E70 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     DrawEdge @ 0x1C008D37C (DrawEdge.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendUAHMenuMessage @ 0x1C00F934C (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00F939C (xxxSendUAHInitMenuMessage.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00F98A4 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00F9D68 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v3; // r12d
  ULONG_PTR v4; // rdi
  char v7; // r14
  int v8; // r13d
  int v9; // r15d
  __int64 *DPIMETRICS; // rax
  int TextAlign; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD **v15; // rcx
  int v16; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rcx
  struct tagITEM *v22; // r14
  unsigned int v23; // r15d
  int v24; // r13d
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char v35; // r15
  int v36; // ecx
  _DWORD *v37; // r8
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-69h]
  __int64 v42; // [rsp+38h] [rbp-61h] BYREF
  RECT v43; // [rsp+40h] [rbp-59h] BYREF
  int v44; // [rsp+50h] [rbp-49h]
  int v45; // [rsp+54h] [rbp-45h]
  RECT v46; // [rsp+58h] [rbp-41h] BYREF
  __int64 v47; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR v48; // [rsp+70h] [rbp-29h]
  __int64 v49; // [rsp+78h] [rbp-21h]
  __int64 v50; // [rsp+80h] [rbp-19h]
  __int64 v51; // [rsp+88h] [rbp-11h]
  _QWORD v52[3]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v53[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v54; // [rsp+108h] [rbp+6Fh]
  int v55; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  *(_QWORD *)&v43.left = 0LL;
  v4 = a3;
  *(_QWORD *)&v43.right = 0LL;
  v42 = 0LL;
  v7 = 0;
  v8 = 0;
  v54 = 0;
  v50 = gptiCurrent;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL) & 1;
  v44 = v9;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 80);
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  GreGetDCPoint(a1, 4LL, &v42);
  DPIMETRICS = (__int64 *)GetDPIMETRICS((struct tagWND *)v4);
  v51 = GreSelectFont((__int64)a1, *DPIMETRICS);
  TextAlign = GreGetTextAlign(a1);
  v15 = *(_DWORD ***)(a2 + 88);
  v45 = TextAlign;
  if ( v15 && (**v15 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  v16 = *(_DWORD *)(gpsi + 4584LL);
  if ( *(_DWORD *)(gpsi + 4648LL) == v16 && *(_DWORD *)(gpsi + 4632LL) == v16 )
  {
    v41 = 49162;
    v55 = 49157;
  }
  else
  {
    v41 = 10;
    v55 = 5;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
  v47 = *(_QWORD *)(ThreadWin32Thread + 408);
  v21 = &v47;
  *(_QWORD *)(ThreadWin32Thread + 408) = &v47;
  v48 = v4;
  if ( v4 )
    HMLockObject(v4);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
  {
LABEL_40:
    v8 = GreSetBkMode(a1, 1);
    v54 = v8;
    goto LABEL_14;
  }
  if ( gihmodUserApiHook >= 0 && v9 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(v52, a2),
          v52[2] = 0LL,
          v7 = 1,
          v35 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage(v4, (__int64)v52)) )
    {
      v35 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52, v18, v19, v20);
    if ( !v35 )
    {
      v4 = *(_QWORD *)(a2 + 80);
      ThreadLockExchange(v4, &v47);
      goto LABEL_14;
    }
    xxxSendUAHMenuMessage(v4);
    goto LABEL_40;
  }
LABEL_14:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v22 = (struct tagITEM *)MNGetpItemFromIndex(a2, *(_DWORD *)(a2 + 116));
    GreSetViewportOrg(a1);
    v23 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v22 = *(struct tagITEM **)(a2 + 88);
    v23 = 0;
  }
  if ( v23 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
    goto LABEL_28;
  v24 = v44;
  while ( v22 )
  {
    v25 = **(_DWORD **)v22;
    LOWORD(v26) = v25;
    if ( (v25 & 0x20) != 0 && v24 )
    {
      if ( (v25 & 0x2000) != 0 && v23 )
        v36 = *(_DWORD *)(*((_QWORD *)v22 - 12) + 64LL);
      else
        v36 = *(_DWORD *)(*(_QWORD *)v22 + 64LL);
      *(_QWORD *)&v43.left = (unsigned int)(v36 - 3);
      v43.right = v36 - 1;
      v43.bottom = *(_DWORD *)(a2 + 68);
      DrawEdge(a1, &v43, 2, v55);
      v26 = **(_DWORD **)v22;
    }
    if ( (v26 & 0x800) == 0 || (v26 & 0x100) != 0 && *(_WORD *)(v50 + 624) >= 0x400u || (unsigned int)MNIsUAHMenu(a2) )
    {
      SmartObjStackRefBase<tagMENU>::Init(v53, a2);
      v53[2] = 0LL;
      if ( v4 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 232LL) & 0x8000000) != 0 )
          GetWindowDpiLastNotify(v4);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) != 0 )
      {
        PsGetCurrentProcessWin32Process(v40, v39);
      }
      xxxDrawMenuItem(a1, 0, v4);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v53, v31, v32, v33);
      if ( (unsigned int)MNGetpItemIndex(a2, (__int64)v22) == -1 )
        goto LABEL_26;
    }
    else
    {
      v38 = v37[16];
      v46.top = (v37[19] >> 1) - 1 + v37[17];
      v46.left = v38 + 1;
      v46.right = v37[18] - 1 + v38;
      v46.bottom = v46.top + 2;
      DrawEdge(a1, &v46, 2, v41);
      MNDrawInsertionBar(a1, v22);
    }
    if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
    {
      v3 += *(_DWORD *)(*(_QWORD *)v22 + 76LL);
      if ( v3 > *(_DWORD *)(a2 + 68) )
        break;
    }
LABEL_26:
    v22 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v23);
    if ( v23 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
      break;
  }
  v8 = v54;
LABEL_28:
  ThreadUnlock1(v21, v18, v19);
  if ( v8 )
    GreSetBkMode(a1, v8);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  return GreSelectFont((__int64)a1, v51);
}
