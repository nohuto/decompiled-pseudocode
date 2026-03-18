/*
 * XREFs of ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01CE7A8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SetMiPPromotion @ 0x1C01CF1E0 (SetMiPPromotion.c)
 * Callees:
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 */

void __fastcall SetMiPWakeBit(struct tagTHREADINFO *a1)
{
  SetWakeBit((__int64)a1, (**((_DWORD **)a1 + 157) & 0x20) != 0 ? 4 : 2);
}
