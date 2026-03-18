/*
 * XREFs of _GetMessagePos @ 0x1C0117EA0
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0241420 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 *     xxxSendHelpMessage @ 0x1C024888C (xxxSendHelpMessage.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetMessagePos(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v5; // r8
  unsigned int v6; // edi
  int v7; // edx
  int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = *(_QWORD *)(gptiCurrent + 756LL);
  if ( *(_DWORD *)(gptiCurrent + 764LL) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4);
    v5 = *(unsigned int *)(gptiCurrent + 764LL);
    v6 = CurrentThreadDpiAwarenessContext;
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*(_DWORD *)(gptiCurrent + 764LL) >> 8)) & 0x1FF) != 0 )
      goto LABEL_14;
    v7 = 1;
    v8 = (v5 & 0xF) == 2 && (v5 & 0x20000000) != 0;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 )
      v7 = 0;
    if ( v8 != v7 )
    {
LABEL_14:
      LogicalToPhysicalDPIPoint(&v10, &v10, v5, 0LL);
      PhysicalToLogicalDPIPoint(&v10, &v10, v6, 0LL);
    }
  }
  else
  {
    v10 = 0LL;
  }
  return (unsigned __int16)v10 | (WORD2(v10) << 16);
}
