/*
 * XREFs of HdlspSendBlueScreenInfo @ 0x14098D1B0
 * Callers:
 *     HdlspDispatch @ 0x14098BE60 (HdlspDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401A65D0 (sprintf_s.c)
 *     HdlspSendStringAtBaud @ 0x14098D254 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspSendBlueScreenInfo(int a1)
{
  KSPIN_LOCK i; // rbx
  char DstBuf[160]; // [rsp+20h] [rbp-B8h] BYREF

  HdlspSendStringAtBaud("\a\a\a<?xml>\a<BP>");
  HdlspSendStringAtBaud("\r\n<INSTANCE CLASSNAME=\"BLUESCREEN\">");
  sprintf_s(DstBuf, 0xA0uLL, "\r\n<PROPERTY NAME=\"STOPCODE\" TYPE=\"string\"><VALUE>\"0x%0X\"</VALUE></PROPERTY>", a1);
  HdlspSendStringAtBaud(DstBuf);
  for ( i = HeadlessGlobals[5]; i; i = *(_QWORD *)(i + 16) )
    HdlspSendStringAtBaud(*(_QWORD *)(i + 8));
  return HdlspSendStringAtBaud("\r\n</INSTANCE>\r\n</BP>\a");
}
