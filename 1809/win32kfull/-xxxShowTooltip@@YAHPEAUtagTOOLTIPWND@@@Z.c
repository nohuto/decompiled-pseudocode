/*
 * XREFs of ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C01512FC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0151258 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0071DE8 (xxxSetWindowPosAndBand.c)
 *     wcsncpycch @ 0x1C00B0184 (wcsncpycch.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01513D0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxShowTooltip(struct tagTOOLTIPWND *a1)
{
  _WORD *v1; // rax
  int v2; // ebx
  int v4; // edx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagSIZE v9; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_WORD *)*((_QWORD *)a1 + 6);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( v1 == gszCAPTIONTOOLTIP )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 184LL);
    if ( !v7 )
      return 0LL;
    v8 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v8 + 23) & 8) == 0 || !*(_DWORD *)(v8 + 184) )
      return 0LL;
    wcsncpycch(gszCAPTIONTOOLTIP, *(_QWORD *)(v7 + 168), 99);
    word_1C0319A06 = 0;
  }
  if ( !(unsigned int)xxxTooltipGetSizeAndPosition(a1, &v9, &v10) )
    return 0LL;
  v4 = 16472;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    v4 = 16464;
  v5 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 184LL);
  if ( v5 )
    v2 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 236LL);
  xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, v10.x, v10.y, v9.cx, v9.cy, v4, v2);
  return 1LL;
}
