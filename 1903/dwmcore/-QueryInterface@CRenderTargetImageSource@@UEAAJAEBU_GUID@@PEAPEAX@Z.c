/*
 * XREFs of ?QueryInterface@CRenderTargetImageSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180188BC0
 * Callers:
 *     ?QueryInterface@CArrayBasedCoverageSet@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECE60 (-QueryInterface@CArrayBasedCoverageSet@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED250 (-QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED260 (-QueryInterface@CRenderTargetImageSource@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED270 (-QueryInterface@CRenderTargetImageSource@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::QueryInterface(
        CRenderTargetImageSource *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CRenderTargetImageSource *)((char *)this + 8), a2, a3);
}
