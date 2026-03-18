/*
 * XREFs of PhkNextValid @ 0x1C00B5C80
 * Callers:
 *     fnHkINLPCWPEXSTRUCT @ 0x1C0003010 (fnHkINLPCWPEXSTRUCT.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C0037170 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B5264 (zzzUnhookWindowsHookEx.c)
 *     PhkFirstValid @ 0x1C00B5BC8 (PhkFirstValid.c)
 *     xxxCallNextHookEx @ 0x1C00B5C2C (xxxCallNextHookEx.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     zzzUnhookWindowsHook @ 0x1C01D3AA0 (zzzUnhookWindowsHook.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C022ACA0 (fnHkINLPCWPRETEXSTRUCT.c)
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
    a1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 8LL * *(int *)(a1 + 48) + 48);
    goto LABEL_4;
  }
  return 0LL;
}
