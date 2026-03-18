/*
 * XREFs of _GetMessagePos @ 0x1C00F5880
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01FFF80 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1C0200E84 (xxxEndScroll.c)
 *     xxxSendHelpMessage @ 0x1C0206B18 (xxxSendHelpMessage.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetMessagePos(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(gptiCurrent + 748LL);
  if ( *(_DWORD *)(gptiCurrent + 756LL) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*(_DWORD *)(gptiCurrent + 756LL) >> 8)) & 0x1FF) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v4, &v4, *(unsigned int *)(gptiCurrent + 756LL), 0LL);
      PhysicalToLogicalDPIPoint(&v4, &v4, CurrentThreadDpiAwarenessContext, 0LL);
    }
  }
  else
  {
    v4 = 0LL;
  }
  return (unsigned __int16)v4 | (WORD2(v4) << 16);
}
