/*
 * XREFs of GetAppImeCompatFlags @ 0x1C01045C4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxImmProcessKey @ 0x1C01042F4 (xxxImmProcessKey.c)
 *     EditionGetAppImeCompatFlags @ 0x1C01B91A0 (EditionGetAppImeCompatFlags.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01C7E50 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppImeCompatFlags(__int64 ThreadWin32Thread, __int64 a2)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  return *(unsigned int *)(*(_QWORD *)(ThreadWin32Thread + 424) + 776LL);
}
