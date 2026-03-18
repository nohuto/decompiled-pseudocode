/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01E7AEC
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0027220 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00CDEA8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C00CA81C (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0113934 (IsWindowBroadcastingDpiToChildrenX.c)
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
