/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C01FECA4
 * Callers:
 *     xxxHotTrack @ 0x1C010F2FC (xxxHotTrack.c)
 * Callees:
 *     GreGetTextAlign @ 0x1C000CF4C (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C000D0B8 (GreSetTextAlign.c)
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0205270 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct tagITEM *v9; // r15
  __int64 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  HDC DCEx; // rsi
  __int64 v19; // rax
  unsigned int WindowDpiLastNotify; // r14d
  int TextAlign; // eax
  int v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28[2]; // [rsp+30h] [rbp-30h] BYREF
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
      v9 = (struct tagITEM *)MNGetpItemFromIndex(*v28[0], a2);
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
      v30[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v30;
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
        ThreadUnlock1(v14, v13, v15);
        goto LABEL_10;
      }
      v17 = *(_QWORD *)v9;
      if ( a3 )
      {
        v14 = *(unsigned int *)(v17 + 4);
        if ( (v14 & 1) != 0 )
          goto LABEL_9;
        *(_DWORD *)(v17 + 4) = v14 | 0x100;
      }
      else
      {
        *(_DWORD *)(v17 + 4) &= ~0x100u;
      }
      DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      v19 = *((_QWORD *)a1 + 5);
      WindowDpiLastNotify = 96;
      if ( (*(_DWORD *)(v19 + 232) & 0x8000000) != 0 )
        GetWindowDpiLastNotify((__int64)a1);
      GetDPIMETRICSForDpi();
      GreSelectFont(DCEx);
      TextAlign = GreGetTextAlign(DCEx);
      v22 = TextAlign;
      if ( *(_QWORD *)(*v28[0] + 88LL) && (***(_DWORD ***)(*v28[0] + 88LL) & 0x2000) != 0 )
        GreSetTextAlign(DCEx, TextAlign | 0x100);
      v23 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v23 + 232) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( (*(_DWORD *)(v23 + 288) & 0xF) != 0
             || (v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
             || (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 52LL) & 1) == 0 )
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      xxxDrawMenuItem(DCEx, WindowDpiLastNotify, v28, v9, 0, 0LL);
      GreSetTextAlign(DCEx, v22);
      ThreadUnlock1(v26, v25, v27);
      _ReleaseDC(DCEx);
      goto LABEL_11;
    }
  }
  return 0LL;
}
