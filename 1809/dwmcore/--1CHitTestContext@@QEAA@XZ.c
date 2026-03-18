/*
 * XREFs of ??1CHitTestContext@@QEAA@XZ @ 0x1801D9AF4
 * Callers:
 *     ?HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801D9D00 (-HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x1801E8FBC (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CHitTestContext::~CHitTestContext(void **this)
{
  WPF::ProcessHeapImpl::Free(this[21]);
  WPF::ProcessHeapImpl::Free(this[17]);
  WPF::ProcessHeapImpl::Free(this[7]);
}
