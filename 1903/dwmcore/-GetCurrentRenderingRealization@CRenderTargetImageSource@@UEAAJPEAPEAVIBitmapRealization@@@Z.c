/*
 * XREFs of ?GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800C0160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CRenderTargetImageSource::GetCurrentRenderingRealization(
        CRenderTargetImageSource *this,
        struct IBitmapRealization **a2)
{
  *a2 = (struct IBitmapRealization *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL));
  CMILCOMBase::InternalAddRef((CRenderTargetImageSource *)((char *)this + 8));
  return 0LL;
}
