/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F910
 * Callers:
 *     xxxHotTrack @ 0x1C013D878 (xxxHotTrack.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C0021E08 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246B40 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // eax
  unsigned int v20; // eax
  HDC DCEx; // rsi
  __int64 v22; // rax
  unsigned int WindowDpiLastNotify; // r14d
  __int64 *DPIMETRICSForDpi; // rax
  int TextAlign; // eax
  int v26; // r12d
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+40h] [rbp-20h]
  __int64 v34; // [rsp+48h] [rbp-18h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+58h] [rbp-8h]

  v3 = 1;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) != 0 )
  {
    v7 = *((_QWORD *)a1 + 21);
    if ( v7 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v32, v7);
      v33 = 0LL;
      v11 = MNGetpItemFromIndex(*v32[0], a2);
      if ( !v11 )
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32, v8, v9, v10);
        return v3;
      }
      v12 = *v32[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
      v34 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v34;
      v35 = v12;
      if ( v12 )
        HMLockObject(v12);
      xxxMNRecomputeBarIfNeeded(a1, v32);
      v14 = v33;
      if ( !v33 )
        v14 = *v32[0];
      if ( (unsigned int)MNGetpItemIndex(v14, v11) == -1 )
      {
LABEL_9:
        ThreadUnlock1(v16, v15, v17);
        goto LABEL_10;
      }
      v16 = *(_QWORD *)v11;
      v19 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
      if ( a3 )
      {
        if ( (v19 & 1) != 0 )
          goto LABEL_9;
        v20 = v19 | 0x100;
      }
      else
      {
        v20 = v19 & 0xFFFFFEFF;
      }
      *(_DWORD *)(v16 + 4) = v20;
      DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      v22 = *((_QWORD *)a1 + 5);
      WindowDpiLastNotify = 96;
      if ( (*(_DWORD *)(v22 + 232) & 0x8000000) != 0 )
        GetWindowDpiLastNotify((__int64)a1);
      DPIMETRICSForDpi = (__int64 *)GetDPIMETRICSForDpi();
      GreSelectFont((__int64)DCEx, *DPIMETRICSForDpi);
      TextAlign = GreGetTextAlign(DCEx);
      v26 = TextAlign;
      if ( *(_QWORD *)(*v32[0] + 88) && (***(_DWORD ***)(*v32[0] + 88) & 0x2000) != 0 )
        GreSetTextAlign(DCEx, TextAlign | 0x100);
      v27 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v27 + 232) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( (*(_DWORD *)(v27 + 288) & 0xF) != 0
             || (v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
             || (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) == 0 )
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      xxxDrawMenuItem(DCEx, WindowDpiLastNotify, v32, v11, 0, 0LL);
      GreSetTextAlign(DCEx, v26);
      ThreadUnlock1(v30, v29, v31);
      _ReleaseDC(DCEx);
      goto LABEL_11;
    }
  }
  return 0LL;
}
