/*
 * XREFs of HdlspSendStringAtBaud @ 0x14098D254
 * Callers:
 *     HdlspBugCheckProcessing @ 0x14098BD28 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x14098BE60 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x14098C4CC (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x14098C594 (HdlspGetLine.c)
 *     HdlspPutString @ 0x14098CFC4 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x14098D0EC (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x14098D1B0 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x14034D778 (InbvPortPutByte.c)
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
