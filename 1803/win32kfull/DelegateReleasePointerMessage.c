/*
 * XREFs of DelegateReleasePointerMessage @ 0x1C01B847C
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01250EC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     DelegateCoalescePointerMessage @ 0x1C01BA378 (DelegateCoalescePointerMessage.c)
 */

__int64 __fastcall DelegateReleasePointerMessage(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 24) == 583 )
    CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(gpTouchProcessor, *(_QWORD *)(a2 + 40));
  return DelegateCoalescePointerMessage(a1, 1LL, a2);
}
