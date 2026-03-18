/*
 * XREFs of xxxMenuBarCompute @ 0x1C00FC124
 * Callers:
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 *     xxxPaintMenuBar @ 0x1C00F912C (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C00FC000 (xxxCalcMenuBar.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246B40 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 * Callees:
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00FC28C (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C00FC7E0 (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int16 WindowDpiLastNotify; // bx
  int v13; // ebp
  int v14; // ebx
  __int64 result; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0;
  v5 = a4;
  v6 = a3;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    if ( (*(_DWORD *)(v9 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
    }
    else if ( (*(_DWORD *)(v9 + 288) & 0xF) == 0
           && (v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 448LL)) != 0
           && (v11 = **(_QWORD **)(v10 + 8), (*(_DWORD *)(v11 + 64) & 1) != 0) )
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
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, 0LL, a3, a4) & 0xF) != 0 )
      WindowDpiLastNotify = *(_WORD *)(PsGetCurrentProcessWin32Process(v11, v17) + 284);
    else
      WindowDpiLastNotify = 96;
    v9 = MEMORY[0x28];
  }
  if ( ((*(_DWORD *)(v9 + 232) & 0x10000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v9) + 812) & 0x100000) != 0)
    && *(_WORD *)(**a1 + 76) != WindowDpiLastNotify )
  {
    v16 = a1[2];
    if ( !v16 )
      v16 = (__int64 *)**a1;
    MNClearCachedPopupSizes(v16);
    *(_WORD *)(**a1 + 76) = WindowDpiLastNotify;
  }
  v13 = a5;
  v14 = xxxMNCompute(a1, a2, a2, v6, v5, a5, &v18);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) == 0 )
  {
    if ( v18 )
      v14 = xxxMNCompute(a1, a2, a2, v6, v5, v13, &v18);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v14 + 1);
  if ( !v14 )
    return 0LL;
  return result;
}
