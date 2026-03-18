/*
 * XREFs of ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E2BE8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SetMiPPromotion @ 0x1C01E3940 (SetMiPPromotion.c)
 * Callees:
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 */

void __fastcall SetMiPWakeBit(struct tagTHREADINFO *a1)
{
  SetWakeBit((__int64)a1, (**((_DWORD **)a1 + 160) & 0x20) != 0 ? 4 : 2);
}
