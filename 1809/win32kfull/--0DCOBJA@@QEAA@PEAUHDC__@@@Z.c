/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0010EB8
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C0010F08 (GreConvertMemToRedirectionDC.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C025A5A0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C025A8B0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C025B4E0 (DxgkEngGetClientRect.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C025B650 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C025B780 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C02828C0 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C028349C (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015F030 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 v4; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 16);
  LOBYTE(v4) = 1;
  *(_QWORD *)this = HmgShareLockEx(a2, v4, 0LL);
  return this;
}
