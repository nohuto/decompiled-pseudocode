/*
 * XREFs of _GetMessagePos @ 0x1C00E0550
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C02289A0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 *     xxxSendHelpMessage @ 0x1C022FC9C (xxxSendHelpMessage.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetMessagePos(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(gptiCurrent + 764LL);
  if ( *(_DWORD *)(gptiCurrent + 772LL) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*(_DWORD *)(gptiCurrent + 772LL) >> 8)) & 0x1FF) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v4, &v4, *(unsigned int *)(gptiCurrent + 772LL), 0LL);
      PhysicalToLogicalDPIPoint(&v4, &v4, CurrentThreadDpiAwarenessContext, 0LL);
    }
  }
  else
  {
    v4 = 0LL;
  }
  return (unsigned __int16)v4 | (WORD2(v4) << 16);
}
