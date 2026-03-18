/*
 * XREFs of PhkNextValid @ 0x1C003BC60
 * Callers:
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     PhkFirstGlobalValid @ 0x1C000F7EC (PhkFirstGlobalValid.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x1C003BB40 (fnHkINLPCWPEXSTRUCT.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D7B08 (zzzUnhookWindowsHookEx.c)
 *     PhkFirstValid @ 0x1C00D7E40 (PhkFirstValid.c)
 *     xxxCallNextHookEx @ 0x1C0129AEC (xxxCallNextHookEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     zzzUnhookWindowsHook @ 0x1C01B0A70 (zzzUnhookWindowsHook.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C02022D0 (fnHkINLPCWPRETEXSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhkNextValid(__int64 a1)
{
  while ( *(_QWORD *)(a1 + 40) )
  {
    a1 = *(_QWORD *)(a1 + 40);
LABEL_4:
    if ( !a1 || (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
  if ( (*(_DWORD *)(a1 + 64) & 1) == 0 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL * (*(_DWORD *)(a1 + 48) + 1) + 40);
    goto LABEL_4;
  }
  return 0LL;
}
