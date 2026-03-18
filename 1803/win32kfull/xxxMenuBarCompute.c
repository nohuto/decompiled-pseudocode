/*
 * XREFs of xxxMenuBarCompute @ 0x1C000FB5C
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000CCE4 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C000ED5C (xxxCalcMenuBar.c)
 *     xxxCalcClientRect @ 0x1C0022534 (xxxCalcClientRect.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0205270 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C0209284 (xxxMenuBarDraw.c)
 * Callees:
 *     MNClearCachedPopupSizes @ 0x1C0006BE0 (MNClearCachedPopupSizes.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C000FCBC (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNCompute @ 0x1C0013858 (xxxMNCompute.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int16 WindowDpiLastNotify; // bx
  int v13; // ebp
  int v14; // ebx
  __int64 result; // rax
  __int64 v16; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    if ( (*(_DWORD *)(v9 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
    }
    else if ( (*(_DWORD *)(v9 + 288) & 0xF) == 0
           && (v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 448LL)) != 0
           && (v11 = **(_QWORD **)(v10 + 8), (*(_DWORD *)(v11 + 52) & 1) != 0) )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL);
      WindowDpiLastNotify = *(_WORD *)(v11 + 284);
    }
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      WindowDpiLastNotify = *(_WORD *)(PsGetCurrentProcessWin32Process(v11) + 284);
    else
      WindowDpiLastNotify = 96;
    v9 = MEMORY[0x28];
  }
  if ( ((*(_DWORD *)(v9 + 232) & 0x10000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 812) & 0x80000) != 0)
    && *(_WORD *)(**(_QWORD **)a1 + 76LL) != WindowDpiLastNotify )
  {
    v16 = *(_QWORD *)(a1 + 16);
    if ( !v16 )
      v16 = **(_QWORD **)a1;
    MNClearCachedPopupSizes(v16);
    *(_WORD *)(**(_QWORD **)a1 + 76LL) = WindowDpiLastNotify;
  }
  v13 = a5;
  v14 = xxxMNCompute(a1, a2, a2, a3, a4, a5, (__int64)&v17);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 1) == 0 )
  {
    if ( v17 )
      v14 = xxxMNCompute(a1, a2, a2, a3, a4, v13, (__int64)&v17);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v14 + 1);
  if ( !v14 )
    return 0LL;
  return result;
}
