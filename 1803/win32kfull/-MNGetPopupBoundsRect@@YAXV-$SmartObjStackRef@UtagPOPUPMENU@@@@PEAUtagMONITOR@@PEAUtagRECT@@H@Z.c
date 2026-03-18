/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01E4154
 * Callers:
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C01E3F2C (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C01E4AE0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1C0073764 (GetMonitorRectForWindow.c)
 *     SubtractRect @ 0x1C00EE444 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetMonitorMenuRectForWindow @ 0x1C022B078 (GetMonitorMenuRectForWindow.c)
 */

_QWORD *__fastcall MNGetPopupBoundsRect(int ***a1, __int64 a2, _OWORD *a3, int a4)
{
  __int64 v8; // rdx
  __int128 v9; // xmm0
  int **v10; // rax
  __int128 v11; // xmm0
  __int128 *v12; // rax
  __int128 v13; // xmm0
  int **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-49h] BYREF
  __int128 v22; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v23[16]; // [rsp+38h] [rbp-31h] BYREF
  int v24[6]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v25; // [rsp+60h] [rbp-9h] BYREF
  __int128 v26; // [rsp+70h] [rbp+7h] BYREF
  __int128 v27; // [rsp+80h] [rbp+17h] BYREF

  v9 = *GetMonitorRectForWindow(&v22, a2, *((const struct tagWND **)**a1 + 2));
  v10 = *a1;
  v25 = v9;
  if ( **v10 >= 0 )
  {
    v12 = &v27;
    v27 = v25;
  }
  else
  {
    v11 = *(_OWORD *)GetMonitorMenuRectForWindow(v23, a2, *((_QWORD *)**a1 + 2));
    v12 = &v26;
    v26 = v11;
  }
  v13 = *v12;
  v14 = *a1;
  *(_OWORD *)v24 = v13;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v14 + 2) + 40LL) + 288LL) & 0xF) != 2 )
  {
    v15 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 2) + 40LL) + 256LL));
    v21 = v15;
    if ( v15 )
    {
      if ( v15 != a2 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v16, v8);
        if ( ***a1 >= 0 || IsRectEmptyInl((const struct tagRECT *)(a2 + 584)) )
          v19 = *(_QWORD *)(a2 + 40) + 28LL;
        else
          v19 = v18;
        PhysicalToLogicalDPIRect(v24, v19, CurrentThreadDpiAwarenessContext, &v21);
        if ( !a4 )
          goto LABEL_15;
        PhysicalToLogicalDPIRect(&v25, *(_QWORD *)(a2 + 40) + 28LL, CurrentThreadDpiAwarenessContext, &v21);
      }
    }
  }
  if ( !a4 )
  {
LABEL_15:
    *a3 = *(_OWORD *)v24;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v8);
  }
  SubtractRect((__int64)a3, (int *)&v25, v24);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v8);
}
