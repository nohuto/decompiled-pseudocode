/*
 * XREFs of ?IsMiPMouseMessage@@YAHI@Z @ 0x1C002A7A4
 * Callers:
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E1998 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2C84 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPMouseMessage(int a1)
{
  return (unsigned int)(a1 - 512) <= 0xE || (unsigned int)(a1 - 160) <= 0xD;
}
