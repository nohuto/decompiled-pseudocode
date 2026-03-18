/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221584
 * Callers:
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022135C (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1C0036864 (GetMonitorRectForWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SubtractRect @ 0x1C00ECF64 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GetMonitorMenuRectForWindow @ 0x1C0259674 (GetMonitorMenuRectForWindow.c)
 */

_QWORD *__fastcall MNGetPopupBoundsRect(int ***a1, __int64 a2, _OWORD *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 v10; // xmm0
  int **v11; // rax
  __int128 v12; // xmm0
  __int128 *v13; // rax
  __int128 v14; // xmm0
  int **v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // [rsp+20h] [rbp-49h] BYREF
  __int128 v23; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v24[16]; // [rsp+38h] [rbp-31h] BYREF
  int v25[6]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v26; // [rsp+60h] [rbp-9h] BYREF
  __int128 v27; // [rsp+70h] [rbp+7h] BYREF
  __int128 v28; // [rsp+80h] [rbp+17h] BYREF

  v10 = *GetMonitorRectForWindow(&v23, a2, *((const struct tagWND **)**a1 + 2));
  v11 = *a1;
  v26 = v10;
  if ( **v11 >= 0 )
  {
    v13 = &v28;
    v28 = v26;
  }
  else
  {
    v12 = *(_OWORD *)GetMonitorMenuRectForWindow(v24, a2, *((_QWORD *)**a1 + 2));
    v13 = &v27;
    v27 = v12;
  }
  v14 = *v13;
  v15 = *a1;
  *(_OWORD *)v25 = v14;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v15 + 2) + 40LL) + 288LL) & 0xF) != 2 )
  {
    v16 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 2) + 40LL) + 256LL));
    v22 = v16;
    if ( v16 )
    {
      if ( v16 != a2 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17, v8, v9);
        if ( ***a1 >= 0 || IsRectEmptyInl((const struct tagRECT *)(a2 + 296)) )
          v20 = *(_QWORD *)(a2 + 40) + 28LL;
        else
          v20 = v19;
        PhysicalToLogicalDPIRect(v25, v20, CurrentThreadDpiAwarenessContext, &v22);
        if ( !a4 )
          goto LABEL_15;
        PhysicalToLogicalDPIRect(&v26, *(_QWORD *)(a2 + 40) + 28LL, CurrentThreadDpiAwarenessContext, &v22);
      }
    }
  }
  if ( !a4 )
  {
LABEL_15:
    *a3 = *(_OWORD *)v25;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v8, v9);
  }
  SubtractRect((__int64)a3, (int *)&v26, v25);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v8, v9);
}
