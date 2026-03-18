/*
 * XREFs of ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E2C14
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 */

void __fastcall SetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  if ( a1 )
    InternalSetProp((__int64)a1, (unsigned __int16)gatomMiPFlags, a2, 5u);
}
