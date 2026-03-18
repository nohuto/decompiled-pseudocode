/*
 * XREFs of ?GetCurrentRenderingRealization@CAtlasImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180020AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CAtlasImageSource::GetCurrentRenderingRealization(
        CAtlasImageSource *this,
        struct IBitmapRealization **a2)
{
  *a2 = (struct IBitmapRealization *)(((unsigned __int64)this + 8) & -(__int64)(this != (CAtlasImageSource *)16));
  CMILCOMBase::InternalAddRef((CAtlasImageSource *)((char *)this - 16));
  return 0LL;
}
