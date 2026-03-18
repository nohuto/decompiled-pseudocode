/*
 * XREFs of ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01E5A14
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01E4D10 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01C0450 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01E4A58 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?GetShellArrangedWindowType@@YA?AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z @ 0x1C01E4AE4 (-GetShellArrangedWindowType@@YA-AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z.c)
 */

_BOOL8 __fastcall PreserveShellArrangementDuringTopBottomSize(const struct _MOVESIZEDATA *a1)
{
  int v2; // ecx
  struct tagRECT *MonitorWorkRectForWindow; // rax
  __int64 v4; // rcx
  struct tagRECT v5; // xmm0
  __int64 v6; // rax
  char OverlapCoordinatesForArrangement; // al
  unsigned int ShellArrangedWindowType; // eax
  __int64 v9; // r9
  _BOOL8 result; // rax
  int v11; // ecx
  struct tagRECT v12; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 70) & 2) == 0 )
    return 0LL;
  v2 = *((_DWORD *)a1 + 44);
  if ( (unsigned int)(v2 - 6) > 2 && (unsigned int)(v2 - 3) > 2 )
    return 0LL;
  MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(
                                                 &v13,
                                                 *((_QWORD *)a1 + 27),
                                                 *((const struct tagWND **)a1 + 2));
  v4 = *((_QWORD *)a1 + 2);
  v5 = *MonitorWorkRectForWindow;
  v6 = *(_QWORD *)(v4 + 40);
  v13 = v5;
  v12 = *(struct tagRECT *)(v6 + 88);
  ReduceArrangedRectangleByFrameMargin(v4, &v13, &v12.left);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v13, &v12, 0);
  ShellArrangedWindowType = GetShellArrangedWindowType((__int64)a1, OverlapCoordinatesForArrangement);
  v9 = (int)ShellArrangedWindowType;
  result = ShellArrangedWindowType < 6;
  if ( (unsigned int)v9 < 6 )
  {
    v11 = dword_1C02D98D0[v9];
    return !_bittest(&v11, (unsigned __int8)(*((_DWORD *)a1 + 44) - 3));
  }
  return result;
}
