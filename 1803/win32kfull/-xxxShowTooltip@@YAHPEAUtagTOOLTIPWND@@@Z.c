/*
 * XREFs of ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C01FEF44
 * Callers:
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C01FF21C (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0034E48 (xxxSetWindowPosAndBand.c)
 *     wcsncpycch @ 0x1C0052F38 (wcsncpycch.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01FF05C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxShowTooltip(struct tagTOOLTIPWND *a1)
{
  _WORD *v1; // rax
  int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rax
  struct tagSIZE v9; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_WORD *)*((_QWORD *)a1 + 6);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( v1 == gszCAPTIONTOOLTIP )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 184LL);
    if ( !v5 )
      return 0LL;
    v6 = *(_QWORD *)(v5 + 40);
    if ( (*(_BYTE *)(v6 + 23) & 8) == 0 || !*(_DWORD *)(v6 + 184) )
      return 0LL;
    wcsncpycch(gszCAPTIONTOOLTIP, *(_QWORD *)(v5 + 168), 99);
    word_1C032C096 = 0;
  }
  if ( !(unsigned int)xxxTooltipGetSizeAndPosition(a1, &v9, &v10) )
    return 0LL;
  v7 = 16472;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    v7 = 16464;
  v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 184LL);
  if ( v8 )
    v2 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 236LL);
  xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, v10.x, v10.y, v9.cx, v9.cy, v7, v2);
  return 1LL;
}
