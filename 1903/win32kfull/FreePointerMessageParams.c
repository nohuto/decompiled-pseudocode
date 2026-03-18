/*
 * XREFs of FreePointerMessageParams @ 0x1C01F08D4
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0010510 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C0010648 (FreeQEntry.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C009E000 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreePointerMessageParams(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) != 595 )
  {
    v1 = 2LL;
    if ( *(_DWORD *)(a1 + 96) )
      v1 = 3LL;
    return CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(a1 + 40), v1, a1);
  }
  return result;
}
