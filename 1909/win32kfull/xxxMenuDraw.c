/*
 * XREFs of xxxMenuDraw @ 0x1C01294A0
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00FBBBC (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0221930 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C024AA44 (xxxMenuBarDraw.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C012897C (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0128B34 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C0128BAC (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C012941C (xxxSendUAHInitMenuMessage.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0129774 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C012B54C (GreSetBkMode.c)
 *     DrawEdge @ 0x1C012B8CC (DrawEdge.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v3; // r12d
  ULONG_PTR v4; // rdi
  char v7; // r14
  int v8; // r13d
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int TextAlign; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD **v16; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 *v20; // rcx
  struct tagITEM *v21; // r14
  unsigned int v22; // r15d
  int v23; // r13d
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r9
  char v34; // r15
  __int64 v35; // rax
  int v36; // eax
  int v37; // ecx
  _DWORD *v38; // r8
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // [rsp+38h] [rbp-61h] BYREF
  __int64 v43; // [rsp+40h] [rbp-59h]
  __int64 v44; // [rsp+48h] [rbp-51h]
  int v45; // [rsp+50h] [rbp-49h]
  int v46; // [rsp+54h] [rbp-45h]
  int v47; // [rsp+58h] [rbp-41h]
  int v48; // [rsp+5Ch] [rbp-3Dh]
  int v49; // [rsp+60h] [rbp-39h]
  int v50; // [rsp+64h] [rbp-35h]
  __int64 v51; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR v52; // [rsp+70h] [rbp-29h]
  __int64 v53; // [rsp+78h] [rbp-21h]
  __int64 v54; // [rsp+80h] [rbp-19h]
  __int64 v55; // [rsp+88h] [rbp-11h]
  _QWORD v56[3]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v57[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v58; // [rsp+108h] [rbp+6Fh]

  v3 = 0;
  v43 = 0LL;
  v4 = a3;
  v44 = 0LL;
  v42 = 0LL;
  v7 = 0;
  v8 = 0;
  v58 = 0;
  v54 = gptiCurrent;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL) & 1;
  v45 = v9;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 80);
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  GreGetDCPoint(a1, 4LL, &v42);
  DPIMETRICS = GetDPIMETRICS((struct tagWND *)v4, v10, v11);
  v55 = GreSelectFont(a1, *(_QWORD *)DPIMETRICS);
  TextAlign = GreGetTextAlign(a1);
  v16 = *(_DWORD ***)(a2 + 88);
  v46 = TextAlign;
  if ( v16 && (**v16 & 0x2000) != 0 )
    GreSetTextAlign(a1, TextAlign | 0x100);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
  v51 = *(_QWORD *)(ThreadWin32Thread + 408);
  v20 = &v51;
  *(_QWORD *)(ThreadWin32Thread + 408) = &v51;
  v52 = v4;
  if ( v4 )
    HMLockObject(v4);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
    goto LABEL_36;
  if ( gihmodUserApiHook >= 0 && v9 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(v56, a2),
          v56[2] = 0LL,
          v7 = 1,
          v34 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage(v4, (__int64)v56)) )
    {
      v34 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v56, v18, v19);
    if ( !v34 )
    {
      v4 = *(_QWORD *)(a2 + 80);
      ThreadLockExchange(v4, (__int64)&v51);
      goto LABEL_12;
    }
    xxxSendUAHMenuMessage(v4);
LABEL_36:
    v8 = GreSetBkMode(a1);
    v58 = v8;
  }
LABEL_12:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v35 = MNGetpItemFromIndex(a2, *(unsigned int *)(a2 + 116), v19);
    v21 = (struct tagITEM *)v35;
    if ( v35 )
      v36 = *(_DWORD *)(*(_QWORD *)v35 + 68LL);
    else
      v36 = 0;
    GreSetViewportOrg(a1, v42, HIDWORD(v42) - v36);
    v22 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v21 = *(struct tagITEM **)(a2 + 88);
    v22 = 0;
  }
  if ( v22 < *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
  {
    v23 = v45;
    while ( 1 )
    {
      if ( !v21 )
      {
LABEL_25:
        v8 = v58;
        break;
      }
      v24 = **(_DWORD **)v21;
      LOWORD(v25) = v24;
      if ( (v24 & 0x20) != 0 && v23 )
      {
        if ( (v24 & 0x2000) != 0 && v22 )
          v37 = *(_DWORD *)(*((_QWORD *)v21 - 12) + 64LL);
        else
          v37 = *(_DWORD *)(*(_QWORD *)v21 + 64LL);
        v43 = (unsigned int)(v37 - 3);
        LODWORD(v44) = v37 - 1;
        HIDWORD(v44) = *(_DWORD *)(a2 + 68);
        DrawEdge(a1);
        v25 = **(_DWORD **)v21;
      }
      if ( (v25 & 0x800) == 0 || (v25 & 0x100) != 0 && *(_WORD *)(v54 + 624) >= 0x400u || (unsigned int)MNIsUAHMenu(a2) )
      {
        SmartObjStackRefBase<tagMENU>::Init(v57, a2);
        v57[2] = 0LL;
        if ( v4 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 232LL) & 0x8000000) != 0 )
            GetWindowDpiLastNotify(v4);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28) & 0xF) != 0 )
        {
          PsGetCurrentProcessWin32Process(v41, v40);
        }
        xxxDrawMenuItem(a1, 0, v4);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v57, v29, v30);
        if ( (unsigned int)MNGetpItemIndex(a2, v21, v31, v32) == -1 )
          goto LABEL_24;
      }
      else
      {
        v39 = v38[16];
        v48 = (v38[19] >> 1) - 1 + v38[17];
        v47 = v39 + 1;
        v49 = v38[18] - 1 + v39;
        v50 = v48 + 2;
        DrawEdge(a1);
        MNDrawInsertionBar(a1, v21);
      }
      if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
      {
        v3 += *(_DWORD *)(*(_QWORD *)v21 + 76LL);
        if ( v3 > *(_DWORD *)(a2 + 68) )
          goto LABEL_25;
      }
LABEL_24:
      v21 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v22, v19);
      if ( v22 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
        goto LABEL_25;
    }
  }
  ThreadUnlock1(v20, v18, v19);
  if ( v8 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1, v42, SHIDWORD(v42));
  GreSetTextAlign(a1, v46);
  return GreSelectFont(a1, v55);
}
