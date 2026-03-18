/*
 * XREFs of ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z @ 0x1C0105650
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     SetWindowCompositionInfo @ 0x1C0070090 (SetWindowCompositionInfo.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C019EEE4 (ReduceArrangedRectangleByFrameMargin.c)
 */

void __fastcall xxxProcessUpdateFrameMargins(struct tagWND *a1, struct tagUPDATEFRAMEMARGINS *a2)
{
  char v4; // si
  int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int16 v9; // ax
  __int128 v10; // [rsp+40h] [rbp-9h] BYREF
  __int128 v11; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v12[32]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v13; // [rsp+80h] [rbp+37h]

  if ( !a2 )
    return;
  v4 = 0;
  v5 = 0;
  v10 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( !(unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v12) )
    return;
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 233) & 3) != 0 )
  {
    v7 = ValidateHmonitorNoRip(*(_QWORD *)(v6 + 256));
    if ( v7 )
    {
      v11 = *GetMonitorWorkRectForWindow(&v11, v7, a1);
      ReduceArrangedRectangleByFrameMargin(a1, &v11, &v10);
      v4 = 1;
      v5 = 3146260;
    }
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(v6 + 31) & 0x20) != 0 || (v9 = *((_WORD *)a2 + 2), v9 == WORD2(v13)) )
  {
LABEL_6:
    v8 = DWORD1(v10);
    goto LABEL_7;
  }
  v4 = 1;
  v5 = 1;
  v8 = SWORD2(v13) + *(_DWORD *)(v6 + 92) - v9;
LABEL_7:
  v13 = *(_QWORD *)a2;
  if ( (unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v12) )
  {
    if ( v4 )
      xxxSetWindowPos(a1, 0LL, (unsigned int)v10, v8, DWORD2(v10) - v10, HIDWORD(v10) - v8, v5);
  }
}
