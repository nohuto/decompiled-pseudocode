/*
 * XREFs of PhkNextValid @ 0x1C005530C
 * Callers:
 *     fnHkINLPCWPEXSTRUCT @ 0x1C0005C70 (fnHkINLPCWPEXSTRUCT.c)
 *     PhkFirstGlobalValid @ 0x1C0029E9C (PhkFirstGlobalValid.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0054F14 (zzzUnhookWindowsHookEx.c)
 *     PhkFirstValid @ 0x1C0055270 (PhkFirstValid.c)
 *     xxxCallNextHookEx @ 0x1C00552B8 (xxxCallNextHookEx.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C00721AC (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01E8510 (zzzUnhookWindowsHook.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C0243590 (fnHkINLPCWPRETEXSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhkNextValid(__int64 a1)
{
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL * *(int *)(a1 + 48) + 48);
LABEL_3:
    if ( !a1 || (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
