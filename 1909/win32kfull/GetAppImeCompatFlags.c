/*
 * XREFs of GetAppImeCompatFlags @ 0x1C0052998
 * Callers:
 *     xxxImmProcessKey @ 0x1C00526BC (xxxImmProcessKey.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionGetAppImeCompatFlags @ 0x1C01CCFA0 (EditionGetAppImeCompatFlags.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01DB104 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppImeCompatFlags(__int64 ThreadWin32Thread)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  return *(unsigned int *)(*(_QWORD *)(ThreadWin32Thread + 416) + 768LL);
}
