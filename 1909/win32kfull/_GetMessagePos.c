/*
 * XREFs of _GetMessagePos @ 0x1C00F1E60
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0240E00 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 *     xxxSendHelpMessage @ 0x1C024814C (xxxSendHelpMessage.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetMessagePos(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // r8
  unsigned int v5; // edi
  int v6; // edx
  int v7; // ecx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_QWORD *)(gptiCurrent + 756LL);
  if ( *(_DWORD *)(gptiCurrent + 764LL) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3);
    v4 = *(unsigned int *)(gptiCurrent + 764LL);
    v5 = CurrentThreadDpiAwarenessContext;
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*(_DWORD *)(gptiCurrent + 764LL) >> 8)) & 0x1FF) != 0 )
      goto LABEL_14;
    v6 = 1;
    v7 = (v4 & 0xF) == 2 && (v4 & 0x20000000) != 0;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 )
      v6 = 0;
    if ( v7 != v6 )
    {
LABEL_14:
      LogicalToPhysicalDPIPoint(&v9, &v9, v4, 0LL);
      PhysicalToLogicalDPIPoint(&v9, &v9, v5, 0LL);
    }
  }
  else
  {
    v9 = 0LL;
  }
  return (unsigned __int16)v9 | (WORD2(v9) << 16);
}
