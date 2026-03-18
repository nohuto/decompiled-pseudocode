/*
 * XREFs of FreePointerMessageParams @ 0x1C01DB134
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00343A0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C01081C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C011D664 (FreeQEntry.c)
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
