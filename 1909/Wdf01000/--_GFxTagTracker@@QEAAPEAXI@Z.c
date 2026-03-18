/*
 * XREFs of ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C005C118
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001640 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0001CB0 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0002780 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0007360 (--1FxObject@@UEAA@XZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009610 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008A09C (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C005DAF0 (--1FxTagTracker@@QEAA@XZ.c)
 */

FxTagTracker *__fastcall FxTagTracker::`scalar deleting destructor'(FxTagTracker *this)
{
  FxTagTracker::~FxTagTracker(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
