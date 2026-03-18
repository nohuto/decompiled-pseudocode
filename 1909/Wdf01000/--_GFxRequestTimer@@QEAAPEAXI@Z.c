/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C0054F3C
 * Callers:
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0007220 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0009920 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C000E0A4 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0054F68 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0055030 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C0054EFC (--1MxTimer@@QEAA@XZ.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this, __int64 a2)
{
  MxTimer::~MxTimer(&this->Timer, a2);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
