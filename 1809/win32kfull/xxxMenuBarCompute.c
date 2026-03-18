/*
 * XREFs of xxxMenuBarCompute @ 0x1C00ACA90
 * Callers:
 *     xxxCalcClientRect @ 0x1C0068CE0 (xxxCalcClientRect.c)
 *     xxxCalcMenuBar @ 0x1C00A6D14 (xxxCalcMenuBar.c)
 *     xxxPaintMenuBar @ 0x1C00A6E80 (xxxPaintMenuBar.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C022E368 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C0232510 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00AC9D0 (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C01297A0 (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 **a1, ULONG_PTR a2, unsigned int a3, int a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int16 WindowDpiLastNotify; // bx
  int v13; // ebp
  int v14; // ebx
  __int64 result; // rax
  __int64 *v16; // rcx
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    if ( (*(_DWORD *)(v9 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
    }
    else if ( (*(_DWORD *)(v9 + 288) & 0xF) == 0
           && (v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 456LL)) != 0
           && (v11 = **(_QWORD **)(v10 + 8), (*(_DWORD *)(v11 + 64) & 1) != 0) )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL);
      WindowDpiLastNotify = *(_WORD *)(v11 + 284);
    }
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, 0LL) & 0xF) != 0 )
      WindowDpiLastNotify = *(_WORD *)(PsGetCurrentProcessWin32Process(v11) + 284);
    else
      WindowDpiLastNotify = 96;
    v9 = MEMORY[0x28];
  }
  if ( ((*(_DWORD *)(v9 + 232) & 0x10000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 820) & 0x80000) != 0)
    && *(_WORD *)(**a1 + 76) != WindowDpiLastNotify )
  {
    v16 = a1[2];
    if ( !v16 )
      v16 = (__int64 *)**a1;
    MNClearCachedPopupSizes(v16);
    *(_WORD *)(**a1 + 76) = WindowDpiLastNotify;
  }
  v13 = a5;
  v14 = xxxMNCompute(a1, a2, a2, a3, a4, a5, &v17);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) == 0 )
  {
    if ( v17 )
      v14 = xxxMNCompute(a1, a2, a2, a3, a4, v13, &v17);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v14 + 1);
  if ( !v14 )
    return 0LL;
  return result;
}
