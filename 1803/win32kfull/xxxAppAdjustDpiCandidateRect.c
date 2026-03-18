/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01B0038
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00591B0 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00724D0 (NtUserUpdateLayeredWindow.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00F97E4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     HasMaximizedState @ 0x1C002DC40 (HasMaximizedState.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C00F069C (IsWindowBroadcastingDpiToChildrenX.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r11
  ULONG_PTR v8; // r11
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+24h] [rbp-14h]

  v6 = 0;
  if ( (unsigned int)IsWindowBroadcastingDpiToChildrenX(a1) )
  {
    if ( !(unsigned int)HasMaximizedState(v7) )
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
