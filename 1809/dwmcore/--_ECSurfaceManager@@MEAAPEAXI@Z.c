/*
 * XREFs of ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x1801530A0
 * Callers:
 *     ??_ECSurfaceManager@@OBA@EAAPEAXI@Z @ 0x1800F00B0 (--_ECSurfaceManager@@OBA@EAAPEAXI@Z.c)
 *     ??_ECSurfaceManager@@OGA@EAAPEAXI@Z @ 0x1800F00C0 (--_ECSurfaceManager@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180152DCC (--1CSurfaceManager@@MEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CSurfaceManager::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CSurfaceManager::~CSurfaceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
