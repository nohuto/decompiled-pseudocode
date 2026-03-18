/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F2F0
 * Callers:
 *     xxxHotTrack @ 0x1C01177B8 (xxxHotTrack.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C012A5CC (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246400 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // eax
  unsigned int v19; // eax
  HDC DCEx; // rsi
  __int64 v21; // rax
  unsigned int WindowDpiLastNotify; // r14d
  int TextAlign; // eax
  int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v31; // [rsp+40h] [rbp-20h]
  __int64 v32; // [rsp+48h] [rbp-18h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]
  __int64 v34; // [rsp+58h] [rbp-8h]

  v3 = 1;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) != 0 )
  {
    v7 = *((_QWORD *)a1 + 21);
    if ( v7 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v30, v7);
      v31 = 0LL;
      v10 = MNGetpItemFromIndex(*v30[0], a2);
      if ( !v10 )
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30, v8, v9);
        return v3;
      }
      v11 = *v30[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9);
      v32 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
      v33 = v11;
      if ( v11 )
        HMLockObject(v11);
      xxxMNRecomputeBarIfNeeded(a1, v30);
      v13 = v31;
      if ( !v31 )
        v13 = *v30[0];
      if ( (unsigned int)MNGetpItemIndex(v13, v10) == -1 )
      {
LABEL_9:
        ThreadUnlock1(v15, v14, v16);
        goto LABEL_10;
      }
      v15 = *(_QWORD *)v10;
      v18 = *(_DWORD *)(*(_QWORD *)v10 + 4LL);
      if ( a3 )
      {
        if ( (v18 & 1) != 0 )
          goto LABEL_9;
        v19 = v18 | 0x100;
      }
      else
      {
        v19 = v18 & 0xFFFFFEFF;
      }
      *(_DWORD *)(v15 + 4) = v19;
      DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      v21 = *((_QWORD *)a1 + 5);
      WindowDpiLastNotify = 96;
      if ( (*(_DWORD *)(v21 + 232) & 0x8000000) != 0 )
        GetWindowDpiLastNotify((__int64)a1);
      GetDPIMETRICSForDpi();
      GreSelectFont(DCEx);
      TextAlign = GreGetTextAlign(DCEx);
      v24 = TextAlign;
      if ( *(_QWORD *)(*v30[0] + 88) && (***(_DWORD ***)(*v30[0] + 88) & 0x2000) != 0 )
        GreSetTextAlign(DCEx, TextAlign | 0x100);
      v25 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v25 + 232) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( (*(_DWORD *)(v25 + 288) & 0xF) != 0
             || (v26 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
             || (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 64LL) & 1) == 0 )
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      xxxDrawMenuItem(DCEx, WindowDpiLastNotify, v30, v10, 0, 0LL);
      GreSetTextAlign(DCEx, v24);
      ThreadUnlock1(v28, v27, v29);
      _ReleaseDC(DCEx);
      goto LABEL_11;
    }
  }
  return 0LL;
}
