/*
 * XREFs of ??1?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAA@XZ @ 0x18004BC50
 * Callers:
 *     _dynamic_atexit_destructor_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x18004EBF0 (_dynamic_atexit_destructor_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800A2C70 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800A2E50 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x1800A2F60 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DynArray<CStoryboard::UnifiedTargetRect *,0>::~DynArray<CStoryboard::UnifiedTargetRect *,0>(
        _QWORD *a1)
{
  return DynArrayImpl<0>::~DynArrayImpl<0>(a1);
}
