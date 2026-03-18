/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01E796C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C002D690 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00EFC34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C01303AC (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C006BEEC (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C00EDC84 (IsWindowBroadcastingDpiToChildrenX.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  struct tagWND *v7; // r11
  ULONG_PTR v8; // r11
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+24h] [rbp-14h]

  v6 = 0;
  if ( (unsigned int)IsWindowBroadcastingDpiToChildrenX(a1) )
  {
    if ( !HasMaximizedState(v7) )
    {
      v10 = a3[2] - *a3;
      v11 = a3[3] - a3[1];
      if ( xxxSendMessage(v8) )
      {
        v6 = 1;
        a4[1] = a3[1];
        *a4 = *a3;
        a4[2] = v10 + *a3;
        a4[3] = v11 + a3[1];
      }
    }
  }
  return v6;
}
