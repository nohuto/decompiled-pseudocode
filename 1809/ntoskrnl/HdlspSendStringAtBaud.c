/*
 * XREFs of HdlspSendStringAtBaud @ 0x14094D228
 * Callers:
 *     HdlspBugCheckProcessing @ 0x14094BD1C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x14094BE50 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x14094C4BC (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x14094C584 (HdlspGetLine.c)
 *     HdlspPutString @ 0x14094CF98 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x14094D0C0 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x14094D184 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x14032C474 (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1, __int64 a2, __int64 a3)
{
  char result; // al
  _BYTE *v4; // rbx

  result = *a1;
  v4 = a1;
  while ( result )
  {
    LOBYTE(a2) = result;
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14), a2, a3);
    result = *++v4;
  }
  return result;
}
