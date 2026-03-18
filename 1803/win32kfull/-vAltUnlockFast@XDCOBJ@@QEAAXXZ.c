/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FD94
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C008C040 (GreSelectRedirectionBitmap.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00E8F3C (GreConvertMemToRedirectionDC.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0139274 (--1MDCOBJA@@QEAA@XZ.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0242890 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0242B00 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C02435C0 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0243620 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C02436B0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0243790 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C02437E0 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C026EBEC (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0270544 (GreConvertRedirectionToMemDC.c)
 *     NtGdiCancelDC @ 0x1C027E580 (NtGdiCancelDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  XDCOBJ::RestoreAttributes(this);
  v2 = *(__int64 **)this;
  v4 = 0;
  v3 = *v2;
  HmgDecrementShareReferenceCountEx(v2, &v4);
  if ( v4 )
    bDeleteDCInternalEx(v3, 0LL);
}
