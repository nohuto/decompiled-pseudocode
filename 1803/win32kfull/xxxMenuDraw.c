/*
 * XREFs of xxxMenuDraw @ 0x1C00103BC
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000CCE4 (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01E44E4 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C0209284 (xxxMenuBarDraw.c)
 * Callees:
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000CED4 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C000CF4C (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C000CF94 (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C000D0B8 (GreSetTextAlign.c)
 *     xxxSendUAHMenuMessage @ 0x1C000D12C (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C0010198 (xxxSendUAHInitMenuMessage.c)
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C001080C (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     DrawEdge @ 0x1C0010DBC (DrawEdge.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C001160C (GreSetBkMode.c)
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rdi
  char v7; // r14
  int v8; // r13d
  int v9; // r15d
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int TextAlign; // eax
  _DWORD **v12; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  struct tagITEM *v18; // r14
  unsigned int v19; // r15d
  int v20; // r13d
  int *v21; // r8
  int *v22; // rdx
  int v23; // ecx
  int v24; // eax
  char v26; // r15
  __int64 v27; // rax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  _DWORD *v31; // r8
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-69h] BYREF
  int v35; // [rsp+38h] [rbp-61h]
  int v36; // [rsp+3Ch] [rbp-5Dh]
  int v37; // [rsp+40h] [rbp-59h]
  int v38; // [rsp+44h] [rbp-55h]
  int v39; // [rsp+48h] [rbp-51h]
  int v40; // [rsp+4Ch] [rbp-4Dh]
  int v41; // [rsp+50h] [rbp-49h]
  int v42; // [rsp+54h] [rbp-45h]
  int v43; // [rsp+58h] [rbp-41h]
  int v44; // [rsp+5Ch] [rbp-3Dh]
  __int64 v45; // [rsp+60h] [rbp-39h]
  __int64 v46; // [rsp+68h] [rbp-31h]
  _BYTE v47[16]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v48; // [rsp+80h] [rbp-19h]
  _QWORD v49[3]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v50[16]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v51; // [rsp+B0h] [rbp+17h]
  int v52; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  v4 = a3;
  v52 = 0;
  v7 = 0;
  v8 = 0;
  v45 = gptiCurrent;
  v34 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL) & 1;
  v39 = v9;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 80);
  GreGetDCPoint(a1, 4LL, &v34);
  DPIMETRICS = GetDPIMETRICS((struct tagWND *)v4);
  v46 = GreSelectFont(a1, *(_QWORD *)DPIMETRICS);
  TextAlign = GreGetTextAlign(a1);
  v12 = *(_DWORD ***)(a2 + 88);
  v40 = TextAlign;
  if ( v12 && (**v12 & 0x2000) != 0 )
    GreSetTextAlign(a1, TextAlign | 0x100);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v49[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  v17 = v49;
  *(_QWORD *)(ThreadWin32Thread + 408) = v49;
  v49[1] = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
    goto LABEL_36;
  if ( gihmodUserApiHook >= 0 && v9 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(v47, a2),
          v48 = 0LL,
          v7 = 1,
          v26 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage(v4, (__int64)v47, (__int64)a1)) )
    {
      v26 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v47);
    if ( !v26 )
    {
      v4 = *(_QWORD *)(a2 + 80);
      ThreadLockExchange(v4, v49);
      goto LABEL_12;
    }
    xxxSendUAHMenuMessage(v4, 145LL, (_QWORD *)a2, (__int64)a1);
LABEL_36:
    v8 = GreSetBkMode(a1);
    v52 = v8;
  }
LABEL_12:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v27 = MNGetpItemFromIndex(a2, *(unsigned int *)(a2 + 116));
    v18 = (struct tagITEM *)v27;
    if ( v27 )
      v28 = *(_DWORD *)(*(_QWORD *)v27 + 68LL);
    else
      v28 = 0;
    GreSetViewportOrg(a1, v34, HIDWORD(v34) - v28);
    v19 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v18 = *(struct tagITEM **)(a2 + 88);
    v19 = 0;
  }
  if ( v19 < *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
  {
    v20 = v39;
    while ( 1 )
    {
      if ( !v18 )
      {
LABEL_25:
        v8 = v52;
        break;
      }
      v21 = *(int **)v18;
      v22 = *(int **)v18;
      v23 = **(_DWORD **)v18;
      LOWORD(v24) = v23;
      if ( (v23 & 0x20) != 0 && v20 )
      {
        if ( (v23 & 0x2000) != 0 && v19 )
          v29 = *(_DWORD *)(*((_QWORD *)v18 - 12) + 64LL);
        else
          v29 = v21[16];
        v36 = 0;
        v35 = v29 - 3;
        v37 = v29 - 1;
        v38 = *(_DWORD *)(a2 + 68);
        DrawEdge(a1);
        v21 = *(int **)v18;
        v22 = *(int **)v18;
        v24 = **(_DWORD **)v18;
      }
      if ( (v24 & 0x800) == 0 )
        goto LABEL_19;
      v30 = v24 & 0x100;
      if ( v30 )
      {
        v16 = 1024LL;
        if ( *(_WORD *)(v45 + 624) >= 0x400u )
          goto LABEL_19;
      }
      if ( !v30 )
        v21 = v22;
      if ( (unsigned int)MNIsUAHMenu(a2, v22, v21, v16) )
      {
LABEL_19:
        SmartObjStackRefBase<tagMENU>::Init(v50, a2);
        v51 = 0LL;
        if ( v4 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 232LL) & 0x8000000) != 0 )
            GetWindowDpiLastNotify(v4);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        {
          PsGetCurrentProcessWin32Process(v33);
        }
        xxxDrawMenuItem(a1, 0, v4);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v50);
        if ( (unsigned int)MNGetpItemIndex(a2, v18) == -1 )
          goto LABEL_24;
      }
      else
      {
        v32 = v31[16];
        v42 = (v31[19] >> 1) - 1 + v31[17];
        v41 = v32 + 1;
        v43 = v31[18] - 1 + v32;
        v44 = v42 + 2;
        DrawEdge(a1);
        MNDrawInsertionBar(a1, v18);
      }
      if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
      {
        v3 += *(_DWORD *)(*(_QWORD *)v18 + 76LL);
        if ( v3 > *(_DWORD *)(a2 + 68) )
          goto LABEL_25;
      }
LABEL_24:
      v18 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v19);
      if ( v19 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
        goto LABEL_25;
    }
  }
  ThreadUnlock1(v17, v14, v15);
  if ( v8 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1, v34, SHIDWORD(v34));
  GreSetTextAlign(a1, v40);
  return GreSelectFont(a1, v46);
}
