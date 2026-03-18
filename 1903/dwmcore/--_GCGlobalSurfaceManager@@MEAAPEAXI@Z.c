/*
 * XREFs of ??_GCGlobalSurfaceManager@@MEAAPEAXI@Z @ 0x18019C330
 * Callers:
 *     ??_ECGlobalSurfaceManager@@OBA@EAAPEAXI@Z @ 0x1800ECF90 (--_ECGlobalSurfaceManager@@OBA@EAAPEAXI@Z.c)
 *     ??_ECGlobalSurfaceManager@@OGI@EAAPEAXI@Z @ 0x1800ECFA0 (--_ECGlobalSurfaceManager@@OGI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18019C10C (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CGlobalSurfaceManager::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CGlobalSurfaceManager::~CGlobalSurfaceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      operator delete(this);
  }
  return this;
}
