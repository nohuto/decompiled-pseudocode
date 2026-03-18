/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227A4C
 * Callers:
 *     xxxHotTrack @ 0x1C0131988 (xxxHotTrack.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     GreGetTextAlign @ 0x1C00A70F4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00A72C0 (GreSetTextAlign.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     xxxDrawMenuItem @ 0x1C00AAA94 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C022E368 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // r15
  __int64 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  HDC DCEx; // rsi
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned int WindowDpiLastNotify; // eax
  __int64 v21; // rax
  int TextAlign; // eax
  int v23; // r12d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h]
  _QWORD v30[3]; // [rsp+48h] [rbp-18h] BYREF

  v3 = 1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) != 0 )
  {
    v7 = *((_QWORD *)a1 + 18);
    if ( v7 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v28, v7);
      v29 = 0LL;
      v9 = (__int64 *)MNGetpItemFromIndex(*v28[0], a2);
      if ( !v9 )
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v8);
        return v3;
      }
      v10 = *v28[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
      v30[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v30;
      v30[1] = v10;
      if ( v10 )
        _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
      xxxMNRecomputeBarIfNeeded(a1, v28);
      v12 = v29;
      if ( !v29 )
        v12 = *v28[0];
      if ( (unsigned int)MNGetpItemIndex(v12, (__int64)v9) == -1 )
      {
LABEL_9:
        ThreadUnlock1(v14, v13);
        goto LABEL_10;
      }
      v16 = *v9;
      if ( a3 )
      {
        v14 = *(unsigned int *)(v16 + 4);
        if ( (v14 & 1) != 0 )
          goto LABEL_9;
        *(_DWORD *)(v16 + 4) = v14 | 0x100;
      }
      else
      {
        *(_DWORD *)(v16 + 4) &= ~0x100u;
      }
      DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      v18 = *((_QWORD *)a1 + 5);
      v19 = 96;
      if ( (*(_DWORD *)(v18 + 232) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( (*(_DWORD *)(v18 + 288) & 0xF) == 0
             && (v21 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      GetDPIMETRICSForDpi(WindowDpiLastNotify);
      GreSelectFont(DCEx);
      TextAlign = GreGetTextAlign(DCEx);
      v23 = TextAlign;
      if ( *(_QWORD *)(*v28[0] + 88) && (***(_DWORD ***)(*v28[0] + 88) & 0x2000) != 0 )
        GreSetTextAlign(DCEx, TextAlign | 0x100);
      v24 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v24 + 232) & 0x8000000) != 0 )
      {
        v19 = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( (*(_DWORD *)(v24 + 288) & 0xF) != 0
             || (v25 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
             || (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 64LL) & 1) == 0 )
      {
        v19 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      xxxDrawMenuItem(DCEx, v19, v28, (__int64)v9, 0, 0LL);
      GreSetTextAlign(DCEx, v23);
      ThreadUnlock1(v27, v26);
      _ReleaseDC(DCEx);
      goto LABEL_11;
    }
  }
  return 0LL;
}
